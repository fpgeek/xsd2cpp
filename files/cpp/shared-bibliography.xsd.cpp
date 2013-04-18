#include "shared-bibliography_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_SourceType : public ST_String{
    public:
        ST_SourceType(const ns_s::ST_String& _ST_String ){

        }

    private:

    }

    class CT_NameListType : public XSD::ComplexType{
    public:
        bool has_Person(){

            return m_has_Person;
        
        }
        CT_PersonType* mutable_Person(){

                m_has_Person = true;
                if (!m_Person)
                {
                    m_Person = new CT_PersonType();
                }
                return m_Person;
            
        }
        const CT_PersonType& Person(){

            if (m_Person)
            {
                return *m_Person;
            }
            return CT_PersonType::default_instance();
        
        }
        void clear(){

                m_has_Person = false;
                
        if (m_Person)
        {
            delete m_Person;
            m_Person = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_Person)
                {
                    m_Person->toXml(Person, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NameListType& default_instance(){

    if (!CT_NameListType::default_instance_)
    {
        CT_NameListType::default_instance_ = new CT_NameListType();
    }
    return *CT_NameListType::default_instance_;

        }

    private:
        bool m_has_Person ;
        CT_PersonType* m_Person ;
        static CT_NameListType* default_instance_ ;

    }

    class CT_PersonType : public XSD::ComplexType{
    public:
        bool has_Last(){

            return m_has_Last;
        
        }
        ns_s::ST_String* mutable_Last(){

                m_has_Last = true;
                if (!m_Last)
                {
                    m_Last = new ns_s::ST_String();
                }
                return m_Last;
            
        }
        const ns_s::ST_String& Last(){

            if (m_Last)
            {
                return *m_Last;
            }
            return ns_s::ST_String::default_instance();
        
        }
        bool has_First(){

            return m_has_First;
        
        }
        ns_s::ST_String* mutable_First(){

                m_has_First = true;
                if (!m_First)
                {
                    m_First = new ns_s::ST_String();
                }
                return m_First;
            
        }
        const ns_s::ST_String& First(){

            if (m_First)
            {
                return *m_First;
            }
            return ns_s::ST_String::default_instance();
        
        }
        bool has_Middle(){

            return m_has_Middle;
        
        }
        ns_s::ST_String* mutable_Middle(){

                m_has_Middle = true;
                if (!m_Middle)
                {
                    m_Middle = new ns_s::ST_String();
                }
                return m_Middle;
            
        }
        const ns_s::ST_String& Middle(){

            if (m_Middle)
            {
                return *m_Middle;
            }
            return ns_s::ST_String::default_instance();
        
        }
        void clear(){

                m_has_Last = false;
                
        if (m_Last)
        {
            delete m_Last;
            m_Last = NULL;
        }
    
            
                m_has_First = false;
                
        if (m_First)
        {
            delete m_First;
            m_First = NULL;
        }
    
            
                m_has_Middle = false;
                
        if (m_Middle)
        {
            delete m_Middle;
            m_Middle = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_Last)
                {
                    _outStream << \<Last>\ << m_Last->toString() << \</Last>\;;
                }
            
                if (m_has_First)
                {
                    _outStream << \<First>\ << m_Last->toString() << \</First>\;;
                }
            
                if (m_has_Middle)
                {
                    _outStream << \<Middle>\ << m_Last->toString() << \</Middle>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PersonType& default_instance(){

    if (!CT_PersonType::default_instance_)
    {
        CT_PersonType::default_instance_ = new CT_PersonType();
    }
    return *CT_PersonType::default_instance_;

        }

    private:
        bool m_has_Last ;
        ns_s::ST_String* m_Last ;
        bool m_has_First ;
        ns_s::ST_String* m_First ;
        bool m_has_Middle ;
        ns_s::ST_String* m_Middle ;
        static CT_PersonType* default_instance_ ;

    }

    class CT_NameType : public XSD::ComplexType{
    public:
        bool has_NameList(){

            return m_has_NameList;
        
        }
        CT_NameListType* mutable_NameList(){

                m_has_NameList = true;
                if (!m_NameList)
                {
                    m_NameList = new CT_NameListType();
                }
                return m_NameList;
            
        }
        const CT_NameListType& NameList(){

            if (m_NameList)
            {
                return *m_NameList;
            }
            return CT_NameListType::default_instance();
        
        }
        void clear(){

                m_has_NameList = false;
                
        if (m_NameList)
        {
            delete m_NameList;
            m_NameList = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_NameList)
                {
                    m_NameList->toXml(NameList, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NameType& default_instance(){

    if (!CT_NameType::default_instance_)
    {
        CT_NameType::default_instance_ = new CT_NameType();
    }
    return *CT_NameType::default_instance_;

        }

    private:
        bool m_has_NameList ;
        CT_NameListType* m_NameList ;
        static CT_NameType* default_instance_ ;

    }

    class CT_NameOrCorporateType : public XSD::ComplexType{
    public:
        bool has_NameList(){

            return m_has_NameList;
        
        }
        CT_NameListType* mutable_NameList(){

                
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
        const CT_NameListType& NameList(){

            if (m_NameList)
            {
                return *m_NameList;
            }
            return CT_NameListType::default_instance();
        
        }
        bool has_Corporate(){

            return m_has_Corporate;
        
        }
        ns_s::ST_String* mutable_Corporate(){

                
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
        const ns_s::ST_String& Corporate(){

            if (m_Corporate)
            {
                return *m_Corporate;
            }
            return ns_s::ST_String::default_instance();
        
        }
        void clear(){

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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_NameList)
                {
                    m_NameList->toXml(NameList, _outStream);;
                }
            
                if (m_has_Corporate)
                {
                    _outStream << \<Corporate>\ << m_NameList->toString() << \</Corporate>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NameOrCorporateType& default_instance(){

    if (!CT_NameOrCorporateType::default_instance_)
    {
        CT_NameOrCorporateType::default_instance_ = new CT_NameOrCorporateType();
    }
    return *CT_NameOrCorporateType::default_instance_;

        }

    private:
        bool m_has_NameList ;
        CT_NameListType* m_NameList ;
        bool m_has_Corporate ;
        ns_s::ST_String* m_Corporate ;
        static CT_NameOrCorporateType* default_instance_ ;

    }

    class CT_AuthorType : public XSD::ComplexType{
    public:
        CT_NameType* add_Artist(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Artist();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameOrCorporateType* add_Author(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameOrCorporateType* pNewChild = pChildGroup->mutable_Author();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_BookAuthor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_BookAuthor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Compiler(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Compiler();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Composer(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Composer();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Conductor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Conductor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Counsel(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Counsel();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Director(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Director();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Editor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Editor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Interviewee(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Interviewee();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Interviewer(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Interviewer();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Inventor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Inventor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameOrCorporateType* add_Performer(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameOrCorporateType* pNewChild = pChildGroup->mutable_Performer();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_ProducerName(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_ProducerName();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Translator(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Translator();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_NameType* add_Writer(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_NameType* pNewChild = pChildGroup->mutable_Writer();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Artist())
            {
                (*iter)->toXml(Artist, _outStream);
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->toXml(Author, _outStream);
            }
            else if ((*iter)->has_BookAuthor())
            {
                (*iter)->toXml(BookAuthor, _outStream);
            }
            else if ((*iter)->has_Compiler())
            {
                (*iter)->toXml(Compiler, _outStream);
            }
            else if ((*iter)->has_Composer())
            {
                (*iter)->toXml(Composer, _outStream);
            }
            else if ((*iter)->has_Conductor())
            {
                (*iter)->toXml(Conductor, _outStream);
            }
            else if ((*iter)->has_Counsel())
            {
                (*iter)->toXml(Counsel, _outStream);
            }
            else if ((*iter)->has_Director())
            {
                (*iter)->toXml(Director, _outStream);
            }
            else if ((*iter)->has_Editor())
            {
                (*iter)->toXml(Editor, _outStream);
            }
            else if ((*iter)->has_Interviewee())
            {
                (*iter)->toXml(Interviewee, _outStream);
            }
            else if ((*iter)->has_Interviewer())
            {
                (*iter)->toXml(Interviewer, _outStream);
            }
            else if ((*iter)->has_Inventor())
            {
                (*iter)->toXml(Inventor, _outStream);
            }
            else if ((*iter)->has_Performer())
            {
                (*iter)->toXml(Performer, _outStream);
            }
            else if ((*iter)->has_ProducerName())
            {
                (*iter)->toXml(ProducerName, _outStream);
            }
            else if ((*iter)->has_Translator())
            {
                (*iter)->toXml(Translator, _outStream);
            }
            else if ((*iter)->has_Writer())
            {
                (*iter)->toXml(Writer, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AuthorType& default_instance(){

    if (!CT_AuthorType::default_instance_)
    {
        CT_AuthorType::default_instance_ = new CT_AuthorType();
    }
    return *CT_AuthorType::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_AuthorType* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_Artist(){

            return m_has_Artist;
        
            }
            CT_NameType* mutable_Artist(){

                
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
            const CT_NameType& Artist(){

            if (m_Artist)
            {
                return *m_Artist;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Author(){

            return m_has_Author;
        
            }
            CT_NameOrCorporateType* mutable_Author(){

                
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
            const CT_NameOrCorporateType& Author(){

            if (m_Author)
            {
                return *m_Author;
            }
            return CT_NameOrCorporateType::default_instance();
        
            }
            bool has_BookAuthor(){

            return m_has_BookAuthor;
        
            }
            CT_NameType* mutable_BookAuthor(){

                
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
            const CT_NameType& BookAuthor(){

            if (m_BookAuthor)
            {
                return *m_BookAuthor;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Compiler(){

            return m_has_Compiler;
        
            }
            CT_NameType* mutable_Compiler(){

                
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
            const CT_NameType& Compiler(){

            if (m_Compiler)
            {
                return *m_Compiler;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Composer(){

            return m_has_Composer;
        
            }
            CT_NameType* mutable_Composer(){

                
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
            const CT_NameType& Composer(){

            if (m_Composer)
            {
                return *m_Composer;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Conductor(){

            return m_has_Conductor;
        
            }
            CT_NameType* mutable_Conductor(){

                
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
            const CT_NameType& Conductor(){

            if (m_Conductor)
            {
                return *m_Conductor;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Counsel(){

            return m_has_Counsel;
        
            }
            CT_NameType* mutable_Counsel(){

                
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
            const CT_NameType& Counsel(){

            if (m_Counsel)
            {
                return *m_Counsel;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Director(){

            return m_has_Director;
        
            }
            CT_NameType* mutable_Director(){

                
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
            const CT_NameType& Director(){

            if (m_Director)
            {
                return *m_Director;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Editor(){

            return m_has_Editor;
        
            }
            CT_NameType* mutable_Editor(){

                
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
            const CT_NameType& Editor(){

            if (m_Editor)
            {
                return *m_Editor;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Interviewee(){

            return m_has_Interviewee;
        
            }
            CT_NameType* mutable_Interviewee(){

                
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
            const CT_NameType& Interviewee(){

            if (m_Interviewee)
            {
                return *m_Interviewee;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Interviewer(){

            return m_has_Interviewer;
        
            }
            CT_NameType* mutable_Interviewer(){

                
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
            const CT_NameType& Interviewer(){

            if (m_Interviewer)
            {
                return *m_Interviewer;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Inventor(){

            return m_has_Inventor;
        
            }
            CT_NameType* mutable_Inventor(){

                
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
            const CT_NameType& Inventor(){

            if (m_Inventor)
            {
                return *m_Inventor;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Performer(){

            return m_has_Performer;
        
            }
            CT_NameOrCorporateType* mutable_Performer(){

                
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
            const CT_NameOrCorporateType& Performer(){

            if (m_Performer)
            {
                return *m_Performer;
            }
            return CT_NameOrCorporateType::default_instance();
        
            }
            bool has_ProducerName(){

            return m_has_ProducerName;
        
            }
            CT_NameType* mutable_ProducerName(){

                
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
            const CT_NameType& ProducerName(){

            if (m_ProducerName)
            {
                return *m_ProducerName;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Translator(){

            return m_has_Translator;
        
            }
            CT_NameType* mutable_Translator(){

                
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
            const CT_NameType& Translator(){

            if (m_Translator)
            {
                return *m_Translator;
            }
            return CT_NameType::default_instance();
        
            }
            bool has_Writer(){

            return m_has_Writer;
        
            }
            CT_NameType* mutable_Writer(){

                
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
            const CT_NameType& Writer(){

            if (m_Writer)
            {
                return *m_Writer;
            }
            return CT_NameType::default_instance();
        
            }

        private:
            bool m_has_Artist ;
            CT_NameType* m_Artist ;
            bool m_has_Author ;
            CT_NameOrCorporateType* m_Author ;
            bool m_has_BookAuthor ;
            CT_NameType* m_BookAuthor ;
            bool m_has_Compiler ;
            CT_NameType* m_Compiler ;
            bool m_has_Composer ;
            CT_NameType* m_Composer ;
            bool m_has_Conductor ;
            CT_NameType* m_Conductor ;
            bool m_has_Counsel ;
            CT_NameType* m_Counsel ;
            bool m_has_Director ;
            CT_NameType* m_Director ;
            bool m_has_Editor ;
            CT_NameType* m_Editor ;
            bool m_has_Interviewee ;
            CT_NameType* m_Interviewee ;
            bool m_has_Interviewer ;
            CT_NameType* m_Interviewer ;
            bool m_has_Inventor ;
            CT_NameType* m_Inventor ;
            bool m_has_Performer ;
            CT_NameOrCorporateType* m_Performer ;
            bool m_has_ProducerName ;
            CT_NameType* m_ProducerName ;
            bool m_has_Translator ;
            CT_NameType* m_Translator ;
            bool m_has_Writer ;
            CT_NameType* m_Writer ;

        }


    }

    class CT_SourceType : public XSD::ComplexType{
    public:
        ns_s::ST_String* add_AbbreviatedCaseNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_AbbreviatedCaseNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_AlbumTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_AlbumTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_AuthorType* add_Author(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_AuthorType* pNewChild = pChildGroup->mutable_Author();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_BookTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_BookTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Broadcaster(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Broadcaster();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_BroadcastTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_BroadcastTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_CaseNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_CaseNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_ChapterNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_ChapterNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_City(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_City();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Comments(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Comments();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_ConferenceName(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_ConferenceName();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_CountryRegion(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_CountryRegion();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Court(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Court();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Day(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Day();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_DayAccessed(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_DayAccessed();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Department(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Department();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Distributor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Distributor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Edition(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Edition();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Guid(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Guid();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Institution(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Institution();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_InternetSiteTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_InternetSiteTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Issue(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Issue();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_JournalName(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_JournalName();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_Lang* add_LCID(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_Lang* pNewChild = pChildGroup->mutable_LCID();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Medium(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Medium();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Month(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Month();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_MonthAccessed(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_MonthAccessed();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_NumberVolumes(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_NumberVolumes();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Pages(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Pages();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_PatentNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_PatentNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_PeriodicalTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_PeriodicalTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_ProductionCompany(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_ProductionCompany();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_PublicationTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_PublicationTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Publisher(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Publisher();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_RecordingNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_RecordingNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_RefOrder(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_RefOrder();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Reporter(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Reporter();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_SourceType* add_SourceType(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_SourceType* pNewChild = pChildGroup->mutable_SourceType();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_ShortTitle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_ShortTitle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_StandardNumber(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_StandardNumber();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_StateProvince(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_StateProvince();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Station(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Station();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Tag(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Tag();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Theater(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Theater();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_ThesisType(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_ThesisType();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Title(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Title();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Type(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Type();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_URL(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_URL();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Version(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Version();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Volume(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Volume();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_Year(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_Year();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_String* add_YearAccessed(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_String* pNewChild = pChildGroup->mutable_YearAccessed();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_AbbreviatedCaseNumber())
            {
                _outStream << \<AbbreviatedCaseNumber>\ << (*iter)->toString() << \</AbbreviatedCaseNumber>\;
            }
            else if ((*iter)->has_AlbumTitle())
            {
                _outStream << \<AlbumTitle>\ << (*iter)->toString() << \</AlbumTitle>\;
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->toXml(Author, _outStream);
            }
            else if ((*iter)->has_BookTitle())
            {
                _outStream << \<BookTitle>\ << (*iter)->toString() << \</BookTitle>\;
            }
            else if ((*iter)->has_Broadcaster())
            {
                _outStream << \<Broadcaster>\ << (*iter)->toString() << \</Broadcaster>\;
            }
            else if ((*iter)->has_BroadcastTitle())
            {
                _outStream << \<BroadcastTitle>\ << (*iter)->toString() << \</BroadcastTitle>\;
            }
            else if ((*iter)->has_CaseNumber())
            {
                _outStream << \<CaseNumber>\ << (*iter)->toString() << \</CaseNumber>\;
            }
            else if ((*iter)->has_ChapterNumber())
            {
                _outStream << \<ChapterNumber>\ << (*iter)->toString() << \</ChapterNumber>\;
            }
            else if ((*iter)->has_City())
            {
                _outStream << \<City>\ << (*iter)->toString() << \</City>\;
            }
            else if ((*iter)->has_Comments())
            {
                _outStream << \<Comments>\ << (*iter)->toString() << \</Comments>\;
            }
            else if ((*iter)->has_ConferenceName())
            {
                _outStream << \<ConferenceName>\ << (*iter)->toString() << \</ConferenceName>\;
            }
            else if ((*iter)->has_CountryRegion())
            {
                _outStream << \<CountryRegion>\ << (*iter)->toString() << \</CountryRegion>\;
            }
            else if ((*iter)->has_Court())
            {
                _outStream << \<Court>\ << (*iter)->toString() << \</Court>\;
            }
            else if ((*iter)->has_Day())
            {
                _outStream << \<Day>\ << (*iter)->toString() << \</Day>\;
            }
            else if ((*iter)->has_DayAccessed())
            {
                _outStream << \<DayAccessed>\ << (*iter)->toString() << \</DayAccessed>\;
            }
            else if ((*iter)->has_Department())
            {
                _outStream << \<Department>\ << (*iter)->toString() << \</Department>\;
            }
            else if ((*iter)->has_Distributor())
            {
                _outStream << \<Distributor>\ << (*iter)->toString() << \</Distributor>\;
            }
            else if ((*iter)->has_Edition())
            {
                _outStream << \<Edition>\ << (*iter)->toString() << \</Edition>\;
            }
            else if ((*iter)->has_Guid())
            {
                _outStream << \<Guid>\ << (*iter)->toString() << \</Guid>\;
            }
            else if ((*iter)->has_Institution())
            {
                _outStream << \<Institution>\ << (*iter)->toString() << \</Institution>\;
            }
            else if ((*iter)->has_InternetSiteTitle())
            {
                _outStream << \<InternetSiteTitle>\ << (*iter)->toString() << \</InternetSiteTitle>\;
            }
            else if ((*iter)->has_Issue())
            {
                _outStream << \<Issue>\ << (*iter)->toString() << \</Issue>\;
            }
            else if ((*iter)->has_JournalName())
            {
                _outStream << \<JournalName>\ << (*iter)->toString() << \</JournalName>\;
            }
            else if ((*iter)->has_LCID())
            {
                _outStream << \<LCID>\ << (*iter)->toString() << \</LCID>\;
            }
            else if ((*iter)->has_Medium())
            {
                _outStream << \<Medium>\ << (*iter)->toString() << \</Medium>\;
            }
            else if ((*iter)->has_Month())
            {
                _outStream << \<Month>\ << (*iter)->toString() << \</Month>\;
            }
            else if ((*iter)->has_MonthAccessed())
            {
                _outStream << \<MonthAccessed>\ << (*iter)->toString() << \</MonthAccessed>\;
            }
            else if ((*iter)->has_NumberVolumes())
            {
                _outStream << \<NumberVolumes>\ << (*iter)->toString() << \</NumberVolumes>\;
            }
            else if ((*iter)->has_Pages())
            {
                _outStream << \<Pages>\ << (*iter)->toString() << \</Pages>\;
            }
            else if ((*iter)->has_PatentNumber())
            {
                _outStream << \<PatentNumber>\ << (*iter)->toString() << \</PatentNumber>\;
            }
            else if ((*iter)->has_PeriodicalTitle())
            {
                _outStream << \<PeriodicalTitle>\ << (*iter)->toString() << \</PeriodicalTitle>\;
            }
            else if ((*iter)->has_ProductionCompany())
            {
                _outStream << \<ProductionCompany>\ << (*iter)->toString() << \</ProductionCompany>\;
            }
            else if ((*iter)->has_PublicationTitle())
            {
                _outStream << \<PublicationTitle>\ << (*iter)->toString() << \</PublicationTitle>\;
            }
            else if ((*iter)->has_Publisher())
            {
                _outStream << \<Publisher>\ << (*iter)->toString() << \</Publisher>\;
            }
            else if ((*iter)->has_RecordingNumber())
            {
                _outStream << \<RecordingNumber>\ << (*iter)->toString() << \</RecordingNumber>\;
            }
            else if ((*iter)->has_RefOrder())
            {
                _outStream << \<RefOrder>\ << (*iter)->toString() << \</RefOrder>\;
            }
            else if ((*iter)->has_Reporter())
            {
                _outStream << \<Reporter>\ << (*iter)->toString() << \</Reporter>\;
            }
            else if ((*iter)->has_SourceType())
            {
                _outStream << \<SourceType>\ << (*iter)->toString() << \</SourceType>\;
            }
            else if ((*iter)->has_ShortTitle())
            {
                _outStream << \<ShortTitle>\ << (*iter)->toString() << \</ShortTitle>\;
            }
            else if ((*iter)->has_StandardNumber())
            {
                _outStream << \<StandardNumber>\ << (*iter)->toString() << \</StandardNumber>\;
            }
            else if ((*iter)->has_StateProvince())
            {
                _outStream << \<StateProvince>\ << (*iter)->toString() << \</StateProvince>\;
            }
            else if ((*iter)->has_Station())
            {
                _outStream << \<Station>\ << (*iter)->toString() << \</Station>\;
            }
            else if ((*iter)->has_Tag())
            {
                _outStream << \<Tag>\ << (*iter)->toString() << \</Tag>\;
            }
            else if ((*iter)->has_Theater())
            {
                _outStream << \<Theater>\ << (*iter)->toString() << \</Theater>\;
            }
            else if ((*iter)->has_ThesisType())
            {
                _outStream << \<ThesisType>\ << (*iter)->toString() << \</ThesisType>\;
            }
            else if ((*iter)->has_Title())
            {
                _outStream << \<Title>\ << (*iter)->toString() << \</Title>\;
            }
            else if ((*iter)->has_Type())
            {
                _outStream << \<Type>\ << (*iter)->toString() << \</Type>\;
            }
            else if ((*iter)->has_URL())
            {
                _outStream << \<URL>\ << (*iter)->toString() << \</URL>\;
            }
            else if ((*iter)->has_Version())
            {
                _outStream << \<Version>\ << (*iter)->toString() << \</Version>\;
            }
            else if ((*iter)->has_Volume())
            {
                _outStream << \<Volume>\ << (*iter)->toString() << \</Volume>\;
            }
            else if ((*iter)->has_Year())
            {
                _outStream << \<Year>\ << (*iter)->toString() << \</Year>\;
            }
            else if ((*iter)->has_YearAccessed())
            {
                _outStream << \<YearAccessed>\ << (*iter)->toString() << \</YearAccessed>\;
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SourceType& default_instance(){

    if (!CT_SourceType::default_instance_)
    {
        CT_SourceType::default_instance_ = new CT_SourceType();
    }
    return *CT_SourceType::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SourceType* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_AbbreviatedCaseNumber(){

            return m_has_AbbreviatedCaseNumber;
        
            }
            ns_s::ST_String* mutable_AbbreviatedCaseNumber(){

                
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
            const ns_s::ST_String& AbbreviatedCaseNumber(){

            if (m_AbbreviatedCaseNumber)
            {
                return *m_AbbreviatedCaseNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_AlbumTitle(){

            return m_has_AlbumTitle;
        
            }
            ns_s::ST_String* mutable_AlbumTitle(){

                
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
            const ns_s::ST_String& AlbumTitle(){

            if (m_AlbumTitle)
            {
                return *m_AlbumTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Author(){

            return m_has_Author;
        
            }
            CT_AuthorType* mutable_Author(){

                
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
            const CT_AuthorType& Author(){

            if (m_Author)
            {
                return *m_Author;
            }
            return CT_AuthorType::default_instance();
        
            }
            bool has_BookTitle(){

            return m_has_BookTitle;
        
            }
            ns_s::ST_String* mutable_BookTitle(){

                
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
            const ns_s::ST_String& BookTitle(){

            if (m_BookTitle)
            {
                return *m_BookTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Broadcaster(){

            return m_has_Broadcaster;
        
            }
            ns_s::ST_String* mutable_Broadcaster(){

                
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
            const ns_s::ST_String& Broadcaster(){

            if (m_Broadcaster)
            {
                return *m_Broadcaster;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_BroadcastTitle(){

            return m_has_BroadcastTitle;
        
            }
            ns_s::ST_String* mutable_BroadcastTitle(){

                
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
            const ns_s::ST_String& BroadcastTitle(){

            if (m_BroadcastTitle)
            {
                return *m_BroadcastTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_CaseNumber(){

            return m_has_CaseNumber;
        
            }
            ns_s::ST_String* mutable_CaseNumber(){

                
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
            const ns_s::ST_String& CaseNumber(){

            if (m_CaseNumber)
            {
                return *m_CaseNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_ChapterNumber(){

            return m_has_ChapterNumber;
        
            }
            ns_s::ST_String* mutable_ChapterNumber(){

                
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
            const ns_s::ST_String& ChapterNumber(){

            if (m_ChapterNumber)
            {
                return *m_ChapterNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_City(){

            return m_has_City;
        
            }
            ns_s::ST_String* mutable_City(){

                
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
            const ns_s::ST_String& City(){

            if (m_City)
            {
                return *m_City;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Comments(){

            return m_has_Comments;
        
            }
            ns_s::ST_String* mutable_Comments(){

                
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
            const ns_s::ST_String& Comments(){

            if (m_Comments)
            {
                return *m_Comments;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_ConferenceName(){

            return m_has_ConferenceName;
        
            }
            ns_s::ST_String* mutable_ConferenceName(){

                
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
            const ns_s::ST_String& ConferenceName(){

            if (m_ConferenceName)
            {
                return *m_ConferenceName;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_CountryRegion(){

            return m_has_CountryRegion;
        
            }
            ns_s::ST_String* mutable_CountryRegion(){

                
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
            const ns_s::ST_String& CountryRegion(){

            if (m_CountryRegion)
            {
                return *m_CountryRegion;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Court(){

            return m_has_Court;
        
            }
            ns_s::ST_String* mutable_Court(){

                
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
            const ns_s::ST_String& Court(){

            if (m_Court)
            {
                return *m_Court;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Day(){

            return m_has_Day;
        
            }
            ns_s::ST_String* mutable_Day(){

                
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
            const ns_s::ST_String& Day(){

            if (m_Day)
            {
                return *m_Day;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_DayAccessed(){

            return m_has_DayAccessed;
        
            }
            ns_s::ST_String* mutable_DayAccessed(){

                
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
            const ns_s::ST_String& DayAccessed(){

            if (m_DayAccessed)
            {
                return *m_DayAccessed;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Department(){

            return m_has_Department;
        
            }
            ns_s::ST_String* mutable_Department(){

                
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
            const ns_s::ST_String& Department(){

            if (m_Department)
            {
                return *m_Department;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Distributor(){

            return m_has_Distributor;
        
            }
            ns_s::ST_String* mutable_Distributor(){

                
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
            const ns_s::ST_String& Distributor(){

            if (m_Distributor)
            {
                return *m_Distributor;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Edition(){

            return m_has_Edition;
        
            }
            ns_s::ST_String* mutable_Edition(){

                
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
            const ns_s::ST_String& Edition(){

            if (m_Edition)
            {
                return *m_Edition;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Guid(){

            return m_has_Guid;
        
            }
            ns_s::ST_String* mutable_Guid(){

                
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
            const ns_s::ST_String& Guid(){

            if (m_Guid)
            {
                return *m_Guid;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Institution(){

            return m_has_Institution;
        
            }
            ns_s::ST_String* mutable_Institution(){

                
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
            const ns_s::ST_String& Institution(){

            if (m_Institution)
            {
                return *m_Institution;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_InternetSiteTitle(){

            return m_has_InternetSiteTitle;
        
            }
            ns_s::ST_String* mutable_InternetSiteTitle(){

                
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
            const ns_s::ST_String& InternetSiteTitle(){

            if (m_InternetSiteTitle)
            {
                return *m_InternetSiteTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Issue(){

            return m_has_Issue;
        
            }
            ns_s::ST_String* mutable_Issue(){

                
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
            const ns_s::ST_String& Issue(){

            if (m_Issue)
            {
                return *m_Issue;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_JournalName(){

            return m_has_JournalName;
        
            }
            ns_s::ST_String* mutable_JournalName(){

                
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
            const ns_s::ST_String& JournalName(){

            if (m_JournalName)
            {
                return *m_JournalName;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_LCID(){

            return m_has_LCID;
        
            }
            ns_s::ST_Lang* mutable_LCID(){

                
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
            const ns_s::ST_Lang& LCID(){

            if (m_LCID)
            {
                return *m_LCID;
            }
            return ns_s::ST_Lang::default_instance();
        
            }
            bool has_Medium(){

            return m_has_Medium;
        
            }
            ns_s::ST_String* mutable_Medium(){

                
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
            const ns_s::ST_String& Medium(){

            if (m_Medium)
            {
                return *m_Medium;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Month(){

            return m_has_Month;
        
            }
            ns_s::ST_String* mutable_Month(){

                
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
            const ns_s::ST_String& Month(){

            if (m_Month)
            {
                return *m_Month;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_MonthAccessed(){

            return m_has_MonthAccessed;
        
            }
            ns_s::ST_String* mutable_MonthAccessed(){

                
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
            const ns_s::ST_String& MonthAccessed(){

            if (m_MonthAccessed)
            {
                return *m_MonthAccessed;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_NumberVolumes(){

            return m_has_NumberVolumes;
        
            }
            ns_s::ST_String* mutable_NumberVolumes(){

                
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
            const ns_s::ST_String& NumberVolumes(){

            if (m_NumberVolumes)
            {
                return *m_NumberVolumes;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Pages(){

            return m_has_Pages;
        
            }
            ns_s::ST_String* mutable_Pages(){

                
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
            const ns_s::ST_String& Pages(){

            if (m_Pages)
            {
                return *m_Pages;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_PatentNumber(){

            return m_has_PatentNumber;
        
            }
            ns_s::ST_String* mutable_PatentNumber(){

                
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
            const ns_s::ST_String& PatentNumber(){

            if (m_PatentNumber)
            {
                return *m_PatentNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_PeriodicalTitle(){

            return m_has_PeriodicalTitle;
        
            }
            ns_s::ST_String* mutable_PeriodicalTitle(){

                
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
            const ns_s::ST_String& PeriodicalTitle(){

            if (m_PeriodicalTitle)
            {
                return *m_PeriodicalTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_ProductionCompany(){

            return m_has_ProductionCompany;
        
            }
            ns_s::ST_String* mutable_ProductionCompany(){

                
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
            const ns_s::ST_String& ProductionCompany(){

            if (m_ProductionCompany)
            {
                return *m_ProductionCompany;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_PublicationTitle(){

            return m_has_PublicationTitle;
        
            }
            ns_s::ST_String* mutable_PublicationTitle(){

                
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
            const ns_s::ST_String& PublicationTitle(){

            if (m_PublicationTitle)
            {
                return *m_PublicationTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Publisher(){

            return m_has_Publisher;
        
            }
            ns_s::ST_String* mutable_Publisher(){

                
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
            const ns_s::ST_String& Publisher(){

            if (m_Publisher)
            {
                return *m_Publisher;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_RecordingNumber(){

            return m_has_RecordingNumber;
        
            }
            ns_s::ST_String* mutable_RecordingNumber(){

                
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
            const ns_s::ST_String& RecordingNumber(){

            if (m_RecordingNumber)
            {
                return *m_RecordingNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_RefOrder(){

            return m_has_RefOrder;
        
            }
            ns_s::ST_String* mutable_RefOrder(){

                
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
            const ns_s::ST_String& RefOrder(){

            if (m_RefOrder)
            {
                return *m_RefOrder;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Reporter(){

            return m_has_Reporter;
        
            }
            ns_s::ST_String* mutable_Reporter(){

                
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
            const ns_s::ST_String& Reporter(){

            if (m_Reporter)
            {
                return *m_Reporter;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_SourceType(){

            return m_has_SourceType;
        
            }
            ST_SourceType* mutable_SourceType(){

                
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
            const ST_SourceType& SourceType(){

            if (m_SourceType)
            {
                return *m_SourceType;
            }
            return ST_SourceType::default_instance();
        
            }
            bool has_ShortTitle(){

            return m_has_ShortTitle;
        
            }
            ns_s::ST_String* mutable_ShortTitle(){

                
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
            const ns_s::ST_String& ShortTitle(){

            if (m_ShortTitle)
            {
                return *m_ShortTitle;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_StandardNumber(){

            return m_has_StandardNumber;
        
            }
            ns_s::ST_String* mutable_StandardNumber(){

                
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
            const ns_s::ST_String& StandardNumber(){

            if (m_StandardNumber)
            {
                return *m_StandardNumber;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_StateProvince(){

            return m_has_StateProvince;
        
            }
            ns_s::ST_String* mutable_StateProvince(){

                
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
            const ns_s::ST_String& StateProvince(){

            if (m_StateProvince)
            {
                return *m_StateProvince;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Station(){

            return m_has_Station;
        
            }
            ns_s::ST_String* mutable_Station(){

                
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
            const ns_s::ST_String& Station(){

            if (m_Station)
            {
                return *m_Station;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Tag(){

            return m_has_Tag;
        
            }
            ns_s::ST_String* mutable_Tag(){

                
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
            const ns_s::ST_String& Tag(){

            if (m_Tag)
            {
                return *m_Tag;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Theater(){

            return m_has_Theater;
        
            }
            ns_s::ST_String* mutable_Theater(){

                
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
            const ns_s::ST_String& Theater(){

            if (m_Theater)
            {
                return *m_Theater;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_ThesisType(){

            return m_has_ThesisType;
        
            }
            ns_s::ST_String* mutable_ThesisType(){

                
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
            const ns_s::ST_String& ThesisType(){

            if (m_ThesisType)
            {
                return *m_ThesisType;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Title(){

            return m_has_Title;
        
            }
            ns_s::ST_String* mutable_Title(){

                
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
            const ns_s::ST_String& Title(){

            if (m_Title)
            {
                return *m_Title;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Type(){

            return m_has_Type;
        
            }
            ns_s::ST_String* mutable_Type(){

                
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
            const ns_s::ST_String& Type(){

            if (m_Type)
            {
                return *m_Type;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_URL(){

            return m_has_URL;
        
            }
            ns_s::ST_String* mutable_URL(){

                
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
            const ns_s::ST_String& URL(){

            if (m_URL)
            {
                return *m_URL;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Version(){

            return m_has_Version;
        
            }
            ns_s::ST_String* mutable_Version(){

                
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
            const ns_s::ST_String& Version(){

            if (m_Version)
            {
                return *m_Version;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Volume(){

            return m_has_Volume;
        
            }
            ns_s::ST_String* mutable_Volume(){

                
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
            const ns_s::ST_String& Volume(){

            if (m_Volume)
            {
                return *m_Volume;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_Year(){

            return m_has_Year;
        
            }
            ns_s::ST_String* mutable_Year(){

                
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
            const ns_s::ST_String& Year(){

            if (m_Year)
            {
                return *m_Year;
            }
            return ns_s::ST_String::default_instance();
        
            }
            bool has_YearAccessed(){

            return m_has_YearAccessed;
        
            }
            ns_s::ST_String* mutable_YearAccessed(){

                
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
            const ns_s::ST_String& YearAccessed(){

            if (m_YearAccessed)
            {
                return *m_YearAccessed;
            }
            return ns_s::ST_String::default_instance();
        
            }

        private:
            bool m_has_AbbreviatedCaseNumber ;
            ns_s::ST_String* m_AbbreviatedCaseNumber ;
            bool m_has_AlbumTitle ;
            ns_s::ST_String* m_AlbumTitle ;
            bool m_has_Author ;
            CT_AuthorType* m_Author ;
            bool m_has_BookTitle ;
            ns_s::ST_String* m_BookTitle ;
            bool m_has_Broadcaster ;
            ns_s::ST_String* m_Broadcaster ;
            bool m_has_BroadcastTitle ;
            ns_s::ST_String* m_BroadcastTitle ;
            bool m_has_CaseNumber ;
            ns_s::ST_String* m_CaseNumber ;
            bool m_has_ChapterNumber ;
            ns_s::ST_String* m_ChapterNumber ;
            bool m_has_City ;
            ns_s::ST_String* m_City ;
            bool m_has_Comments ;
            ns_s::ST_String* m_Comments ;
            bool m_has_ConferenceName ;
            ns_s::ST_String* m_ConferenceName ;
            bool m_has_CountryRegion ;
            ns_s::ST_String* m_CountryRegion ;
            bool m_has_Court ;
            ns_s::ST_String* m_Court ;
            bool m_has_Day ;
            ns_s::ST_String* m_Day ;
            bool m_has_DayAccessed ;
            ns_s::ST_String* m_DayAccessed ;
            bool m_has_Department ;
            ns_s::ST_String* m_Department ;
            bool m_has_Distributor ;
            ns_s::ST_String* m_Distributor ;
            bool m_has_Edition ;
            ns_s::ST_String* m_Edition ;
            bool m_has_Guid ;
            ns_s::ST_String* m_Guid ;
            bool m_has_Institution ;
            ns_s::ST_String* m_Institution ;
            bool m_has_InternetSiteTitle ;
            ns_s::ST_String* m_InternetSiteTitle ;
            bool m_has_Issue ;
            ns_s::ST_String* m_Issue ;
            bool m_has_JournalName ;
            ns_s::ST_String* m_JournalName ;
            bool m_has_LCID ;
            ns_s::ST_Lang* m_LCID ;
            bool m_has_Medium ;
            ns_s::ST_String* m_Medium ;
            bool m_has_Month ;
            ns_s::ST_String* m_Month ;
            bool m_has_MonthAccessed ;
            ns_s::ST_String* m_MonthAccessed ;
            bool m_has_NumberVolumes ;
            ns_s::ST_String* m_NumberVolumes ;
            bool m_has_Pages ;
            ns_s::ST_String* m_Pages ;
            bool m_has_PatentNumber ;
            ns_s::ST_String* m_PatentNumber ;
            bool m_has_PeriodicalTitle ;
            ns_s::ST_String* m_PeriodicalTitle ;
            bool m_has_ProductionCompany ;
            ns_s::ST_String* m_ProductionCompany ;
            bool m_has_PublicationTitle ;
            ns_s::ST_String* m_PublicationTitle ;
            bool m_has_Publisher ;
            ns_s::ST_String* m_Publisher ;
            bool m_has_RecordingNumber ;
            ns_s::ST_String* m_RecordingNumber ;
            bool m_has_RefOrder ;
            ns_s::ST_String* m_RefOrder ;
            bool m_has_Reporter ;
            ns_s::ST_String* m_Reporter ;
            bool m_has_SourceType ;
            ST_SourceType* m_SourceType ;
            bool m_has_ShortTitle ;
            ns_s::ST_String* m_ShortTitle ;
            bool m_has_StandardNumber ;
            ns_s::ST_String* m_StandardNumber ;
            bool m_has_StateProvince ;
            ns_s::ST_String* m_StateProvince ;
            bool m_has_Station ;
            ns_s::ST_String* m_Station ;
            bool m_has_Tag ;
            ns_s::ST_String* m_Tag ;
            bool m_has_Theater ;
            ns_s::ST_String* m_Theater ;
            bool m_has_ThesisType ;
            ns_s::ST_String* m_ThesisType ;
            bool m_has_Title ;
            ns_s::ST_String* m_Title ;
            bool m_has_Type ;
            ns_s::ST_String* m_Type ;
            bool m_has_URL ;
            ns_s::ST_String* m_URL ;
            bool m_has_Version ;
            ns_s::ST_String* m_Version ;
            bool m_has_Volume ;
            ns_s::ST_String* m_Volume ;
            bool m_has_Year ;
            ns_s::ST_String* m_Year ;
            bool m_has_YearAccessed ;
            ns_s::ST_String* m_YearAccessed ;

        }


    }

    class CT_Sources : public XSD::ComplexType{
    public:
        bool has_Source(){

            return m_has_Source;
        
        }
        CT_SourceType* mutable_Source(){

                m_has_Source = true;
                if (!m_Source)
                {
                    m_Source = new CT_SourceType();
                }
                return m_Source;
            
        }
        const CT_SourceType& Source(){

            if (m_Source)
            {
                return *m_Source;
            }
            return CT_SourceType::default_instance();
        
        }
        void clear(){

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
    
            
                m_has_Source = false;
                
        if (m_Source)
        {
            delete m_Source;
            m_Source = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_SelectedStyle_attr->toXml(_attrName, _outStream);
m_StyleName_attr->toXml(_attrName, _outStream);
m_URI_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_Source)
                {
                    m_Source->toXml(Source, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Sources& default_instance(){

    if (!CT_Sources::default_instance_)
    {
        CT_Sources::default_instance_ = new CT_Sources();
    }
    return *CT_Sources::default_instance_;

        }
        bool has_SelectedStyle_attr(){

            return m_has_SelectedStyle_attr;
        
        }
        void set_SelectedStyle_attr(const ns_s::ST_String& _SelectedStyle_attr ){

            m_has_SelectedStyle_attr = true;
            m_SelectedStyle_attr = new ns_s::ST_String(_SelectedStyle_attr);
        
        }
        const ns_s::ST_String& SelectedStyle_attr(){

            if (m_SelectedStyle_attr)
            {
                return *m_SelectedStyle_attr;
            }
            return ns_s::ST_String::default_instance();
        
        }
        bool has_StyleName_attr(){

            return m_has_StyleName_attr;
        
        }
        void set_StyleName_attr(const ns_s::ST_String& _StyleName_attr ){

            m_has_StyleName_attr = true;
            m_StyleName_attr = new ns_s::ST_String(_StyleName_attr);
        
        }
        const ns_s::ST_String& StyleName_attr(){

            if (m_StyleName_attr)
            {
                return *m_StyleName_attr;
            }
            return ns_s::ST_String::default_instance();
        
        }
        bool has_URI_attr(){

            return m_has_URI_attr;
        
        }
        void set_URI_attr(const ns_s::ST_String& _URI_attr ){

            m_has_URI_attr = true;
            m_URI_attr = new ns_s::ST_String(_URI_attr);
        
        }
        const ns_s::ST_String& URI_attr(){

            if (m_URI_attr)
            {
                return *m_URI_attr;
            }
            return ns_s::ST_String::default_instance();
        
        }

    private:
        bool m_has_Source ;
        CT_SourceType* m_Source ;
        static CT_Sources* default_instance_ ;
        bool m_has_SelectedStyle_attr ;
        ns_s::ST_String* m_SelectedStyle_attr ;
        bool m_has_StyleName_attr ;
        ns_s::ST_String* m_StyleName_attr ;
        bool m_has_URI_attr ;
        ns_s::ST_String* m_URI_attr ;

    }

    class Sources : public CT_Sources : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Sources::toXml(\Sources\, _outStream);
    
        }

    private:

    }

}