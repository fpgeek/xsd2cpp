#ifndef vml-wordprocessingDrawing_xsd 
#define vml-wordprocessingDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_w10{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_BorderType : public XSD::SimpleType{
    public:
        ST_BorderType();
        ST_BorderType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BorderType& default_instance() const;
        enum Type{
            _none_ = 1,
            _single_,
            _thick_,
            _double_,
            _hairline_,
            _dot_,
            _dash_,
            _dotDash_,
            _dashDotDot_,
            _triple_,
            _thinThickSmall_,
            _thickThinSmall_,
            _thickBetweenThinSmall_,
            _thinThick_,
            _thickThin_,
            _thickBetweenThin_,
            _thinThickLarge_,
            _thickThinLarge_,
            _thickBetweenThinLarge_,
            _wave_,
            _doubleWave_,
            _dashedSmall_,
            _dashDotStroked_,
            _threeDEmboss_,
            _threeDEngrave_,
            _HTMLOutset_,
            _HTMLInset_
        }

    private:
        static const string TypeStrList [];
        static ST_BorderType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BorderShadow : public XSD::SimpleType{
    public:
        ST_BorderShadow();
        ST_BorderShadow(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BorderShadow& default_instance() const;
        enum Type{
            _t_ = 1,
            _true_,
            _f_,
            _false_
        }

    private:
        static const string TypeStrList [];
        static ST_BorderShadow* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WrapType : public XSD::SimpleType{
    public:
        ST_WrapType();
        ST_WrapType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WrapType& default_instance() const;
        enum Type{
            _topAndBottom_ = 1,
            _square_,
            _none_,
            _tight_,
            _through_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WrapSide : public XSD::SimpleType{
    public:
        ST_WrapSide();
        ST_WrapSide(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WrapSide& default_instance() const;
        enum Type{
            _both_ = 1,
            _left_,
            _right_,
            _largest_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapSide* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HorizontalAnchor : public XSD::SimpleType{
    public:
        ST_HorizontalAnchor();
        ST_HorizontalAnchor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HorizontalAnchor& default_instance() const;
        enum Type{
            _margin_ = 1,
            _page_,
            _text_,
            _char_
        }

    private:
        static const string TypeStrList [];
        static ST_HorizontalAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_VerticalAnchor : public XSD::SimpleType{
    public:
        ST_VerticalAnchor();
        ST_VerticalAnchor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VerticalAnchor& default_instance() const;
        enum Type{
            _margin_ = 1,
            _page_,
            _text_,
            _line_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Border : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Border& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr );
        const ST_BorderType& type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const positiveInteger& _width_attr );
        const positiveInteger& width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr );
        const ST_BorderShadow& shadow_attr() const;

    private:
        static CT_Border* default_instance_ ;
        bool m_has_type_attr ;
        ST_BorderType* m_type_attr ;
        bool m_has_width_attr ;
        positiveInteger m_width_attr ;
        bool m_has_shadow_attr ;
        ST_BorderShadow* m_shadow_attr ;

    }

    class CT_Wrap : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Wrap& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_WrapType& _type_attr );
        const ST_WrapType& type_attr() const;
        bool has_side_attr() const;
        void set_side_attr(const ST_WrapSide& _side_attr );
        const ST_WrapSide& side_attr() const;
        bool has_anchorx_attr() const;
        void set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr );
        const ST_HorizontalAnchor& anchorx_attr() const;
        bool has_anchory_attr() const;
        void set_anchory_attr(const ST_VerticalAnchor& _anchory_attr );
        const ST_VerticalAnchor& anchory_attr() const;

    private:
        static CT_Wrap* default_instance_ ;
        bool m_has_type_attr ;
        ST_WrapType* m_type_attr ;
        bool m_has_side_attr ;
        ST_WrapSide* m_side_attr ;
        bool m_has_anchorx_attr ;
        ST_HorizontalAnchor* m_anchorx_attr ;
        bool m_has_anchory_attr ;
        ST_VerticalAnchor* m_anchory_attr ;

    }

    class CT_AnchorLock : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnchorLock& default_instance() const;

    private:
        static CT_AnchorLock* default_instance_ ;

    }

    class bordertop : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderleft : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderright : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class borderbottom : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class wrap : public CT_Wrap : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class anchorlock : public CT_AnchorLock : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}