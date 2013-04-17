#include "gen.h"
#include <stdlib.h>
#include <sstream>

namespace ns_w {
    
    
    // ST_LongHexNumber
    ST_LongHexNumber::ST_LongHexNumber()
    :m_has_hexBinary(false),
    m_hexBinary()
    {
        
    }
    
    ST_LongHexNumber::ST_LongHexNumber(const XSD::hexBinary& _hexBinary)
    :m_has_hexBinary(true),
    m_hexBinary(_hexBinary)
    {
    }
    
    ST_LongHexNumber::~ST_LongHexNumber()
    {
        
    }
    
    bool ST_LongHexNumber::has_hexBinary() const
    {
        return m_has_hexBinary;
    }
    
    void ST_LongHexNumber::set_hexBinary(const XSD::hexBinary& _hexBinary)
    {
        m_has_hexBinary = true;
        m_hexBinary = _hexBinary;
    }
    
    const XSD::hexBinary& ST_LongHexNumber::hexBinary() const
    {
        return m_hexBinary;
    }
    
    void ST_LongHexNumber::clear()
    {
        m_has_hexBinary = false;
        m_hexBinary.clear();
    }
    
    void ST_LongHexNumber::toXml(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_hexBinary)
        {
            _outStream << _attrName << "=\"" << m_hexBinary << "\"";
        }
    }
    
    const ST_LongHexNumber& ST_LongHexNumber::default_instance()
    {
        if (!ST_LongHexNumber::default_instance_)
        {
            ST_LongHexNumber::default_instance_ = new ST_LongHexNumber();
        }
        
        return *ST_LongHexNumber::default_instance_;
    }
    
    ST_LongHexNumber* ST_LongHexNumber::default_instance_ = NULL;
    
    
    
    // ST_HighlightColor
//    string ST_HighlightColor_Type_Str[] =
//        {
//            "black",
//            "blue"
//        };
    
    const string ST_HighlightColor::TypeStrList[] =
    {
        "black",
        "blue"
    };
    
    ST_HighlightColor::ST_HighlightColor()
    :m_has_type(false)
    {
        
    }
    
    ST_HighlightColor::ST_HighlightColor(const Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
        
    }
    
    ST_HighlightColor::~ST_HighlightColor()
    {
        
    }
    
    bool ST_HighlightColor::has_type() const
    {
        return m_has_type;
    }
    
    void ST_HighlightColor::set_type(const Type& _type)
    {
        m_has_type = true;
        m_type = _type;
    }
    
    const ST_HighlightColor::Type& ST_HighlightColor::type() const
    {
        return m_type;
    }
    
    void ST_HighlightColor::clear()
    {
        m_has_type = false;
    }
    
    void ST_HighlightColor::toXml(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_type)
        {
            _outStream << _attrName << "=\"" << ST_HighlightColor::TypeStrList[m_type] << "\"";
        }
    }
    
    string ST_HighlightColor::toString() const
    {
        return ST_HighlightColor::TypeStrList[m_type];
    }
    
    
    const ST_HighlightColor& ST_HighlightColor::default_instance()
    {
        if (!ST_HighlightColor::default_instance_)
        {
            ST_HighlightColor::default_instance_ = new ST_HighlightColor();
        }
        
        return *ST_HighlightColor::default_instance_;
    }
    
    ST_HighlightColor* ST_HighlightColor::default_instance_ = NULL;
    
    
    
    // ST_Percentage
    ST_Percentage::ST_Percentage()
    :m_has_string(false)
    {
        
    }
    
    ST_Percentage::ST_Percentage(const std::string& _string)
    :m_has_string(true),
    m_string(_string)
    {
        
    }
    
    ST_Percentage::~ST_Percentage()
    {
        
    }
    
    bool ST_Percentage::has_string() const
    {
        return m_has_string;
    }
    
    void ST_Percentage::set_string(const std::string& _string)
    {
        m_has_string = true;
        m_string = _string;
    }
    
    const std::string& ST_Percentage::string() const
    {
        return m_string;
    }
    
    void ST_Percentage::clear()
    {
        m_has_string = false;
        m_string.clear();
    }
    
    void ST_Percentage::toXml(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_string)
        {
            _outStream << _attrName << "=\"" << m_string << "\"";
        }
    }
    
    
    
    // ST_OnOff
    ST_OnOff::ST_OnOff()
    :m_has_boolean(false),
    m_boolean(false),
    m_has_ST_OnOff1(false),
    m_ST_OnOff1(NULL)
    {
    }
    
    ST_OnOff::~ST_OnOff()
    {
        clear_boolean();
        clear_ST_OnOff1();
    }
    
    bool ST_OnOff::has_boolean() const
    {
        return m_has_boolean;
    }
    
    void ST_OnOff::set_boolean(const XSD::boolean& _boolean)
    {
        clear_ST_OnOff1();
        m_has_boolean = true;
        m_boolean = _boolean;
    }
    
    const XSD::boolean& ST_OnOff::boolean() const
    {
        return m_boolean;
    }
    
    bool ST_OnOff::has_ST_OnOff1() const
    {
        return m_has_ST_OnOff1;
    }
    
    ST_OnOff1* ST_OnOff::mutable_ST_OnOff1()
    {
        clear_boolean();
        
        m_has_ST_OnOff1 = true;
        if (!m_ST_OnOff1)
        {
            m_ST_OnOff1 = new ST_OnOff1();
        }
        return m_ST_OnOff1;
    }
    
    const ST_OnOff1& ST_OnOff::ST_OnOff1_() const
    {
        if (m_ST_OnOff1)
        {
            return *m_ST_OnOff1;
        }
        
        return ST_OnOff1::default_instance();
    }
    
    void ST_OnOff::clear_boolean()
    {
        m_has_boolean = false;
        m_boolean = false;
    }
    
    void ST_OnOff::clear_ST_OnOff1()
    {
        m_has_ST_OnOff1 = false;
        if (m_ST_OnOff1)
        {
            delete m_ST_OnOff1;
            m_ST_OnOff1 = NULL;
        }
    }
    
    void ST_OnOff::clear()
    {
        clear_boolean();
        clear_ST_OnOff1();
    }
    
    void ST_OnOff::toXml(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_boolean)
        {
            _outStream << _attrName << "=\"" << XSD::XMLBooleanStr(m_boolean) << "\"";
        }
        else if (m_has_ST_OnOff1)
        {
            m_ST_OnOff1->toXml(_attrName, _outStream);
        }
    }
    
    const ST_OnOff& ST_OnOff::default_instance()
    {
        if (!ST_OnOff::defalut_instance_)
        {
            ST_OnOff::defalut_instance_ = new ST_OnOff();
        }
        return *ST_OnOff::defalut_instance_;
    }
    
    ST_OnOff* ST_OnOff::defalut_instance_ = NULL;
    
    
    
    // ST_OnOff1
    string ST_OnOff1_Type_Str[] =
    {
        "on",
        "off"
    };
    
    ST_OnOff1::ST_OnOff1()
    :m_has_type(false)
    {
        
    }
    
    ST_OnOff1::ST_OnOff1(const Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
        
    }
    
    ST_OnOff1::~ST_OnOff1()
    {
        
    }
    
    bool ST_OnOff1::has_type() const
    {
        return m_has_type;
    }
    
    void ST_OnOff1::set_type(const Type& _type)
    {
        m_has_type = true;
        m_type = _type;
    }
    
    const ST_OnOff1::Type& ST_OnOff1::type() const
    {
        return m_type;
    }
    
    const string& ST_OnOff1::toString() const
    {
        return ST_OnOff1_Type_Str[m_type];
    }
    
    void ST_OnOff1::clear()
    {
        m_has_type = false;
    }
    
    void ST_OnOff1::toXml(const std::string& _attrName, std::ostream& _outStream) const
    {
        if (m_has_type)
        {
            _outStream << _attrName << "=\"" << toString() << "\"";
        }
    }
    
    const ST_OnOff1& ST_OnOff1::default_instance()
    {
        if (!ST_OnOff1::default_instance_)
        {
            ST_OnOff1::default_instance_ = new ST_OnOff1();
        }
        return *ST_OnOff1::default_instance_;
    }
    
    ST_OnOff1* ST_OnOff1::default_instance_ = NULL;
    
    
    
    
    // CT_ClientData
    CT_ClientData::CT_ClientData()
    :m_has_ListItem(false),
    m_ListItem(),
    m_has_Locked(false),
    m_Locked(NULL)
    {
        
    }
    
    CT_ClientData::~CT_ClientData()
    {
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    }
    
    bool CT_ClientData::has_ListItem() const
    {
        return m_has_ListItem;
    }
    
    void CT_ClientData::set_ListItem(const std::string& _ListItem)
    {
        m_has_ListItem = true;
        m_ListItem = _ListItem;
    }
    
    const std::string& CT_ClientData::ListItem() const
    {
        return m_ListItem;
    }
    
    bool CT_ClientData::has_Locked() const
    {
        return m_has_Locked;
    }
    
    ST_TrueFalseBlank* CT_ClientData::mutable_Locked()
    {
        m_has_Locked = true;
        if (!m_Locked)
        {
            m_Locked = new ST_TrueFalseBlank();
        }
        return m_Locked;
    }
    
    const ST_TrueFalseBlank& CT_ClientData::Locked() const
    {
        if (m_Locked)
        {
            return *m_Locked;
        }
        return ST_TrueFalseBlank::default_instance();
    }
    
    void CT_ClientData::clear()
    {
        m_has_ListItem = false;
        m_ListItem.clear();
        
        m_has_Locked = false;
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    }
    
    void CT_ClientData::toXml(const std::string& _elementName, std::ostream& _outStream) const
    {
        _outStream << "<" << _elementName;
        
        // TODO - attribute 출력
        
        if (m_has_ListItem)
        {
            _outStream << "<ListItem>" << m_ListItem << "</ListItem>";
        }
        
        if (m_has_Locked)
        {
            _outStream << "<Locked>" << m_Locked->toString() << "</Locked>";
        }
    }
    
    const CT_ClientData& CT_ClientData::default_instance()
    {
        if (!CT_ClientData::default_instance_)
        {
            CT_ClientData::default_instance_ = new CT_ClientData();
        }
        
        return *CT_ClientData::default_instance_;
    }
    
    CT_ClientData* CT_ClientData::default_instance_ = NULL;
    
    
    
    ST_TrueFalseBlank::ST_TrueFalseBlank()
    {
        
    }
    ST_TrueFalseBlank::~ST_TrueFalseBlank()
    {
        
    }
    
    void ST_TrueFalseBlank::clear()
    {
        
    }
    
    void ST_TrueFalseBlank::toXml(const std::string& _attrtName, std::ostream& _outStream) const
    {
        
    }
    
    const std::string& ST_TrueFalseBlank::toString() const
{
        return string();
    }
    
    const ST_TrueFalseBlank& ST_TrueFalseBlank::default_instance()
    {
        if (!ST_TrueFalseBlank::default_instance_)
        {
            ST_TrueFalseBlank::default_instance_ = new ST_TrueFalseBlank();
        }
        return *ST_TrueFalseBlank::default_instance_;
    }
    
    ST_TrueFalseBlank* ST_TrueFalseBlank::default_instance_ = NULL;
    
    
    
    
    // CT_FldChar
    CT_FldChar::CT_FldChar()
    {
        
    }
    
    CT_FldChar::~CT_FldChar()
    {
        
    }
    
    bool CT_FldChar::has_fldData() const
    {
        return m_choice_1.has_ffData();
    }
    
    CT_Text* CT_FldChar::mutable_fldData()
    {
        return m_choice_1.mutable_fldData();
    }
    
    const CT_Text& CT_FldChar::fldData() const
    {
        return m_choice_1.fldData();
    }
    
    bool CT_FldChar::has_ffData() const
    {
        return m_choice_1.has_ffData();
    }
    
    CT_FFData* CT_FldChar::mutable_ffData()
    {
        return m_choice_1.mutable_ffData();
    }
    
    const CT_FFData& CT_FldChar::ffData() const
    {
        return m_choice_1.ffData();
    }
    
    bool CT_FldChar::has_numberingChange() const
    {
        return m_choice_1.has_numberingChange();
    }
    
    CT_TrackChangeNumbering* CT_FldChar::mutable_numberingChange()
    {
        return m_choice_1.mutable_numberingChange();
    }
    
    const CT_TrackChangeNumbering& CT_FldChar::numberingChange() const
    {
        return m_choice_1.numberingChange();
    }
    
    void CT_FldChar::clear()
    {
        m_choice_1.clear();
    }
    
    void CT_FldChar::toXml(const std::string& _elemtName, std::ostream& _outStream) const
    {
        _outStream << "<" << _elemtName;
        
        // TODO - attribute 처리
        
        _outStream << ">";
        
        if (m_choice_1.has_fldData())
        {
            m_choice_1.fldData().toXml("fldData", _outStream);
        }
        else if (m_choice_1.has_ffData())
        {
            m_choice_1.ffData().toXml("ffData", _outStream);
        }
        else if (m_choice_1.has_numberingChange())
        {
            m_choice_1.numberingChange().toXml("numberingChange", _outStream);
        }
        
        _outStream << "</" << _elemtName << ">";
    }
    
    const CT_FldChar& CT_FldChar::default_instance()
    {
        if (!CT_FldChar::default_instance_)
        {
            CT_FldChar::default_instance_ = new CT_FldChar();
        }
        return *CT_FldChar::default_instance_;
    }
    
    CT_FldChar* CT_FldChar::default_instance_ = NULL;
    
    
    // CT_FldChar - Choice_1
    CT_FldChar::Choice_1::Choice_1()
    :m_has_fldData(false),
    m_fldData(NULL),
    m_has_ffData(false),
    m_ffData(NULL),
    m_has_numberingChange(false),
    m_numberingChange(NULL)
    {
        
    }
    
    CT_FldChar::Choice_1::~Choice_1()
    {
        if (m_fldData)
        {
            delete m_fldData;
            m_fldData = NULL;
        }
        
        if (m_ffData)
        {
            delete m_ffData;
            m_ffData = NULL;
        }
        
        if (m_numberingChange)
        {
            delete m_numberingChange;
            m_numberingChange = NULL;
        }
        
    }
    
    bool CT_FldChar::Choice_1::has_fldData() const
    {
        return m_has_fldData;
    }
    
    CT_Text* CT_FldChar::Choice_1::mutable_fldData()
    {
        m_has_ffData = false;
        m_has_numberingChange = false;
        
        m_has_fldData = true;
        if (!m_fldData)
        {
            m_fldData = new CT_Text();
        }
        return m_fldData;
    }
    
    const CT_Text& CT_FldChar::Choice_1::fldData() const
    {
        if (m_fldData)
        {
            return *m_fldData;
        }
        return CT_Text::default_instance();
    }
    
    bool CT_FldChar::Choice_1::has_ffData() const
    {
        return m_has_ffData;
    }
    
    CT_FFData* CT_FldChar::Choice_1::mutable_ffData()
    {
        m_has_fldData = false;
        m_has_numberingChange = false;
        
        m_has_ffData = true;
        if (!m_ffData)
        {
            m_ffData = new CT_FFData();
        }
        return m_ffData;
    }
    
    const CT_FFData& CT_FldChar::Choice_1::ffData() const
    {
        if (m_ffData)
        {
            return *m_ffData;
        }
        return CT_FFData::default_instance();
    }
    
    bool CT_FldChar::Choice_1::has_numberingChange() const
    {
        return m_has_numberingChange;
    }
    
    CT_TrackChangeNumbering* CT_FldChar::Choice_1::mutable_numberingChange()
    {
        m_has_ffData = false;
        m_has_fldData = false;
        
        m_has_numberingChange = true;
        if (!m_numberingChange)
        {
            m_numberingChange = new CT_TrackChangeNumbering();
        }
        return m_numberingChange;
    }
    
    const CT_TrackChangeNumbering& CT_FldChar::Choice_1::numberingChange() const
    {
        if (m_numberingChange)
        {
            return *m_numberingChange;
        }
        return CT_TrackChangeNumbering::default_instance();
    }
    
    void CT_FldChar::Choice_1::clear()
    {
        m_has_fldData = false;
        if (m_fldData)
        {
            delete m_fldData;
            m_fldData = NULL;
        }
        
        m_has_ffData = false;
        if (m_ffData)
        {
            delete m_ffData;
            m_ffData = NULL;
        }
        
        m_numberingChange = false;
        if (m_numberingChange)
        {
            delete m_numberingChange;
            m_numberingChange = NULL;
        }
    }
    
    
    
    // CT_Text
    CT_Text::CT_Text()
    {
        
    }
    
    CT_Text::~CT_Text()
    {
        
    }
    
    void CT_Text::clear()
    {
        
    }
    
    const CT_Text& CT_Text::default_instance()
    {
        if (!CT_Text::default_instance_)
        {
            CT_Text::default_instance_ = new CT_Text();
        }
        return *CT_Text::default_instance_;
    }
    
    void CT_Text::toXml(const std::string& _elemtName, std::ostream& _outStream) const
    {
        
    }
    
    CT_Text* CT_Text::default_instance_ = NULL;
    
    
    // CT_FFData
    CT_FFData::CT_FFData()
    {
        
    }
    
    CT_FFData::~CT_FFData()
    {
        
    }
    
    void CT_FFData::clear()
    {
        
    }
    
    const CT_FFData& CT_FFData::default_instance()
    {
        if (!CT_FFData::default_instance_)
        {
            CT_FFData::default_instance_ = new CT_FFData();
        }
        return *CT_FFData::default_instance_;
    }
    
    void CT_FFData::toXml(const std::string& _elemtName, std::ostream& _outStream) const
    {
        
    }
    
    CT_FFData* CT_FFData::default_instance_ = NULL;
    
    
    
    
    // CT_TrackChangeNumbering
    CT_TrackChangeNumbering::CT_TrackChangeNumbering()
    {
        
    }
    
    CT_TrackChangeNumbering::~CT_TrackChangeNumbering()
    {
        
    }
    
    void CT_TrackChangeNumbering::clear()
    {
        
    }
    
    const CT_TrackChangeNumbering& CT_TrackChangeNumbering::default_instance()
    {
        if (!CT_TrackChangeNumbering::default_instance_)
        {
            CT_TrackChangeNumbering::default_instance_ = new CT_TrackChangeNumbering();
        }
        return *CT_TrackChangeNumbering::default_instance_;
    }
    
    void CT_TrackChangeNumbering::toXml(const std::string& _elemtName, std::ostream& _outStream) const
    {
        
    }
    
    CT_TrackChangeNumbering* CT_TrackChangeNumbering::default_instance_ = NULL;
    
    
    
    
    // CT_R
    CT_R::CT_R()
    {
        
    }
    
    CT_R::~CT_R()
    {
        clear();
    }
    
    CT_Br* CT_R::add_br()
    {
        ChildGroup_1 *pChildGroup = new ChildGroup_1();
        CT_Br* pNewChild = pChildGroup->mutable_br();
        m_childGorup_1_list.push_back(pChildGroup);
        return pNewChild;
    }
    
    CT_Ruby* CT_R::add_ruby()
    {
        ChildGroup_1 *pChildGroup = new ChildGroup_1();
        CT_Ruby* pNewChild = pChildGroup->mutable_ruby();
        m_childGorup_1_list.push_back(pChildGroup);
        return pNewChild;
    }
    
    void CT_R::clear()
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGorup_1_list.begin(); iter != m_childGorup_1_list.end(); ++iter)
        {
            delete *iter;
        }
        m_childGorup_1_list.clear();
    }
    
    void CT_R::toXml(const std::string& _elemtName, std::ostream& _outStream) const
    {
        _outStream << "<" << _elemtName;
        
        // TODO - attribute
        
        _outStream << ">";
        
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGorup_1_list.begin(); iter != m_childGorup_1_list.end(); ++iter)
        {
            const CT_R::ChildGroup_1::Type& type = (*iter)->type();
            if (type == CT_R::ChildGroup_1::_br_)
            {
                (*iter)->br().toXml("br", _outStream);
            }
            else if (type == CT_R::ChildGroup_1::_ruby_)
            {
                (*iter)->ruby().toXml("ruby", _outStream);
            }
        }
        
        _outStream << "</" << _elemtName << ">";
    }
    
    const CT_R& CT_R::default_instance()
    {
        if (!CT_R::default_intance_)
        {
            CT_R::default_intance_ = new CT_R();
        }
        return *CT_R::default_intance_;
    }
    
    CT_R* CT_R::default_intance_ = NULL;
    
    
    // CT_R::ChildGroup_1
    
    CT_R::ChildGroup_1::ChildGroup_1()
    :m_has_br(false),
    m_br(NULL),
    m_has_ruby(false),
    m_ruby(NULL)
    {
        
    }
    
    CT_R::ChildGroup_1::~ChildGroup_1()
    {
        if (m_br)
        {
            delete m_br;
            m_br = NULL;
        }
        
        if (m_ruby)
        {
            delete m_ruby;
            m_ruby = NULL;
        }
    }
    
    const CT_R::ChildGroup_1::Type& CT_R::ChildGroup_1::type() const
    {
        return m_type;
    }
    
    bool CT_R::ChildGroup_1::has_br() const
    {
        return m_has_br;
    }
    
    CT_Br* CT_R::ChildGroup_1::mutable_br()
    {
        m_has_ruby = false;
        
        m_type = _br_;
        if (!m_br)
        {
            m_br = new CT_Br();
        }
        return m_br;
    }
    
    const CT_Br& CT_R::ChildGroup_1::br() const
    {
        if (m_br)
        {
            return *m_br;
        }
        return CT_Br::default_instance();
    }
    
    bool CT_R::ChildGroup_1::has_ruby() const
    {
        return m_has_ruby;
    }
    
    CT_Ruby* CT_R::ChildGroup_1::mutable_ruby()
    {
        m_has_br = false;
        
        m_type = _ruby_;
        if (!m_ruby)
        {
            m_ruby = new CT_Ruby();
        }
        return m_ruby;
    }
    
    const CT_Ruby& CT_R::ChildGroup_1::ruby() const
    {
        if (m_ruby)
        {
            return *m_ruby;
        }
        return CT_Ruby::default_instance();
    }
}











//    CT_Body::CT_Body()
//    :m_sectPr(NULL),
//    m_has_sectPr(false)
//    {
//
//    }
//
//    CT_Body::~CT_Body()
//    {
//        if (m_sectPr)
//        {
//            delete m_sectPr;
//            m_sectPr = NULL;
//        }
//    }
//
//    bool CT_Body::has_sectPr() const
//    {
//        return m_has_sectPr;
//    }
//
//    const CT_SectPr& CT_Body::sectPr() const
//    {
//        if (m_sectPr)
//        {
//            return *m_sectPr;
//        }
//        else
//        {
//            return CT_Body::default_instance()->sectPr();
//        }
//    }
//
//    CT_SectPr* CT_Body::mutable_sectPr()
//    {
//        m_has_sectPr = true;
//        if (m_sectPr)
//        {
//            m_sectPr = new CT_SectPr();
//
//        }
//        return m_sectPr;
//    }
//
//    void CT_Body::clear()
//    {
//        m_has_sectPr = false;
//        m_sectPr->clear();
//        delete m_sectPr;
//        m_sectPr = NULL;
//    }
//
//    CT_Body* CT_Body::default_instance()
//    {
//        if (!CT_Body::defalut_instance_)
//        {
//            CT_Body::defalut_instance_ = new CT_Body();
//        }
//
//        return CT_Body::defalut_instance_;
//    }
//
//    CT_Body* CT_Body::defalut_instance_ = NULL;
//
//
//
//
//
//    CT_SectPr::CT_SectPr()
//    {
//
//    }
//
//    CT_SectPr::~CT_SectPr()
//    {
//
//    }
//
//    void CT_SectPr::clear()
//    {
//
//    }
//
//    CT_SectPr* CT_SectPr::default_instance()
//    {
//        if (!CT_SectPr::defalut_instance_)
//        {
//            CT_SectPr::defalut_instance_ = new CT_SectPr();
//        }
//
//        return CT_SectPr::defalut_instance_;
//    }
//
//    CT_SectPr* CT_SectPr::defalut_instance_ = NULL;
//
//
//
//
//
//
//    CT_R* CT_P::add_r()
//    {
//        CT_P::ChildGroup_1 *pChildGroup = new CT_P::ChildGroup_1();
//        pChildGroup->mutable_r();
//        this->m_child_group_list.push_back(pChildGroup);
//        return pChildGroup->mutable_r();
//    }
//
//    CT_SdtRun* CT_P::add_sdt()
//    {
//        CT_P::ChildGroup_1 *pChildGroup = new CT_P::ChildGroup_1();
//        pChildGroup->mutable_sdt();
//        this->m_child_group_list.push_back(pChildGroup);
//        return pChildGroup->mutable_sdt();
//    }
//
//    void CT_P::toXml(const std::string& _elementName, std::ostream& _outStream) const
//    {
//        _outStream << "<" << _elementName << " " << "rsidR=" << "\"" << rsidR() << "\"" << ">";
//        ppr().toXml("w:pPr", _outStream);
//
//        vector<ChildGroup_1*>::const_iterator iter = m_child_group_list.begin();
//        for (; iter != m_child_group_list.end(); ++iter)
//        {
//            if ((*iter)->type() == CT_P::ChildGroup_1::type_r)
//            {
//                (*iter)->r().toXml("w:r", _outStream);
//            }
//        }
//
//        _outStream << "</" << _elementName << ">";
//    }
//
//    document::document()
//    : XSD::Element("document")
//    {
//    }
//
//    void document::toXml(std::ostream& _outStream) const
//    {
//        CT_Document::toXml(name(), _outStream);
//    }
//}