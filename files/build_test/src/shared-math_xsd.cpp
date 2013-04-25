#include "shared-math_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "wml_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
//#include "xml.h"
namespace ns_m {
 using namespace std;

    // Element

    // Attribute

    // ST_Integer255
    ST_Integer255::ST_Integer255()
    :m_has_integer(false),
    m_integer(0)
    {
    }
    ST_Integer255::ST_Integer255(const XSD::integer_& _integer)
    :m_has_integer(true)
    {
    
    set_integer(m_integer);
    }
    bool ST_Integer255::has_integer() const
    {    
    return m_has_integer;
    }

    void ST_Integer255::set_integer(const XSD::integer_& _integer)
    {    assert(1 <= _integer);
    assert(_integer <= 255);
    
    m_has_integer = true;
    m_integer = _integer;
    }

    const XSD::integer_& ST_Integer255::get_integer() const
    {    
    return m_integer;
    }

    void ST_Integer255::clear()
    {    
    m_has_integer = false;
    m_integer = 0;;
    }

    void ST_Integer255::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_integer)
    {
        _outStream << " " << _attrName << "=\"" << m_integer << "\"";;
    }
    }

    const ST_Integer255& ST_Integer255::default_instance()
    {    
    if (!ST_Integer255::default_instance_)
    {
        ST_Integer255::default_instance_ = new ST_Integer255();
    }
    return *ST_Integer255::default_instance_;
    }

    std::string ST_Integer255::toString() const
    {    
    std::stringstream strStream;
    strStream << get_integer();
    return strStream.str();
    }


    // ST_Integer2
    ST_Integer2::ST_Integer2()
    :m_has_integer(false),
    m_integer(0)
    {
    }
    ST_Integer2::ST_Integer2(const XSD::integer_& _integer)
    :m_has_integer(true)
    {
    
    set_integer(m_integer);
    }
    bool ST_Integer2::has_integer() const
    {    
    return m_has_integer;
    }

    void ST_Integer2::set_integer(const XSD::integer_& _integer)
    {    assert(-2 <= _integer);
    assert(_integer <= 2);
    
    m_has_integer = true;
    m_integer = _integer;
    }

    const XSD::integer_& ST_Integer2::get_integer() const
    {    
    return m_integer;
    }

    void ST_Integer2::clear()
    {    
    m_has_integer = false;
    m_integer = 0;;
    }

    void ST_Integer2::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_integer)
    {
        _outStream << " " << _attrName << "=\"" << m_integer << "\"";;
    }
    }

    const ST_Integer2& ST_Integer2::default_instance()
    {    
    if (!ST_Integer2::default_instance_)
    {
        ST_Integer2::default_instance_ = new ST_Integer2();
    }
    return *ST_Integer2::default_instance_;
    }

    std::string ST_Integer2::toString() const
    {    
    std::stringstream strStream;
    strStream << get_integer();
    return strStream.str();
    }


    // ST_SpacingRule
    ST_SpacingRule::ST_SpacingRule()
    :m_has_integer(false),
    m_integer(0)
    {
    }
    ST_SpacingRule::ST_SpacingRule(const XSD::integer_& _integer)
    :m_has_integer(true)
    {
    
    set_integer(m_integer);
    }
    bool ST_SpacingRule::has_integer() const
    {    
    return m_has_integer;
    }

    void ST_SpacingRule::set_integer(const XSD::integer_& _integer)
    {    assert(0 <= _integer);
    assert(_integer <= 4);
    
    m_has_integer = true;
    m_integer = _integer;
    }

    const XSD::integer_& ST_SpacingRule::get_integer() const
    {    
    return m_integer;
    }

    void ST_SpacingRule::clear()
    {    
    m_has_integer = false;
    m_integer = 0;;
    }

    void ST_SpacingRule::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_integer)
    {
        _outStream << " " << _attrName << "=\"" << m_integer << "\"";;
    }
    }

    const ST_SpacingRule& ST_SpacingRule::default_instance()
    {    
    if (!ST_SpacingRule::default_instance_)
    {
        ST_SpacingRule::default_instance_ = new ST_SpacingRule();
    }
    return *ST_SpacingRule::default_instance_;
    }

    std::string ST_SpacingRule::toString() const
    {    
    std::stringstream strStream;
    strStream << get_integer();
    return strStream.str();
    }


    // ST_UnSignedInteger
    ST_UnSignedInteger::ST_UnSignedInteger()
    :m_has_unsignedInt(false),
    m_unsignedInt(0)
    {
    }
    ST_UnSignedInteger::ST_UnSignedInteger(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
    {
    
    set_unsignedInt(m_unsignedInt);
    }
    bool ST_UnSignedInteger::has_unsignedInt() const
    {    
    return m_has_unsignedInt;
    }

    void ST_UnSignedInteger::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
    {    
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
    }

    const XSD::unsignedInt_& ST_UnSignedInteger::get_unsignedInt() const
    {    
    return m_unsignedInt;
    }

    void ST_UnSignedInteger::clear()
    {    
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
    }

    void ST_UnSignedInteger::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
    }

    const ST_UnSignedInteger& ST_UnSignedInteger::default_instance()
    {    
    if (!ST_UnSignedInteger::default_instance_)
    {
        ST_UnSignedInteger::default_instance_ = new ST_UnSignedInteger();
    }
    return *ST_UnSignedInteger::default_instance_;
    }

    std::string ST_UnSignedInteger::toString() const
    {    
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
    }


    // ST_Char
    ST_Char::ST_Char()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_Char::ST_Char(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_Char::has_string() const
    {    
    return m_has_string;
    }

    void ST_Char::set_string(const XSD::string_& _string)
    {    assert(_string.size() <= 1);
    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_Char::get_string() const
    {    
    return m_string;
    }

    void ST_Char::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_Char::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_Char& ST_Char::default_instance()
    {    
    if (!ST_Char::default_instance_)
    {
        ST_Char::default_instance_ = new ST_Char();
    }
    return *ST_Char::default_instance_;
    }

    std::string ST_Char::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }


    // ST_Shp
    ST_Shp::ST_Shp()
    :m_has_type(false)
    {
    }
    ST_Shp::ST_Shp(const ST_Shp::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Shp::has_type() const
    {    
    return m_has_type;
    }

    void ST_Shp::set_type(const ST_Shp::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Shp::Type& ST_Shp::get_type() const
    {    
                return m_type;
                }

    std::string ST_Shp::toString() const
    {    
    return ST_Shp::TypeStrList[m_type];
    }

    void ST_Shp::clear()
    {    
    m_has_type = false;
    }

    void ST_Shp::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Shp& ST_Shp::default_instance()
    {    
    if (!ST_Shp::default_instance_)
    {
        ST_Shp::default_instance_ = new ST_Shp();
    }
    return *ST_Shp::default_instance_;
    }

    const std::string ST_Shp::TypeStrList[] =
    {
        "centered",
        "match"
    };

    // ST_FType
    ST_FType::ST_FType()
    :m_has_type(false)
    {
    }
    ST_FType::ST_FType(const ST_FType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_FType::has_type() const
    {    
    return m_has_type;
    }

    void ST_FType::set_type(const ST_FType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_FType::Type& ST_FType::get_type() const
    {    
                return m_type;
                }

    std::string ST_FType::toString() const
    {    
    return ST_FType::TypeStrList[m_type];
    }

    void ST_FType::clear()
    {    
    m_has_type = false;
    }

    void ST_FType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_FType& ST_FType::default_instance()
    {    
    if (!ST_FType::default_instance_)
    {
        ST_FType::default_instance_ = new ST_FType();
    }
    return *ST_FType::default_instance_;
    }

    const std::string ST_FType::TypeStrList[] =
    {
        "bar",
        "skw",
        "lin",
        "noBar"
    };

    // ST_LimLoc
    ST_LimLoc::ST_LimLoc()
    :m_has_type(false)
    {
    }
    ST_LimLoc::ST_LimLoc(const ST_LimLoc::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_LimLoc::has_type() const
    {    
    return m_has_type;
    }

    void ST_LimLoc::set_type(const ST_LimLoc::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_LimLoc::Type& ST_LimLoc::get_type() const
    {    
                return m_type;
                }

    std::string ST_LimLoc::toString() const
    {    
    return ST_LimLoc::TypeStrList[m_type];
    }

    void ST_LimLoc::clear()
    {    
    m_has_type = false;
    }

    void ST_LimLoc::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_LimLoc& ST_LimLoc::default_instance()
    {    
    if (!ST_LimLoc::default_instance_)
    {
        ST_LimLoc::default_instance_ = new ST_LimLoc();
    }
    return *ST_LimLoc::default_instance_;
    }

    const std::string ST_LimLoc::TypeStrList[] =
    {
        "undOvr",
        "subSup"
    };

    // ST_TopBot
    ST_TopBot::ST_TopBot()
    :m_has_type(false)
    {
    }
    ST_TopBot::ST_TopBot(const ST_TopBot::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_TopBot::has_type() const
    {    
    return m_has_type;
    }

    void ST_TopBot::set_type(const ST_TopBot::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_TopBot::Type& ST_TopBot::get_type() const
    {    
                return m_type;
                }

    std::string ST_TopBot::toString() const
    {    
    return ST_TopBot::TypeStrList[m_type];
    }

    void ST_TopBot::clear()
    {    
    m_has_type = false;
    }

    void ST_TopBot::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_TopBot& ST_TopBot::default_instance()
    {    
    if (!ST_TopBot::default_instance_)
    {
        ST_TopBot::default_instance_ = new ST_TopBot();
    }
    return *ST_TopBot::default_instance_;
    }

    const std::string ST_TopBot::TypeStrList[] =
    {
        "top",
        "bot"
    };

    // ST_Script
    ST_Script::ST_Script()
    :m_has_type(false)
    {
    }
    ST_Script::ST_Script(const ST_Script::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Script::has_type() const
    {    
    return m_has_type;
    }

    void ST_Script::set_type(const ST_Script::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Script::Type& ST_Script::get_type() const
    {    
                return m_type;
                }

    std::string ST_Script::toString() const
    {    
    return ST_Script::TypeStrList[m_type];
    }

    void ST_Script::clear()
    {    
    m_has_type = false;
    }

    void ST_Script::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Script& ST_Script::default_instance()
    {    
    if (!ST_Script::default_instance_)
    {
        ST_Script::default_instance_ = new ST_Script();
    }
    return *ST_Script::default_instance_;
    }

    const std::string ST_Script::TypeStrList[] =
    {
        "roman",
        "script",
        "fraktur",
        "double-struck",
        "sans-serif",
        "monospace"
    };

    // ST_Style
    ST_Style::ST_Style()
    :m_has_type(false)
    {
    }
    ST_Style::ST_Style(const ST_Style::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Style::has_type() const
    {    
    return m_has_type;
    }

    void ST_Style::set_type(const ST_Style::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Style::Type& ST_Style::get_type() const
    {    
                return m_type;
                }

    std::string ST_Style::toString() const
    {    
    return ST_Style::TypeStrList[m_type];
    }

    void ST_Style::clear()
    {    
    m_has_type = false;
    }

    void ST_Style::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Style& ST_Style::default_instance()
    {    
    if (!ST_Style::default_instance_)
    {
        ST_Style::default_instance_ = new ST_Style();
    }
    return *ST_Style::default_instance_;
    }

    const std::string ST_Style::TypeStrList[] =
    {
        "p",
        "b",
        "i",
        "bi"
    };

    // ST_Jc
    ST_Jc::ST_Jc()
    :m_has_type(false)
    {
    }
    ST_Jc::ST_Jc(const ST_Jc::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Jc::has_type() const
    {    
    return m_has_type;
    }

    void ST_Jc::set_type(const ST_Jc::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Jc::Type& ST_Jc::get_type() const
    {    
                return m_type;
                }

    std::string ST_Jc::toString() const
    {    
    return ST_Jc::TypeStrList[m_type];
    }

    void ST_Jc::clear()
    {    
    m_has_type = false;
    }

    void ST_Jc::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Jc& ST_Jc::default_instance()
    {    
    if (!ST_Jc::default_instance_)
    {
        ST_Jc::default_instance_ = new ST_Jc();
    }
    return *ST_Jc::default_instance_;
    }

    const std::string ST_Jc::TypeStrList[] =
    {
        "left",
        "right",
        "center",
        "centerGroup"
    };

    // ST_BreakBin
    ST_BreakBin::ST_BreakBin()
    :m_has_type(false)
    {
    }
    ST_BreakBin::ST_BreakBin(const ST_BreakBin::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BreakBin::has_type() const
    {    
    return m_has_type;
    }

    void ST_BreakBin::set_type(const ST_BreakBin::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BreakBin::Type& ST_BreakBin::get_type() const
    {    
                return m_type;
                }

    std::string ST_BreakBin::toString() const
    {    
    return ST_BreakBin::TypeStrList[m_type];
    }

    void ST_BreakBin::clear()
    {    
    m_has_type = false;
    }

    void ST_BreakBin::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BreakBin& ST_BreakBin::default_instance()
    {    
    if (!ST_BreakBin::default_instance_)
    {
        ST_BreakBin::default_instance_ = new ST_BreakBin();
    }
    return *ST_BreakBin::default_instance_;
    }

    const std::string ST_BreakBin::TypeStrList[] =
    {
        "before",
        "after",
        "repeat"
    };

    // ST_BreakBinSub
    ST_BreakBinSub::ST_BreakBinSub()
    :m_has_type(false)
    {
    }
    ST_BreakBinSub::ST_BreakBinSub(const ST_BreakBinSub::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_BreakBinSub::has_type() const
    {    
    return m_has_type;
    }

    void ST_BreakBinSub::set_type(const ST_BreakBinSub::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_BreakBinSub::Type& ST_BreakBinSub::get_type() const
    {    
                return m_type;
                }

    std::string ST_BreakBinSub::toString() const
    {    
    return ST_BreakBinSub::TypeStrList[m_type];
    }

    void ST_BreakBinSub::clear()
    {    
    m_has_type = false;
    }

    void ST_BreakBinSub::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_BreakBinSub& ST_BreakBinSub::default_instance()
    {    
    if (!ST_BreakBinSub::default_instance_)
    {
        ST_BreakBinSub::default_instance_ = new ST_BreakBinSub();
    }
    return *ST_BreakBinSub::default_instance_;
    }

    const std::string ST_BreakBinSub::TypeStrList[] =
    {
        "--",
        "-+",
        "+-"
    };

    // CT_Integer255
    void CT_Integer255::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Integer255::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Integer255& CT_Integer255::default_instance()
    {    
    if (!CT_Integer255::default_instance_)
    {
        CT_Integer255::default_instance_ = new CT_Integer255();
    }
    return *CT_Integer255::default_instance_;
    }

    bool CT_Integer255::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Integer255::set_val_attr(const ST_Integer255& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Integer255(_val_attr);
    }

    const ST_Integer255& CT_Integer255::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Integer255::default_instance();
    }


    // CT_Integer2
    void CT_Integer2::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Integer2::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Integer2& CT_Integer2::default_instance()
    {    
    if (!CT_Integer2::default_instance_)
    {
        CT_Integer2::default_instance_ = new CT_Integer2();
    }
    return *CT_Integer2::default_instance_;
    }

    bool CT_Integer2::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Integer2::set_val_attr(const ST_Integer2& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Integer2(_val_attr);
    }

    const ST_Integer2& CT_Integer2::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Integer2::default_instance();
    }


    // CT_SpacingRule
    void CT_SpacingRule::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_SpacingRule::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_SpacingRule& CT_SpacingRule::default_instance()
    {    
    if (!CT_SpacingRule::default_instance_)
    {
        CT_SpacingRule::default_instance_ = new CT_SpacingRule();
    }
    return *CT_SpacingRule::default_instance_;
    }

    bool CT_SpacingRule::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_SpacingRule::set_val_attr(const ST_SpacingRule& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_SpacingRule(_val_attr);
    }

    const ST_SpacingRule& CT_SpacingRule::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_SpacingRule::default_instance();
    }


    // CT_UnSignedInteger
    void CT_UnSignedInteger::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_UnSignedInteger::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_UnSignedInteger& CT_UnSignedInteger::default_instance()
    {    
    if (!CT_UnSignedInteger::default_instance_)
    {
        CT_UnSignedInteger::default_instance_ = new CT_UnSignedInteger();
    }
    return *CT_UnSignedInteger::default_instance_;
    }

    bool CT_UnSignedInteger::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_UnSignedInteger::set_val_attr(const ST_UnSignedInteger& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_UnSignedInteger(_val_attr);
    }

    const ST_UnSignedInteger& CT_UnSignedInteger::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_UnSignedInteger::default_instance();
    }


    // CT_Char
    void CT_Char::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Char::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Char& CT_Char::default_instance()
    {    
    if (!CT_Char::default_instance_)
    {
        CT_Char::default_instance_ = new CT_Char();
    }
    return *CT_Char::default_instance_;
    }

    bool CT_Char::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Char::set_val_attr(const ST_Char& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Char(_val_attr);
    }

    const ST_Char& CT_Char::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Char::default_instance();
    }


    // CT_OnOff
    void CT_OnOff::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
    }
    
    }

    void CT_OnOff::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_OnOff& CT_OnOff::default_instance()
    {    
    if (!CT_OnOff::default_instance_)
    {
        CT_OnOff::default_instance_ = new CT_OnOff();
    }
    return *CT_OnOff::default_instance_;
    }

    bool CT_OnOff::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_OnOff::set_s_val_attr(const ns_s::ST_OnOff& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_OnOff(_s_val_attr);
    }

    const ns_s::ST_OnOff& CT_OnOff::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_OnOff::default_instance();
    }


    // CT_String
    void CT_String::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
    }
    
    }

    void CT_String::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_String& CT_String::default_instance()
    {    
    if (!CT_String::default_instance_)
    {
        CT_String::default_instance_ = new CT_String();
    }
    return *CT_String::default_instance_;
    }

    bool CT_String::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_String::set_s_val_attr(const ns_s::ST_String& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_String(_s_val_attr);
    }

    const ns_s::ST_String& CT_String::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_String::default_instance();
    }


    // CT_XAlign
    void CT_XAlign::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
    }
    
    }

    void CT_XAlign::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_XAlign& CT_XAlign::default_instance()
    {    
    if (!CT_XAlign::default_instance_)
    {
        CT_XAlign::default_instance_ = new CT_XAlign();
    }
    return *CT_XAlign::default_instance_;
    }

    bool CT_XAlign::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_XAlign::set_s_val_attr(const ns_s::ST_XAlign& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_XAlign(_s_val_attr);
    }

    const ns_s::ST_XAlign& CT_XAlign::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_XAlign::default_instance();
    }


    // CT_YAlign
    void CT_YAlign::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
    }
    
    }

    void CT_YAlign::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_YAlign& CT_YAlign::default_instance()
    {    
    if (!CT_YAlign::default_instance_)
    {
        CT_YAlign::default_instance_ = new CT_YAlign();
    }
    return *CT_YAlign::default_instance_;
    }

    bool CT_YAlign::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_YAlign::set_s_val_attr(const ns_s::ST_YAlign& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_YAlign(_s_val_attr);
    }

    const ns_s::ST_YAlign& CT_YAlign::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_YAlign::default_instance();
    }


    // CT_Shp
    void CT_Shp::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Shp::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Shp& CT_Shp::default_instance()
    {    
    if (!CT_Shp::default_instance_)
    {
        CT_Shp::default_instance_ = new CT_Shp();
    }
    return *CT_Shp::default_instance_;
    }

    bool CT_Shp::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Shp::set_val_attr(const ST_Shp& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Shp(_val_attr);
    }

    const ST_Shp& CT_Shp::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Shp::default_instance();
    }


    // CT_FType
    void CT_FType::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_FType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_FType& CT_FType::default_instance()
    {    
    if (!CT_FType::default_instance_)
    {
        CT_FType::default_instance_ = new CT_FType();
    }
    return *CT_FType::default_instance_;
    }

    bool CT_FType::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_FType::set_val_attr(const ST_FType& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_FType(_val_attr);
    }

    const ST_FType& CT_FType::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_FType::default_instance();
    }


    // CT_LimLoc
    void CT_LimLoc::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_LimLoc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_LimLoc& CT_LimLoc::default_instance()
    {    
    if (!CT_LimLoc::default_instance_)
    {
        CT_LimLoc::default_instance_ = new CT_LimLoc();
    }
    return *CT_LimLoc::default_instance_;
    }

    bool CT_LimLoc::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_LimLoc::set_val_attr(const ST_LimLoc& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_LimLoc(_val_attr);
    }

    const ST_LimLoc& CT_LimLoc::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_LimLoc::default_instance();
    }


    // CT_TopBot
    void CT_TopBot::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_TopBot::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_TopBot& CT_TopBot::default_instance()
    {    
    if (!CT_TopBot::default_instance_)
    {
        CT_TopBot::default_instance_ = new CT_TopBot();
    }
    return *CT_TopBot::default_instance_;
    }

    bool CT_TopBot::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_TopBot::set_val_attr(const ST_TopBot& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_TopBot(_val_attr);
    }

    const ST_TopBot& CT_TopBot::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TopBot::default_instance();
    }


    // CT_Script
    void CT_Script::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Script::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Script& CT_Script::default_instance()
    {    
    if (!CT_Script::default_instance_)
    {
        CT_Script::default_instance_ = new CT_Script();
    }
    return *CT_Script::default_instance_;
    }

    bool CT_Script::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Script::set_val_attr(const ST_Script& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Script(_val_attr);
    }

    const ST_Script& CT_Script::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Script::default_instance();
    }


    // CT_Style
    void CT_Style::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_Style::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Style& CT_Style::default_instance()
    {    
    if (!CT_Style::default_instance_)
    {
        CT_Style::default_instance_ = new CT_Style();
    }
    return *CT_Style::default_instance_;
    }

    bool CT_Style::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Style::set_val_attr(const ST_Style& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Style(_val_attr);
    }

    const ST_Style& CT_Style::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Style::default_instance();
    }


    // CT_ManualBreak
    void CT_ManualBreak::clear()
    {    
    m_has_alnAt_attr = false;
    
    if (m_alnAt_attr)
    {
        delete m_alnAt_attr;
        m_alnAt_attr = NULL;
    }
    
    }

    void CT_ManualBreak::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_alnAt_attr)
    {
        m_alnAt_attr->toXmlAttr("m:alnAt", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_ManualBreak& CT_ManualBreak::default_instance()
    {    
    if (!CT_ManualBreak::default_instance_)
    {
        CT_ManualBreak::default_instance_ = new CT_ManualBreak();
    }
    return *CT_ManualBreak::default_instance_;
    }

    bool CT_ManualBreak::has_alnAt_attr() const
    {    
    return m_has_alnAt_attr;
    }

    void CT_ManualBreak::set_alnAt_attr(const ST_Integer255& _alnAt_attr)
    {    
    m_has_alnAt_attr = true;
    m_alnAt_attr = new ST_Integer255(_alnAt_attr);
    }

    const ST_Integer255& CT_ManualBreak::get_alnAt_attr() const
    {    
    if (m_alnAt_attr)
    {
        return *m_alnAt_attr;
    }
    return ST_Integer255::default_instance();
    }


    // CT_RPR
    bool CT_RPR::has_lit() const
    {    
    return m_has_lit;
    }

    CT_OnOff* CT_RPR::mutable_lit()
    {    
    m_has_lit = true;
    if (!m_lit)
    {
        m_lit = new CT_OnOff();
    }
    return m_lit;
    }

    const CT_OnOff& CT_RPR::get_lit() const
    {    
    if (m_lit)
    {
        return *m_lit;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_RPR::has_nor() const
    {    
    return m_has_nor;
    }

    CT_OnOff* CT_RPR::mutable_nor()
    {    
    
    m_has_nor = true;
    if (!m_nor)
    {
        m_nor = new CT_OnOff();
    }
    return m_nor;
    }

    const CT_OnOff& CT_RPR::get_nor() const
    {    
    if (m_nor)
    {
        return *m_nor;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_RPR::has_brk() const
    {    
    return m_has_brk;
    }

    CT_ManualBreak* CT_RPR::mutable_brk()
    {    
    m_has_brk = true;
    if (!m_brk)
    {
        m_brk = new CT_ManualBreak();
    }
    return m_brk;
    }

    const CT_ManualBreak& CT_RPR::get_brk() const
    {    
    if (m_brk)
    {
        return *m_brk;
    }
    return CT_ManualBreak::default_instance();
    }

    bool CT_RPR::has_aln() const
    {    
    return m_has_aln;
    }

    CT_OnOff* CT_RPR::mutable_aln()
    {    
    m_has_aln = true;
    if (!m_aln)
    {
        m_aln = new CT_OnOff();
    }
    return m_aln;
    }

    const CT_OnOff& CT_RPR::get_aln() const
    {    
    if (m_aln)
    {
        return *m_aln;
    }
    return CT_OnOff::default_instance();
    }

    void CT_RPR::clear()
    {    
    m_has_lit = false;
    
    if (m_lit)
    {
        delete m_lit;
        m_lit = NULL;
    }
    
     
    m_has_nor = false;
    
    if (m_nor)
    {
        delete m_nor;
        m_nor = NULL;
    }
    
     
    m_has_brk = false;
    
    if (m_brk)
    {
        delete m_brk;
        m_brk = NULL;
    }
    
    
    m_has_aln = false;
    
    if (m_aln)
    {
        delete m_aln;
        m_aln = NULL;
    }
    
    }

    void CT_RPR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_lit)
    {
        m_lit->toXmlElem("m:lit", "", _outStream);;
    }
     
    if (m_has_nor)
    {
        m_nor->toXmlElem("m:nor", "", _outStream);;
    }
     
    if (m_has_brk)
    {
        m_brk->toXmlElem("m:brk", "", _outStream);;
    }
    
    if (m_has_aln)
    {
        m_aln->toXmlElem("m:aln", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_RPR& CT_RPR::default_instance()
    {    
    if (!CT_RPR::default_instance_)
    {
        CT_RPR::default_instance_ = new CT_RPR();
    }
    return *CT_RPR::default_instance_;
    }


    // CT_Text
    void CT_Text::clear()
    {    
    m_has__attr = false;
    m__attr.clear();
    }

    void CT_Text::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has__attr)
    {
        _outStream << " " << "m:" << "=\"" << m__attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Text& CT_Text::default_instance()
    {    
    if (!CT_Text::default_instance_)
    {
        CT_Text::default_instance_ = new CT_Text();
    }
    return *CT_Text::default_instance_;
    }

    bool CT_Text::has__attr() const
    {    
    return m_has__attr;
    }

    void CT_Text::set__attr(const XSD::ENTITIES_& __attr)
    {    
    m_has__attr = true;
    m__attr = __attr;
    }

    const XSD::ENTITIES_& CT_Text::get__attr() const
    {    
    return m__attr;
    }


    // CT_R
    bool CT_R::has_rPr() const
    {    
    return m_has_rPr;
    }

    CT_RPR* CT_R::mutable_rPr()
    {    
    m_has_rPr = true;
    if (!m_rPr)
    {
        m_rPr = new CT_RPR();
    }
    return m_rPr;
    }

    const CT_RPR& CT_R::get_rPr() const
    {    
    if (m_rPr)
    {
        return *m_rPr;
    }
    return CT_RPR::default_instance();
    }

    bool CT_R::has_w_rPr() const
    {    
    return m_has_w_rPr;
    }

    ns_w::CT_RPr* CT_R::mutable_w_rPr()
    {    
    m_has_w_rPr = true;
    if (!m_w_rPr)
    {
        m_w_rPr = new ns_w::CT_RPr();
    }
    return m_w_rPr;
    }

    const ns_w::CT_RPr& CT_R::get_w_rPr() const
    {    
    if (m_w_rPr)
    {
        return *m_w_rPr;
    }
    return ns_w::CT_RPr::default_instance();
    }

    ns_w::CT_Br* CT_R::add_w_br()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Br* pNewChild = pChildGroup->mutable_w_br();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Text* CT_R::add_w_t()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_t();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Rel* CT_R::add_w_contentPart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Rel* pNewChild = pChildGroup->mutable_w_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Text* CT_R::add_w_delText()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_delText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Text* CT_R::add_w_instrText()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_instrText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Text* CT_R::add_w_delInstrText()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Text* pNewChild = pChildGroup->mutable_w_delInstrText();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_noBreakHyphen()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_noBreakHyphen();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_softHyphen()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_softHyphen();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_dayShort()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_dayShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_monthShort()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_monthShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_yearShort()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_yearShort();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_dayLong()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_dayLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_monthLong()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_monthLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_yearLong()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_yearLong();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_annotationRef()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_annotationRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_footnoteRef()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_footnoteRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_endnoteRef()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_endnoteRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_separator()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_separator();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_continuationSeparator()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_continuationSeparator();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Sym* CT_R::add_w_sym()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Sym* pNewChild = pChildGroup->mutable_w_sym();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_pgNum()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_pgNum();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_cr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_cr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_tab()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_tab();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Object* CT_R::add_w_object()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Object* pNewChild = pChildGroup->mutable_w_object();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Picture* CT_R::add_w_pict()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Picture* pNewChild = pChildGroup->mutable_w_pict();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_FldChar* CT_R::add_w_fldChar()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FldChar* pNewChild = pChildGroup->mutable_w_fldChar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Ruby* CT_R::add_w_ruby()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Ruby* pNewChild = pChildGroup->mutable_w_ruby();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_FtnEdnRef* CT_R::add_w_footnoteReference()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FtnEdnRef* pNewChild = pChildGroup->mutable_w_footnoteReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_FtnEdnRef* CT_R::add_w_endnoteReference()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_FtnEdnRef* pNewChild = pChildGroup->mutable_w_endnoteReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_R::add_w_commentReference()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_commentReference();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Drawing* CT_R::add_w_drawing()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Drawing* pNewChild = pChildGroup->mutable_w_drawing();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_PTab* CT_R::add_w_ptab()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_PTab* pNewChild = pChildGroup->mutable_w_ptab();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Empty* CT_R::add_w_lastRenderedPageBreak()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Empty* pNewChild = pChildGroup->mutable_w_lastRenderedPageBreak();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Text* CT_R::add_t()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Text* pNewChild = pChildGroup->mutable_t();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_R::clear()
    {    
    m_has_rPr = false;
    
    if (m_rPr)
    {
        delete m_rPr;
        m_rPr = NULL;
    }
    
    
    m_has_w_rPr = false;
    
    if (m_w_rPr)
    {
        delete m_w_rPr;
        m_w_rPr = NULL;
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

    void CT_R::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_rPr)
    {
        m_rPr->toXmlElem("m:rPr", "", _outStream);;
    }
    
    if (m_has_w_rPr)
    {
        m_w_rPr->toXmlElem("m:rPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_w_br())
            {
                (*iter)->get_w_br().toXmlElem("m:br", "", _outStream);
            }
            else if ((*iter)->has_w_t())
            {
                (*iter)->get_w_t().toXmlElem("m:t", "", _outStream);
            }
            else if ((*iter)->has_w_contentPart())
            {
                (*iter)->get_w_contentPart().toXmlElem("m:contentPart", "", _outStream);
            }
            else if ((*iter)->has_w_delText())
            {
                (*iter)->get_w_delText().toXmlElem("m:delText", "", _outStream);
            }
            else if ((*iter)->has_w_instrText())
            {
                (*iter)->get_w_instrText().toXmlElem("m:instrText", "", _outStream);
            }
            else if ((*iter)->has_w_delInstrText())
            {
                (*iter)->get_w_delInstrText().toXmlElem("m:delInstrText", "", _outStream);
            }
            else if ((*iter)->has_w_noBreakHyphen())
            {
                (*iter)->get_w_noBreakHyphen().toXmlElem("m:noBreakHyphen", "", _outStream);
            }
            else if ((*iter)->has_w_softHyphen())
            {
                (*iter)->get_w_softHyphen().toXmlElem("m:softHyphen", "", _outStream);
            }
            else if ((*iter)->has_w_dayShort())
            {
                (*iter)->get_w_dayShort().toXmlElem("m:dayShort", "", _outStream);
            }
            else if ((*iter)->has_w_monthShort())
            {
                (*iter)->get_w_monthShort().toXmlElem("m:monthShort", "", _outStream);
            }
            else if ((*iter)->has_w_yearShort())
            {
                (*iter)->get_w_yearShort().toXmlElem("m:yearShort", "", _outStream);
            }
            else if ((*iter)->has_w_dayLong())
            {
                (*iter)->get_w_dayLong().toXmlElem("m:dayLong", "", _outStream);
            }
            else if ((*iter)->has_w_monthLong())
            {
                (*iter)->get_w_monthLong().toXmlElem("m:monthLong", "", _outStream);
            }
            else if ((*iter)->has_w_yearLong())
            {
                (*iter)->get_w_yearLong().toXmlElem("m:yearLong", "", _outStream);
            }
            else if ((*iter)->has_w_annotationRef())
            {
                (*iter)->get_w_annotationRef().toXmlElem("m:annotationRef", "", _outStream);
            }
            else if ((*iter)->has_w_footnoteRef())
            {
                (*iter)->get_w_footnoteRef().toXmlElem("m:footnoteRef", "", _outStream);
            }
            else if ((*iter)->has_w_endnoteRef())
            {
                (*iter)->get_w_endnoteRef().toXmlElem("m:endnoteRef", "", _outStream);
            }
            else if ((*iter)->has_w_separator())
            {
                (*iter)->get_w_separator().toXmlElem("m:separator", "", _outStream);
            }
            else if ((*iter)->has_w_continuationSeparator())
            {
                (*iter)->get_w_continuationSeparator().toXmlElem("m:continuationSeparator", "", _outStream);
            }
            else if ((*iter)->has_w_sym())
            {
                (*iter)->get_w_sym().toXmlElem("m:sym", "", _outStream);
            }
            else if ((*iter)->has_w_pgNum())
            {
                (*iter)->get_w_pgNum().toXmlElem("m:pgNum", "", _outStream);
            }
            else if ((*iter)->has_w_cr())
            {
                (*iter)->get_w_cr().toXmlElem("m:cr", "", _outStream);
            }
            else if ((*iter)->has_w_tab())
            {
                (*iter)->get_w_tab().toXmlElem("m:tab", "", _outStream);
            }
            else if ((*iter)->has_w_object())
            {
                (*iter)->get_w_object().toXmlElem("m:object", "", _outStream);
            }
            else if ((*iter)->has_w_pict())
            {
                (*iter)->get_w_pict().toXmlElem("m:pict", "", _outStream);
            }
            else if ((*iter)->has_w_fldChar())
            {
                (*iter)->get_w_fldChar().toXmlElem("m:fldChar", "", _outStream);
            }
            else if ((*iter)->has_w_ruby())
            {
                (*iter)->get_w_ruby().toXmlElem("m:ruby", "", _outStream);
            }
            else if ((*iter)->has_w_footnoteReference())
            {
                (*iter)->get_w_footnoteReference().toXmlElem("m:footnoteReference", "", _outStream);
            }
            else if ((*iter)->has_w_endnoteReference())
            {
                (*iter)->get_w_endnoteReference().toXmlElem("m:endnoteReference", "", _outStream);
            }
            else if ((*iter)->has_w_commentReference())
            {
                (*iter)->get_w_commentReference().toXmlElem("m:commentReference", "", _outStream);
            }
            else if ((*iter)->has_w_drawing())
            {
                (*iter)->get_w_drawing().toXmlElem("m:drawing", "", _outStream);
            }
            else if ((*iter)->has_w_ptab())
            {
                (*iter)->get_w_ptab().toXmlElem("m:ptab", "", _outStream);
            }
            else if ((*iter)->has_w_lastRenderedPageBreak())
            {
                (*iter)->get_w_lastRenderedPageBreak().toXmlElem("m:lastRenderedPageBreak", "", _outStream);
            }
            else if ((*iter)->has_t())
            {
                (*iter)->get_t().toXmlElem("m:t", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_R& CT_R::default_instance()
    {    
    if (!CT_R::default_instance_)
    {
        CT_R::default_instance_ = new CT_R();
    }
    return *CT_R::default_instance_;
    }


    // CT_CtrlPr
    bool CT_CtrlPr::has_w_ins() const
    {    
    return m_has_w_ins;
    }

    ns_w::CT_MathCtrlIns* CT_CtrlPr::mutable_w_ins()
    {    
    
    m_has_w_del = false;
    
    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    ;
    
    m_has_w_ins = true;
    if (!m_w_ins)
    {
        m_w_ins = new ns_w::CT_MathCtrlIns();
    }
    return m_w_ins;
    }

    const ns_w::CT_MathCtrlIns& CT_CtrlPr::get_w_ins() const
    {    
    if (m_w_ins)
    {
        return *m_w_ins;
    }
    return ns_w::CT_MathCtrlIns::default_instance();
    }

    bool CT_CtrlPr::has_w_del() const
    {    
    return m_has_w_del;
    }

    ns_w::CT_MathCtrlDel* CT_CtrlPr::mutable_w_del()
    {    
    
    m_has_w_ins = false;
    
    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    ;
    
    m_has_w_del = true;
    if (!m_w_del)
    {
        m_w_del = new ns_w::CT_MathCtrlDel();
    }
    return m_w_del;
    }

    const ns_w::CT_MathCtrlDel& CT_CtrlPr::get_w_del() const
    {    
    if (m_w_del)
    {
        return *m_w_del;
    }
    return ns_w::CT_MathCtrlDel::default_instance();
    }

    void CT_CtrlPr::clear()
    {     
    m_has_w_ins = false;
    
    if (m_w_ins)
    {
        delete m_w_ins;
        m_w_ins = NULL;
    }
    
    
    m_has_w_del = false;
    
    if (m_w_del)
    {
        delete m_w_del;
        m_w_del = NULL;
    }
    
    }

    void CT_CtrlPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
             
    if (m_has_w_ins)
    {
        m_w_ins->toXmlElem("m:ins", "", _outStream);;
    }
    
    if (m_has_w_del)
    {
        m_w_del->toXmlElem("m:del", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_CtrlPr& CT_CtrlPr::default_instance()
    {    
    if (!CT_CtrlPr::default_instance_)
    {
        CT_CtrlPr::default_instance_ = new CT_CtrlPr();
    }
    return *CT_CtrlPr::default_instance_;
    }


    // CT_AccPr
    bool CT_AccPr::has_chr() const
    {    
    return m_has_chr;
    }

    CT_Char* CT_AccPr::mutable_chr()
    {    
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
    }

    const CT_Char& CT_AccPr::get_chr() const
    {    
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
    }

    bool CT_AccPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_AccPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_AccPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_AccPr::clear()
    {    
    m_has_chr = false;
    
    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_AccPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AccPr& CT_AccPr::default_instance()
    {    
    if (!CT_AccPr::default_instance_)
    {
        CT_AccPr::default_instance_ = new CT_AccPr();
    }
    return *CT_AccPr::default_instance_;
    }


    // CT_Acc
    bool CT_Acc::has_accPr() const
    {    
    return m_has_accPr;
    }

    CT_AccPr* CT_Acc::mutable_accPr()
    {    
    m_has_accPr = true;
    if (!m_accPr)
    {
        m_accPr = new CT_AccPr();
    }
    return m_accPr;
    }

    const CT_AccPr& CT_Acc::get_accPr() const
    {    
    if (m_accPr)
    {
        return *m_accPr;
    }
    return CT_AccPr::default_instance();
    }

    bool CT_Acc::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Acc::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Acc::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Acc::clear()
    {    
    m_has_accPr = false;
    
    if (m_accPr)
    {
        delete m_accPr;
        m_accPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Acc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_accPr)
    {
        m_accPr->toXmlElem("m:accPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Acc& CT_Acc::default_instance()
    {    
    if (!CT_Acc::default_instance_)
    {
        CT_Acc::default_instance_ = new CT_Acc();
    }
    return *CT_Acc::default_instance_;
    }


    // CT_BarPr
    bool CT_BarPr::has_pos() const
    {    
    return m_has_pos;
    }

    CT_TopBot* CT_BarPr::mutable_pos()
    {    
    m_has_pos = true;
    if (!m_pos)
    {
        m_pos = new CT_TopBot();
    }
    return m_pos;
    }

    const CT_TopBot& CT_BarPr::get_pos() const
    {    
    if (m_pos)
    {
        return *m_pos;
    }
    return CT_TopBot::default_instance();
    }

    bool CT_BarPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_BarPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_BarPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_BarPr::clear()
    {    
    m_has_pos = false;
    
    if (m_pos)
    {
        delete m_pos;
        m_pos = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_BarPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_pos)
    {
        m_pos->toXmlElem("m:pos", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BarPr& CT_BarPr::default_instance()
    {    
    if (!CT_BarPr::default_instance_)
    {
        CT_BarPr::default_instance_ = new CT_BarPr();
    }
    return *CT_BarPr::default_instance_;
    }


    // CT_Bar
    bool CT_Bar::has_barPr() const
    {    
    return m_has_barPr;
    }

    CT_BarPr* CT_Bar::mutable_barPr()
    {    
    m_has_barPr = true;
    if (!m_barPr)
    {
        m_barPr = new CT_BarPr();
    }
    return m_barPr;
    }

    const CT_BarPr& CT_Bar::get_barPr() const
    {    
    if (m_barPr)
    {
        return *m_barPr;
    }
    return CT_BarPr::default_instance();
    }

    bool CT_Bar::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Bar::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Bar::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Bar::clear()
    {    
    m_has_barPr = false;
    
    if (m_barPr)
    {
        delete m_barPr;
        m_barPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Bar::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_barPr)
    {
        m_barPr->toXmlElem("m:barPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Bar& CT_Bar::default_instance()
    {    
    if (!CT_Bar::default_instance_)
    {
        CT_Bar::default_instance_ = new CT_Bar();
    }
    return *CT_Bar::default_instance_;
    }


    // CT_BoxPr
    bool CT_BoxPr::has_opEmu() const
    {    
    return m_has_opEmu;
    }

    CT_OnOff* CT_BoxPr::mutable_opEmu()
    {    
    m_has_opEmu = true;
    if (!m_opEmu)
    {
        m_opEmu = new CT_OnOff();
    }
    return m_opEmu;
    }

    const CT_OnOff& CT_BoxPr::get_opEmu() const
    {    
    if (m_opEmu)
    {
        return *m_opEmu;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BoxPr::has_noBreak() const
    {    
    return m_has_noBreak;
    }

    CT_OnOff* CT_BoxPr::mutable_noBreak()
    {    
    m_has_noBreak = true;
    if (!m_noBreak)
    {
        m_noBreak = new CT_OnOff();
    }
    return m_noBreak;
    }

    const CT_OnOff& CT_BoxPr::get_noBreak() const
    {    
    if (m_noBreak)
    {
        return *m_noBreak;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BoxPr::has_diff() const
    {    
    return m_has_diff;
    }

    CT_OnOff* CT_BoxPr::mutable_diff()
    {    
    m_has_diff = true;
    if (!m_diff)
    {
        m_diff = new CT_OnOff();
    }
    return m_diff;
    }

    const CT_OnOff& CT_BoxPr::get_diff() const
    {    
    if (m_diff)
    {
        return *m_diff;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BoxPr::has_brk() const
    {    
    return m_has_brk;
    }

    CT_ManualBreak* CT_BoxPr::mutable_brk()
    {    
    m_has_brk = true;
    if (!m_brk)
    {
        m_brk = new CT_ManualBreak();
    }
    return m_brk;
    }

    const CT_ManualBreak& CT_BoxPr::get_brk() const
    {    
    if (m_brk)
    {
        return *m_brk;
    }
    return CT_ManualBreak::default_instance();
    }

    bool CT_BoxPr::has_aln() const
    {    
    return m_has_aln;
    }

    CT_OnOff* CT_BoxPr::mutable_aln()
    {    
    m_has_aln = true;
    if (!m_aln)
    {
        m_aln = new CT_OnOff();
    }
    return m_aln;
    }

    const CT_OnOff& CT_BoxPr::get_aln() const
    {    
    if (m_aln)
    {
        return *m_aln;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BoxPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_BoxPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_BoxPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_BoxPr::clear()
    {    
    m_has_opEmu = false;
    
    if (m_opEmu)
    {
        delete m_opEmu;
        m_opEmu = NULL;
    }
    
    
    m_has_noBreak = false;
    
    if (m_noBreak)
    {
        delete m_noBreak;
        m_noBreak = NULL;
    }
    
    
    m_has_diff = false;
    
    if (m_diff)
    {
        delete m_diff;
        m_diff = NULL;
    }
    
    
    m_has_brk = false;
    
    if (m_brk)
    {
        delete m_brk;
        m_brk = NULL;
    }
    
    
    m_has_aln = false;
    
    if (m_aln)
    {
        delete m_aln;
        m_aln = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_BoxPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_opEmu)
    {
        m_opEmu->toXmlElem("m:opEmu", "", _outStream);;
    }
    
    if (m_has_noBreak)
    {
        m_noBreak->toXmlElem("m:noBreak", "", _outStream);;
    }
    
    if (m_has_diff)
    {
        m_diff->toXmlElem("m:diff", "", _outStream);;
    }
    
    if (m_has_brk)
    {
        m_brk->toXmlElem("m:brk", "", _outStream);;
    }
    
    if (m_has_aln)
    {
        m_aln->toXmlElem("m:aln", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BoxPr& CT_BoxPr::default_instance()
    {    
    if (!CT_BoxPr::default_instance_)
    {
        CT_BoxPr::default_instance_ = new CT_BoxPr();
    }
    return *CT_BoxPr::default_instance_;
    }


    // CT_Box
    bool CT_Box::has_boxPr() const
    {    
    return m_has_boxPr;
    }

    CT_BoxPr* CT_Box::mutable_boxPr()
    {    
    m_has_boxPr = true;
    if (!m_boxPr)
    {
        m_boxPr = new CT_BoxPr();
    }
    return m_boxPr;
    }

    const CT_BoxPr& CT_Box::get_boxPr() const
    {    
    if (m_boxPr)
    {
        return *m_boxPr;
    }
    return CT_BoxPr::default_instance();
    }

    bool CT_Box::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Box::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Box::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Box::clear()
    {    
    m_has_boxPr = false;
    
    if (m_boxPr)
    {
        delete m_boxPr;
        m_boxPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Box::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_boxPr)
    {
        m_boxPr->toXmlElem("m:boxPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Box& CT_Box::default_instance()
    {    
    if (!CT_Box::default_instance_)
    {
        CT_Box::default_instance_ = new CT_Box();
    }
    return *CT_Box::default_instance_;
    }


    // CT_BorderBoxPr
    bool CT_BorderBoxPr::has_hideTop() const
    {    
    return m_has_hideTop;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_hideTop()
    {    
    m_has_hideTop = true;
    if (!m_hideTop)
    {
        m_hideTop = new CT_OnOff();
    }
    return m_hideTop;
    }

    const CT_OnOff& CT_BorderBoxPr::get_hideTop() const
    {    
    if (m_hideTop)
    {
        return *m_hideTop;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_hideBot() const
    {    
    return m_has_hideBot;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_hideBot()
    {    
    m_has_hideBot = true;
    if (!m_hideBot)
    {
        m_hideBot = new CT_OnOff();
    }
    return m_hideBot;
    }

    const CT_OnOff& CT_BorderBoxPr::get_hideBot() const
    {    
    if (m_hideBot)
    {
        return *m_hideBot;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_hideLeft() const
    {    
    return m_has_hideLeft;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_hideLeft()
    {    
    m_has_hideLeft = true;
    if (!m_hideLeft)
    {
        m_hideLeft = new CT_OnOff();
    }
    return m_hideLeft;
    }

    const CT_OnOff& CT_BorderBoxPr::get_hideLeft() const
    {    
    if (m_hideLeft)
    {
        return *m_hideLeft;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_hideRight() const
    {    
    return m_has_hideRight;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_hideRight()
    {    
    m_has_hideRight = true;
    if (!m_hideRight)
    {
        m_hideRight = new CT_OnOff();
    }
    return m_hideRight;
    }

    const CT_OnOff& CT_BorderBoxPr::get_hideRight() const
    {    
    if (m_hideRight)
    {
        return *m_hideRight;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_strikeH() const
    {    
    return m_has_strikeH;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_strikeH()
    {    
    m_has_strikeH = true;
    if (!m_strikeH)
    {
        m_strikeH = new CT_OnOff();
    }
    return m_strikeH;
    }

    const CT_OnOff& CT_BorderBoxPr::get_strikeH() const
    {    
    if (m_strikeH)
    {
        return *m_strikeH;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_strikeV() const
    {    
    return m_has_strikeV;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_strikeV()
    {    
    m_has_strikeV = true;
    if (!m_strikeV)
    {
        m_strikeV = new CT_OnOff();
    }
    return m_strikeV;
    }

    const CT_OnOff& CT_BorderBoxPr::get_strikeV() const
    {    
    if (m_strikeV)
    {
        return *m_strikeV;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_strikeBLTR() const
    {    
    return m_has_strikeBLTR;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_strikeBLTR()
    {    
    m_has_strikeBLTR = true;
    if (!m_strikeBLTR)
    {
        m_strikeBLTR = new CT_OnOff();
    }
    return m_strikeBLTR;
    }

    const CT_OnOff& CT_BorderBoxPr::get_strikeBLTR() const
    {    
    if (m_strikeBLTR)
    {
        return *m_strikeBLTR;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_strikeTLBR() const
    {    
    return m_has_strikeTLBR;
    }

    CT_OnOff* CT_BorderBoxPr::mutable_strikeTLBR()
    {    
    m_has_strikeTLBR = true;
    if (!m_strikeTLBR)
    {
        m_strikeTLBR = new CT_OnOff();
    }
    return m_strikeTLBR;
    }

    const CT_OnOff& CT_BorderBoxPr::get_strikeTLBR() const
    {    
    if (m_strikeTLBR)
    {
        return *m_strikeTLBR;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_BorderBoxPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_BorderBoxPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_BorderBoxPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_BorderBoxPr::clear()
    {    
    m_has_hideTop = false;
    
    if (m_hideTop)
    {
        delete m_hideTop;
        m_hideTop = NULL;
    }
    
    
    m_has_hideBot = false;
    
    if (m_hideBot)
    {
        delete m_hideBot;
        m_hideBot = NULL;
    }
    
    
    m_has_hideLeft = false;
    
    if (m_hideLeft)
    {
        delete m_hideLeft;
        m_hideLeft = NULL;
    }
    
    
    m_has_hideRight = false;
    
    if (m_hideRight)
    {
        delete m_hideRight;
        m_hideRight = NULL;
    }
    
    
    m_has_strikeH = false;
    
    if (m_strikeH)
    {
        delete m_strikeH;
        m_strikeH = NULL;
    }
    
    
    m_has_strikeV = false;
    
    if (m_strikeV)
    {
        delete m_strikeV;
        m_strikeV = NULL;
    }
    
    
    m_has_strikeBLTR = false;
    
    if (m_strikeBLTR)
    {
        delete m_strikeBLTR;
        m_strikeBLTR = NULL;
    }
    
    
    m_has_strikeTLBR = false;
    
    if (m_strikeTLBR)
    {
        delete m_strikeTLBR;
        m_strikeTLBR = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_BorderBoxPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_hideTop)
    {
        m_hideTop->toXmlElem("m:hideTop", "", _outStream);;
    }
    
    if (m_has_hideBot)
    {
        m_hideBot->toXmlElem("m:hideBot", "", _outStream);;
    }
    
    if (m_has_hideLeft)
    {
        m_hideLeft->toXmlElem("m:hideLeft", "", _outStream);;
    }
    
    if (m_has_hideRight)
    {
        m_hideRight->toXmlElem("m:hideRight", "", _outStream);;
    }
    
    if (m_has_strikeH)
    {
        m_strikeH->toXmlElem("m:strikeH", "", _outStream);;
    }
    
    if (m_has_strikeV)
    {
        m_strikeV->toXmlElem("m:strikeV", "", _outStream);;
    }
    
    if (m_has_strikeBLTR)
    {
        m_strikeBLTR->toXmlElem("m:strikeBLTR", "", _outStream);;
    }
    
    if (m_has_strikeTLBR)
    {
        m_strikeTLBR->toXmlElem("m:strikeTLBR", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BorderBoxPr& CT_BorderBoxPr::default_instance()
    {    
    if (!CT_BorderBoxPr::default_instance_)
    {
        CT_BorderBoxPr::default_instance_ = new CT_BorderBoxPr();
    }
    return *CT_BorderBoxPr::default_instance_;
    }


    // CT_BorderBox
    bool CT_BorderBox::has_borderBoxPr() const
    {    
    return m_has_borderBoxPr;
    }

    CT_BorderBoxPr* CT_BorderBox::mutable_borderBoxPr()
    {    
    m_has_borderBoxPr = true;
    if (!m_borderBoxPr)
    {
        m_borderBoxPr = new CT_BorderBoxPr();
    }
    return m_borderBoxPr;
    }

    const CT_BorderBoxPr& CT_BorderBox::get_borderBoxPr() const
    {    
    if (m_borderBoxPr)
    {
        return *m_borderBoxPr;
    }
    return CT_BorderBoxPr::default_instance();
    }

    bool CT_BorderBox::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_BorderBox::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_BorderBox::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_BorderBox::clear()
    {    
    m_has_borderBoxPr = false;
    
    if (m_borderBoxPr)
    {
        delete m_borderBoxPr;
        m_borderBoxPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_BorderBox::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_borderBoxPr)
    {
        m_borderBoxPr->toXmlElem("m:borderBoxPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_BorderBox& CT_BorderBox::default_instance()
    {    
    if (!CT_BorderBox::default_instance_)
    {
        CT_BorderBox::default_instance_ = new CT_BorderBox();
    }
    return *CT_BorderBox::default_instance_;
    }


    // CT_DPr
    bool CT_DPr::has_begChr() const
    {    
    return m_has_begChr;
    }

    CT_Char* CT_DPr::mutable_begChr()
    {    
    m_has_begChr = true;
    if (!m_begChr)
    {
        m_begChr = new CT_Char();
    }
    return m_begChr;
    }

    const CT_Char& CT_DPr::get_begChr() const
    {    
    if (m_begChr)
    {
        return *m_begChr;
    }
    return CT_Char::default_instance();
    }

    bool CT_DPr::has_sepChr() const
    {    
    return m_has_sepChr;
    }

    CT_Char* CT_DPr::mutable_sepChr()
    {    
    m_has_sepChr = true;
    if (!m_sepChr)
    {
        m_sepChr = new CT_Char();
    }
    return m_sepChr;
    }

    const CT_Char& CT_DPr::get_sepChr() const
    {    
    if (m_sepChr)
    {
        return *m_sepChr;
    }
    return CT_Char::default_instance();
    }

    bool CT_DPr::has_endChr() const
    {    
    return m_has_endChr;
    }

    CT_Char* CT_DPr::mutable_endChr()
    {    
    m_has_endChr = true;
    if (!m_endChr)
    {
        m_endChr = new CT_Char();
    }
    return m_endChr;
    }

    const CT_Char& CT_DPr::get_endChr() const
    {    
    if (m_endChr)
    {
        return *m_endChr;
    }
    return CT_Char::default_instance();
    }

    bool CT_DPr::has_grow() const
    {    
    return m_has_grow;
    }

    CT_OnOff* CT_DPr::mutable_grow()
    {    
    m_has_grow = true;
    if (!m_grow)
    {
        m_grow = new CT_OnOff();
    }
    return m_grow;
    }

    const CT_OnOff& CT_DPr::get_grow() const
    {    
    if (m_grow)
    {
        return *m_grow;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_DPr::has_shp() const
    {    
    return m_has_shp;
    }

    CT_Shp* CT_DPr::mutable_shp()
    {    
    m_has_shp = true;
    if (!m_shp)
    {
        m_shp = new CT_Shp();
    }
    return m_shp;
    }

    const CT_Shp& CT_DPr::get_shp() const
    {    
    if (m_shp)
    {
        return *m_shp;
    }
    return CT_Shp::default_instance();
    }

    bool CT_DPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_DPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_DPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_DPr::clear()
    {    
    m_has_begChr = false;
    
    if (m_begChr)
    {
        delete m_begChr;
        m_begChr = NULL;
    }
    
    
    m_has_sepChr = false;
    
    if (m_sepChr)
    {
        delete m_sepChr;
        m_sepChr = NULL;
    }
    
    
    m_has_endChr = false;
    
    if (m_endChr)
    {
        delete m_endChr;
        m_endChr = NULL;
    }
    
    
    m_has_grow = false;
    
    if (m_grow)
    {
        delete m_grow;
        m_grow = NULL;
    }
    
    
    m_has_shp = false;
    
    if (m_shp)
    {
        delete m_shp;
        m_shp = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_DPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_begChr)
    {
        m_begChr->toXmlElem("m:begChr", "", _outStream);;
    }
    
    if (m_has_sepChr)
    {
        m_sepChr->toXmlElem("m:sepChr", "", _outStream);;
    }
    
    if (m_has_endChr)
    {
        m_endChr->toXmlElem("m:endChr", "", _outStream);;
    }
    
    if (m_has_grow)
    {
        m_grow->toXmlElem("m:grow", "", _outStream);;
    }
    
    if (m_has_shp)
    {
        m_shp->toXmlElem("m:shp", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DPr& CT_DPr::default_instance()
    {    
    if (!CT_DPr::default_instance_)
    {
        CT_DPr::default_instance_ = new CT_DPr();
    }
    return *CT_DPr::default_instance_;
    }


    // CT_D
    bool CT_D::has_dPr() const
    {    
    return m_has_dPr;
    }

    CT_DPr* CT_D::mutable_dPr()
    {    
    m_has_dPr = true;
    if (!m_dPr)
    {
        m_dPr = new CT_DPr();
    }
    return m_dPr;
    }

    const CT_DPr& CT_D::get_dPr() const
    {    
    if (m_dPr)
    {
        return *m_dPr;
    }
    return CT_DPr::default_instance();
    }

    CT_OMathArg* CT_D::add_e()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_D::clear()
    {    
    m_has_dPr = false;
    
    if (m_dPr)
    {
        delete m_dPr;
        m_dPr = NULL;
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

    void CT_D::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_dPr)
    {
        m_dPr->toXmlElem("m:dPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_D& CT_D::default_instance()
    {    
    if (!CT_D::default_instance_)
    {
        CT_D::default_instance_ = new CT_D();
    }
    return *CT_D::default_instance_;
    }


    // CT_EqArrPr
    bool CT_EqArrPr::has_baseJc() const
    {    
    return m_has_baseJc;
    }

    CT_YAlign* CT_EqArrPr::mutable_baseJc()
    {    
    m_has_baseJc = true;
    if (!m_baseJc)
    {
        m_baseJc = new CT_YAlign();
    }
    return m_baseJc;
    }

    const CT_YAlign& CT_EqArrPr::get_baseJc() const
    {    
    if (m_baseJc)
    {
        return *m_baseJc;
    }
    return CT_YAlign::default_instance();
    }

    bool CT_EqArrPr::has_maxDist() const
    {    
    return m_has_maxDist;
    }

    CT_OnOff* CT_EqArrPr::mutable_maxDist()
    {    
    m_has_maxDist = true;
    if (!m_maxDist)
    {
        m_maxDist = new CT_OnOff();
    }
    return m_maxDist;
    }

    const CT_OnOff& CT_EqArrPr::get_maxDist() const
    {    
    if (m_maxDist)
    {
        return *m_maxDist;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_EqArrPr::has_objDist() const
    {    
    return m_has_objDist;
    }

    CT_OnOff* CT_EqArrPr::mutable_objDist()
    {    
    m_has_objDist = true;
    if (!m_objDist)
    {
        m_objDist = new CT_OnOff();
    }
    return m_objDist;
    }

    const CT_OnOff& CT_EqArrPr::get_objDist() const
    {    
    if (m_objDist)
    {
        return *m_objDist;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_EqArrPr::has_rSpRule() const
    {    
    return m_has_rSpRule;
    }

    CT_SpacingRule* CT_EqArrPr::mutable_rSpRule()
    {    
    m_has_rSpRule = true;
    if (!m_rSpRule)
    {
        m_rSpRule = new CT_SpacingRule();
    }
    return m_rSpRule;
    }

    const CT_SpacingRule& CT_EqArrPr::get_rSpRule() const
    {    
    if (m_rSpRule)
    {
        return *m_rSpRule;
    }
    return CT_SpacingRule::default_instance();
    }

    bool CT_EqArrPr::has_rSp() const
    {    
    return m_has_rSp;
    }

    CT_UnSignedInteger* CT_EqArrPr::mutable_rSp()
    {    
    m_has_rSp = true;
    if (!m_rSp)
    {
        m_rSp = new CT_UnSignedInteger();
    }
    return m_rSp;
    }

    const CT_UnSignedInteger& CT_EqArrPr::get_rSp() const
    {    
    if (m_rSp)
    {
        return *m_rSp;
    }
    return CT_UnSignedInteger::default_instance();
    }

    bool CT_EqArrPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_EqArrPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_EqArrPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_EqArrPr::clear()
    {    
    m_has_baseJc = false;
    
    if (m_baseJc)
    {
        delete m_baseJc;
        m_baseJc = NULL;
    }
    
    
    m_has_maxDist = false;
    
    if (m_maxDist)
    {
        delete m_maxDist;
        m_maxDist = NULL;
    }
    
    
    m_has_objDist = false;
    
    if (m_objDist)
    {
        delete m_objDist;
        m_objDist = NULL;
    }
    
    
    m_has_rSpRule = false;
    
    if (m_rSpRule)
    {
        delete m_rSpRule;
        m_rSpRule = NULL;
    }
    
    
    m_has_rSp = false;
    
    if (m_rSp)
    {
        delete m_rSp;
        m_rSp = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_EqArrPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_baseJc)
    {
        m_baseJc->toXmlElem("m:baseJc", "", _outStream);;
    }
    
    if (m_has_maxDist)
    {
        m_maxDist->toXmlElem("m:maxDist", "", _outStream);;
    }
    
    if (m_has_objDist)
    {
        m_objDist->toXmlElem("m:objDist", "", _outStream);;
    }
    
    if (m_has_rSpRule)
    {
        m_rSpRule->toXmlElem("m:rSpRule", "", _outStream);;
    }
    
    if (m_has_rSp)
    {
        m_rSp->toXmlElem("m:rSp", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_EqArrPr& CT_EqArrPr::default_instance()
    {    
    if (!CT_EqArrPr::default_instance_)
    {
        CT_EqArrPr::default_instance_ = new CT_EqArrPr();
    }
    return *CT_EqArrPr::default_instance_;
    }


    // CT_EqArr
    bool CT_EqArr::has_eqArrPr() const
    {    
    return m_has_eqArrPr;
    }

    CT_EqArrPr* CT_EqArr::mutable_eqArrPr()
    {    
    m_has_eqArrPr = true;
    if (!m_eqArrPr)
    {
        m_eqArrPr = new CT_EqArrPr();
    }
    return m_eqArrPr;
    }

    const CT_EqArrPr& CT_EqArr::get_eqArrPr() const
    {    
    if (m_eqArrPr)
    {
        return *m_eqArrPr;
    }
    return CT_EqArrPr::default_instance();
    }

    CT_OMathArg* CT_EqArr::add_e()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_EqArr::clear()
    {    
    m_has_eqArrPr = false;
    
    if (m_eqArrPr)
    {
        delete m_eqArrPr;
        m_eqArrPr = NULL;
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

    void CT_EqArr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_eqArrPr)
    {
        m_eqArrPr->toXmlElem("m:eqArrPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_EqArr& CT_EqArr::default_instance()
    {    
    if (!CT_EqArr::default_instance_)
    {
        CT_EqArr::default_instance_ = new CT_EqArr();
    }
    return *CT_EqArr::default_instance_;
    }


    // CT_FPr
    bool CT_FPr::has_type() const
    {    
    return m_has_type;
    }

    CT_FType* CT_FPr::mutable_type()
    {    
    m_has_type = true;
    if (!m_type)
    {
        m_type = new CT_FType();
    }
    return m_type;
    }

    const CT_FType& CT_FPr::get_type() const
    {    
    if (m_type)
    {
        return *m_type;
    }
    return CT_FType::default_instance();
    }

    bool CT_FPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_FPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_FPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_FPr::clear()
    {    
    m_has_type = false;
    
    if (m_type)
    {
        delete m_type;
        m_type = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_FPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_type)
    {
        m_type->toXmlElem("m:type", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_FPr& CT_FPr::default_instance()
    {    
    if (!CT_FPr::default_instance_)
    {
        CT_FPr::default_instance_ = new CT_FPr();
    }
    return *CT_FPr::default_instance_;
    }


    // CT_F
    bool CT_F::has_fPr() const
    {    
    return m_has_fPr;
    }

    CT_FPr* CT_F::mutable_fPr()
    {    
    m_has_fPr = true;
    if (!m_fPr)
    {
        m_fPr = new CT_FPr();
    }
    return m_fPr;
    }

    const CT_FPr& CT_F::get_fPr() const
    {    
    if (m_fPr)
    {
        return *m_fPr;
    }
    return CT_FPr::default_instance();
    }

    bool CT_F::has_num() const
    {    
    return m_has_num;
    }

    CT_OMathArg* CT_F::mutable_num()
    {    
    m_has_num = true;
    if (!m_num)
    {
        m_num = new CT_OMathArg();
    }
    return m_num;
    }

    const CT_OMathArg& CT_F::get_num() const
    {    
    if (m_num)
    {
        return *m_num;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_F::has_den() const
    {    
    return m_has_den;
    }

    CT_OMathArg* CT_F::mutable_den()
    {    
    m_has_den = true;
    if (!m_den)
    {
        m_den = new CT_OMathArg();
    }
    return m_den;
    }

    const CT_OMathArg& CT_F::get_den() const
    {    
    if (m_den)
    {
        return *m_den;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_F::clear()
    {    
    m_has_fPr = false;
    
    if (m_fPr)
    {
        delete m_fPr;
        m_fPr = NULL;
    }
    
    
    m_has_num = false;
    
    if (m_num)
    {
        delete m_num;
        m_num = NULL;
    }
    
    
    m_has_den = false;
    
    if (m_den)
    {
        delete m_den;
        m_den = NULL;
    }
    
    }

    void CT_F::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_fPr)
    {
        m_fPr->toXmlElem("m:fPr", "", _outStream);;
    }
    
    if (m_has_num)
    {
        m_num->toXmlElem("m:num", "", _outStream);;
    }
    
    if (m_has_den)
    {
        m_den->toXmlElem("m:den", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_F& CT_F::default_instance()
    {    
    if (!CT_F::default_instance_)
    {
        CT_F::default_instance_ = new CT_F();
    }
    return *CT_F::default_instance_;
    }


    // CT_FuncPr
    bool CT_FuncPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_FuncPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_FuncPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_FuncPr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_FuncPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_FuncPr& CT_FuncPr::default_instance()
    {    
    if (!CT_FuncPr::default_instance_)
    {
        CT_FuncPr::default_instance_ = new CT_FuncPr();
    }
    return *CT_FuncPr::default_instance_;
    }


    // CT_Func
    bool CT_Func::has_funcPr() const
    {    
    return m_has_funcPr;
    }

    CT_FuncPr* CT_Func::mutable_funcPr()
    {    
    m_has_funcPr = true;
    if (!m_funcPr)
    {
        m_funcPr = new CT_FuncPr();
    }
    return m_funcPr;
    }

    const CT_FuncPr& CT_Func::get_funcPr() const
    {    
    if (m_funcPr)
    {
        return *m_funcPr;
    }
    return CT_FuncPr::default_instance();
    }

    bool CT_Func::has_fName() const
    {    
    return m_has_fName;
    }

    CT_OMathArg* CT_Func::mutable_fName()
    {    
    m_has_fName = true;
    if (!m_fName)
    {
        m_fName = new CT_OMathArg();
    }
    return m_fName;
    }

    const CT_OMathArg& CT_Func::get_fName() const
    {    
    if (m_fName)
    {
        return *m_fName;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_Func::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Func::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Func::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Func::clear()
    {    
    m_has_funcPr = false;
    
    if (m_funcPr)
    {
        delete m_funcPr;
        m_funcPr = NULL;
    }
    
    
    m_has_fName = false;
    
    if (m_fName)
    {
        delete m_fName;
        m_fName = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Func::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_funcPr)
    {
        m_funcPr->toXmlElem("m:funcPr", "", _outStream);;
    }
    
    if (m_has_fName)
    {
        m_fName->toXmlElem("m:fName", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Func& CT_Func::default_instance()
    {    
    if (!CT_Func::default_instance_)
    {
        CT_Func::default_instance_ = new CT_Func();
    }
    return *CT_Func::default_instance_;
    }


    // CT_GroupChrPr
    bool CT_GroupChrPr::has_chr() const
    {    
    return m_has_chr;
    }

    CT_Char* CT_GroupChrPr::mutable_chr()
    {    
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
    }

    const CT_Char& CT_GroupChrPr::get_chr() const
    {    
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
    }

    bool CT_GroupChrPr::has_pos() const
    {    
    return m_has_pos;
    }

    CT_TopBot* CT_GroupChrPr::mutable_pos()
    {    
    m_has_pos = true;
    if (!m_pos)
    {
        m_pos = new CT_TopBot();
    }
    return m_pos;
    }

    const CT_TopBot& CT_GroupChrPr::get_pos() const
    {    
    if (m_pos)
    {
        return *m_pos;
    }
    return CT_TopBot::default_instance();
    }

    bool CT_GroupChrPr::has_vertJc() const
    {    
    return m_has_vertJc;
    }

    CT_TopBot* CT_GroupChrPr::mutable_vertJc()
    {    
    m_has_vertJc = true;
    if (!m_vertJc)
    {
        m_vertJc = new CT_TopBot();
    }
    return m_vertJc;
    }

    const CT_TopBot& CT_GroupChrPr::get_vertJc() const
    {    
    if (m_vertJc)
    {
        return *m_vertJc;
    }
    return CT_TopBot::default_instance();
    }

    bool CT_GroupChrPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_GroupChrPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_GroupChrPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_GroupChrPr::clear()
    {    
    m_has_chr = false;
    
    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }
    
    
    m_has_pos = false;
    
    if (m_pos)
    {
        delete m_pos;
        m_pos = NULL;
    }
    
    
    m_has_vertJc = false;
    
    if (m_vertJc)
    {
        delete m_vertJc;
        m_vertJc = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_GroupChrPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);;
    }
    
    if (m_has_pos)
    {
        m_pos->toXmlElem("m:pos", "", _outStream);;
    }
    
    if (m_has_vertJc)
    {
        m_vertJc->toXmlElem("m:vertJc", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GroupChrPr& CT_GroupChrPr::default_instance()
    {    
    if (!CT_GroupChrPr::default_instance_)
    {
        CT_GroupChrPr::default_instance_ = new CT_GroupChrPr();
    }
    return *CT_GroupChrPr::default_instance_;
    }


    // CT_GroupChr
    bool CT_GroupChr::has_groupChrPr() const
    {    
    return m_has_groupChrPr;
    }

    CT_GroupChrPr* CT_GroupChr::mutable_groupChrPr()
    {    
    m_has_groupChrPr = true;
    if (!m_groupChrPr)
    {
        m_groupChrPr = new CT_GroupChrPr();
    }
    return m_groupChrPr;
    }

    const CT_GroupChrPr& CT_GroupChr::get_groupChrPr() const
    {    
    if (m_groupChrPr)
    {
        return *m_groupChrPr;
    }
    return CT_GroupChrPr::default_instance();
    }

    bool CT_GroupChr::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_GroupChr::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_GroupChr::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_GroupChr::clear()
    {    
    m_has_groupChrPr = false;
    
    if (m_groupChrPr)
    {
        delete m_groupChrPr;
        m_groupChrPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_GroupChr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_groupChrPr)
    {
        m_groupChrPr->toXmlElem("m:groupChrPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_GroupChr& CT_GroupChr::default_instance()
    {    
    if (!CT_GroupChr::default_instance_)
    {
        CT_GroupChr::default_instance_ = new CT_GroupChr();
    }
    return *CT_GroupChr::default_instance_;
    }


    // CT_LimLowPr
    bool CT_LimLowPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_LimLowPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_LimLowPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_LimLowPr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_LimLowPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LimLowPr& CT_LimLowPr::default_instance()
    {    
    if (!CT_LimLowPr::default_instance_)
    {
        CT_LimLowPr::default_instance_ = new CT_LimLowPr();
    }
    return *CT_LimLowPr::default_instance_;
    }


    // CT_LimLow
    bool CT_LimLow::has_limLowPr() const
    {    
    return m_has_limLowPr;
    }

    CT_LimLowPr* CT_LimLow::mutable_limLowPr()
    {    
    m_has_limLowPr = true;
    if (!m_limLowPr)
    {
        m_limLowPr = new CT_LimLowPr();
    }
    return m_limLowPr;
    }

    const CT_LimLowPr& CT_LimLow::get_limLowPr() const
    {    
    if (m_limLowPr)
    {
        return *m_limLowPr;
    }
    return CT_LimLowPr::default_instance();
    }

    bool CT_LimLow::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_LimLow::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_LimLow::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_LimLow::has_lim() const
    {    
    return m_has_lim;
    }

    CT_OMathArg* CT_LimLow::mutable_lim()
    {    
    m_has_lim = true;
    if (!m_lim)
    {
        m_lim = new CT_OMathArg();
    }
    return m_lim;
    }

    const CT_OMathArg& CT_LimLow::get_lim() const
    {    
    if (m_lim)
    {
        return *m_lim;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_LimLow::clear()
    {    
    m_has_limLowPr = false;
    
    if (m_limLowPr)
    {
        delete m_limLowPr;
        m_limLowPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    
    m_has_lim = false;
    
    if (m_lim)
    {
        delete m_lim;
        m_lim = NULL;
    }
    
    }

    void CT_LimLow::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_limLowPr)
    {
        m_limLowPr->toXmlElem("m:limLowPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
    if (m_has_lim)
    {
        m_lim->toXmlElem("m:lim", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LimLow& CT_LimLow::default_instance()
    {    
    if (!CT_LimLow::default_instance_)
    {
        CT_LimLow::default_instance_ = new CT_LimLow();
    }
    return *CT_LimLow::default_instance_;
    }


    // CT_LimUppPr
    bool CT_LimUppPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_LimUppPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_LimUppPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_LimUppPr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_LimUppPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LimUppPr& CT_LimUppPr::default_instance()
    {    
    if (!CT_LimUppPr::default_instance_)
    {
        CT_LimUppPr::default_instance_ = new CT_LimUppPr();
    }
    return *CT_LimUppPr::default_instance_;
    }


    // CT_LimUpp
    bool CT_LimUpp::has_limUppPr() const
    {    
    return m_has_limUppPr;
    }

    CT_LimUppPr* CT_LimUpp::mutable_limUppPr()
    {    
    m_has_limUppPr = true;
    if (!m_limUppPr)
    {
        m_limUppPr = new CT_LimUppPr();
    }
    return m_limUppPr;
    }

    const CT_LimUppPr& CT_LimUpp::get_limUppPr() const
    {    
    if (m_limUppPr)
    {
        return *m_limUppPr;
    }
    return CT_LimUppPr::default_instance();
    }

    bool CT_LimUpp::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_LimUpp::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_LimUpp::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_LimUpp::has_lim() const
    {    
    return m_has_lim;
    }

    CT_OMathArg* CT_LimUpp::mutable_lim()
    {    
    m_has_lim = true;
    if (!m_lim)
    {
        m_lim = new CT_OMathArg();
    }
    return m_lim;
    }

    const CT_OMathArg& CT_LimUpp::get_lim() const
    {    
    if (m_lim)
    {
        return *m_lim;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_LimUpp::clear()
    {    
    m_has_limUppPr = false;
    
    if (m_limUppPr)
    {
        delete m_limUppPr;
        m_limUppPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    
    m_has_lim = false;
    
    if (m_lim)
    {
        delete m_lim;
        m_lim = NULL;
    }
    
    }

    void CT_LimUpp::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_limUppPr)
    {
        m_limUppPr->toXmlElem("m:limUppPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
    if (m_has_lim)
    {
        m_lim->toXmlElem("m:lim", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_LimUpp& CT_LimUpp::default_instance()
    {    
    if (!CT_LimUpp::default_instance_)
    {
        CT_LimUpp::default_instance_ = new CT_LimUpp();
    }
    return *CT_LimUpp::default_instance_;
    }


    // CT_MCPr
    bool CT_MCPr::has_count() const
    {    
    return m_has_count;
    }

    CT_Integer255* CT_MCPr::mutable_count()
    {    
    m_has_count = true;
    if (!m_count)
    {
        m_count = new CT_Integer255();
    }
    return m_count;
    }

    const CT_Integer255& CT_MCPr::get_count() const
    {    
    if (m_count)
    {
        return *m_count;
    }
    return CT_Integer255::default_instance();
    }

    bool CT_MCPr::has_mcJc() const
    {    
    return m_has_mcJc;
    }

    CT_XAlign* CT_MCPr::mutable_mcJc()
    {    
    m_has_mcJc = true;
    if (!m_mcJc)
    {
        m_mcJc = new CT_XAlign();
    }
    return m_mcJc;
    }

    const CT_XAlign& CT_MCPr::get_mcJc() const
    {    
    if (m_mcJc)
    {
        return *m_mcJc;
    }
    return CT_XAlign::default_instance();
    }

    void CT_MCPr::clear()
    {    
    m_has_count = false;
    
    if (m_count)
    {
        delete m_count;
        m_count = NULL;
    }
    
    
    m_has_mcJc = false;
    
    if (m_mcJc)
    {
        delete m_mcJc;
        m_mcJc = NULL;
    }
    
    }

    void CT_MCPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_count)
    {
        m_count->toXmlElem("m:count", "", _outStream);;
    }
    
    if (m_has_mcJc)
    {
        m_mcJc->toXmlElem("m:mcJc", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MCPr& CT_MCPr::default_instance()
    {    
    if (!CT_MCPr::default_instance_)
    {
        CT_MCPr::default_instance_ = new CT_MCPr();
    }
    return *CT_MCPr::default_instance_;
    }


    // CT_MC
    bool CT_MC::has_mcPr() const
    {    
    return m_has_mcPr;
    }

    CT_MCPr* CT_MC::mutable_mcPr()
    {    
    m_has_mcPr = true;
    if (!m_mcPr)
    {
        m_mcPr = new CT_MCPr();
    }
    return m_mcPr;
    }

    const CT_MCPr& CT_MC::get_mcPr() const
    {    
    if (m_mcPr)
    {
        return *m_mcPr;
    }
    return CT_MCPr::default_instance();
    }

    void CT_MC::clear()
    {    
    m_has_mcPr = false;
    
    if (m_mcPr)
    {
        delete m_mcPr;
        m_mcPr = NULL;
    }
    
    }

    void CT_MC::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_mcPr)
    {
        m_mcPr->toXmlElem("m:mcPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MC& CT_MC::default_instance()
    {    
    if (!CT_MC::default_instance_)
    {
        CT_MC::default_instance_ = new CT_MC();
    }
    return *CT_MC::default_instance_;
    }


    // CT_MCS
    CT_MC* CT_MCS::add_mc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MC* pNewChild = pChildGroup->mutable_mc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_MCS::clear()
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

    void CT_MCS::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_mc())
            {
                (*iter)->get_mc().toXmlElem("m:mc", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MCS& CT_MCS::default_instance()
    {    
    if (!CT_MCS::default_instance_)
    {
        CT_MCS::default_instance_ = new CT_MCS();
    }
    return *CT_MCS::default_instance_;
    }


    // CT_MPr
    bool CT_MPr::has_baseJc() const
    {    
    return m_has_baseJc;
    }

    CT_YAlign* CT_MPr::mutable_baseJc()
    {    
    m_has_baseJc = true;
    if (!m_baseJc)
    {
        m_baseJc = new CT_YAlign();
    }
    return m_baseJc;
    }

    const CT_YAlign& CT_MPr::get_baseJc() const
    {    
    if (m_baseJc)
    {
        return *m_baseJc;
    }
    return CT_YAlign::default_instance();
    }

    bool CT_MPr::has_plcHide() const
    {    
    return m_has_plcHide;
    }

    CT_OnOff* CT_MPr::mutable_plcHide()
    {    
    m_has_plcHide = true;
    if (!m_plcHide)
    {
        m_plcHide = new CT_OnOff();
    }
    return m_plcHide;
    }

    const CT_OnOff& CT_MPr::get_plcHide() const
    {    
    if (m_plcHide)
    {
        return *m_plcHide;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_MPr::has_rSpRule() const
    {    
    return m_has_rSpRule;
    }

    CT_SpacingRule* CT_MPr::mutable_rSpRule()
    {    
    m_has_rSpRule = true;
    if (!m_rSpRule)
    {
        m_rSpRule = new CT_SpacingRule();
    }
    return m_rSpRule;
    }

    const CT_SpacingRule& CT_MPr::get_rSpRule() const
    {    
    if (m_rSpRule)
    {
        return *m_rSpRule;
    }
    return CT_SpacingRule::default_instance();
    }

    bool CT_MPr::has_cGpRule() const
    {    
    return m_has_cGpRule;
    }

    CT_SpacingRule* CT_MPr::mutable_cGpRule()
    {    
    m_has_cGpRule = true;
    if (!m_cGpRule)
    {
        m_cGpRule = new CT_SpacingRule();
    }
    return m_cGpRule;
    }

    const CT_SpacingRule& CT_MPr::get_cGpRule() const
    {    
    if (m_cGpRule)
    {
        return *m_cGpRule;
    }
    return CT_SpacingRule::default_instance();
    }

    bool CT_MPr::has_rSp() const
    {    
    return m_has_rSp;
    }

    CT_UnSignedInteger* CT_MPr::mutable_rSp()
    {    
    m_has_rSp = true;
    if (!m_rSp)
    {
        m_rSp = new CT_UnSignedInteger();
    }
    return m_rSp;
    }

    const CT_UnSignedInteger& CT_MPr::get_rSp() const
    {    
    if (m_rSp)
    {
        return *m_rSp;
    }
    return CT_UnSignedInteger::default_instance();
    }

    bool CT_MPr::has_cSp() const
    {    
    return m_has_cSp;
    }

    CT_UnSignedInteger* CT_MPr::mutable_cSp()
    {    
    m_has_cSp = true;
    if (!m_cSp)
    {
        m_cSp = new CT_UnSignedInteger();
    }
    return m_cSp;
    }

    const CT_UnSignedInteger& CT_MPr::get_cSp() const
    {    
    if (m_cSp)
    {
        return *m_cSp;
    }
    return CT_UnSignedInteger::default_instance();
    }

    bool CT_MPr::has_cGp() const
    {    
    return m_has_cGp;
    }

    CT_UnSignedInteger* CT_MPr::mutable_cGp()
    {    
    m_has_cGp = true;
    if (!m_cGp)
    {
        m_cGp = new CT_UnSignedInteger();
    }
    return m_cGp;
    }

    const CT_UnSignedInteger& CT_MPr::get_cGp() const
    {    
    if (m_cGp)
    {
        return *m_cGp;
    }
    return CT_UnSignedInteger::default_instance();
    }

    bool CT_MPr::has_mcs() const
    {    
    return m_has_mcs;
    }

    CT_MCS* CT_MPr::mutable_mcs()
    {    
    m_has_mcs = true;
    if (!m_mcs)
    {
        m_mcs = new CT_MCS();
    }
    return m_mcs;
    }

    const CT_MCS& CT_MPr::get_mcs() const
    {    
    if (m_mcs)
    {
        return *m_mcs;
    }
    return CT_MCS::default_instance();
    }

    bool CT_MPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_MPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_MPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_MPr::clear()
    {    
    m_has_baseJc = false;
    
    if (m_baseJc)
    {
        delete m_baseJc;
        m_baseJc = NULL;
    }
    
    
    m_has_plcHide = false;
    
    if (m_plcHide)
    {
        delete m_plcHide;
        m_plcHide = NULL;
    }
    
    
    m_has_rSpRule = false;
    
    if (m_rSpRule)
    {
        delete m_rSpRule;
        m_rSpRule = NULL;
    }
    
    
    m_has_cGpRule = false;
    
    if (m_cGpRule)
    {
        delete m_cGpRule;
        m_cGpRule = NULL;
    }
    
    
    m_has_rSp = false;
    
    if (m_rSp)
    {
        delete m_rSp;
        m_rSp = NULL;
    }
    
    
    m_has_cSp = false;
    
    if (m_cSp)
    {
        delete m_cSp;
        m_cSp = NULL;
    }
    
    
    m_has_cGp = false;
    
    if (m_cGp)
    {
        delete m_cGp;
        m_cGp = NULL;
    }
    
    
    m_has_mcs = false;
    
    if (m_mcs)
    {
        delete m_mcs;
        m_mcs = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_MPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_baseJc)
    {
        m_baseJc->toXmlElem("m:baseJc", "", _outStream);;
    }
    
    if (m_has_plcHide)
    {
        m_plcHide->toXmlElem("m:plcHide", "", _outStream);;
    }
    
    if (m_has_rSpRule)
    {
        m_rSpRule->toXmlElem("m:rSpRule", "", _outStream);;
    }
    
    if (m_has_cGpRule)
    {
        m_cGpRule->toXmlElem("m:cGpRule", "", _outStream);;
    }
    
    if (m_has_rSp)
    {
        m_rSp->toXmlElem("m:rSp", "", _outStream);;
    }
    
    if (m_has_cSp)
    {
        m_cSp->toXmlElem("m:cSp", "", _outStream);;
    }
    
    if (m_has_cGp)
    {
        m_cGp->toXmlElem("m:cGp", "", _outStream);;
    }
    
    if (m_has_mcs)
    {
        m_mcs->toXmlElem("m:mcs", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MPr& CT_MPr::default_instance()
    {    
    if (!CT_MPr::default_instance_)
    {
        CT_MPr::default_instance_ = new CT_MPr();
    }
    return *CT_MPr::default_instance_;
    }


    // CT_MR
    CT_OMathArg* CT_MR::add_e()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMathArg* pNewChild = pChildGroup->mutable_e();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_MR::clear()
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

    void CT_MR::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_e())
            {
                (*iter)->get_e().toXmlElem("m:e", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MR& CT_MR::default_instance()
    {    
    if (!CT_MR::default_instance_)
    {
        CT_MR::default_instance_ = new CT_MR();
    }
    return *CT_MR::default_instance_;
    }


    // CT_M
    bool CT_M::has_mPr() const
    {    
    return m_has_mPr;
    }

    CT_MPr* CT_M::mutable_mPr()
    {    
    m_has_mPr = true;
    if (!m_mPr)
    {
        m_mPr = new CT_MPr();
    }
    return m_mPr;
    }

    const CT_MPr& CT_M::get_mPr() const
    {    
    if (m_mPr)
    {
        return *m_mPr;
    }
    return CT_MPr::default_instance();
    }

    CT_MR* CT_M::add_mr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_MR* pNewChild = pChildGroup->mutable_mr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_M::clear()
    {    
    m_has_mPr = false;
    
    if (m_mPr)
    {
        delete m_mPr;
        m_mPr = NULL;
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

    void CT_M::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_mPr)
    {
        m_mPr->toXmlElem("m:mPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_mr())
            {
                (*iter)->get_mr().toXmlElem("m:mr", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_M& CT_M::default_instance()
    {    
    if (!CT_M::default_instance_)
    {
        CT_M::default_instance_ = new CT_M();
    }
    return *CT_M::default_instance_;
    }


    // CT_NaryPr
    bool CT_NaryPr::has_chr() const
    {    
    return m_has_chr;
    }

    CT_Char* CT_NaryPr::mutable_chr()
    {    
    m_has_chr = true;
    if (!m_chr)
    {
        m_chr = new CT_Char();
    }
    return m_chr;
    }

    const CT_Char& CT_NaryPr::get_chr() const
    {    
    if (m_chr)
    {
        return *m_chr;
    }
    return CT_Char::default_instance();
    }

    bool CT_NaryPr::has_limLoc() const
    {    
    return m_has_limLoc;
    }

    CT_LimLoc* CT_NaryPr::mutable_limLoc()
    {    
    m_has_limLoc = true;
    if (!m_limLoc)
    {
        m_limLoc = new CT_LimLoc();
    }
    return m_limLoc;
    }

    const CT_LimLoc& CT_NaryPr::get_limLoc() const
    {    
    if (m_limLoc)
    {
        return *m_limLoc;
    }
    return CT_LimLoc::default_instance();
    }

    bool CT_NaryPr::has_grow() const
    {    
    return m_has_grow;
    }

    CT_OnOff* CT_NaryPr::mutable_grow()
    {    
    m_has_grow = true;
    if (!m_grow)
    {
        m_grow = new CT_OnOff();
    }
    return m_grow;
    }

    const CT_OnOff& CT_NaryPr::get_grow() const
    {    
    if (m_grow)
    {
        return *m_grow;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_NaryPr::has_subHide() const
    {    
    return m_has_subHide;
    }

    CT_OnOff* CT_NaryPr::mutable_subHide()
    {    
    m_has_subHide = true;
    if (!m_subHide)
    {
        m_subHide = new CT_OnOff();
    }
    return m_subHide;
    }

    const CT_OnOff& CT_NaryPr::get_subHide() const
    {    
    if (m_subHide)
    {
        return *m_subHide;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_NaryPr::has_supHide() const
    {    
    return m_has_supHide;
    }

    CT_OnOff* CT_NaryPr::mutable_supHide()
    {    
    m_has_supHide = true;
    if (!m_supHide)
    {
        m_supHide = new CT_OnOff();
    }
    return m_supHide;
    }

    const CT_OnOff& CT_NaryPr::get_supHide() const
    {    
    if (m_supHide)
    {
        return *m_supHide;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_NaryPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_NaryPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_NaryPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_NaryPr::clear()
    {    
    m_has_chr = false;
    
    if (m_chr)
    {
        delete m_chr;
        m_chr = NULL;
    }
    
    
    m_has_limLoc = false;
    
    if (m_limLoc)
    {
        delete m_limLoc;
        m_limLoc = NULL;
    }
    
    
    m_has_grow = false;
    
    if (m_grow)
    {
        delete m_grow;
        m_grow = NULL;
    }
    
    
    m_has_subHide = false;
    
    if (m_subHide)
    {
        delete m_subHide;
        m_subHide = NULL;
    }
    
    
    m_has_supHide = false;
    
    if (m_supHide)
    {
        delete m_supHide;
        m_supHide = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_NaryPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_chr)
    {
        m_chr->toXmlElem("m:chr", "", _outStream);;
    }
    
    if (m_has_limLoc)
    {
        m_limLoc->toXmlElem("m:limLoc", "", _outStream);;
    }
    
    if (m_has_grow)
    {
        m_grow->toXmlElem("m:grow", "", _outStream);;
    }
    
    if (m_has_subHide)
    {
        m_subHide->toXmlElem("m:subHide", "", _outStream);;
    }
    
    if (m_has_supHide)
    {
        m_supHide->toXmlElem("m:supHide", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_NaryPr& CT_NaryPr::default_instance()
    {    
    if (!CT_NaryPr::default_instance_)
    {
        CT_NaryPr::default_instance_ = new CT_NaryPr();
    }
    return *CT_NaryPr::default_instance_;
    }


    // CT_Nary
    bool CT_Nary::has_naryPr() const
    {    
    return m_has_naryPr;
    }

    CT_NaryPr* CT_Nary::mutable_naryPr()
    {    
    m_has_naryPr = true;
    if (!m_naryPr)
    {
        m_naryPr = new CT_NaryPr();
    }
    return m_naryPr;
    }

    const CT_NaryPr& CT_Nary::get_naryPr() const
    {    
    if (m_naryPr)
    {
        return *m_naryPr;
    }
    return CT_NaryPr::default_instance();
    }

    bool CT_Nary::has_sub() const
    {    
    return m_has_sub;
    }

    CT_OMathArg* CT_Nary::mutable_sub()
    {    
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
    }

    const CT_OMathArg& CT_Nary::get_sub() const
    {    
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_Nary::has_sup() const
    {    
    return m_has_sup;
    }

    CT_OMathArg* CT_Nary::mutable_sup()
    {    
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
    }

    const CT_OMathArg& CT_Nary::get_sup() const
    {    
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_Nary::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Nary::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Nary::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Nary::clear()
    {    
    m_has_naryPr = false;
    
    if (m_naryPr)
    {
        delete m_naryPr;
        m_naryPr = NULL;
    }
    
    
    m_has_sub = false;
    
    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }
    
    
    m_has_sup = false;
    
    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Nary::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_naryPr)
    {
        m_naryPr->toXmlElem("m:naryPr", "", _outStream);;
    }
    
    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);;
    }
    
    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Nary& CT_Nary::default_instance()
    {    
    if (!CT_Nary::default_instance_)
    {
        CT_Nary::default_instance_ = new CT_Nary();
    }
    return *CT_Nary::default_instance_;
    }


    // CT_PhantPr
    bool CT_PhantPr::has_show() const
    {    
    return m_has_show;
    }

    CT_OnOff* CT_PhantPr::mutable_show()
    {    
    m_has_show = true;
    if (!m_show)
    {
        m_show = new CT_OnOff();
    }
    return m_show;
    }

    const CT_OnOff& CT_PhantPr::get_show() const
    {    
    if (m_show)
    {
        return *m_show;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_PhantPr::has_zeroWid() const
    {    
    return m_has_zeroWid;
    }

    CT_OnOff* CT_PhantPr::mutable_zeroWid()
    {    
    m_has_zeroWid = true;
    if (!m_zeroWid)
    {
        m_zeroWid = new CT_OnOff();
    }
    return m_zeroWid;
    }

    const CT_OnOff& CT_PhantPr::get_zeroWid() const
    {    
    if (m_zeroWid)
    {
        return *m_zeroWid;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_PhantPr::has_zeroAsc() const
    {    
    return m_has_zeroAsc;
    }

    CT_OnOff* CT_PhantPr::mutable_zeroAsc()
    {    
    m_has_zeroAsc = true;
    if (!m_zeroAsc)
    {
        m_zeroAsc = new CT_OnOff();
    }
    return m_zeroAsc;
    }

    const CT_OnOff& CT_PhantPr::get_zeroAsc() const
    {    
    if (m_zeroAsc)
    {
        return *m_zeroAsc;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_PhantPr::has_zeroDesc() const
    {    
    return m_has_zeroDesc;
    }

    CT_OnOff* CT_PhantPr::mutable_zeroDesc()
    {    
    m_has_zeroDesc = true;
    if (!m_zeroDesc)
    {
        m_zeroDesc = new CT_OnOff();
    }
    return m_zeroDesc;
    }

    const CT_OnOff& CT_PhantPr::get_zeroDesc() const
    {    
    if (m_zeroDesc)
    {
        return *m_zeroDesc;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_PhantPr::has_transp() const
    {    
    return m_has_transp;
    }

    CT_OnOff* CT_PhantPr::mutable_transp()
    {    
    m_has_transp = true;
    if (!m_transp)
    {
        m_transp = new CT_OnOff();
    }
    return m_transp;
    }

    const CT_OnOff& CT_PhantPr::get_transp() const
    {    
    if (m_transp)
    {
        return *m_transp;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_PhantPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_PhantPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_PhantPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_PhantPr::clear()
    {    
    m_has_show = false;
    
    if (m_show)
    {
        delete m_show;
        m_show = NULL;
    }
    
    
    m_has_zeroWid = false;
    
    if (m_zeroWid)
    {
        delete m_zeroWid;
        m_zeroWid = NULL;
    }
    
    
    m_has_zeroAsc = false;
    
    if (m_zeroAsc)
    {
        delete m_zeroAsc;
        m_zeroAsc = NULL;
    }
    
    
    m_has_zeroDesc = false;
    
    if (m_zeroDesc)
    {
        delete m_zeroDesc;
        m_zeroDesc = NULL;
    }
    
    
    m_has_transp = false;
    
    if (m_transp)
    {
        delete m_transp;
        m_transp = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_PhantPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_show)
    {
        m_show->toXmlElem("m:show", "", _outStream);;
    }
    
    if (m_has_zeroWid)
    {
        m_zeroWid->toXmlElem("m:zeroWid", "", _outStream);;
    }
    
    if (m_has_zeroAsc)
    {
        m_zeroAsc->toXmlElem("m:zeroAsc", "", _outStream);;
    }
    
    if (m_has_zeroDesc)
    {
        m_zeroDesc->toXmlElem("m:zeroDesc", "", _outStream);;
    }
    
    if (m_has_transp)
    {
        m_transp->toXmlElem("m:transp", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PhantPr& CT_PhantPr::default_instance()
    {    
    if (!CT_PhantPr::default_instance_)
    {
        CT_PhantPr::default_instance_ = new CT_PhantPr();
    }
    return *CT_PhantPr::default_instance_;
    }


    // CT_Phant
    bool CT_Phant::has_phantPr() const
    {    
    return m_has_phantPr;
    }

    CT_PhantPr* CT_Phant::mutable_phantPr()
    {    
    m_has_phantPr = true;
    if (!m_phantPr)
    {
        m_phantPr = new CT_PhantPr();
    }
    return m_phantPr;
    }

    const CT_PhantPr& CT_Phant::get_phantPr() const
    {    
    if (m_phantPr)
    {
        return *m_phantPr;
    }
    return CT_PhantPr::default_instance();
    }

    bool CT_Phant::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Phant::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Phant::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Phant::clear()
    {    
    m_has_phantPr = false;
    
    if (m_phantPr)
    {
        delete m_phantPr;
        m_phantPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Phant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_phantPr)
    {
        m_phantPr->toXmlElem("m:phantPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Phant& CT_Phant::default_instance()
    {    
    if (!CT_Phant::default_instance_)
    {
        CT_Phant::default_instance_ = new CT_Phant();
    }
    return *CT_Phant::default_instance_;
    }


    // CT_RadPr
    bool CT_RadPr::has_degHide() const
    {    
    return m_has_degHide;
    }

    CT_OnOff* CT_RadPr::mutable_degHide()
    {    
    m_has_degHide = true;
    if (!m_degHide)
    {
        m_degHide = new CT_OnOff();
    }
    return m_degHide;
    }

    const CT_OnOff& CT_RadPr::get_degHide() const
    {    
    if (m_degHide)
    {
        return *m_degHide;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_RadPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_RadPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_RadPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_RadPr::clear()
    {    
    m_has_degHide = false;
    
    if (m_degHide)
    {
        delete m_degHide;
        m_degHide = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_RadPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_degHide)
    {
        m_degHide->toXmlElem("m:degHide", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_RadPr& CT_RadPr::default_instance()
    {    
    if (!CT_RadPr::default_instance_)
    {
        CT_RadPr::default_instance_ = new CT_RadPr();
    }
    return *CT_RadPr::default_instance_;
    }


    // CT_Rad
    bool CT_Rad::has_radPr() const
    {    
    return m_has_radPr;
    }

    CT_RadPr* CT_Rad::mutable_radPr()
    {    
    m_has_radPr = true;
    if (!m_radPr)
    {
        m_radPr = new CT_RadPr();
    }
    return m_radPr;
    }

    const CT_RadPr& CT_Rad::get_radPr() const
    {    
    if (m_radPr)
    {
        return *m_radPr;
    }
    return CT_RadPr::default_instance();
    }

    bool CT_Rad::has_deg() const
    {    
    return m_has_deg;
    }

    CT_OMathArg* CT_Rad::mutable_deg()
    {    
    m_has_deg = true;
    if (!m_deg)
    {
        m_deg = new CT_OMathArg();
    }
    return m_deg;
    }

    const CT_OMathArg& CT_Rad::get_deg() const
    {    
    if (m_deg)
    {
        return *m_deg;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_Rad::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_Rad::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_Rad::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_Rad::clear()
    {    
    m_has_radPr = false;
    
    if (m_radPr)
    {
        delete m_radPr;
        m_radPr = NULL;
    }
    
    
    m_has_deg = false;
    
    if (m_deg)
    {
        delete m_deg;
        m_deg = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_Rad::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_radPr)
    {
        m_radPr->toXmlElem("m:radPr", "", _outStream);;
    }
    
    if (m_has_deg)
    {
        m_deg->toXmlElem("m:deg", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Rad& CT_Rad::default_instance()
    {    
    if (!CT_Rad::default_instance_)
    {
        CT_Rad::default_instance_ = new CT_Rad();
    }
    return *CT_Rad::default_instance_;
    }


    // CT_SPrePr
    bool CT_SPrePr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_SPrePr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_SPrePr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_SPrePr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_SPrePr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SPrePr& CT_SPrePr::default_instance()
    {    
    if (!CT_SPrePr::default_instance_)
    {
        CT_SPrePr::default_instance_ = new CT_SPrePr();
    }
    return *CT_SPrePr::default_instance_;
    }


    // CT_SPre
    bool CT_SPre::has_sPrePr() const
    {    
    return m_has_sPrePr;
    }

    CT_SPrePr* CT_SPre::mutable_sPrePr()
    {    
    m_has_sPrePr = true;
    if (!m_sPrePr)
    {
        m_sPrePr = new CT_SPrePr();
    }
    return m_sPrePr;
    }

    const CT_SPrePr& CT_SPre::get_sPrePr() const
    {    
    if (m_sPrePr)
    {
        return *m_sPrePr;
    }
    return CT_SPrePr::default_instance();
    }

    bool CT_SPre::has_sub() const
    {    
    return m_has_sub;
    }

    CT_OMathArg* CT_SPre::mutable_sub()
    {    
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
    }

    const CT_OMathArg& CT_SPre::get_sub() const
    {    
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SPre::has_sup() const
    {    
    return m_has_sup;
    }

    CT_OMathArg* CT_SPre::mutable_sup()
    {    
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
    }

    const CT_OMathArg& CT_SPre::get_sup() const
    {    
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SPre::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_SPre::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_SPre::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_SPre::clear()
    {    
    m_has_sPrePr = false;
    
    if (m_sPrePr)
    {
        delete m_sPrePr;
        m_sPrePr = NULL;
    }
    
    
    m_has_sub = false;
    
    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }
    
    
    m_has_sup = false;
    
    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    }

    void CT_SPre::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_sPrePr)
    {
        m_sPrePr->toXmlElem("m:sPrePr", "", _outStream);;
    }
    
    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);;
    }
    
    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SPre& CT_SPre::default_instance()
    {    
    if (!CT_SPre::default_instance_)
    {
        CT_SPre::default_instance_ = new CT_SPre();
    }
    return *CT_SPre::default_instance_;
    }


    // CT_SSubPr
    bool CT_SSubPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_SSubPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_SSubPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_SSubPr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_SSubPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSubPr& CT_SSubPr::default_instance()
    {    
    if (!CT_SSubPr::default_instance_)
    {
        CT_SSubPr::default_instance_ = new CT_SSubPr();
    }
    return *CT_SSubPr::default_instance_;
    }


    // CT_SSub
    bool CT_SSub::has_sSubPr() const
    {    
    return m_has_sSubPr;
    }

    CT_SSubPr* CT_SSub::mutable_sSubPr()
    {    
    m_has_sSubPr = true;
    if (!m_sSubPr)
    {
        m_sSubPr = new CT_SSubPr();
    }
    return m_sSubPr;
    }

    const CT_SSubPr& CT_SSub::get_sSubPr() const
    {    
    if (m_sSubPr)
    {
        return *m_sSubPr;
    }
    return CT_SSubPr::default_instance();
    }

    bool CT_SSub::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_SSub::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_SSub::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SSub::has_sub() const
    {    
    return m_has_sub;
    }

    CT_OMathArg* CT_SSub::mutable_sub()
    {    
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
    }

    const CT_OMathArg& CT_SSub::get_sub() const
    {    
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_SSub::clear()
    {    
    m_has_sSubPr = false;
    
    if (m_sSubPr)
    {
        delete m_sSubPr;
        m_sSubPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    
    m_has_sub = false;
    
    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }
    
    }

    void CT_SSub::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_sSubPr)
    {
        m_sSubPr->toXmlElem("m:sSubPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSub& CT_SSub::default_instance()
    {    
    if (!CT_SSub::default_instance_)
    {
        CT_SSub::default_instance_ = new CT_SSub();
    }
    return *CT_SSub::default_instance_;
    }


    // CT_SSubSupPr
    bool CT_SSubSupPr::has_alnScr() const
    {    
    return m_has_alnScr;
    }

    CT_OnOff* CT_SSubSupPr::mutable_alnScr()
    {    
    m_has_alnScr = true;
    if (!m_alnScr)
    {
        m_alnScr = new CT_OnOff();
    }
    return m_alnScr;
    }

    const CT_OnOff& CT_SSubSupPr::get_alnScr() const
    {    
    if (m_alnScr)
    {
        return *m_alnScr;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_SSubSupPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_SSubSupPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_SSubSupPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_SSubSupPr::clear()
    {    
    m_has_alnScr = false;
    
    if (m_alnScr)
    {
        delete m_alnScr;
        m_alnScr = NULL;
    }
    
    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_SSubSupPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_alnScr)
    {
        m_alnScr->toXmlElem("m:alnScr", "", _outStream);;
    }
    
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSubSupPr& CT_SSubSupPr::default_instance()
    {    
    if (!CT_SSubSupPr::default_instance_)
    {
        CT_SSubSupPr::default_instance_ = new CT_SSubSupPr();
    }
    return *CT_SSubSupPr::default_instance_;
    }


    // CT_SSubSup
    bool CT_SSubSup::has_sSubSupPr() const
    {    
    return m_has_sSubSupPr;
    }

    CT_SSubSupPr* CT_SSubSup::mutable_sSubSupPr()
    {    
    m_has_sSubSupPr = true;
    if (!m_sSubSupPr)
    {
        m_sSubSupPr = new CT_SSubSupPr();
    }
    return m_sSubSupPr;
    }

    const CT_SSubSupPr& CT_SSubSup::get_sSubSupPr() const
    {    
    if (m_sSubSupPr)
    {
        return *m_sSubSupPr;
    }
    return CT_SSubSupPr::default_instance();
    }

    bool CT_SSubSup::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_SSubSup::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_SSubSup::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SSubSup::has_sub() const
    {    
    return m_has_sub;
    }

    CT_OMathArg* CT_SSubSup::mutable_sub()
    {    
    m_has_sub = true;
    if (!m_sub)
    {
        m_sub = new CT_OMathArg();
    }
    return m_sub;
    }

    const CT_OMathArg& CT_SSubSup::get_sub() const
    {    
    if (m_sub)
    {
        return *m_sub;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SSubSup::has_sup() const
    {    
    return m_has_sup;
    }

    CT_OMathArg* CT_SSubSup::mutable_sup()
    {    
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
    }

    const CT_OMathArg& CT_SSubSup::get_sup() const
    {    
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_SSubSup::clear()
    {    
    m_has_sSubSupPr = false;
    
    if (m_sSubSupPr)
    {
        delete m_sSubSupPr;
        m_sSubSupPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    
    m_has_sub = false;
    
    if (m_sub)
    {
        delete m_sub;
        m_sub = NULL;
    }
    
    
    m_has_sup = false;
    
    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }
    
    }

    void CT_SSubSup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_sSubSupPr)
    {
        m_sSubSupPr->toXmlElem("m:sSubSupPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
    if (m_has_sub)
    {
        m_sub->toXmlElem("m:sub", "", _outStream);;
    }
    
    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSubSup& CT_SSubSup::default_instance()
    {    
    if (!CT_SSubSup::default_instance_)
    {
        CT_SSubSup::default_instance_ = new CT_SSubSup();
    }
    return *CT_SSubSup::default_instance_;
    }


    // CT_SSupPr
    bool CT_SSupPr::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_SSupPr::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_SSupPr::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_SSupPr::clear()
    {    
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_SSupPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSupPr& CT_SSupPr::default_instance()
    {    
    if (!CT_SSupPr::default_instance_)
    {
        CT_SSupPr::default_instance_ = new CT_SSupPr();
    }
    return *CT_SSupPr::default_instance_;
    }


    // CT_SSup
    bool CT_SSup::has_sSupPr() const
    {    
    return m_has_sSupPr;
    }

    CT_SSupPr* CT_SSup::mutable_sSupPr()
    {    
    m_has_sSupPr = true;
    if (!m_sSupPr)
    {
        m_sSupPr = new CT_SSupPr();
    }
    return m_sSupPr;
    }

    const CT_SSupPr& CT_SSup::get_sSupPr() const
    {    
    if (m_sSupPr)
    {
        return *m_sSupPr;
    }
    return CT_SSupPr::default_instance();
    }

    bool CT_SSup::has_e() const
    {    
    return m_has_e;
    }

    CT_OMathArg* CT_SSup::mutable_e()
    {    
    m_has_e = true;
    if (!m_e)
    {
        m_e = new CT_OMathArg();
    }
    return m_e;
    }

    const CT_OMathArg& CT_SSup::get_e() const
    {    
    if (m_e)
    {
        return *m_e;
    }
    return CT_OMathArg::default_instance();
    }

    bool CT_SSup::has_sup() const
    {    
    return m_has_sup;
    }

    CT_OMathArg* CT_SSup::mutable_sup()
    {    
    m_has_sup = true;
    if (!m_sup)
    {
        m_sup = new CT_OMathArg();
    }
    return m_sup;
    }

    const CT_OMathArg& CT_SSup::get_sup() const
    {    
    if (m_sup)
    {
        return *m_sup;
    }
    return CT_OMathArg::default_instance();
    }

    void CT_SSup::clear()
    {    
    m_has_sSupPr = false;
    
    if (m_sSupPr)
    {
        delete m_sSupPr;
        m_sSupPr = NULL;
    }
    
    
    m_has_e = false;
    
    if (m_e)
    {
        delete m_e;
        m_e = NULL;
    }
    
    
    m_has_sup = false;
    
    if (m_sup)
    {
        delete m_sup;
        m_sup = NULL;
    }
    
    }

    void CT_SSup::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_sSupPr)
    {
        m_sSupPr->toXmlElem("m:sSupPr", "", _outStream);;
    }
    
    if (m_has_e)
    {
        m_e->toXmlElem("m:e", "", _outStream);;
    }
    
    if (m_has_sup)
    {
        m_sup->toXmlElem("m:sup", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SSup& CT_SSup::default_instance()
    {    
    if (!CT_SSup::default_instance_)
    {
        CT_SSup::default_instance_ = new CT_SSup();
    }
    return *CT_SSup::default_instance_;
    }


    // CT_OMathArgPr
    bool CT_OMathArgPr::has_argSz() const
    {    
    return m_has_argSz;
    }

    CT_Integer2* CT_OMathArgPr::mutable_argSz()
    {    
    m_has_argSz = true;
    if (!m_argSz)
    {
        m_argSz = new CT_Integer2();
    }
    return m_argSz;
    }

    const CT_Integer2& CT_OMathArgPr::get_argSz() const
    {    
    if (m_argSz)
    {
        return *m_argSz;
    }
    return CT_Integer2::default_instance();
    }

    void CT_OMathArgPr::clear()
    {    
    m_has_argSz = false;
    
    if (m_argSz)
    {
        delete m_argSz;
        m_argSz = NULL;
    }
    
    }

    void CT_OMathArgPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_argSz)
    {
        m_argSz->toXmlElem("m:argSz", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMathArgPr& CT_OMathArgPr::default_instance()
    {    
    if (!CT_OMathArgPr::default_instance_)
    {
        CT_OMathArgPr::default_instance_ = new CT_OMathArgPr();
    }
    return *CT_OMathArgPr::default_instance_;
    }


    // CT_OMathArg
    bool CT_OMathArg::has_argPr() const
    {    
    return m_has_argPr;
    }

    CT_OMathArgPr* CT_OMathArg::mutable_argPr()
    {    
    m_has_argPr = true;
    if (!m_argPr)
    {
        m_argPr = new CT_OMathArgPr();
    }
    return m_argPr;
    }

    const CT_OMathArgPr& CT_OMathArg::get_argPr() const
    {    
    if (m_argPr)
    {
        return *m_argPr;
    }
    return CT_OMathArgPr::default_instance();
    }

    CT_Acc* CT_OMathArg::add_acc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Bar* CT_OMathArg::add_bar()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Box* CT_OMathArg::add_box()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_BorderBox* CT_OMathArg::add_borderBox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_D* CT_OMathArg::add_d()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_EqArr* CT_OMathArg::add_eqArr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_F* CT_OMathArg::add_f()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Func* CT_OMathArg::add_func()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupChr* CT_OMathArg::add_groupChr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimLow* CT_OMathArg::add_limLow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimUpp* CT_OMathArg::add_limUpp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_M* CT_OMathArg::add_m()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Nary* CT_OMathArg::add_nary()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Phant* CT_OMathArg::add_phant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rad* CT_OMathArg::add_rad()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SPre* CT_OMathArg::add_sPre()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSub* CT_OMathArg::add_sSub()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSubSup* CT_OMathArg::add_sSubSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSup* CT_OMathArg::add_sSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_R* CT_OMathArg::add_r()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_CustomXmlRun* CT_OMathArg::add_w_customXml()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SimpleField* CT_OMathArg::add_w_fldSimple()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Hyperlink* CT_OMathArg::add_w_hyperlink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SmartTagRun* CT_OMathArg::add_w_smartTag()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SdtRun* CT_OMathArg::add_w_sdt()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_ProofErr* CT_OMathArg::add_w_proofErr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_PermStart* CT_OMathArg::add_w_permStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Perm* CT_OMathArg::add_w_permEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Bookmark* CT_OMathArg::add_w_bookmarkStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMathArg::add_w_bookmarkEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* CT_OMathArg::add_w_moveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMathArg::add_w_moveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* CT_OMathArg::add_w_moveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMathArg::add_w_moveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMathArg::add_w_commentRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMathArg::add_w_commentRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlInsRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMathArg::add_w_customXmlInsRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlDelRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMathArg::add_w_customXmlDelRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlMoveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMathArg::add_w_customXmlMoveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMathArg::add_w_customXmlMoveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMathArg::add_w_customXmlMoveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMathArg::add_w_ins()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMathArg::add_w_del()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMathArg::add_w_moveFrom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMathArg::add_w_moveTo()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMathPara* CT_OMathArg::add_m_oMathPara()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMath* CT_OMathArg::add_m_oMath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    bool CT_OMathArg::has_ctrlPr() const
    {    
    return m_has_ctrlPr;
    }

    CT_CtrlPr* CT_OMathArg::mutable_ctrlPr()
    {    
    m_has_ctrlPr = true;
    if (!m_ctrlPr)
    {
        m_ctrlPr = new CT_CtrlPr();
    }
    return m_ctrlPr;
    }

    const CT_CtrlPr& CT_OMathArg::get_ctrlPr() const
    {    
    if (m_ctrlPr)
    {
        return *m_ctrlPr;
    }
    return CT_CtrlPr::default_instance();
    }

    void CT_OMathArg::clear()
    {    
    m_has_argPr = false;
    
    if (m_argPr)
    {
        delete m_argPr;
        m_argPr = NULL;
    }
    
     
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
     
    m_has_ctrlPr = false;
    
    if (m_ctrlPr)
    {
        delete m_ctrlPr;
        m_ctrlPr = NULL;
    }
    
    }

    void CT_OMathArg::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_argPr)
    {
        m_argPr->toXmlElem("m:argPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }
            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }
            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }
            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }
            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }
            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }
            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }
            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }
            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }
            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }
            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }
            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }
            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }
            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }
            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }
            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }
            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }
            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }
            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }
            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }
            else if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("m:customXml", "", _outStream);
            }
            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("m:fldSimple", "", _outStream);
            }
            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("m:hyperlink", "", _outStream);
            }
            else if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("m:smartTag", "", _outStream);
            }
            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("m:sdt", "", _outStream);
            }
            else if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("m:proofErr", "", _outStream);
            }
            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("m:permStart", "", _outStream);
            }
            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("m:permEnd", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("m:bookmarkStart", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("m:bookmarkEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("m:moveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("m:moveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("m:moveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("m:moveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("m:commentRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("m:commentRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("m:customXmlInsRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("m:customXmlInsRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("m:customXmlDelRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("m:customXmlDelRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("m:customXmlMoveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("m:customXmlMoveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("m:customXmlMoveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("m:customXmlMoveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("m:ins", "", _outStream);
            }
            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("m:del", "", _outStream);
            }
            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("m:moveFrom", "", _outStream);
            }
            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("m:moveTo", "", _outStream);
            }
            else if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }
            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }
        }
    }
     
    if (m_has_ctrlPr)
    {
        m_ctrlPr->toXmlElem("m:ctrlPr", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMathArg& CT_OMathArg::default_instance()
    {    
    if (!CT_OMathArg::default_instance_)
    {
        CT_OMathArg::default_instance_ = new CT_OMathArg();
    }
    return *CT_OMathArg::default_instance_;
    }


    // CT_OMathJc
    void CT_OMathJc::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_OMathJc::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMathJc& CT_OMathJc::default_instance()
    {    
    if (!CT_OMathJc::default_instance_)
    {
        CT_OMathJc::default_instance_ = new CT_OMathJc();
    }
    return *CT_OMathJc::default_instance_;
    }

    bool CT_OMathJc::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_OMathJc::set_val_attr(const ST_Jc& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_Jc(_val_attr);
    }

    const ST_Jc& CT_OMathJc::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_Jc::default_instance();
    }


    // CT_OMathParaPr
    bool CT_OMathParaPr::has_jc() const
    {    
    return m_has_jc;
    }

    CT_OMathJc* CT_OMathParaPr::mutable_jc()
    {    
    m_has_jc = true;
    if (!m_jc)
    {
        m_jc = new CT_OMathJc();
    }
    return m_jc;
    }

    const CT_OMathJc& CT_OMathParaPr::get_jc() const
    {    
    if (m_jc)
    {
        return *m_jc;
    }
    return CT_OMathJc::default_instance();
    }

    void CT_OMathParaPr::clear()
    {    
    m_has_jc = false;
    
    if (m_jc)
    {
        delete m_jc;
        m_jc = NULL;
    }
    
    }

    void CT_OMathParaPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_jc)
    {
        m_jc->toXmlElem("m:jc", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMathParaPr& CT_OMathParaPr::default_instance()
    {    
    if (!CT_OMathParaPr::default_instance_)
    {
        CT_OMathParaPr::default_instance_ = new CT_OMathParaPr();
    }
    return *CT_OMathParaPr::default_instance_;
    }


    // CT_TwipsMeasure
    void CT_TwipsMeasure::clear()
    {    
    m_has_s_val_attr = false;
    
    if (m_s_val_attr)
    {
        delete m_s_val_attr;
        m_s_val_attr = NULL;
    }
    
    }

    void CT_TwipsMeasure::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_val_attr)
    {
        m_s_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_TwipsMeasure& CT_TwipsMeasure::default_instance()
    {    
    if (!CT_TwipsMeasure::default_instance_)
    {
        CT_TwipsMeasure::default_instance_ = new CT_TwipsMeasure();
    }
    return *CT_TwipsMeasure::default_instance_;
    }

    bool CT_TwipsMeasure::has_s_val_attr() const
    {    
    return m_has_s_val_attr;
    }

    void CT_TwipsMeasure::set_s_val_attr(const ns_s::ST_TwipsMeasure& _s_val_attr)
    {    
    m_has_s_val_attr = true;
    m_s_val_attr = new ns_s::ST_TwipsMeasure(_s_val_attr);
    }

    const ns_s::ST_TwipsMeasure& CT_TwipsMeasure::get_s_val_attr() const
    {    
    if (m_s_val_attr)
    {
        return *m_s_val_attr;
    }
    return ns_s::ST_TwipsMeasure::default_instance();
    }


    // CT_BreakBin
    void CT_BreakBin::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_BreakBin::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_BreakBin& CT_BreakBin::default_instance()
    {    
    if (!CT_BreakBin::default_instance_)
    {
        CT_BreakBin::default_instance_ = new CT_BreakBin();
    }
    return *CT_BreakBin::default_instance_;
    }

    bool CT_BreakBin::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_BreakBin::set_val_attr(const ST_BreakBin& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_BreakBin(_val_attr);
    }

    const ST_BreakBin& CT_BreakBin::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BreakBin::default_instance();
    }


    // CT_BreakBinSub
    void CT_BreakBinSub::clear()
    {    
    m_has_val_attr = false;
    
    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }
    
    }

    void CT_BreakBinSub::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("m:val", _outStream);
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_BreakBinSub& CT_BreakBinSub::default_instance()
    {    
    if (!CT_BreakBinSub::default_instance_)
    {
        CT_BreakBinSub::default_instance_ = new CT_BreakBinSub();
    }
    return *CT_BreakBinSub::default_instance_;
    }

    bool CT_BreakBinSub::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_BreakBinSub::set_val_attr(const ST_BreakBinSub& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = new ST_BreakBinSub(_val_attr);
    }

    const ST_BreakBinSub& CT_BreakBinSub::get_val_attr() const
    {    
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_BreakBinSub::default_instance();
    }


    // CT_MathPr
    bool CT_MathPr::has_mathFont() const
    {    
    return m_has_mathFont;
    }

    CT_String* CT_MathPr::mutable_mathFont()
    {    
    m_has_mathFont = true;
    if (!m_mathFont)
    {
        m_mathFont = new CT_String();
    }
    return m_mathFont;
    }

    const CT_String& CT_MathPr::get_mathFont() const
    {    
    if (m_mathFont)
    {
        return *m_mathFont;
    }
    return CT_String::default_instance();
    }

    bool CT_MathPr::has_brkBin() const
    {    
    return m_has_brkBin;
    }

    CT_BreakBin* CT_MathPr::mutable_brkBin()
    {    
    m_has_brkBin = true;
    if (!m_brkBin)
    {
        m_brkBin = new CT_BreakBin();
    }
    return m_brkBin;
    }

    const CT_BreakBin& CT_MathPr::get_brkBin() const
    {    
    if (m_brkBin)
    {
        return *m_brkBin;
    }
    return CT_BreakBin::default_instance();
    }

    bool CT_MathPr::has_brkBinSub() const
    {    
    return m_has_brkBinSub;
    }

    CT_BreakBinSub* CT_MathPr::mutable_brkBinSub()
    {    
    m_has_brkBinSub = true;
    if (!m_brkBinSub)
    {
        m_brkBinSub = new CT_BreakBinSub();
    }
    return m_brkBinSub;
    }

    const CT_BreakBinSub& CT_MathPr::get_brkBinSub() const
    {    
    if (m_brkBinSub)
    {
        return *m_brkBinSub;
    }
    return CT_BreakBinSub::default_instance();
    }

    bool CT_MathPr::has_smallFrac() const
    {    
    return m_has_smallFrac;
    }

    CT_OnOff* CT_MathPr::mutable_smallFrac()
    {    
    m_has_smallFrac = true;
    if (!m_smallFrac)
    {
        m_smallFrac = new CT_OnOff();
    }
    return m_smallFrac;
    }

    const CT_OnOff& CT_MathPr::get_smallFrac() const
    {    
    if (m_smallFrac)
    {
        return *m_smallFrac;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_MathPr::has_dispDef() const
    {    
    return m_has_dispDef;
    }

    CT_OnOff* CT_MathPr::mutable_dispDef()
    {    
    m_has_dispDef = true;
    if (!m_dispDef)
    {
        m_dispDef = new CT_OnOff();
    }
    return m_dispDef;
    }

    const CT_OnOff& CT_MathPr::get_dispDef() const
    {    
    if (m_dispDef)
    {
        return *m_dispDef;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_MathPr::has_lMargin() const
    {    
    return m_has_lMargin;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_lMargin()
    {    
    m_has_lMargin = true;
    if (!m_lMargin)
    {
        m_lMargin = new CT_TwipsMeasure();
    }
    return m_lMargin;
    }

    const CT_TwipsMeasure& CT_MathPr::get_lMargin() const
    {    
    if (m_lMargin)
    {
        return *m_lMargin;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_rMargin() const
    {    
    return m_has_rMargin;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_rMargin()
    {    
    m_has_rMargin = true;
    if (!m_rMargin)
    {
        m_rMargin = new CT_TwipsMeasure();
    }
    return m_rMargin;
    }

    const CT_TwipsMeasure& CT_MathPr::get_rMargin() const
    {    
    if (m_rMargin)
    {
        return *m_rMargin;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_defJc() const
    {    
    return m_has_defJc;
    }

    CT_OMathJc* CT_MathPr::mutable_defJc()
    {    
    m_has_defJc = true;
    if (!m_defJc)
    {
        m_defJc = new CT_OMathJc();
    }
    return m_defJc;
    }

    const CT_OMathJc& CT_MathPr::get_defJc() const
    {    
    if (m_defJc)
    {
        return *m_defJc;
    }
    return CT_OMathJc::default_instance();
    }

    bool CT_MathPr::has_preSp() const
    {    
    return m_has_preSp;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_preSp()
    {    
    m_has_preSp = true;
    if (!m_preSp)
    {
        m_preSp = new CT_TwipsMeasure();
    }
    return m_preSp;
    }

    const CT_TwipsMeasure& CT_MathPr::get_preSp() const
    {    
    if (m_preSp)
    {
        return *m_preSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_postSp() const
    {    
    return m_has_postSp;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_postSp()
    {    
    m_has_postSp = true;
    if (!m_postSp)
    {
        m_postSp = new CT_TwipsMeasure();
    }
    return m_postSp;
    }

    const CT_TwipsMeasure& CT_MathPr::get_postSp() const
    {    
    if (m_postSp)
    {
        return *m_postSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_interSp() const
    {    
    return m_has_interSp;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_interSp()
    {    
    m_has_interSp = true;
    if (!m_interSp)
    {
        m_interSp = new CT_TwipsMeasure();
    }
    return m_interSp;
    }

    const CT_TwipsMeasure& CT_MathPr::get_interSp() const
    {    
    if (m_interSp)
    {
        return *m_interSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_intraSp() const
    {    
    return m_has_intraSp;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_intraSp()
    {    
    m_has_intraSp = true;
    if (!m_intraSp)
    {
        m_intraSp = new CT_TwipsMeasure();
    }
    return m_intraSp;
    }

    const CT_TwipsMeasure& CT_MathPr::get_intraSp() const
    {    
    if (m_intraSp)
    {
        return *m_intraSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_wrapIndent() const
    {    
    return m_has_wrapIndent;
    }

    CT_TwipsMeasure* CT_MathPr::mutable_wrapIndent()
    {    
    
    m_has_wrapRight = false;
    
    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    ;
    
    m_has_wrapIndent = true;
    if (!m_wrapIndent)
    {
        m_wrapIndent = new CT_TwipsMeasure();
    }
    return m_wrapIndent;
    }

    const CT_TwipsMeasure& CT_MathPr::get_wrapIndent() const
    {    
    if (m_wrapIndent)
    {
        return *m_wrapIndent;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool CT_MathPr::has_wrapRight() const
    {    
    return m_has_wrapRight;
    }

    CT_OnOff* CT_MathPr::mutable_wrapRight()
    {    
    
    m_has_wrapIndent = false;
    
    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    ;
    
    m_has_wrapRight = true;
    if (!m_wrapRight)
    {
        m_wrapRight = new CT_OnOff();
    }
    return m_wrapRight;
    }

    const CT_OnOff& CT_MathPr::get_wrapRight() const
    {    
    if (m_wrapRight)
    {
        return *m_wrapRight;
    }
    return CT_OnOff::default_instance();
    }

    bool CT_MathPr::has_intLim() const
    {    
    return m_has_intLim;
    }

    CT_LimLoc* CT_MathPr::mutable_intLim()
    {    
    m_has_intLim = true;
    if (!m_intLim)
    {
        m_intLim = new CT_LimLoc();
    }
    return m_intLim;
    }

    const CT_LimLoc& CT_MathPr::get_intLim() const
    {    
    if (m_intLim)
    {
        return *m_intLim;
    }
    return CT_LimLoc::default_instance();
    }

    bool CT_MathPr::has_naryLim() const
    {    
    return m_has_naryLim;
    }

    CT_LimLoc* CT_MathPr::mutable_naryLim()
    {    
    m_has_naryLim = true;
    if (!m_naryLim)
    {
        m_naryLim = new CT_LimLoc();
    }
    return m_naryLim;
    }

    const CT_LimLoc& CT_MathPr::get_naryLim() const
    {    
    if (m_naryLim)
    {
        return *m_naryLim;
    }
    return CT_LimLoc::default_instance();
    }

    void CT_MathPr::clear()
    {    
    m_has_mathFont = false;
    
    if (m_mathFont)
    {
        delete m_mathFont;
        m_mathFont = NULL;
    }
    
    
    m_has_brkBin = false;
    
    if (m_brkBin)
    {
        delete m_brkBin;
        m_brkBin = NULL;
    }
    
    
    m_has_brkBinSub = false;
    
    if (m_brkBinSub)
    {
        delete m_brkBinSub;
        m_brkBinSub = NULL;
    }
    
    
    m_has_smallFrac = false;
    
    if (m_smallFrac)
    {
        delete m_smallFrac;
        m_smallFrac = NULL;
    }
    
    
    m_has_dispDef = false;
    
    if (m_dispDef)
    {
        delete m_dispDef;
        m_dispDef = NULL;
    }
    
    
    m_has_lMargin = false;
    
    if (m_lMargin)
    {
        delete m_lMargin;
        m_lMargin = NULL;
    }
    
    
    m_has_rMargin = false;
    
    if (m_rMargin)
    {
        delete m_rMargin;
        m_rMargin = NULL;
    }
    
    
    m_has_defJc = false;
    
    if (m_defJc)
    {
        delete m_defJc;
        m_defJc = NULL;
    }
    
    
    m_has_preSp = false;
    
    if (m_preSp)
    {
        delete m_preSp;
        m_preSp = NULL;
    }
    
    
    m_has_postSp = false;
    
    if (m_postSp)
    {
        delete m_postSp;
        m_postSp = NULL;
    }
    
    
    m_has_interSp = false;
    
    if (m_interSp)
    {
        delete m_interSp;
        m_interSp = NULL;
    }
    
    
    m_has_intraSp = false;
    
    if (m_intraSp)
    {
        delete m_intraSp;
        m_intraSp = NULL;
    }
    
     
    m_has_wrapIndent = false;
    
    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    
    
    m_has_wrapRight = false;
    
    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    
     
    m_has_intLim = false;
    
    if (m_intLim)
    {
        delete m_intLim;
        m_intLim = NULL;
    }
    
    
    m_has_naryLim = false;
    
    if (m_naryLim)
    {
        delete m_naryLim;
        m_naryLim = NULL;
    }
    
    }

    void CT_MathPr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_mathFont)
    {
        m_mathFont->toXmlElem("m:mathFont", "", _outStream);;
    }
    
    if (m_has_brkBin)
    {
        m_brkBin->toXmlElem("m:brkBin", "", _outStream);;
    }
    
    if (m_has_brkBinSub)
    {
        m_brkBinSub->toXmlElem("m:brkBinSub", "", _outStream);;
    }
    
    if (m_has_smallFrac)
    {
        m_smallFrac->toXmlElem("m:smallFrac", "", _outStream);;
    }
    
    if (m_has_dispDef)
    {
        m_dispDef->toXmlElem("m:dispDef", "", _outStream);;
    }
    
    if (m_has_lMargin)
    {
        m_lMargin->toXmlElem("m:lMargin", "", _outStream);;
    }
    
    if (m_has_rMargin)
    {
        m_rMargin->toXmlElem("m:rMargin", "", _outStream);;
    }
    
    if (m_has_defJc)
    {
        m_defJc->toXmlElem("m:defJc", "", _outStream);;
    }
    
    if (m_has_preSp)
    {
        m_preSp->toXmlElem("m:preSp", "", _outStream);;
    }
    
    if (m_has_postSp)
    {
        m_postSp->toXmlElem("m:postSp", "", _outStream);;
    }
    
    if (m_has_interSp)
    {
        m_interSp->toXmlElem("m:interSp", "", _outStream);;
    }
    
    if (m_has_intraSp)
    {
        m_intraSp->toXmlElem("m:intraSp", "", _outStream);;
    }
     
    if (m_has_wrapIndent)
    {
        m_wrapIndent->toXmlElem("m:wrapIndent", "", _outStream);;
    }
    
    if (m_has_wrapRight)
    {
        m_wrapRight->toXmlElem("m:wrapRight", "", _outStream);;
    }
     
    if (m_has_intLim)
    {
        m_intLim->toXmlElem("m:intLim", "", _outStream);;
    }
    
    if (m_has_naryLim)
    {
        m_naryLim->toXmlElem("m:naryLim", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_MathPr& CT_MathPr::default_instance()
    {    
    if (!CT_MathPr::default_instance_)
    {
        CT_MathPr::default_instance_ = new CT_MathPr();
    }
    return *CT_MathPr::default_instance_;
    }


    // CT_OMathPara
    bool CT_OMathPara::has_oMathParaPr() const
    {    
    return m_has_oMathParaPr;
    }

    CT_OMathParaPr* CT_OMathPara::mutable_oMathParaPr()
    {    
    m_has_oMathParaPr = true;
    if (!m_oMathParaPr)
    {
        m_oMathParaPr = new CT_OMathParaPr();
    }
    return m_oMathParaPr;
    }

    const CT_OMathParaPr& CT_OMathPara::get_oMathParaPr() const
    {    
    if (m_oMathParaPr)
    {
        return *m_oMathParaPr;
    }
    return CT_OMathParaPr::default_instance();
    }

    CT_OMath* CT_OMathPara::add_oMath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMath* pNewChild = pChildGroup->mutable_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_OMathPara::clear()
    {    
    m_has_oMathParaPr = false;
    
    if (m_oMathParaPr)
    {
        delete m_oMathParaPr;
        m_oMathParaPr = NULL;
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

    void CT_OMathPara::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_oMathParaPr)
    {
        m_oMathParaPr->toXmlElem("m:oMathParaPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_oMath())
            {
                (*iter)->get_oMath().toXmlElem("m:oMath", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMathPara& CT_OMathPara::default_instance()
    {    
    if (!CT_OMathPara::default_instance_)
    {
        CT_OMathPara::default_instance_ = new CT_OMathPara();
    }
    return *CT_OMathPara::default_instance_;
    }


    // CT_OMath
    CT_Acc* CT_OMath::add_acc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Bar* CT_OMath::add_bar()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Box* CT_OMath::add_box()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_BorderBox* CT_OMath::add_borderBox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_D* CT_OMath::add_d()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_EqArr* CT_OMath::add_eqArr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_F* CT_OMath::add_f()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Func* CT_OMath::add_func()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupChr* CT_OMath::add_groupChr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimLow* CT_OMath::add_limLow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimUpp* CT_OMath::add_limUpp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_M* CT_OMath::add_m()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Nary* CT_OMath::add_nary()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Phant* CT_OMath::add_phant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rad* CT_OMath::add_rad()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SPre* CT_OMath::add_sPre()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSub* CT_OMath::add_sSub()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSubSup* CT_OMath::add_sSubSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSup* CT_OMath::add_sSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_R* CT_OMath::add_r()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_CustomXmlRun* CT_OMath::add_w_customXml()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SimpleField* CT_OMath::add_w_fldSimple()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Hyperlink* CT_OMath::add_w_hyperlink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SmartTagRun* CT_OMath::add_w_smartTag()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SdtRun* CT_OMath::add_w_sdt()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_ProofErr* CT_OMath::add_w_proofErr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_PermStart* CT_OMath::add_w_permStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Perm* CT_OMath::add_w_permEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Bookmark* CT_OMath::add_w_bookmarkStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMath::add_w_bookmarkEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* CT_OMath::add_w_moveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMath::add_w_moveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* CT_OMath::add_w_moveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMath::add_w_moveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMath::add_w_commentRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* CT_OMath::add_w_commentRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMath::add_w_customXmlInsRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMath::add_w_customXmlInsRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMath::add_w_customXmlDelRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMath::add_w_customXmlDelRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMath::add_w_customXmlMoveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMath::add_w_customXmlMoveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* CT_OMath::add_w_customXmlMoveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* CT_OMath::add_w_customXmlMoveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMath::add_w_ins()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMath::add_w_del()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMath::add_w_moveFrom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* CT_OMath::add_w_moveTo()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMathPara* CT_OMath::add_m_oMathPara()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMath* CT_OMath::add_m_oMath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_OMath::clear()
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

    void CT_OMath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }
            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }
            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }
            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }
            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }
            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }
            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }
            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }
            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }
            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }
            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }
            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }
            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }
            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }
            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }
            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }
            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }
            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }
            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }
            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }
            else if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("m:customXml", "", _outStream);
            }
            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("m:fldSimple", "", _outStream);
            }
            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("m:hyperlink", "", _outStream);
            }
            else if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("m:smartTag", "", _outStream);
            }
            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("m:sdt", "", _outStream);
            }
            else if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("m:proofErr", "", _outStream);
            }
            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("m:permStart", "", _outStream);
            }
            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("m:permEnd", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("m:bookmarkStart", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("m:bookmarkEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("m:moveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("m:moveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("m:moveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("m:moveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("m:commentRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("m:commentRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("m:customXmlInsRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("m:customXmlInsRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("m:customXmlDelRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("m:customXmlDelRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("m:customXmlMoveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("m:customXmlMoveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("m:customXmlMoveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("m:customXmlMoveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("m:ins", "", _outStream);
            }
            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("m:del", "", _outStream);
            }
            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("m:moveFrom", "", _outStream);
            }
            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("m:moveTo", "", _outStream);
            }
            else if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }
            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_OMath& CT_OMath::default_instance()
    {    
    if (!CT_OMath::default_instance_)
    {
        CT_OMath::default_instance_ = new CT_OMath();
    }
    return *CT_OMath::default_instance_;
    }


    // mathPr_element
    bool mathPr_element::has_mathFont() const
    {    
    return m_has_mathFont;
    }

    CT_String* mathPr_element::mutable_mathFont()
    {    
    m_has_mathFont = true;
    if (!m_mathFont)
    {
        m_mathFont = new CT_String();
    }
    return m_mathFont;
    }

    const CT_String& mathPr_element::get_mathFont() const
    {    
    if (m_mathFont)
    {
        return *m_mathFont;
    }
    return CT_String::default_instance();
    }

    bool mathPr_element::has_brkBin() const
    {    
    return m_has_brkBin;
    }

    CT_BreakBin* mathPr_element::mutable_brkBin()
    {    
    m_has_brkBin = true;
    if (!m_brkBin)
    {
        m_brkBin = new CT_BreakBin();
    }
    return m_brkBin;
    }

    const CT_BreakBin& mathPr_element::get_brkBin() const
    {    
    if (m_brkBin)
    {
        return *m_brkBin;
    }
    return CT_BreakBin::default_instance();
    }

    bool mathPr_element::has_brkBinSub() const
    {    
    return m_has_brkBinSub;
    }

    CT_BreakBinSub* mathPr_element::mutable_brkBinSub()
    {    
    m_has_brkBinSub = true;
    if (!m_brkBinSub)
    {
        m_brkBinSub = new CT_BreakBinSub();
    }
    return m_brkBinSub;
    }

    const CT_BreakBinSub& mathPr_element::get_brkBinSub() const
    {    
    if (m_brkBinSub)
    {
        return *m_brkBinSub;
    }
    return CT_BreakBinSub::default_instance();
    }

    bool mathPr_element::has_smallFrac() const
    {    
    return m_has_smallFrac;
    }

    CT_OnOff* mathPr_element::mutable_smallFrac()
    {    
    m_has_smallFrac = true;
    if (!m_smallFrac)
    {
        m_smallFrac = new CT_OnOff();
    }
    return m_smallFrac;
    }

    const CT_OnOff& mathPr_element::get_smallFrac() const
    {    
    if (m_smallFrac)
    {
        return *m_smallFrac;
    }
    return CT_OnOff::default_instance();
    }

    bool mathPr_element::has_dispDef() const
    {    
    return m_has_dispDef;
    }

    CT_OnOff* mathPr_element::mutable_dispDef()
    {    
    m_has_dispDef = true;
    if (!m_dispDef)
    {
        m_dispDef = new CT_OnOff();
    }
    return m_dispDef;
    }

    const CT_OnOff& mathPr_element::get_dispDef() const
    {    
    if (m_dispDef)
    {
        return *m_dispDef;
    }
    return CT_OnOff::default_instance();
    }

    bool mathPr_element::has_lMargin() const
    {    
    return m_has_lMargin;
    }

    CT_TwipsMeasure* mathPr_element::mutable_lMargin()
    {    
    m_has_lMargin = true;
    if (!m_lMargin)
    {
        m_lMargin = new CT_TwipsMeasure();
    }
    return m_lMargin;
    }

    const CT_TwipsMeasure& mathPr_element::get_lMargin() const
    {    
    if (m_lMargin)
    {
        return *m_lMargin;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_rMargin() const
    {    
    return m_has_rMargin;
    }

    CT_TwipsMeasure* mathPr_element::mutable_rMargin()
    {    
    m_has_rMargin = true;
    if (!m_rMargin)
    {
        m_rMargin = new CT_TwipsMeasure();
    }
    return m_rMargin;
    }

    const CT_TwipsMeasure& mathPr_element::get_rMargin() const
    {    
    if (m_rMargin)
    {
        return *m_rMargin;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_defJc() const
    {    
    return m_has_defJc;
    }

    CT_OMathJc* mathPr_element::mutable_defJc()
    {    
    m_has_defJc = true;
    if (!m_defJc)
    {
        m_defJc = new CT_OMathJc();
    }
    return m_defJc;
    }

    const CT_OMathJc& mathPr_element::get_defJc() const
    {    
    if (m_defJc)
    {
        return *m_defJc;
    }
    return CT_OMathJc::default_instance();
    }

    bool mathPr_element::has_preSp() const
    {    
    return m_has_preSp;
    }

    CT_TwipsMeasure* mathPr_element::mutable_preSp()
    {    
    m_has_preSp = true;
    if (!m_preSp)
    {
        m_preSp = new CT_TwipsMeasure();
    }
    return m_preSp;
    }

    const CT_TwipsMeasure& mathPr_element::get_preSp() const
    {    
    if (m_preSp)
    {
        return *m_preSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_postSp() const
    {    
    return m_has_postSp;
    }

    CT_TwipsMeasure* mathPr_element::mutable_postSp()
    {    
    m_has_postSp = true;
    if (!m_postSp)
    {
        m_postSp = new CT_TwipsMeasure();
    }
    return m_postSp;
    }

    const CT_TwipsMeasure& mathPr_element::get_postSp() const
    {    
    if (m_postSp)
    {
        return *m_postSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_interSp() const
    {    
    return m_has_interSp;
    }

    CT_TwipsMeasure* mathPr_element::mutable_interSp()
    {    
    m_has_interSp = true;
    if (!m_interSp)
    {
        m_interSp = new CT_TwipsMeasure();
    }
    return m_interSp;
    }

    const CT_TwipsMeasure& mathPr_element::get_interSp() const
    {    
    if (m_interSp)
    {
        return *m_interSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_intraSp() const
    {    
    return m_has_intraSp;
    }

    CT_TwipsMeasure* mathPr_element::mutable_intraSp()
    {    
    m_has_intraSp = true;
    if (!m_intraSp)
    {
        m_intraSp = new CT_TwipsMeasure();
    }
    return m_intraSp;
    }

    const CT_TwipsMeasure& mathPr_element::get_intraSp() const
    {    
    if (m_intraSp)
    {
        return *m_intraSp;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_wrapIndent() const
    {    
    return m_has_wrapIndent;
    }

    CT_TwipsMeasure* mathPr_element::mutable_wrapIndent()
    {    
    
    m_has_wrapRight = false;
    
    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    ;
    
    m_has_wrapIndent = true;
    if (!m_wrapIndent)
    {
        m_wrapIndent = new CT_TwipsMeasure();
    }
    return m_wrapIndent;
    }

    const CT_TwipsMeasure& mathPr_element::get_wrapIndent() const
    {    
    if (m_wrapIndent)
    {
        return *m_wrapIndent;
    }
    return CT_TwipsMeasure::default_instance();
    }

    bool mathPr_element::has_wrapRight() const
    {    
    return m_has_wrapRight;
    }

    CT_OnOff* mathPr_element::mutable_wrapRight()
    {    
    
    m_has_wrapIndent = false;
    
    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    ;
    
    m_has_wrapRight = true;
    if (!m_wrapRight)
    {
        m_wrapRight = new CT_OnOff();
    }
    return m_wrapRight;
    }

    const CT_OnOff& mathPr_element::get_wrapRight() const
    {    
    if (m_wrapRight)
    {
        return *m_wrapRight;
    }
    return CT_OnOff::default_instance();
    }

    bool mathPr_element::has_intLim() const
    {    
    return m_has_intLim;
    }

    CT_LimLoc* mathPr_element::mutable_intLim()
    {    
    m_has_intLim = true;
    if (!m_intLim)
    {
        m_intLim = new CT_LimLoc();
    }
    return m_intLim;
    }

    const CT_LimLoc& mathPr_element::get_intLim() const
    {    
    if (m_intLim)
    {
        return *m_intLim;
    }
    return CT_LimLoc::default_instance();
    }

    bool mathPr_element::has_naryLim() const
    {    
    return m_has_naryLim;
    }

    CT_LimLoc* mathPr_element::mutable_naryLim()
    {    
    m_has_naryLim = true;
    if (!m_naryLim)
    {
        m_naryLim = new CT_LimLoc();
    }
    return m_naryLim;
    }

    const CT_LimLoc& mathPr_element::get_naryLim() const
    {    
    if (m_naryLim)
    {
        return *m_naryLim;
    }
    return CT_LimLoc::default_instance();
    }

    void mathPr_element::clear()
    {    
    m_has_mathFont = false;
    
    if (m_mathFont)
    {
        delete m_mathFont;
        m_mathFont = NULL;
    }
    
    
    m_has_brkBin = false;
    
    if (m_brkBin)
    {
        delete m_brkBin;
        m_brkBin = NULL;
    }
    
    
    m_has_brkBinSub = false;
    
    if (m_brkBinSub)
    {
        delete m_brkBinSub;
        m_brkBinSub = NULL;
    }
    
    
    m_has_smallFrac = false;
    
    if (m_smallFrac)
    {
        delete m_smallFrac;
        m_smallFrac = NULL;
    }
    
    
    m_has_dispDef = false;
    
    if (m_dispDef)
    {
        delete m_dispDef;
        m_dispDef = NULL;
    }
    
    
    m_has_lMargin = false;
    
    if (m_lMargin)
    {
        delete m_lMargin;
        m_lMargin = NULL;
    }
    
    
    m_has_rMargin = false;
    
    if (m_rMargin)
    {
        delete m_rMargin;
        m_rMargin = NULL;
    }
    
    
    m_has_defJc = false;
    
    if (m_defJc)
    {
        delete m_defJc;
        m_defJc = NULL;
    }
    
    
    m_has_preSp = false;
    
    if (m_preSp)
    {
        delete m_preSp;
        m_preSp = NULL;
    }
    
    
    m_has_postSp = false;
    
    if (m_postSp)
    {
        delete m_postSp;
        m_postSp = NULL;
    }
    
    
    m_has_interSp = false;
    
    if (m_interSp)
    {
        delete m_interSp;
        m_interSp = NULL;
    }
    
    
    m_has_intraSp = false;
    
    if (m_intraSp)
    {
        delete m_intraSp;
        m_intraSp = NULL;
    }
    
     
    m_has_wrapIndent = false;
    
    if (m_wrapIndent)
    {
        delete m_wrapIndent;
        m_wrapIndent = NULL;
    }
    
    
    m_has_wrapRight = false;
    
    if (m_wrapRight)
    {
        delete m_wrapRight;
        m_wrapRight = NULL;
    }
    
     
    m_has_intLim = false;
    
    if (m_intLim)
    {
        delete m_intLim;
        m_intLim = NULL;
    }
    
    
    m_has_naryLim = false;
    
    if (m_naryLim)
    {
        delete m_naryLim;
        m_naryLim = NULL;
    }
    
    }

    void mathPr_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<m:mathPr";
    
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    if (m_has_mathFont)
    {
        m_mathFont->toXmlElem("m:mathFont", "", _outStream);;
    }
    
    if (m_has_brkBin)
    {
        m_brkBin->toXmlElem("m:brkBin", "", _outStream);;
    }
    
    if (m_has_brkBinSub)
    {
        m_brkBinSub->toXmlElem("m:brkBinSub", "", _outStream);;
    }
    
    if (m_has_smallFrac)
    {
        m_smallFrac->toXmlElem("m:smallFrac", "", _outStream);;
    }
    
    if (m_has_dispDef)
    {
        m_dispDef->toXmlElem("m:dispDef", "", _outStream);;
    }
    
    if (m_has_lMargin)
    {
        m_lMargin->toXmlElem("m:lMargin", "", _outStream);;
    }
    
    if (m_has_rMargin)
    {
        m_rMargin->toXmlElem("m:rMargin", "", _outStream);;
    }
    
    if (m_has_defJc)
    {
        m_defJc->toXmlElem("m:defJc", "", _outStream);;
    }
    
    if (m_has_preSp)
    {
        m_preSp->toXmlElem("m:preSp", "", _outStream);;
    }
    
    if (m_has_postSp)
    {
        m_postSp->toXmlElem("m:postSp", "", _outStream);;
    }
    
    if (m_has_interSp)
    {
        m_interSp->toXmlElem("m:interSp", "", _outStream);;
    }
    
    if (m_has_intraSp)
    {
        m_intraSp->toXmlElem("m:intraSp", "", _outStream);;
    }
     
    if (m_has_wrapIndent)
    {
        m_wrapIndent->toXmlElem("m:wrapIndent", "", _outStream);;
    }
    
    if (m_has_wrapRight)
    {
        m_wrapRight->toXmlElem("m:wrapRight", "", _outStream);;
    }
     
    if (m_has_intLim)
    {
        m_intLim->toXmlElem("m:intLim", "", _outStream);;
    }
    
    if (m_has_naryLim)
    {
        m_naryLim->toXmlElem("m:naryLim", "", _outStream);;
    }
    
    _outStream << "</m:mathPr>";
    }

    const mathPr_element& mathPr_element::default_instance()
    {    
    if (!mathPr_element::default_instance_)
    {
        mathPr_element::default_instance_ = new mathPr_element();
    }
    return *mathPr_element::default_instance_;
    }


    // oMathPara_element
    bool oMathPara_element::has_oMathParaPr() const
    {    
    return m_has_oMathParaPr;
    }

    CT_OMathParaPr* oMathPara_element::mutable_oMathParaPr()
    {    
    m_has_oMathParaPr = true;
    if (!m_oMathParaPr)
    {
        m_oMathParaPr = new CT_OMathParaPr();
    }
    return m_oMathParaPr;
    }

    const CT_OMathParaPr& oMathPara_element::get_oMathParaPr() const
    {    
    if (m_oMathParaPr)
    {
        return *m_oMathParaPr;
    }
    return CT_OMathParaPr::default_instance();
    }

    CT_OMath* oMathPara_element::add_oMath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OMath* pNewChild = pChildGroup->mutable_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void oMathPara_element::clear()
    {    
    m_has_oMathParaPr = false;
    
    if (m_oMathParaPr)
    {
        delete m_oMathParaPr;
        m_oMathParaPr = NULL;
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

    void oMathPara_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<m:oMathPara";
    
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    if (m_has_oMathParaPr)
    {
        m_oMathParaPr->toXmlElem("m:oMathParaPr", "", _outStream);;
    }
     
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_oMath())
            {
                (*iter)->get_oMath().toXmlElem("m:oMath", "", _outStream);
            }
        }
    }
    
    _outStream << "</m:oMathPara>";
    }

    const oMathPara_element& oMathPara_element::default_instance()
    {    
    if (!oMathPara_element::default_instance_)
    {
        oMathPara_element::default_instance_ = new oMathPara_element();
    }
    return *oMathPara_element::default_instance_;
    }


    // oMath_element
    CT_Acc* oMath_element::add_acc()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Acc* pNewChild = pChildGroup->mutable_acc();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Bar* oMath_element::add_bar()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Bar* pNewChild = pChildGroup->mutable_bar();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Box* oMath_element::add_box()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Box* pNewChild = pChildGroup->mutable_box();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_BorderBox* oMath_element::add_borderBox()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_BorderBox* pNewChild = pChildGroup->mutable_borderBox();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_D* oMath_element::add_d()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_D* pNewChild = pChildGroup->mutable_d();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_EqArr* oMath_element::add_eqArr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EqArr* pNewChild = pChildGroup->mutable_eqArr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_F* oMath_element::add_f()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_F* pNewChild = pChildGroup->mutable_f();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Func* oMath_element::add_func()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Func* pNewChild = pChildGroup->mutable_func();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_GroupChr* oMath_element::add_groupChr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupChr* pNewChild = pChildGroup->mutable_groupChr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimLow* oMath_element::add_limLow()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimLow* pNewChild = pChildGroup->mutable_limLow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_LimUpp* oMath_element::add_limUpp()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_LimUpp* pNewChild = pChildGroup->mutable_limUpp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_M* oMath_element::add_m()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_M* pNewChild = pChildGroup->mutable_m();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Nary* oMath_element::add_nary()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Nary* pNewChild = pChildGroup->mutable_nary();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Phant* oMath_element::add_phant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Phant* pNewChild = pChildGroup->mutable_phant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Rad* oMath_element::add_rad()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rad* pNewChild = pChildGroup->mutable_rad();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SPre* oMath_element::add_sPre()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SPre* pNewChild = pChildGroup->mutable_sPre();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSub* oMath_element::add_sSub()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSub* pNewChild = pChildGroup->mutable_sSub();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSubSup* oMath_element::add_sSubSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSubSup* pNewChild = pChildGroup->mutable_sSubSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_SSup* oMath_element::add_sSup()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SSup* pNewChild = pChildGroup->mutable_sSup();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_R* oMath_element::add_r()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_R* pNewChild = pChildGroup->mutable_r();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_CustomXmlRun* oMath_element::add_w_customXml()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_CustomXmlRun* pNewChild = pChildGroup->mutable_w_customXml();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SimpleField* oMath_element::add_w_fldSimple()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SimpleField* pNewChild = pChildGroup->mutable_w_fldSimple();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Hyperlink* oMath_element::add_w_hyperlink()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Hyperlink* pNewChild = pChildGroup->mutable_w_hyperlink();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SmartTagRun* oMath_element::add_w_smartTag()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SmartTagRun* pNewChild = pChildGroup->mutable_w_smartTag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_SdtRun* oMath_element::add_w_sdt()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_SdtRun* pNewChild = pChildGroup->mutable_w_sdt();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_ProofErr* oMath_element::add_w_proofErr()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_ProofErr* pNewChild = pChildGroup->mutable_w_proofErr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_PermStart* oMath_element::add_w_permStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_PermStart* pNewChild = pChildGroup->mutable_w_permStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Perm* oMath_element::add_w_permEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Perm* pNewChild = pChildGroup->mutable_w_permEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Bookmark* oMath_element::add_w_bookmarkStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Bookmark* pNewChild = pChildGroup->mutable_w_bookmarkStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* oMath_element::add_w_bookmarkEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_bookmarkEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* oMath_element::add_w_moveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* oMath_element::add_w_moveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MoveBookmark* oMath_element::add_w_moveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MoveBookmark* pNewChild = pChildGroup->mutable_w_moveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* oMath_element::add_w_moveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_moveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* oMath_element::add_w_commentRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_MarkupRange* oMath_element::add_w_commentRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_MarkupRange* pNewChild = pChildGroup->mutable_w_commentRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* oMath_element::add_w_customXmlInsRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlInsRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* oMath_element::add_w_customXmlInsRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlInsRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* oMath_element::add_w_customXmlDelRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlDelRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* oMath_element::add_w_customXmlDelRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlDelRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* oMath_element::add_w_customXmlMoveFromRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* oMath_element::add_w_customXmlMoveFromRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveFromRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_TrackChange* oMath_element::add_w_customXmlMoveToRangeStart()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_TrackChange* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeStart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_Markup* oMath_element::add_w_customXmlMoveToRangeEnd()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_Markup* pNewChild = pChildGroup->mutable_w_customXmlMoveToRangeEnd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* oMath_element::add_w_ins()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_ins();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* oMath_element::add_w_del()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_del();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* oMath_element::add_w_moveFrom()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveFrom();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_w::CT_RunTrackChange* oMath_element::add_w_moveTo()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_w::CT_RunTrackChange* pNewChild = pChildGroup->mutable_w_moveTo();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMathPara* oMath_element::add_m_oMathPara()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMathPara* pNewChild = pChildGroup->mutable_m_oMathPara();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_m::CT_OMath* oMath_element::add_m_oMath()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_m::CT_OMath* pNewChild = pChildGroup->mutable_m_oMath();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void oMath_element::clear()
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

    void oMath_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<m:oMath";
    
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_acc())
            {
                (*iter)->get_acc().toXmlElem("m:acc", "", _outStream);
            }
            else if ((*iter)->has_bar())
            {
                (*iter)->get_bar().toXmlElem("m:bar", "", _outStream);
            }
            else if ((*iter)->has_box())
            {
                (*iter)->get_box().toXmlElem("m:box", "", _outStream);
            }
            else if ((*iter)->has_borderBox())
            {
                (*iter)->get_borderBox().toXmlElem("m:borderBox", "", _outStream);
            }
            else if ((*iter)->has_d())
            {
                (*iter)->get_d().toXmlElem("m:d", "", _outStream);
            }
            else if ((*iter)->has_eqArr())
            {
                (*iter)->get_eqArr().toXmlElem("m:eqArr", "", _outStream);
            }
            else if ((*iter)->has_f())
            {
                (*iter)->get_f().toXmlElem("m:f", "", _outStream);
            }
            else if ((*iter)->has_func())
            {
                (*iter)->get_func().toXmlElem("m:func", "", _outStream);
            }
            else if ((*iter)->has_groupChr())
            {
                (*iter)->get_groupChr().toXmlElem("m:groupChr", "", _outStream);
            }
            else if ((*iter)->has_limLow())
            {
                (*iter)->get_limLow().toXmlElem("m:limLow", "", _outStream);
            }
            else if ((*iter)->has_limUpp())
            {
                (*iter)->get_limUpp().toXmlElem("m:limUpp", "", _outStream);
            }
            else if ((*iter)->has_m())
            {
                (*iter)->get_m().toXmlElem("m:m", "", _outStream);
            }
            else if ((*iter)->has_nary())
            {
                (*iter)->get_nary().toXmlElem("m:nary", "", _outStream);
            }
            else if ((*iter)->has_phant())
            {
                (*iter)->get_phant().toXmlElem("m:phant", "", _outStream);
            }
            else if ((*iter)->has_rad())
            {
                (*iter)->get_rad().toXmlElem("m:rad", "", _outStream);
            }
            else if ((*iter)->has_sPre())
            {
                (*iter)->get_sPre().toXmlElem("m:sPre", "", _outStream);
            }
            else if ((*iter)->has_sSub())
            {
                (*iter)->get_sSub().toXmlElem("m:sSub", "", _outStream);
            }
            else if ((*iter)->has_sSubSup())
            {
                (*iter)->get_sSubSup().toXmlElem("m:sSubSup", "", _outStream);
            }
            else if ((*iter)->has_sSup())
            {
                (*iter)->get_sSup().toXmlElem("m:sSup", "", _outStream);
            }
            else if ((*iter)->has_r())
            {
                (*iter)->get_r().toXmlElem("m:r", "", _outStream);
            }
            else if ((*iter)->has_w_customXml())
            {
                (*iter)->get_w_customXml().toXmlElem("m:customXml", "", _outStream);
            }
            else if ((*iter)->has_w_fldSimple())
            {
                (*iter)->get_w_fldSimple().toXmlElem("m:fldSimple", "", _outStream);
            }
            else if ((*iter)->has_w_hyperlink())
            {
                (*iter)->get_w_hyperlink().toXmlElem("m:hyperlink", "", _outStream);
            }
            else if ((*iter)->has_w_smartTag())
            {
                (*iter)->get_w_smartTag().toXmlElem("m:smartTag", "", _outStream);
            }
            else if ((*iter)->has_w_sdt())
            {
                (*iter)->get_w_sdt().toXmlElem("m:sdt", "", _outStream);
            }
            else if ((*iter)->has_w_proofErr())
            {
                (*iter)->get_w_proofErr().toXmlElem("m:proofErr", "", _outStream);
            }
            else if ((*iter)->has_w_permStart())
            {
                (*iter)->get_w_permStart().toXmlElem("m:permStart", "", _outStream);
            }
            else if ((*iter)->has_w_permEnd())
            {
                (*iter)->get_w_permEnd().toXmlElem("m:permEnd", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkStart())
            {
                (*iter)->get_w_bookmarkStart().toXmlElem("m:bookmarkStart", "", _outStream);
            }
            else if ((*iter)->has_w_bookmarkEnd())
            {
                (*iter)->get_w_bookmarkEnd().toXmlElem("m:bookmarkEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeStart())
            {
                (*iter)->get_w_moveFromRangeStart().toXmlElem("m:moveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveFromRangeEnd())
            {
                (*iter)->get_w_moveFromRangeEnd().toXmlElem("m:moveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeStart())
            {
                (*iter)->get_w_moveToRangeStart().toXmlElem("m:moveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_moveToRangeEnd())
            {
                (*iter)->get_w_moveToRangeEnd().toXmlElem("m:moveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeStart())
            {
                (*iter)->get_w_commentRangeStart().toXmlElem("m:commentRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_commentRangeEnd())
            {
                (*iter)->get_w_commentRangeEnd().toXmlElem("m:commentRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeStart())
            {
                (*iter)->get_w_customXmlInsRangeStart().toXmlElem("m:customXmlInsRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlInsRangeEnd())
            {
                (*iter)->get_w_customXmlInsRangeEnd().toXmlElem("m:customXmlInsRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeStart())
            {
                (*iter)->get_w_customXmlDelRangeStart().toXmlElem("m:customXmlDelRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlDelRangeEnd())
            {
                (*iter)->get_w_customXmlDelRangeEnd().toXmlElem("m:customXmlDelRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeStart())
            {
                (*iter)->get_w_customXmlMoveFromRangeStart().toXmlElem("m:customXmlMoveFromRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveFromRangeEnd())
            {
                (*iter)->get_w_customXmlMoveFromRangeEnd().toXmlElem("m:customXmlMoveFromRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeStart())
            {
                (*iter)->get_w_customXmlMoveToRangeStart().toXmlElem("m:customXmlMoveToRangeStart", "", _outStream);
            }
            else if ((*iter)->has_w_customXmlMoveToRangeEnd())
            {
                (*iter)->get_w_customXmlMoveToRangeEnd().toXmlElem("m:customXmlMoveToRangeEnd", "", _outStream);
            }
            else if ((*iter)->has_w_ins())
            {
                (*iter)->get_w_ins().toXmlElem("m:ins", "", _outStream);
            }
            else if ((*iter)->has_w_del())
            {
                (*iter)->get_w_del().toXmlElem("m:del", "", _outStream);
            }
            else if ((*iter)->has_w_moveFrom())
            {
                (*iter)->get_w_moveFrom().toXmlElem("m:moveFrom", "", _outStream);
            }
            else if ((*iter)->has_w_moveTo())
            {
                (*iter)->get_w_moveTo().toXmlElem("m:moveTo", "", _outStream);
            }
            else if ((*iter)->has_m_oMathPara())
            {
                (*iter)->get_m_oMathPara().toXmlElem("m:oMathPara", "", _outStream);
            }
            else if ((*iter)->has_m_oMath())
            {
                (*iter)->get_m_oMath().toXmlElem("m:oMath", "", _outStream);
            }
        }
    }
    
    _outStream << "</m:oMath>";
    }

    const oMath_element& oMath_element::default_instance()
    {    
    if (!oMath_element::default_instance_)
    {
        oMath_element::default_instance_ = new oMath_element();
    }
    return *oMath_element::default_instance_;
    }

}