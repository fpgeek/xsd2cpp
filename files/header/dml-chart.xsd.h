#ifndef dml-chart_xsd 
#define dml-chart_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "dml-chartDrawing_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_d{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_LayoutTarget : public XSD::SimpleType{
    public:
        ST_LayoutTarget();
        ST_LayoutTarget(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LayoutTarget& default_instance() const;
        enum Type{
            _inner_ = 1,
            _outer_
        }

    private:
        static const string TypeStrList [];
        static ST_LayoutTarget* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LayoutMode : public XSD::SimpleType{
    public:
        ST_LayoutMode();
        ST_LayoutMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LayoutMode& default_instance() const;
        enum Type{
            _edge_ = 1,
            _factor_
        }

    private:
        static const string TypeStrList [];
        static ST_LayoutMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RotX : public XSD::SimpleType{
    public:
        ST_RotX();
        ST_RotX(const XSD::byte& _byte );
        bool has_byte() const;
        void set_byte(const byte& _byte );
        const byte& byte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RotX& default_instance() const;

    private:
        static ST_RotX* default_instance_ ;
        bool m_has_byte ;
        byte m_byte ;

    }

    class ST_HPercent : public XSD::SimpleType{
    public:
        bool has_ST_HPercentWithSymbol() const;
        ST_HPercentWithSymbol* mutable_ST_HPercentWithSymbol();
        const ST_HPercentWithSymbol& ST_HPercentWithSymbol() const;
        bool has_ST_HPercentUShort() const;
        ST_HPercentUShort* mutable_ST_HPercentUShort();
        const ST_HPercentUShort& ST_HPercentUShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HPercent& default_instance() const;

    private:
        void clear_ST_HPercentWithSymbol();
        void clear_ST_HPercentUShort();
        bool m_has_ST_HPercentWithSymbol ;
        ST_HPercentWithSymbol* m_ST_HPercentWithSymbol ;
        bool m_has_ST_HPercentUShort ;
        ST_HPercentUShort* m_ST_HPercentUShort ;
        static ST_HPercent* default_instance_ ;

    }

    class ST_HPercentWithSymbol : public XSD::SimpleType{
    public:
        ST_HPercentWithSymbol();
        ST_HPercentWithSymbol(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HPercentWithSymbol& default_instance() const;

    private:
        static ST_HPercentWithSymbol* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HPercentUShort : public XSD::SimpleType{
    public:
        ST_HPercentUShort();
        ST_HPercentUShort(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HPercentUShort& default_instance() const;

    private:
        static ST_HPercentUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_RotY : public XSD::SimpleType{
    public:
        ST_RotY();
        ST_RotY(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RotY& default_instance() const;

    private:
        static ST_RotY* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_DepthPercent : public XSD::SimpleType{
    public:
        bool has_ST_DepthPercentWithSymbol() const;
        ST_DepthPercentWithSymbol* mutable_ST_DepthPercentWithSymbol();
        const ST_DepthPercentWithSymbol& ST_DepthPercentWithSymbol() const;
        bool has_ST_DepthPercentUShort() const;
        ST_DepthPercentUShort* mutable_ST_DepthPercentUShort();
        const ST_DepthPercentUShort& ST_DepthPercentUShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DepthPercent& default_instance() const;

    private:
        void clear_ST_DepthPercentWithSymbol();
        void clear_ST_DepthPercentUShort();
        bool m_has_ST_DepthPercentWithSymbol ;
        ST_DepthPercentWithSymbol* m_ST_DepthPercentWithSymbol ;
        bool m_has_ST_DepthPercentUShort ;
        ST_DepthPercentUShort* m_ST_DepthPercentUShort ;
        static ST_DepthPercent* default_instance_ ;

    }

    class ST_DepthPercentWithSymbol : public XSD::SimpleType{
    public:
        ST_DepthPercentWithSymbol();
        ST_DepthPercentWithSymbol(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DepthPercentWithSymbol& default_instance() const;

    private:
        static ST_DepthPercentWithSymbol* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_DepthPercentUShort : public XSD::SimpleType{
    public:
        ST_DepthPercentUShort();
        ST_DepthPercentUShort(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DepthPercentUShort& default_instance() const;

    private:
        static ST_DepthPercentUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_Perspective : public XSD::SimpleType{
    public:
        ST_Perspective();
        ST_Perspective(const XSD::unsignedByte& _unsignedByte );
        bool has_unsignedByte() const;
        void set_unsignedByte(const unsignedByte& _unsignedByte );
        const unsignedByte& unsignedByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Perspective& default_instance() const;

    private:
        static ST_Perspective* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_Thickness : public XSD::SimpleType{
    public:
        bool has_ST_ThicknessPercent() const;
        ST_ThicknessPercent* mutable_ST_ThicknessPercent();
        const ST_ThicknessPercent& ST_ThicknessPercent() const;
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Thickness& default_instance() const;

    private:
        void clear_ST_ThicknessPercent();
        void clear_unsignedInt();
        bool m_has_ST_ThicknessPercent ;
        ST_ThicknessPercent* m_ST_ThicknessPercent ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;
        static ST_Thickness* default_instance_ ;

    }

    class ST_ThicknessPercent : public XSD::SimpleType{
    public:
        ST_ThicknessPercent();
        ST_ThicknessPercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ThicknessPercent& default_instance() const;

    private:
        static ST_ThicknessPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_GapAmount : public XSD::SimpleType{
    public:
        bool has_ST_GapAmountPercent() const;
        ST_GapAmountPercent* mutable_ST_GapAmountPercent();
        const ST_GapAmountPercent& ST_GapAmountPercent() const;
        bool has_ST_GapAmountUShort() const;
        ST_GapAmountUShort* mutable_ST_GapAmountUShort();
        const ST_GapAmountUShort& ST_GapAmountUShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GapAmount& default_instance() const;

    private:
        void clear_ST_GapAmountPercent();
        void clear_ST_GapAmountUShort();
        bool m_has_ST_GapAmountPercent ;
        ST_GapAmountPercent* m_ST_GapAmountPercent ;
        bool m_has_ST_GapAmountUShort ;
        ST_GapAmountUShort* m_ST_GapAmountUShort ;
        static ST_GapAmount* default_instance_ ;

    }

    class ST_GapAmountPercent : public XSD::SimpleType{
    public:
        ST_GapAmountPercent();
        ST_GapAmountPercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GapAmountPercent& default_instance() const;

    private:
        static ST_GapAmountPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_GapAmountUShort : public XSD::SimpleType{
    public:
        ST_GapAmountUShort();
        ST_GapAmountUShort(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GapAmountUShort& default_instance() const;

    private:
        static ST_GapAmountUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_Overlap : public XSD::SimpleType{
    public:
        bool has_ST_OverlapPercent() const;
        ST_OverlapPercent* mutable_ST_OverlapPercent();
        const ST_OverlapPercent& ST_OverlapPercent() const;
        bool has_ST_OverlapByte() const;
        ST_OverlapByte* mutable_ST_OverlapByte();
        const ST_OverlapByte& ST_OverlapByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Overlap& default_instance() const;

    private:
        void clear_ST_OverlapPercent();
        void clear_ST_OverlapByte();
        bool m_has_ST_OverlapPercent ;
        ST_OverlapPercent* m_ST_OverlapPercent ;
        bool m_has_ST_OverlapByte ;
        ST_OverlapByte* m_ST_OverlapByte ;
        static ST_Overlap* default_instance_ ;

    }

    class ST_OverlapPercent : public XSD::SimpleType{
    public:
        ST_OverlapPercent();
        ST_OverlapPercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OverlapPercent& default_instance() const;

    private:
        static ST_OverlapPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_OverlapByte : public XSD::SimpleType{
    public:
        ST_OverlapByte();
        ST_OverlapByte(const XSD::byte& _byte );
        bool has_byte() const;
        void set_byte(const byte& _byte );
        const byte& byte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OverlapByte& default_instance() const;

    private:
        static ST_OverlapByte* default_instance_ ;
        bool m_has_byte ;
        byte m_byte ;

    }

    class ST_BubbleScale : public XSD::SimpleType{
    public:
        bool has_ST_BubbleScalePercent() const;
        ST_BubbleScalePercent* mutable_ST_BubbleScalePercent();
        const ST_BubbleScalePercent& ST_BubbleScalePercent() const;
        bool has_ST_BubbleScaleUInt() const;
        ST_BubbleScaleUInt* mutable_ST_BubbleScaleUInt();
        const ST_BubbleScaleUInt& ST_BubbleScaleUInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BubbleScale& default_instance() const;

    private:
        void clear_ST_BubbleScalePercent();
        void clear_ST_BubbleScaleUInt();
        bool m_has_ST_BubbleScalePercent ;
        ST_BubbleScalePercent* m_ST_BubbleScalePercent ;
        bool m_has_ST_BubbleScaleUInt ;
        ST_BubbleScaleUInt* m_ST_BubbleScaleUInt ;
        static ST_BubbleScale* default_instance_ ;

    }

    class ST_BubbleScalePercent : public XSD::SimpleType{
    public:
        ST_BubbleScalePercent();
        ST_BubbleScalePercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BubbleScalePercent& default_instance() const;

    private:
        static ST_BubbleScalePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_BubbleScaleUInt : public XSD::SimpleType{
    public:
        ST_BubbleScaleUInt();
        ST_BubbleScaleUInt(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BubbleScaleUInt& default_instance() const;

    private:
        static ST_BubbleScaleUInt* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SizeRepresents : public XSD::SimpleType{
    public:
        ST_SizeRepresents();
        ST_SizeRepresents(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SizeRepresents& default_instance() const;
        enum Type{
            _area_ = 1,
            _w_
        }

    private:
        static const string TypeStrList [];
        static ST_SizeRepresents* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FirstSliceAng : public XSD::SimpleType{
    public:
        ST_FirstSliceAng();
        ST_FirstSliceAng(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FirstSliceAng& default_instance() const;

    private:
        static ST_FirstSliceAng* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_HoleSize : public XSD::SimpleType{
    public:
        bool has_ST_HoleSizePercent() const;
        ST_HoleSizePercent* mutable_ST_HoleSizePercent();
        const ST_HoleSizePercent& ST_HoleSizePercent() const;
        bool has_ST_HoleSizeUByte() const;
        ST_HoleSizeUByte* mutable_ST_HoleSizeUByte();
        const ST_HoleSizeUByte& ST_HoleSizeUByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HoleSize& default_instance() const;

    private:
        void clear_ST_HoleSizePercent();
        void clear_ST_HoleSizeUByte();
        bool m_has_ST_HoleSizePercent ;
        ST_HoleSizePercent* m_ST_HoleSizePercent ;
        bool m_has_ST_HoleSizeUByte ;
        ST_HoleSizeUByte* m_ST_HoleSizeUByte ;
        static ST_HoleSize* default_instance_ ;

    }

    class ST_HoleSizePercent : public XSD::SimpleType{
    public:
        ST_HoleSizePercent();
        ST_HoleSizePercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HoleSizePercent& default_instance() const;

    private:
        static ST_HoleSizePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HoleSizeUByte : public XSD::SimpleType{
    public:
        ST_HoleSizeUByte();
        ST_HoleSizeUByte(const XSD::unsignedByte& _unsignedByte );
        bool has_unsignedByte() const;
        void set_unsignedByte(const unsignedByte& _unsignedByte );
        const unsignedByte& unsignedByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HoleSizeUByte& default_instance() const;

    private:
        static ST_HoleSizeUByte* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_SplitType : public XSD::SimpleType{
    public:
        ST_SplitType();
        ST_SplitType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SplitType& default_instance() const;
        enum Type{
            _auto_ = 1,
            _cust_,
            _percent_,
            _pos_,
            _val_
        }

    private:
        static const string TypeStrList [];
        static ST_SplitType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SecondPieSize : public XSD::SimpleType{
    public:
        bool has_ST_SecondPieSizePercent() const;
        ST_SecondPieSizePercent* mutable_ST_SecondPieSizePercent();
        const ST_SecondPieSizePercent& ST_SecondPieSizePercent() const;
        bool has_ST_SecondPieSizeUShort() const;
        ST_SecondPieSizeUShort* mutable_ST_SecondPieSizeUShort();
        const ST_SecondPieSizeUShort& ST_SecondPieSizeUShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SecondPieSize& default_instance() const;

    private:
        void clear_ST_SecondPieSizePercent();
        void clear_ST_SecondPieSizeUShort();
        bool m_has_ST_SecondPieSizePercent ;
        ST_SecondPieSizePercent* m_ST_SecondPieSizePercent ;
        bool m_has_ST_SecondPieSizeUShort ;
        ST_SecondPieSizeUShort* m_ST_SecondPieSizeUShort ;
        static ST_SecondPieSize* default_instance_ ;

    }

    class ST_SecondPieSizePercent : public XSD::SimpleType{
    public:
        ST_SecondPieSizePercent();
        ST_SecondPieSizePercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SecondPieSizePercent& default_instance() const;

    private:
        static ST_SecondPieSizePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_SecondPieSizeUShort : public XSD::SimpleType{
    public:
        ST_SecondPieSizeUShort();
        ST_SecondPieSizeUShort(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SecondPieSizeUShort& default_instance() const;

    private:
        static ST_SecondPieSizeUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_LblAlgn : public XSD::SimpleType{
    public:
        ST_LblAlgn();
        ST_LblAlgn(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LblAlgn& default_instance() const;
        enum Type{
            _ctr_ = 1,
            _l_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_LblAlgn* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DLblPos : public XSD::SimpleType{
    public:
        ST_DLblPos();
        ST_DLblPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DLblPos& default_instance() const;
        enum Type{
            _bestFit_ = 1,
            _b_,
            _ctr_,
            _inBase_,
            _inEnd_,
            _l_,
            _outEnd_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_DLblPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MarkerStyle : public XSD::SimpleType{
    public:
        ST_MarkerStyle();
        ST_MarkerStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MarkerStyle& default_instance() const;
        enum Type{
            _circle_ = 1,
            _dash_,
            _diamond_,
            _dot_,
            _none_,
            _picture_,
            _plus_,
            _square_,
            _star_,
            _triangle_,
            _x_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_MarkerStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MarkerSize : public XSD::SimpleType{
    public:
        ST_MarkerSize();
        ST_MarkerSize(const XSD::unsignedByte& _unsignedByte );
        bool has_unsignedByte() const;
        void set_unsignedByte(const unsignedByte& _unsignedByte );
        const unsignedByte& unsignedByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MarkerSize& default_instance() const;

    private:
        static ST_MarkerSize* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_TrendlineType : public XSD::SimpleType{
    public:
        ST_TrendlineType();
        ST_TrendlineType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TrendlineType& default_instance() const;
        enum Type{
            _exp_ = 1,
            _linear_,
            _log_,
            _movingAvg_,
            _poly_,
            _power_
        }

    private:
        static const string TypeStrList [];
        static ST_TrendlineType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Order : public XSD::SimpleType{
    public:
        ST_Order();
        ST_Order(const XSD::unsignedByte& _unsignedByte );
        bool has_unsignedByte() const;
        void set_unsignedByte(const unsignedByte& _unsignedByte );
        const unsignedByte& unsignedByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Order& default_instance() const;

    private:
        static ST_Order* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_Period : public XSD::SimpleType{
    public:
        ST_Period();
        ST_Period(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Period& default_instance() const;

    private:
        static ST_Period* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_ErrDir : public XSD::SimpleType{
    public:
        ST_ErrDir();
        ST_ErrDir(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ErrDir& default_instance() const;
        enum Type{
            _x_ = 1,
            _y_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrDir* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ErrBarType : public XSD::SimpleType{
    public:
        ST_ErrBarType();
        ST_ErrBarType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ErrBarType& default_instance() const;
        enum Type{
            _both_ = 1,
            _minus_,
            _plus_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrBarType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ErrValType : public XSD::SimpleType{
    public:
        ST_ErrValType();
        ST_ErrValType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ErrValType& default_instance() const;
        enum Type{
            _cust_ = 1,
            _fixedVal_,
            _percentage_,
            _stdDev_,
            _stdErr_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrValType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Grouping : public XSD::SimpleType{
    public:
        ST_Grouping();
        ST_Grouping(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Grouping& default_instance() const;
        enum Type{
            _percentStacked_ = 1,
            _standard_,
            _stacked_
        }

    private:
        static const string TypeStrList [];
        static ST_Grouping* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ScatterStyle : public XSD::SimpleType{
    public:
        ST_ScatterStyle();
        ST_ScatterStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ScatterStyle& default_instance() const;
        enum Type{
            _none_ = 1,
            _line_,
            _lineMarker_,
            _marker_,
            _smooth_,
            _smoothMarker_
        }

    private:
        static const string TypeStrList [];
        static ST_ScatterStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RadarStyle : public XSD::SimpleType{
    public:
        ST_RadarStyle();
        ST_RadarStyle(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RadarStyle& default_instance() const;
        enum Type{
            _standard_ = 1,
            _marker_,
            _filled_
        }

    private:
        static const string TypeStrList [];
        static ST_RadarStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BarGrouping : public XSD::SimpleType{
    public:
        ST_BarGrouping();
        ST_BarGrouping(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BarGrouping& default_instance() const;
        enum Type{
            _percentStacked_ = 1,
            _clustered_,
            _standard_,
            _stacked_
        }

    private:
        static const string TypeStrList [];
        static ST_BarGrouping* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BarDir : public XSD::SimpleType{
    public:
        ST_BarDir();
        ST_BarDir(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BarDir& default_instance() const;
        enum Type{
            _bar_ = 1,
            _col_
        }

    private:
        static const string TypeStrList [];
        static ST_BarDir* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Shape : public XSD::SimpleType{
    public:
        ST_Shape();
        ST_Shape(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Shape& default_instance() const;
        enum Type{
            _cone_ = 1,
            _coneToMax_,
            _box_,
            _cylinder_,
            _pyramid_,
            _pyramidToMax_
        }

    private:
        static const string TypeStrList [];
        static ST_Shape* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OfPieType : public XSD::SimpleType{
    public:
        ST_OfPieType();
        ST_OfPieType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OfPieType& default_instance() const;
        enum Type{
            _pie_ = 1,
            _bar_
        }

    private:
        static const string TypeStrList [];
        static ST_OfPieType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxPos : public XSD::SimpleType{
    public:
        ST_AxPos();
        ST_AxPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AxPos& default_instance() const;
        enum Type{
            _b_ = 1,
            _l_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_AxPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Crosses : public XSD::SimpleType{
    public:
        ST_Crosses();
        ST_Crosses(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Crosses& default_instance() const;
        enum Type{
            _autoZero_ = 1,
            _max_,
            _min_
        }

    private:
        static const string TypeStrList [];
        static ST_Crosses* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CrossBetween : public XSD::SimpleType{
    public:
        ST_CrossBetween();
        ST_CrossBetween(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CrossBetween& default_instance() const;
        enum Type{
            _between_ = 1,
            _midCat_
        }

    private:
        static const string TypeStrList [];
        static ST_CrossBetween* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TickMark : public XSD::SimpleType{
    public:
        ST_TickMark();
        ST_TickMark(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TickMark& default_instance() const;
        enum Type{
            _cross_ = 1,
            _in_,
            _none_,
            _out_
        }

    private:
        static const string TypeStrList [];
        static ST_TickMark* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TickLblPos : public XSD::SimpleType{
    public:
        ST_TickLblPos();
        ST_TickLblPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TickLblPos& default_instance() const;
        enum Type{
            _high_ = 1,
            _low_,
            _nextTo_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_TickLblPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Skip : public XSD::SimpleType{
    public:
        ST_Skip();
        ST_Skip(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Skip& default_instance() const;

    private:
        static ST_Skip* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_TimeUnit : public XSD::SimpleType{
    public:
        ST_TimeUnit();
        ST_TimeUnit(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TimeUnit& default_instance() const;
        enum Type{
            _days_ = 1,
            _months_,
            _years_
        }

    private:
        static const string TypeStrList [];
        static ST_TimeUnit* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxisUnit : public XSD::SimpleType{
    public:
        ST_AxisUnit();
        ST_AxisUnit(const XSD::double& _double );
        bool has_double() const;
        void set_double(const double& _double );
        const double& double() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AxisUnit& default_instance() const;

    private:
        static ST_AxisUnit* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_BuiltInUnit : public XSD::SimpleType{
    public:
        ST_BuiltInUnit();
        ST_BuiltInUnit(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BuiltInUnit& default_instance() const;
        enum Type{
            _hundreds_ = 1,
            _thousands_,
            _tenThousands_,
            _hundredThousands_,
            _millions_,
            _tenMillions_,
            _hundredMillions_,
            _billions_,
            _trillions_
        }

    private:
        static const string TypeStrList [];
        static ST_BuiltInUnit* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PictureFormat : public XSD::SimpleType{
    public:
        ST_PictureFormat();
        ST_PictureFormat(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PictureFormat& default_instance() const;
        enum Type{
            _stretch_ = 1,
            _stack_,
            _stackScale_
        }

    private:
        static const string TypeStrList [];
        static ST_PictureFormat* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PictureStackUnit : public XSD::SimpleType{
    public:
        ST_PictureStackUnit();
        ST_PictureStackUnit(const XSD::double& _double );
        bool has_double() const;
        void set_double(const double& _double );
        const double& double() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PictureStackUnit& default_instance() const;

    private:
        static ST_PictureStackUnit* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_Orientation : public XSD::SimpleType{
    public:
        ST_Orientation();
        ST_Orientation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Orientation& default_instance() const;
        enum Type{
            _maxMin_ = 1,
            _minMax_
        }

    private:
        static const string TypeStrList [];
        static ST_Orientation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LogBase : public XSD::SimpleType{
    public:
        ST_LogBase();
        ST_LogBase(const XSD::double& _double );
        bool has_double() const;
        void set_double(const double& _double );
        const double& double() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LogBase& default_instance() const;

    private:
        static ST_LogBase* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_LblOffset : public XSD::SimpleType{
    public:
        bool has_ST_LblOffsetPercent() const;
        ST_LblOffsetPercent* mutable_ST_LblOffsetPercent();
        const ST_LblOffsetPercent& ST_LblOffsetPercent() const;
        bool has_ST_LblOffsetUShort() const;
        ST_LblOffsetUShort* mutable_ST_LblOffsetUShort();
        const ST_LblOffsetUShort& ST_LblOffsetUShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LblOffset& default_instance() const;

    private:
        void clear_ST_LblOffsetPercent();
        void clear_ST_LblOffsetUShort();
        bool m_has_ST_LblOffsetPercent ;
        ST_LblOffsetPercent* m_ST_LblOffsetPercent ;
        bool m_has_ST_LblOffsetUShort ;
        ST_LblOffsetUShort* m_ST_LblOffsetUShort ;
        static ST_LblOffset* default_instance_ ;

    }

    class ST_LblOffsetPercent : public XSD::SimpleType{
    public:
        ST_LblOffsetPercent();
        ST_LblOffsetPercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LblOffsetPercent& default_instance() const;

    private:
        static ST_LblOffsetPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_LblOffsetUShort : public XSD::SimpleType{
    public:
        ST_LblOffsetUShort();
        ST_LblOffsetUShort(const XSD::unsignedShort& _unsignedShort );
        bool has_unsignedShort() const;
        void set_unsignedShort(const unsignedShort& _unsignedShort );
        const unsignedShort& unsignedShort() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LblOffsetUShort& default_instance() const;

    private:
        static ST_LblOffsetUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_LegendPos : public XSD::SimpleType{
    public:
        ST_LegendPos();
        ST_LegendPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LegendPos& default_instance() const;
        enum Type{
            _b_ = 1,
            _tr_,
            _l_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_LegendPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DispBlanksAs : public XSD::SimpleType{
    public:
        ST_DispBlanksAs();
        ST_DispBlanksAs(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DispBlanksAs& default_instance() const;
        enum Type{
            _span_ = 1,
            _gap_,
            _zero_
        }

    private:
        static const string TypeStrList [];
        static ST_DispBlanksAs* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Style : public XSD::SimpleType{
    public:
        ST_Style();
        ST_Style(const XSD::unsignedByte& _unsignedByte );
        bool has_unsignedByte() const;
        void set_unsignedByte(const unsignedByte& _unsignedByte );
        const unsignedByte& unsignedByte() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Style& default_instance() const;

    private:
        static ST_Style* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_PageSetupOrientation : public XSD::SimpleType{
    public:
        ST_PageSetupOrientation();
        ST_PageSetupOrientation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PageSetupOrientation& default_instance() const;
        enum Type{
            _default_ = 1,
            _portrait_,
            _landscape_
        }

    private:
        static const string TypeStrList [];
        static ST_PageSetupOrientation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Boolean : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Boolean& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const boolean& _val_attr );
        const boolean& val_attr() const;

    private:
        static CT_Boolean* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_Double : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Double& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const double& _val_attr );
        const double& val_attr() const;

    private:
        static CT_Double* default_instance_ ;
        bool m_has_val_attr ;
        double m_val_attr ;

    }

    class CT_UnsignedInt : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_UnsignedInt& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const unsignedInt& _val_attr );
        const unsignedInt& val_attr() const;

    private:
        static CT_UnsignedInt* default_instance_ ;
        bool m_has_val_attr ;
        unsignedInt m_val_attr ;

    }

    class CT_RelId : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelId& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_RelId* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_Extension : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Extension& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const token& _uri_attr );
        const token& uri_attr() const;

    private:
        static CT_Extension* default_instance_ ;
        bool m_has_uri_attr ;
        token m_uri_attr ;

    }

    class CT_ExtensionList : public XSD::ComplexType{
    public:
        bool has_ext() const;
        CT_Extension* mutable_ext();
        const CT_Extension& ext() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ExtensionList& default_instance() const;

    private:
        bool m_has_ext ;
        CT_Extension* m_ext ;
        static CT_ExtensionList* default_instance_ ;

    }

    class CT_NumVal : public XSD::ComplexType{
    public:
        bool has_v() const;
        ns_s::ST_Xstring* mutable_v();
        const ns_s::ST_Xstring& v() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumVal& default_instance() const;
        bool has_idx_attr() const;
        void set_idx_attr(const unsignedInt& _idx_attr );
        const unsignedInt& idx_attr() const;
        bool has_formatCode_attr() const;
        void set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr );
        const ns_s::ST_Xstring& formatCode_attr() const;

    private:
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_NumVal* default_instance_ ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;
        bool m_has_formatCode_attr ;
        ns_s::ST_Xstring* m_formatCode_attr ;

    }

    class CT_NumData : public XSD::ComplexType{
    public:
        bool has_formatCode() const;
        ns_s::ST_Xstring* mutable_formatCode();
        const ns_s::ST_Xstring& formatCode() const;
        bool has_ptCount() const;
        CT_UnsignedInt* mutable_ptCount();
        const CT_UnsignedInt& ptCount() const;
        bool has_pt() const;
        CT_NumVal* mutable_pt();
        const CT_NumVal& pt() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumData& default_instance() const;

    private:
        bool m_has_formatCode ;
        ns_s::ST_Xstring* m_formatCode ;
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_pt ;
        CT_NumVal* m_pt ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NumData* default_instance_ ;

    }

    class CT_NumRef : public XSD::ComplexType{
    public:
        bool has_f() const;
        void set_f(const string& _f );
        const string& f() const;
        bool has_numCache() const;
        CT_NumData* mutable_numCache();
        const CT_NumData& numCache() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumRef& default_instance() const;

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_numCache ;
        CT_NumData* m_numCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NumRef* default_instance_ ;

    }

    class CT_NumDataSource : public XSD::ComplexType{
    public:
        bool has_numRef() const;
        CT_NumRef* mutable_numRef();
        const CT_NumRef& numRef() const;
        bool has_numLit() const;
        CT_NumData* mutable_numLit();
        const CT_NumData& numLit() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumDataSource& default_instance() const;

    private:
        bool m_has_numRef ;
        CT_NumRef* m_numRef ;
        bool m_has_numLit ;
        CT_NumData* m_numLit ;
        static CT_NumDataSource* default_instance_ ;

    }

    class CT_StrVal : public XSD::ComplexType{
    public:
        bool has_v() const;
        ns_s::ST_Xstring* mutable_v();
        const ns_s::ST_Xstring& v() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StrVal& default_instance() const;
        bool has_idx_attr() const;
        void set_idx_attr(const unsignedInt& _idx_attr );
        const unsignedInt& idx_attr() const;

    private:
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_StrVal* default_instance_ ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;

    }

    class CT_StrData : public XSD::ComplexType{
    public:
        bool has_ptCount() const;
        CT_UnsignedInt* mutable_ptCount();
        const CT_UnsignedInt& ptCount() const;
        bool has_pt() const;
        CT_StrVal* mutable_pt();
        const CT_StrVal& pt() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StrData& default_instance() const;

    private:
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_pt ;
        CT_StrVal* m_pt ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StrData* default_instance_ ;

    }

    class CT_StrRef : public XSD::ComplexType{
    public:
        bool has_f() const;
        void set_f(const string& _f );
        const string& f() const;
        bool has_strCache() const;
        CT_StrData* mutable_strCache();
        const CT_StrData& strCache() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StrRef& default_instance() const;

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_strCache ;
        CT_StrData* m_strCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StrRef* default_instance_ ;

    }

    class CT_Tx : public XSD::ComplexType{
    public:
        bool has_strRef() const;
        CT_StrRef* mutable_strRef();
        const CT_StrRef& strRef() const;
        bool has_rich() const;
        ns_a::CT_TextBody* mutable_rich();
        const ns_a::CT_TextBody& rich() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Tx& default_instance() const;

    private:
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_rich ;
        ns_a::CT_TextBody* m_rich ;
        static CT_Tx* default_instance_ ;

    }

    class CT_TextLanguageID : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextLanguageID& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_Lang& _val_attr );
        const ns_s::ST_Lang& val_attr() const;

    private:
        static CT_TextLanguageID* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Lang* m_val_attr ;

    }

    class CT_Lvl : public XSD::ComplexType{
    public:
        bool has_pt() const;
        CT_StrVal* mutable_pt();
        const CT_StrVal& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Lvl& default_instance() const;

    private:
        bool m_has_pt ;
        CT_StrVal* m_pt ;
        static CT_Lvl* default_instance_ ;

    }

    class CT_MultiLvlStrData : public XSD::ComplexType{
    public:
        bool has_ptCount() const;
        CT_UnsignedInt* mutable_ptCount();
        const CT_UnsignedInt& ptCount() const;
        bool has_lvl() const;
        CT_Lvl* mutable_lvl();
        const CT_Lvl& lvl() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MultiLvlStrData& default_instance() const;

    private:
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_lvl ;
        CT_Lvl* m_lvl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_MultiLvlStrData* default_instance_ ;

    }

    class CT_MultiLvlStrRef : public XSD::ComplexType{
    public:
        bool has_f() const;
        void set_f(const string& _f );
        const string& f() const;
        bool has_multiLvlStrCache() const;
        CT_MultiLvlStrData* mutable_multiLvlStrCache();
        const CT_MultiLvlStrData& multiLvlStrCache() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MultiLvlStrRef& default_instance() const;

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_multiLvlStrCache ;
        CT_MultiLvlStrData* m_multiLvlStrCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_MultiLvlStrRef* default_instance_ ;

    }

    class CT_AxDataSource : public XSD::ComplexType{
    public:
        bool has_multiLvlStrRef() const;
        CT_MultiLvlStrRef* mutable_multiLvlStrRef();
        const CT_MultiLvlStrRef& multiLvlStrRef() const;
        bool has_numRef() const;
        CT_NumRef* mutable_numRef();
        const CT_NumRef& numRef() const;
        bool has_numLit() const;
        CT_NumData* mutable_numLit();
        const CT_NumData& numLit() const;
        bool has_strRef() const;
        CT_StrRef* mutable_strRef();
        const CT_StrRef& strRef() const;
        bool has_strLit() const;
        CT_StrData* mutable_strLit();
        const CT_StrData& strLit() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AxDataSource& default_instance() const;

    private:
        bool m_has_multiLvlStrRef ;
        CT_MultiLvlStrRef* m_multiLvlStrRef ;
        bool m_has_numRef ;
        CT_NumRef* m_numRef ;
        bool m_has_numLit ;
        CT_NumData* m_numLit ;
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_strLit ;
        CT_StrData* m_strLit ;
        static CT_AxDataSource* default_instance_ ;

    }

    class CT_SerTx : public XSD::ComplexType{
    public:
        bool has_strRef() const;
        CT_StrRef* mutable_strRef();
        const CT_StrRef& strRef() const;
        bool has_v() const;
        ns_s::ST_Xstring* mutable_v();
        const ns_s::ST_Xstring& v() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SerTx& default_instance() const;

    private:
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_SerTx* default_instance_ ;

    }

    class CT_LayoutTarget : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LayoutTarget& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LayoutTarget& _val_attr );
        const ST_LayoutTarget& val_attr() const;

    private:
        static CT_LayoutTarget* default_instance_ ;
        bool m_has_val_attr ;
        ST_LayoutTarget* m_val_attr ;

    }

    class CT_LayoutMode : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LayoutMode& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LayoutMode& _val_attr );
        const ST_LayoutMode& val_attr() const;

    private:
        static CT_LayoutMode* default_instance_ ;
        bool m_has_val_attr ;
        ST_LayoutMode* m_val_attr ;

    }

    class CT_ManualLayout : public XSD::ComplexType{
    public:
        bool has_layoutTarget() const;
        CT_LayoutTarget* mutable_layoutTarget();
        const CT_LayoutTarget& layoutTarget() const;
        bool has_xMode() const;
        CT_LayoutMode* mutable_xMode();
        const CT_LayoutMode& xMode() const;
        bool has_yMode() const;
        CT_LayoutMode* mutable_yMode();
        const CT_LayoutMode& yMode() const;
        bool has_wMode() const;
        CT_LayoutMode* mutable_wMode();
        const CT_LayoutMode& wMode() const;
        bool has_hMode() const;
        CT_LayoutMode* mutable_hMode();
        const CT_LayoutMode& hMode() const;
        bool has_x() const;
        CT_Double* mutable_x();
        const CT_Double& x() const;
        bool has_y() const;
        CT_Double* mutable_y();
        const CT_Double& y() const;
        bool has_w() const;
        CT_Double* mutable_w();
        const CT_Double& w() const;
        bool has_h() const;
        CT_Double* mutable_h();
        const CT_Double& h() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ManualLayout& default_instance() const;

    private:
        bool m_has_layoutTarget ;
        CT_LayoutTarget* m_layoutTarget ;
        bool m_has_xMode ;
        CT_LayoutMode* m_xMode ;
        bool m_has_yMode ;
        CT_LayoutMode* m_yMode ;
        bool m_has_wMode ;
        CT_LayoutMode* m_wMode ;
        bool m_has_hMode ;
        CT_LayoutMode* m_hMode ;
        bool m_has_x ;
        CT_Double* m_x ;
        bool m_has_y ;
        CT_Double* m_y ;
        bool m_has_w ;
        CT_Double* m_w ;
        bool m_has_h ;
        CT_Double* m_h ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ManualLayout* default_instance_ ;

    }

    class CT_Layout : public XSD::ComplexType{
    public:
        bool has_manualLayout() const;
        CT_ManualLayout* mutable_manualLayout();
        const CT_ManualLayout& manualLayout() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Layout& default_instance() const;

    private:
        bool m_has_manualLayout ;
        CT_ManualLayout* m_manualLayout ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Layout* default_instance_ ;

    }

    class CT_Title : public XSD::ComplexType{
    public:
        bool has_tx() const;
        CT_Tx* mutable_tx();
        const CT_Tx& tx() const;
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        bool has_overlay() const;
        CT_Boolean* mutable_overlay();
        const CT_Boolean& overlay() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Title& default_instance() const;

    private:
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_overlay ;
        CT_Boolean* m_overlay ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Title* default_instance_ ;

    }

    class CT_RotX : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RotX& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_RotX& _val_attr );
        const ST_RotX& val_attr() const;

    private:
        static CT_RotX* default_instance_ ;
        bool m_has_val_attr ;
        ST_RotX* m_val_attr ;

    }

    class CT_HPercent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HPercent& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HPercent& _val_attr );
        const ST_HPercent& val_attr() const;

    private:
        static CT_HPercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_HPercent* m_val_attr ;

    }

    class CT_RotY : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RotY& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_RotY& _val_attr );
        const ST_RotY& val_attr() const;

    private:
        static CT_RotY* default_instance_ ;
        bool m_has_val_attr ;
        ST_RotY* m_val_attr ;

    }

    class CT_DepthPercent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DepthPercent& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DepthPercent& _val_attr );
        const ST_DepthPercent& val_attr() const;

    private:
        static CT_DepthPercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_DepthPercent* m_val_attr ;

    }

    class CT_Perspective : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Perspective& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Perspective& _val_attr );
        const ST_Perspective& val_attr() const;

    private:
        static CT_Perspective* default_instance_ ;
        bool m_has_val_attr ;
        ST_Perspective* m_val_attr ;

    }

    class CT_View3D : public XSD::ComplexType{
    public:
        bool has_rotX() const;
        CT_RotX* mutable_rotX();
        const CT_RotX& rotX() const;
        bool has_hPercent() const;
        CT_HPercent* mutable_hPercent();
        const CT_HPercent& hPercent() const;
        bool has_rotY() const;
        CT_RotY* mutable_rotY();
        const CT_RotY& rotY() const;
        bool has_depthPercent() const;
        CT_DepthPercent* mutable_depthPercent();
        const CT_DepthPercent& depthPercent() const;
        bool has_rAngAx() const;
        CT_Boolean* mutable_rAngAx();
        const CT_Boolean& rAngAx() const;
        bool has_perspective() const;
        CT_Perspective* mutable_perspective();
        const CT_Perspective& perspective() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_View3D& default_instance() const;

    private:
        bool m_has_rotX ;
        CT_RotX* m_rotX ;
        bool m_has_hPercent ;
        CT_HPercent* m_hPercent ;
        bool m_has_rotY ;
        CT_RotY* m_rotY ;
        bool m_has_depthPercent ;
        CT_DepthPercent* m_depthPercent ;
        bool m_has_rAngAx ;
        CT_Boolean* m_rAngAx ;
        bool m_has_perspective ;
        CT_Perspective* m_perspective ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_View3D* default_instance_ ;

    }

    class CT_Surface : public XSD::ComplexType{
    public:
        bool has_thickness() const;
        CT_Thickness* mutable_thickness();
        const CT_Thickness& thickness() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_pictureOptions() const;
        CT_PictureOptions* mutable_pictureOptions();
        const CT_PictureOptions& pictureOptions() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Surface& default_instance() const;

    private:
        bool m_has_thickness ;
        CT_Thickness* m_thickness ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Surface* default_instance_ ;

    }

    class CT_Thickness : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Thickness& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Thickness& _val_attr );
        const ST_Thickness& val_attr() const;

    private:
        static CT_Thickness* default_instance_ ;
        bool m_has_val_attr ;
        ST_Thickness* m_val_attr ;

    }

    class CT_DTable : public XSD::ComplexType{
    public:
        bool has_showHorzBorder() const;
        CT_Boolean* mutable_showHorzBorder();
        const CT_Boolean& showHorzBorder() const;
        bool has_showVertBorder() const;
        CT_Boolean* mutable_showVertBorder();
        const CT_Boolean& showVertBorder() const;
        bool has_showOutline() const;
        CT_Boolean* mutable_showOutline();
        const CT_Boolean& showOutline() const;
        bool has_showKeys() const;
        CT_Boolean* mutable_showKeys();
        const CT_Boolean& showKeys() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DTable& default_instance() const;

    private:
        bool m_has_showHorzBorder ;
        CT_Boolean* m_showHorzBorder ;
        bool m_has_showVertBorder ;
        CT_Boolean* m_showVertBorder ;
        bool m_has_showOutline ;
        CT_Boolean* m_showOutline ;
        bool m_has_showKeys ;
        CT_Boolean* m_showKeys ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DTable* default_instance_ ;

    }

    class CT_GapAmount : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GapAmount& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_GapAmount& _val_attr );
        const ST_GapAmount& val_attr() const;

    private:
        static CT_GapAmount* default_instance_ ;
        bool m_has_val_attr ;
        ST_GapAmount* m_val_attr ;

    }

    class CT_Overlap : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Overlap& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Overlap& _val_attr );
        const ST_Overlap& val_attr() const;

    private:
        static CT_Overlap* default_instance_ ;
        bool m_has_val_attr ;
        ST_Overlap* m_val_attr ;

    }

    class CT_BubbleScale : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BubbleScale& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BubbleScale& _val_attr );
        const ST_BubbleScale& val_attr() const;

    private:
        static CT_BubbleScale* default_instance_ ;
        bool m_has_val_attr ;
        ST_BubbleScale* m_val_attr ;

    }

    class CT_SizeRepresents : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SizeRepresents& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SizeRepresents& _val_attr );
        const ST_SizeRepresents& val_attr() const;

    private:
        static CT_SizeRepresents* default_instance_ ;
        bool m_has_val_attr ;
        ST_SizeRepresents* m_val_attr ;

    }

    class CT_FirstSliceAng : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FirstSliceAng& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FirstSliceAng& _val_attr );
        const ST_FirstSliceAng& val_attr() const;

    private:
        static CT_FirstSliceAng* default_instance_ ;
        bool m_has_val_attr ;
        ST_FirstSliceAng* m_val_attr ;

    }

    class CT_HoleSize : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HoleSize& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HoleSize& _val_attr );
        const ST_HoleSize& val_attr() const;

    private:
        static CT_HoleSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_HoleSize* m_val_attr ;

    }

    class CT_SplitType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SplitType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SplitType& _val_attr );
        const ST_SplitType& val_attr() const;

    private:
        static CT_SplitType* default_instance_ ;
        bool m_has_val_attr ;
        ST_SplitType* m_val_attr ;

    }

    class CT_CustSplit : public XSD::ComplexType{
    public:
        bool has_secondPiePt() const;
        CT_UnsignedInt* mutable_secondPiePt();
        const CT_UnsignedInt& secondPiePt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustSplit& default_instance() const;

    private:
        bool m_has_secondPiePt ;
        CT_UnsignedInt* m_secondPiePt ;
        static CT_CustSplit* default_instance_ ;

    }

    class CT_SecondPieSize : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SecondPieSize& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SecondPieSize& _val_attr );
        const ST_SecondPieSize& val_attr() const;

    private:
        static CT_SecondPieSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_SecondPieSize* m_val_attr ;

    }

    class CT_NumFmt : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumFmt& default_instance() const;
        bool has_formatCode_attr() const;
        void set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr );
        const ns_s::ST_Xstring& formatCode_attr() const;
        bool has_sourceLinked_attr() const;
        void set_sourceLinked_attr(const boolean& _sourceLinked_attr );
        const boolean& sourceLinked_attr() const;

    private:
        static CT_NumFmt* default_instance_ ;
        bool m_has_formatCode_attr ;
        ns_s::ST_Xstring* m_formatCode_attr ;
        bool m_has_sourceLinked_attr ;
        boolean m_sourceLinked_attr ;

    }

    class CT_LblAlgn : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LblAlgn& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LblAlgn& _val_attr );
        const ST_LblAlgn& val_attr() const;

    private:
        static CT_LblAlgn* default_instance_ ;
        bool m_has_val_attr ;
        ST_LblAlgn* m_val_attr ;

    }

    class CT_DLblPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DLblPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DLblPos& _val_attr );
        const ST_DLblPos& val_attr() const;

    private:
        static CT_DLblPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_DLblPos* m_val_attr ;

    }

    class CT_DLbl : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        bool has_tx() const;
        CT_Tx* mutable_tx();
        const CT_Tx& tx() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_dLblPos() const;
        CT_DLblPos* mutable_dLblPos();
        const CT_DLblPos& dLblPos() const;
        bool has_showLegendKey() const;
        CT_Boolean* mutable_showLegendKey();
        const CT_Boolean& showLegendKey() const;
        bool has_showVal() const;
        CT_Boolean* mutable_showVal();
        const CT_Boolean& showVal() const;
        bool has_showCatName() const;
        CT_Boolean* mutable_showCatName();
        const CT_Boolean& showCatName() const;
        bool has_showSerName() const;
        CT_Boolean* mutable_showSerName();
        const CT_Boolean& showSerName() const;
        bool has_showPercent() const;
        CT_Boolean* mutable_showPercent();
        const CT_Boolean& showPercent() const;
        bool has_showBubbleSize() const;
        CT_Boolean* mutable_showBubbleSize();
        const CT_Boolean& showBubbleSize() const;
        bool has_separator() const;
        void set_separator(const string& _separator );
        const string& separator() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DLbl& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_dLblPos ;
        CT_DLblPos* m_dLblPos ;
        bool m_has_showLegendKey ;
        CT_Boolean* m_showLegendKey ;
        bool m_has_showVal ;
        CT_Boolean* m_showVal ;
        bool m_has_showCatName ;
        CT_Boolean* m_showCatName ;
        bool m_has_showSerName ;
        CT_Boolean* m_showSerName ;
        bool m_has_showPercent ;
        CT_Boolean* m_showPercent ;
        bool m_has_showBubbleSize ;
        CT_Boolean* m_showBubbleSize ;
        bool m_has_separator ;
        string m_separator ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DLbl* default_instance_ ;

    }

    class CT_DLbls : public XSD::ComplexType{
    public:
        bool has_dLbl() const;
        CT_DLbl* mutable_dLbl();
        const CT_DLbl& dLbl() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_dLblPos() const;
        CT_DLblPos* mutable_dLblPos();
        const CT_DLblPos& dLblPos() const;
        bool has_showLegendKey() const;
        CT_Boolean* mutable_showLegendKey();
        const CT_Boolean& showLegendKey() const;
        bool has_showVal() const;
        CT_Boolean* mutable_showVal();
        const CT_Boolean& showVal() const;
        bool has_showCatName() const;
        CT_Boolean* mutable_showCatName();
        const CT_Boolean& showCatName() const;
        bool has_showSerName() const;
        CT_Boolean* mutable_showSerName();
        const CT_Boolean& showSerName() const;
        bool has_showPercent() const;
        CT_Boolean* mutable_showPercent();
        const CT_Boolean& showPercent() const;
        bool has_showBubbleSize() const;
        CT_Boolean* mutable_showBubbleSize();
        const CT_Boolean& showBubbleSize() const;
        bool has_separator() const;
        void set_separator(const string& _separator );
        const string& separator() const;
        bool has_showLeaderLines() const;
        CT_Boolean* mutable_showLeaderLines();
        const CT_Boolean& showLeaderLines() const;
        bool has_leaderLines() const;
        CT_ChartLines* mutable_leaderLines();
        const CT_ChartLines& leaderLines() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DLbls& default_instance() const;

    private:
        bool m_has_dLbl ;
        CT_DLbl* m_dLbl ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_dLblPos ;
        CT_DLblPos* m_dLblPos ;
        bool m_has_showLegendKey ;
        CT_Boolean* m_showLegendKey ;
        bool m_has_showVal ;
        CT_Boolean* m_showVal ;
        bool m_has_showCatName ;
        CT_Boolean* m_showCatName ;
        bool m_has_showSerName ;
        CT_Boolean* m_showSerName ;
        bool m_has_showPercent ;
        CT_Boolean* m_showPercent ;
        bool m_has_showBubbleSize ;
        CT_Boolean* m_showBubbleSize ;
        bool m_has_separator ;
        string m_separator ;
        bool m_has_showLeaderLines ;
        CT_Boolean* m_showLeaderLines ;
        bool m_has_leaderLines ;
        CT_ChartLines* m_leaderLines ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DLbls* default_instance_ ;

    }

    class CT_MarkerStyle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MarkerStyle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MarkerStyle& _val_attr );
        const ST_MarkerStyle& val_attr() const;

    private:
        static CT_MarkerStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_MarkerStyle* m_val_attr ;

    }

    class CT_MarkerSize : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MarkerSize& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MarkerSize& _val_attr );
        const ST_MarkerSize& val_attr() const;

    private:
        static CT_MarkerSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_MarkerSize* m_val_attr ;

    }

    class CT_Marker : public XSD::ComplexType{
    public:
        bool has_symbol() const;
        CT_MarkerStyle* mutable_symbol();
        const CT_MarkerStyle& symbol() const;
        bool has_size() const;
        CT_MarkerSize* mutable_size();
        const CT_MarkerSize& size() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Marker& default_instance() const;

    private:
        bool m_has_symbol ;
        CT_MarkerStyle* m_symbol ;
        bool m_has_size ;
        CT_MarkerSize* m_size ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Marker* default_instance_ ;

    }

    class CT_DPt : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_invertIfNegative() const;
        CT_Boolean* mutable_invertIfNegative();
        const CT_Boolean& invertIfNegative() const;
        bool has_marker() const;
        CT_Marker* mutable_marker();
        const CT_Marker& marker() const;
        bool has_bubble3D() const;
        CT_Boolean* mutable_bubble3D();
        const CT_Boolean& bubble3D() const;
        bool has_explosion() const;
        CT_UnsignedInt* mutable_explosion();
        const CT_UnsignedInt& explosion() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_pictureOptions() const;
        CT_PictureOptions* mutable_pictureOptions();
        const CT_PictureOptions& pictureOptions() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DPt& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_explosion ;
        CT_UnsignedInt* m_explosion ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DPt* default_instance_ ;

    }

    class CT_TrendlineType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrendlineType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TrendlineType& _val_attr );
        const ST_TrendlineType& val_attr() const;

    private:
        static CT_TrendlineType* default_instance_ ;
        bool m_has_val_attr ;
        ST_TrendlineType* m_val_attr ;

    }

    class CT_Order : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Order& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Order& _val_attr );
        const ST_Order& val_attr() const;

    private:
        static CT_Order* default_instance_ ;
        bool m_has_val_attr ;
        ST_Order* m_val_attr ;

    }

    class CT_Period : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Period& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Period& _val_attr );
        const ST_Period& val_attr() const;

    private:
        static CT_Period* default_instance_ ;
        bool m_has_val_attr ;
        ST_Period* m_val_attr ;

    }

    class CT_TrendlineLbl : public XSD::ComplexType{
    public:
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        bool has_tx() const;
        CT_Tx* mutable_tx();
        const CT_Tx& tx() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrendlineLbl& default_instance() const;

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_TrendlineLbl* default_instance_ ;

    }

    class CT_Trendline : public XSD::ComplexType{
    public:
        bool has_name() const;
        void set_name(const string& _name );
        const string& name() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_trendlineType() const;
        CT_TrendlineType* mutable_trendlineType();
        const CT_TrendlineType& trendlineType() const;
        bool has_order() const;
        CT_Order* mutable_order();
        const CT_Order& order() const;
        bool has_period() const;
        CT_Period* mutable_period();
        const CT_Period& period() const;
        bool has_forward() const;
        CT_Double* mutable_forward();
        const CT_Double& forward() const;
        bool has_backward() const;
        CT_Double* mutable_backward();
        const CT_Double& backward() const;
        bool has_intercept() const;
        CT_Double* mutable_intercept();
        const CT_Double& intercept() const;
        bool has_dispRSqr() const;
        CT_Boolean* mutable_dispRSqr();
        const CT_Boolean& dispRSqr() const;
        bool has_dispEq() const;
        CT_Boolean* mutable_dispEq();
        const CT_Boolean& dispEq() const;
        bool has_trendlineLbl() const;
        CT_TrendlineLbl* mutable_trendlineLbl();
        const CT_TrendlineLbl& trendlineLbl() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Trendline& default_instance() const;

    private:
        bool m_has_name ;
        string m_name ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_trendlineType ;
        CT_TrendlineType* m_trendlineType ;
        bool m_has_order ;
        CT_Order* m_order ;
        bool m_has_period ;
        CT_Period* m_period ;
        bool m_has_forward ;
        CT_Double* m_forward ;
        bool m_has_backward ;
        CT_Double* m_backward ;
        bool m_has_intercept ;
        CT_Double* m_intercept ;
        bool m_has_dispRSqr ;
        CT_Boolean* m_dispRSqr ;
        bool m_has_dispEq ;
        CT_Boolean* m_dispEq ;
        bool m_has_trendlineLbl ;
        CT_TrendlineLbl* m_trendlineLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Trendline* default_instance_ ;

    }

    class CT_ErrDir : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ErrDir& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ErrDir& _val_attr );
        const ST_ErrDir& val_attr() const;

    private:
        static CT_ErrDir* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrDir* m_val_attr ;

    }

    class CT_ErrBarType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ErrBarType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ErrBarType& _val_attr );
        const ST_ErrBarType& val_attr() const;

    private:
        static CT_ErrBarType* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrBarType* m_val_attr ;

    }

    class CT_ErrValType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ErrValType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ErrValType& _val_attr );
        const ST_ErrValType& val_attr() const;

    private:
        static CT_ErrValType* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrValType* m_val_attr ;

    }

    class CT_ErrBars : public XSD::ComplexType{
    public:
        bool has_errDir() const;
        CT_ErrDir* mutable_errDir();
        const CT_ErrDir& errDir() const;
        bool has_errBarType() const;
        CT_ErrBarType* mutable_errBarType();
        const CT_ErrBarType& errBarType() const;
        bool has_errValType() const;
        CT_ErrValType* mutable_errValType();
        const CT_ErrValType& errValType() const;
        bool has_noEndCap() const;
        CT_Boolean* mutable_noEndCap();
        const CT_Boolean& noEndCap() const;
        bool has_plus() const;
        CT_NumDataSource* mutable_plus();
        const CT_NumDataSource& plus() const;
        bool has_minus() const;
        CT_NumDataSource* mutable_minus();
        const CT_NumDataSource& minus() const;
        bool has_val() const;
        CT_Double* mutable_val();
        const CT_Double& val() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ErrBars& default_instance() const;

    private:
        bool m_has_errDir ;
        CT_ErrDir* m_errDir ;
        bool m_has_errBarType ;
        CT_ErrBarType* m_errBarType ;
        bool m_has_errValType ;
        CT_ErrValType* m_errValType ;
        bool m_has_noEndCap ;
        CT_Boolean* m_noEndCap ;
        bool m_has_plus ;
        CT_NumDataSource* m_plus ;
        bool m_has_minus ;
        CT_NumDataSource* m_minus ;
        bool m_has_val ;
        CT_Double* m_val ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ErrBars* default_instance_ ;

    }

    class CT_UpDownBar : public XSD::ComplexType{
    public:
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_UpDownBar& default_instance() const;

    private:
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_UpDownBar* default_instance_ ;

    }

    class CT_UpDownBars : public XSD::ComplexType{
    public:
        bool has_gapWidth() const;
        CT_GapAmount* mutable_gapWidth();
        const CT_GapAmount& gapWidth() const;
        bool has_upBars() const;
        CT_UpDownBar* mutable_upBars();
        const CT_UpDownBar& upBars() const;
        bool has_downBars() const;
        CT_UpDownBar* mutable_downBars();
        const CT_UpDownBar& downBars() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_UpDownBars& default_instance() const;

    private:
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_upBars ;
        CT_UpDownBar* m_upBars ;
        bool m_has_downBars ;
        CT_UpDownBar* m_downBars ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_UpDownBars* default_instance_ ;

    }

    class CT_LineSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_marker() const;
        CT_Marker* mutable_marker();
        const CT_Marker& marker() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_trendline() const;
        CT_Trendline* mutable_trendline();
        const CT_Trendline& trendline() const;
        bool has_errBars() const;
        CT_ErrBars* mutable_errBars();
        const CT_ErrBars& errBars() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_smooth() const;
        CT_Boolean* mutable_smooth();
        const CT_Boolean& smooth() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LineSer* default_instance_ ;

    }

    class CT_ScatterSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_marker() const;
        CT_Marker* mutable_marker();
        const CT_Marker& marker() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_trendline() const;
        CT_Trendline* mutable_trendline();
        const CT_Trendline& trendline() const;
        bool has_errBars() const;
        CT_ErrBars* mutable_errBars();
        const CT_ErrBars& errBars() const;
        bool has_xVal() const;
        CT_AxDataSource* mutable_xVal();
        const CT_AxDataSource& xVal() const;
        bool has_yVal() const;
        CT_NumDataSource* mutable_yVal();
        const CT_NumDataSource& yVal() const;
        bool has_smooth() const;
        CT_Boolean* mutable_smooth();
        const CT_Boolean& smooth() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ScatterSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_xVal ;
        CT_AxDataSource* m_xVal ;
        bool m_has_yVal ;
        CT_NumDataSource* m_yVal ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ScatterSer* default_instance_ ;

    }

    class CT_RadarSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_marker() const;
        CT_Marker* mutable_marker();
        const CT_Marker& marker() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RadarSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_RadarSer* default_instance_ ;

    }

    class CT_BarSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_invertIfNegative() const;
        CT_Boolean* mutable_invertIfNegative();
        const CT_Boolean& invertIfNegative() const;
        bool has_pictureOptions() const;
        CT_PictureOptions* mutable_pictureOptions();
        const CT_PictureOptions& pictureOptions() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_trendline() const;
        CT_Trendline* mutable_trendline();
        const CT_Trendline& trendline() const;
        bool has_errBars() const;
        CT_ErrBars* mutable_errBars();
        const CT_ErrBars& errBars() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& shape() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BarSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_shape ;
        CT_Shape* m_shape ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BarSer* default_instance_ ;

    }

    class CT_AreaSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_pictureOptions() const;
        CT_PictureOptions* mutable_pictureOptions();
        const CT_PictureOptions& pictureOptions() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_trendline() const;
        CT_Trendline* mutable_trendline();
        const CT_Trendline& trendline() const;
        bool has_errBars() const;
        CT_ErrBars* mutable_errBars();
        const CT_ErrBars& errBars() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AreaSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_AreaSer* default_instance_ ;

    }

    class CT_PieSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_explosion() const;
        CT_UnsignedInt* mutable_explosion();
        const CT_UnsignedInt& explosion() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PieSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_explosion ;
        CT_UnsignedInt* m_explosion ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PieSer* default_instance_ ;

    }

    class CT_BubbleSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_invertIfNegative() const;
        CT_Boolean* mutable_invertIfNegative();
        const CT_Boolean& invertIfNegative() const;
        bool has_dPt() const;
        CT_DPt* mutable_dPt();
        const CT_DPt& dPt() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_trendline() const;
        CT_Trendline* mutable_trendline();
        const CT_Trendline& trendline() const;
        bool has_errBars() const;
        CT_ErrBars* mutable_errBars();
        const CT_ErrBars& errBars() const;
        bool has_xVal() const;
        CT_AxDataSource* mutable_xVal();
        const CT_AxDataSource& xVal() const;
        bool has_yVal() const;
        CT_NumDataSource* mutable_yVal();
        const CT_NumDataSource& yVal() const;
        bool has_bubbleSize() const;
        CT_NumDataSource* mutable_bubbleSize();
        const CT_NumDataSource& bubbleSize() const;
        bool has_bubble3D() const;
        CT_Boolean* mutable_bubble3D();
        const CT_Boolean& bubble3D() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BubbleSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_xVal ;
        CT_AxDataSource* m_xVal ;
        bool m_has_yVal ;
        CT_NumDataSource* m_yVal ;
        bool m_has_bubbleSize ;
        CT_NumDataSource* m_bubbleSize ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BubbleSer* default_instance_ ;

    }

    class CT_SurfaceSer : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_order() const;
        CT_UnsignedInt* mutable_order();
        const CT_UnsignedInt& order() const;
        bool has_tx() const;
        CT_SerTx* mutable_tx();
        const CT_SerTx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_cat() const;
        CT_AxDataSource* mutable_cat();
        const CT_AxDataSource& cat() const;
        bool has_val() const;
        CT_NumDataSource* mutable_val();
        const CT_NumDataSource& val() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SurfaceSer& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SurfaceSer* default_instance_ ;

    }

    class CT_Grouping : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Grouping& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Grouping& _val_attr );
        const ST_Grouping& val_attr() const;

    private:
        static CT_Grouping* default_instance_ ;
        bool m_has_val_attr ;
        ST_Grouping* m_val_attr ;

    }

    class CT_ChartLines : public XSD::ComplexType{
    public:
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ChartLines& default_instance() const;

    private:
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_ChartLines* default_instance_ ;

    }

    class CT_LineChart : public XSD::ComplexType{
    public:
        bool has_grouping() const;
        CT_Grouping* mutable_grouping();
        const CT_Grouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_LineSer* mutable_ser();
        const CT_LineSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_dropLines() const;
        CT_ChartLines* mutable_dropLines();
        const CT_ChartLines& dropLines() const;
        bool has_hiLowLines() const;
        CT_ChartLines* mutable_hiLowLines();
        const CT_ChartLines& hiLowLines() const;
        bool has_upDownBars() const;
        CT_UpDownBars* mutable_upDownBars();
        const CT_UpDownBars& upDownBars() const;
        bool has_marker() const;
        CT_Boolean* mutable_marker();
        const CT_Boolean& marker() const;
        bool has_smooth() const;
        CT_Boolean* mutable_smooth();
        const CT_Boolean& smooth() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineChart& default_instance() const;

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_hiLowLines ;
        CT_ChartLines* m_hiLowLines ;
        bool m_has_upDownBars ;
        CT_UpDownBars* m_upDownBars ;
        bool m_has_marker ;
        CT_Boolean* m_marker ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LineChart* default_instance_ ;

    }

    class CT_Line3DChart : public XSD::ComplexType{
    public:
        bool has_grouping() const;
        CT_Grouping* mutable_grouping();
        const CT_Grouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_LineSer* mutable_ser();
        const CT_LineSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_dropLines() const;
        CT_ChartLines* mutable_dropLines();
        const CT_ChartLines& dropLines() const;
        bool has_gapDepth() const;
        CT_GapAmount* mutable_gapDepth();
        const CT_GapAmount& gapDepth() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Line3DChart& default_instance() const;

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Line3DChart* default_instance_ ;

    }

    class CT_StockChart : public XSD::ComplexType{
    public:
        bool has_ser() const;
        CT_LineSer* mutable_ser();
        const CT_LineSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_dropLines() const;
        CT_ChartLines* mutable_dropLines();
        const CT_ChartLines& dropLines() const;
        bool has_hiLowLines() const;
        CT_ChartLines* mutable_hiLowLines();
        const CT_ChartLines& hiLowLines() const;
        bool has_upDownBars() const;
        CT_UpDownBars* mutable_upDownBars();
        const CT_UpDownBars& upDownBars() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StockChart& default_instance() const;

    private:
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_hiLowLines ;
        CT_ChartLines* m_hiLowLines ;
        bool m_has_upDownBars ;
        CT_UpDownBars* m_upDownBars ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StockChart* default_instance_ ;

    }

    class CT_ScatterStyle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ScatterStyle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ScatterStyle& _val_attr );
        const ST_ScatterStyle& val_attr() const;

    private:
        static CT_ScatterStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_ScatterStyle* m_val_attr ;

    }

    class CT_ScatterChart : public XSD::ComplexType{
    public:
        bool has_scatterStyle() const;
        CT_ScatterStyle* mutable_scatterStyle();
        const CT_ScatterStyle& scatterStyle() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_ScatterSer* mutable_ser();
        const CT_ScatterSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ScatterChart& default_instance() const;

    private:
        bool m_has_scatterStyle ;
        CT_ScatterStyle* m_scatterStyle ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_ScatterSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ScatterChart* default_instance_ ;

    }

    class CT_RadarStyle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RadarStyle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_RadarStyle& _val_attr );
        const ST_RadarStyle& val_attr() const;

    private:
        static CT_RadarStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_RadarStyle* m_val_attr ;

    }

    class CT_RadarChart : public XSD::ComplexType{
    public:
        bool has_radarStyle() const;
        CT_RadarStyle* mutable_radarStyle();
        const CT_RadarStyle& radarStyle() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_RadarSer* mutable_ser();
        const CT_RadarSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RadarChart& default_instance() const;

    private:
        bool m_has_radarStyle ;
        CT_RadarStyle* m_radarStyle ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_RadarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_RadarChart* default_instance_ ;

    }

    class CT_BarGrouping : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BarGrouping& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BarGrouping& _val_attr );
        const ST_BarGrouping& val_attr() const;

    private:
        static CT_BarGrouping* default_instance_ ;
        bool m_has_val_attr ;
        ST_BarGrouping* m_val_attr ;

    }

    class CT_BarDir : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BarDir& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BarDir& _val_attr );
        const ST_BarDir& val_attr() const;

    private:
        static CT_BarDir* default_instance_ ;
        bool m_has_val_attr ;
        ST_BarDir* m_val_attr ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Shape& _val_attr );
        const ST_Shape& val_attr() const;

    private:
        static CT_Shape* default_instance_ ;
        bool m_has_val_attr ;
        ST_Shape* m_val_attr ;

    }

    class CT_BarChart : public XSD::ComplexType{
    public:
        bool has_barDir() const;
        CT_BarDir* mutable_barDir();
        const CT_BarDir& barDir() const;
        bool has_grouping() const;
        CT_BarGrouping* mutable_grouping();
        const CT_BarGrouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_BarSer* mutable_ser();
        const CT_BarSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_gapWidth() const;
        CT_GapAmount* mutable_gapWidth();
        const CT_GapAmount& gapWidth() const;
        bool has_overlap() const;
        CT_Overlap* mutable_overlap();
        const CT_Overlap& overlap() const;
        bool has_serLines() const;
        CT_ChartLines* mutable_serLines();
        const CT_ChartLines& serLines() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BarChart& default_instance() const;

    private:
        bool m_has_barDir ;
        CT_BarDir* m_barDir ;
        bool m_has_grouping ;
        CT_BarGrouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_overlap ;
        CT_Overlap* m_overlap ;
        bool m_has_serLines ;
        CT_ChartLines* m_serLines ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BarChart* default_instance_ ;

    }

    class CT_Bar3DChart : public XSD::ComplexType{
    public:
        bool has_barDir() const;
        CT_BarDir* mutable_barDir();
        const CT_BarDir& barDir() const;
        bool has_grouping() const;
        CT_BarGrouping* mutable_grouping();
        const CT_BarGrouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_BarSer* mutable_ser();
        const CT_BarSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_gapWidth() const;
        CT_GapAmount* mutable_gapWidth();
        const CT_GapAmount& gapWidth() const;
        bool has_gapDepth() const;
        CT_GapAmount* mutable_gapDepth();
        const CT_GapAmount& gapDepth() const;
        bool has_shape() const;
        CT_Shape* mutable_shape();
        const CT_Shape& shape() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Bar3DChart& default_instance() const;

    private:
        bool m_has_barDir ;
        CT_BarDir* m_barDir ;
        bool m_has_grouping ;
        CT_BarGrouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_shape ;
        CT_Shape* m_shape ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Bar3DChart* default_instance_ ;

    }

    class CT_AreaChart : public XSD::ComplexType{
    public:
        bool has_grouping() const;
        CT_Grouping* mutable_grouping();
        const CT_Grouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_AreaSer* mutable_ser();
        const CT_AreaSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_dropLines() const;
        CT_ChartLines* mutable_dropLines();
        const CT_ChartLines& dropLines() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AreaChart& default_instance() const;

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_AreaSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_AreaChart* default_instance_ ;

    }

    class CT_Area3DChart : public XSD::ComplexType{
    public:
        bool has_grouping() const;
        CT_Grouping* mutable_grouping();
        const CT_Grouping& grouping() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_AreaSer* mutable_ser();
        const CT_AreaSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_dropLines() const;
        CT_ChartLines* mutable_dropLines();
        const CT_ChartLines& dropLines() const;
        bool has_gapDepth() const;
        CT_GapAmount* mutable_gapDepth();
        const CT_GapAmount& gapDepth() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Area3DChart& default_instance() const;

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_AreaSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Area3DChart* default_instance_ ;

    }

    class CT_PieChart : public XSD::ComplexType{
    public:
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_PieSer* mutable_ser();
        const CT_PieSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_firstSliceAng() const;
        CT_FirstSliceAng* mutable_firstSliceAng();
        const CT_FirstSliceAng& firstSliceAng() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PieChart& default_instance() const;

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_firstSliceAng ;
        CT_FirstSliceAng* m_firstSliceAng ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PieChart* default_instance_ ;

    }

    class CT_Pie3DChart : public XSD::ComplexType{
    public:
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_PieSer* mutable_ser();
        const CT_PieSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Pie3DChart& default_instance() const;

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Pie3DChart* default_instance_ ;

    }

    class CT_DoughnutChart : public XSD::ComplexType{
    public:
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_PieSer* mutable_ser();
        const CT_PieSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_firstSliceAng() const;
        CT_FirstSliceAng* mutable_firstSliceAng();
        const CT_FirstSliceAng& firstSliceAng() const;
        bool has_holeSize() const;
        CT_HoleSize* mutable_holeSize();
        const CT_HoleSize& holeSize() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DoughnutChart& default_instance() const;

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_firstSliceAng ;
        CT_FirstSliceAng* m_firstSliceAng ;
        bool m_has_holeSize ;
        CT_HoleSize* m_holeSize ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DoughnutChart* default_instance_ ;

    }

    class CT_OfPieType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OfPieType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_OfPieType& _val_attr );
        const ST_OfPieType& val_attr() const;

    private:
        static CT_OfPieType* default_instance_ ;
        bool m_has_val_attr ;
        ST_OfPieType* m_val_attr ;

    }

    class CT_OfPieChart : public XSD::ComplexType{
    public:
        bool has_ofPieType() const;
        CT_OfPieType* mutable_ofPieType();
        const CT_OfPieType& ofPieType() const;
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_PieSer* mutable_ser();
        const CT_PieSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_gapWidth() const;
        CT_GapAmount* mutable_gapWidth();
        const CT_GapAmount& gapWidth() const;
        bool has_splitType() const;
        CT_SplitType* mutable_splitType();
        const CT_SplitType& splitType() const;
        bool has_splitPos() const;
        CT_Double* mutable_splitPos();
        const CT_Double& splitPos() const;
        bool has_custSplit() const;
        CT_CustSplit* mutable_custSplit();
        const CT_CustSplit& custSplit() const;
        bool has_secondPieSize() const;
        CT_SecondPieSize* mutable_secondPieSize();
        const CT_SecondPieSize& secondPieSize() const;
        bool has_serLines() const;
        CT_ChartLines* mutable_serLines();
        const CT_ChartLines& serLines() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OfPieChart& default_instance() const;

    private:
        bool m_has_ofPieType ;
        CT_OfPieType* m_ofPieType ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_splitType ;
        CT_SplitType* m_splitType ;
        bool m_has_splitPos ;
        CT_Double* m_splitPos ;
        bool m_has_custSplit ;
        CT_CustSplit* m_custSplit ;
        bool m_has_secondPieSize ;
        CT_SecondPieSize* m_secondPieSize ;
        bool m_has_serLines ;
        CT_ChartLines* m_serLines ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OfPieChart* default_instance_ ;

    }

    class CT_BubbleChart : public XSD::ComplexType{
    public:
        bool has_varyColors() const;
        CT_Boolean* mutable_varyColors();
        const CT_Boolean& varyColors() const;
        bool has_ser() const;
        CT_BubbleSer* mutable_ser();
        const CT_BubbleSer& ser() const;
        bool has_dLbls() const;
        CT_DLbls* mutable_dLbls();
        const CT_DLbls& dLbls() const;
        bool has_bubble3D() const;
        CT_Boolean* mutable_bubble3D();
        const CT_Boolean& bubble3D() const;
        bool has_bubbleScale() const;
        CT_BubbleScale* mutable_bubbleScale();
        const CT_BubbleScale& bubbleScale() const;
        bool has_showNegBubbles() const;
        CT_Boolean* mutable_showNegBubbles();
        const CT_Boolean& showNegBubbles() const;
        bool has_sizeRepresents() const;
        CT_SizeRepresents* mutable_sizeRepresents();
        const CT_SizeRepresents& sizeRepresents() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BubbleChart& default_instance() const;

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BubbleSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_bubbleScale ;
        CT_BubbleScale* m_bubbleScale ;
        bool m_has_showNegBubbles ;
        CT_Boolean* m_showNegBubbles ;
        bool m_has_sizeRepresents ;
        CT_SizeRepresents* m_sizeRepresents ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BubbleChart* default_instance_ ;

    }

    class CT_BandFmt : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BandFmt& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_BandFmt* default_instance_ ;

    }

    class CT_BandFmts : public XSD::ComplexType{
    public:
        bool has_bandFmt() const;
        CT_BandFmt* mutable_bandFmt();
        const CT_BandFmt& bandFmt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BandFmts& default_instance() const;

    private:
        bool m_has_bandFmt ;
        CT_BandFmt* m_bandFmt ;
        static CT_BandFmts* default_instance_ ;

    }

    class CT_SurfaceChart : public XSD::ComplexType{
    public:
        bool has_wireframe() const;
        CT_Boolean* mutable_wireframe();
        const CT_Boolean& wireframe() const;
        bool has_ser() const;
        CT_SurfaceSer* mutable_ser();
        const CT_SurfaceSer& ser() const;
        bool has_bandFmts() const;
        CT_BandFmts* mutable_bandFmts();
        const CT_BandFmts& bandFmts() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SurfaceChart& default_instance() const;

    private:
        bool m_has_wireframe ;
        CT_Boolean* m_wireframe ;
        bool m_has_ser ;
        CT_SurfaceSer* m_ser ;
        bool m_has_bandFmts ;
        CT_BandFmts* m_bandFmts ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SurfaceChart* default_instance_ ;

    }

    class CT_Surface3DChart : public XSD::ComplexType{
    public:
        bool has_wireframe() const;
        CT_Boolean* mutable_wireframe();
        const CT_Boolean& wireframe() const;
        bool has_ser() const;
        CT_SurfaceSer* mutable_ser();
        const CT_SurfaceSer& ser() const;
        bool has_bandFmts() const;
        CT_BandFmts* mutable_bandFmts();
        const CT_BandFmts& bandFmts() const;
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Surface3DChart& default_instance() const;

    private:
        bool m_has_wireframe ;
        CT_Boolean* m_wireframe ;
        bool m_has_ser ;
        CT_SurfaceSer* m_ser ;
        bool m_has_bandFmts ;
        CT_BandFmts* m_bandFmts ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Surface3DChart* default_instance_ ;

    }

    class CT_AxPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AxPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_AxPos& _val_attr );
        const ST_AxPos& val_attr() const;

    private:
        static CT_AxPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_AxPos* m_val_attr ;

    }

    class CT_Crosses : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Crosses& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Crosses& _val_attr );
        const ST_Crosses& val_attr() const;

    private:
        static CT_Crosses* default_instance_ ;
        bool m_has_val_attr ;
        ST_Crosses* m_val_attr ;

    }

    class CT_CrossBetween : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CrossBetween& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_CrossBetween& _val_attr );
        const ST_CrossBetween& val_attr() const;

    private:
        static CT_CrossBetween* default_instance_ ;
        bool m_has_val_attr ;
        ST_CrossBetween* m_val_attr ;

    }

    class CT_TickMark : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TickMark& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TickMark& _val_attr );
        const ST_TickMark& val_attr() const;

    private:
        static CT_TickMark* default_instance_ ;
        bool m_has_val_attr ;
        ST_TickMark* m_val_attr ;

    }

    class CT_TickLblPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TickLblPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TickLblPos& _val_attr );
        const ST_TickLblPos& val_attr() const;

    private:
        static CT_TickLblPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_TickLblPos* m_val_attr ;

    }

    class CT_Skip : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Skip& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Skip& _val_attr );
        const ST_Skip& val_attr() const;

    private:
        static CT_Skip* default_instance_ ;
        bool m_has_val_attr ;
        ST_Skip* m_val_attr ;

    }

    class CT_TimeUnit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TimeUnit& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TimeUnit& _val_attr );
        const ST_TimeUnit& val_attr() const;

    private:
        static CT_TimeUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_TimeUnit* m_val_attr ;

    }

    class CT_AxisUnit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AxisUnit& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_AxisUnit& _val_attr );
        const ST_AxisUnit& val_attr() const;

    private:
        static CT_AxisUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_AxisUnit* m_val_attr ;

    }

    class CT_BuiltInUnit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BuiltInUnit& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BuiltInUnit& _val_attr );
        const ST_BuiltInUnit& val_attr() const;

    private:
        static CT_BuiltInUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_BuiltInUnit* m_val_attr ;

    }

    class CT_PictureFormat : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureFormat& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PictureFormat& _val_attr );
        const ST_PictureFormat& val_attr() const;

    private:
        static CT_PictureFormat* default_instance_ ;
        bool m_has_val_attr ;
        ST_PictureFormat* m_val_attr ;

    }

    class CT_PictureStackUnit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureStackUnit& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PictureStackUnit& _val_attr );
        const ST_PictureStackUnit& val_attr() const;

    private:
        static CT_PictureStackUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_PictureStackUnit* m_val_attr ;

    }

    class CT_PictureOptions : public XSD::ComplexType{
    public:
        bool has_applyToFront() const;
        CT_Boolean* mutable_applyToFront();
        const CT_Boolean& applyToFront() const;
        bool has_applyToSides() const;
        CT_Boolean* mutable_applyToSides();
        const CT_Boolean& applyToSides() const;
        bool has_applyToEnd() const;
        CT_Boolean* mutable_applyToEnd();
        const CT_Boolean& applyToEnd() const;
        bool has_pictureFormat() const;
        CT_PictureFormat* mutable_pictureFormat();
        const CT_PictureFormat& pictureFormat() const;
        bool has_pictureStackUnit() const;
        CT_PictureStackUnit* mutable_pictureStackUnit();
        const CT_PictureStackUnit& pictureStackUnit() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureOptions& default_instance() const;

    private:
        bool m_has_applyToFront ;
        CT_Boolean* m_applyToFront ;
        bool m_has_applyToSides ;
        CT_Boolean* m_applyToSides ;
        bool m_has_applyToEnd ;
        CT_Boolean* m_applyToEnd ;
        bool m_has_pictureFormat ;
        CT_PictureFormat* m_pictureFormat ;
        bool m_has_pictureStackUnit ;
        CT_PictureStackUnit* m_pictureStackUnit ;
        static CT_PictureOptions* default_instance_ ;

    }

    class CT_DispUnitsLbl : public XSD::ComplexType{
    public:
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        bool has_tx() const;
        CT_Tx* mutable_tx();
        const CT_Tx& tx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DispUnitsLbl& default_instance() const;

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        static CT_DispUnitsLbl* default_instance_ ;

    }

    class CT_DispUnits : public XSD::ComplexType{
    public:
        bool has_custUnit() const;
        CT_Double* mutable_custUnit();
        const CT_Double& custUnit() const;
        bool has_builtInUnit() const;
        CT_BuiltInUnit* mutable_builtInUnit();
        const CT_BuiltInUnit& builtInUnit() const;
        bool has_dispUnitsLbl() const;
        CT_DispUnitsLbl* mutable_dispUnitsLbl();
        const CT_DispUnitsLbl& dispUnitsLbl() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DispUnits& default_instance() const;

    private:
        bool m_has_custUnit ;
        CT_Double* m_custUnit ;
        bool m_has_builtInUnit ;
        CT_BuiltInUnit* m_builtInUnit ;
        bool m_has_dispUnitsLbl ;
        CT_DispUnitsLbl* m_dispUnitsLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DispUnits* default_instance_ ;

    }

    class CT_Orientation : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Orientation& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Orientation& _val_attr );
        const ST_Orientation& val_attr() const;

    private:
        static CT_Orientation* default_instance_ ;
        bool m_has_val_attr ;
        ST_Orientation* m_val_attr ;

    }

    class CT_LogBase : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LogBase& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LogBase& _val_attr );
        const ST_LogBase& val_attr() const;

    private:
        static CT_LogBase* default_instance_ ;
        bool m_has_val_attr ;
        ST_LogBase* m_val_attr ;

    }

    class CT_Scaling : public XSD::ComplexType{
    public:
        bool has_logBase() const;
        CT_LogBase* mutable_logBase();
        const CT_LogBase& logBase() const;
        bool has_orientation() const;
        CT_Orientation* mutable_orientation();
        const CT_Orientation& orientation() const;
        bool has_max() const;
        CT_Double* mutable_max();
        const CT_Double& max() const;
        bool has_min() const;
        CT_Double* mutable_min();
        const CT_Double& min() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Scaling& default_instance() const;

    private:
        bool m_has_logBase ;
        CT_LogBase* m_logBase ;
        bool m_has_orientation ;
        CT_Orientation* m_orientation ;
        bool m_has_max ;
        CT_Double* m_max ;
        bool m_has_min ;
        CT_Double* m_min ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Scaling* default_instance_ ;

    }

    class CT_LblOffset : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LblOffset& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LblOffset& _val_attr );
        const ST_LblOffset& val_attr() const;

    private:
        static CT_LblOffset* default_instance_ ;
        bool m_has_val_attr ;
        ST_LblOffset* m_val_attr ;

    }

    class CT_CatAx : public XSD::ComplexType{
    public:
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_scaling() const;
        CT_Scaling* mutable_scaling();
        const CT_Scaling& scaling() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_axPos() const;
        CT_AxPos* mutable_axPos();
        const CT_AxPos& axPos() const;
        bool has_majorGridlines() const;
        CT_ChartLines* mutable_majorGridlines();
        const CT_ChartLines& majorGridlines() const;
        bool has_minorGridlines() const;
        CT_ChartLines* mutable_minorGridlines();
        const CT_ChartLines& minorGridlines() const;
        bool has_title() const;
        CT_Title* mutable_title();
        const CT_Title& title() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_majorTickMark() const;
        CT_TickMark* mutable_majorTickMark();
        const CT_TickMark& majorTickMark() const;
        bool has_minorTickMark() const;
        CT_TickMark* mutable_minorTickMark();
        const CT_TickMark& minorTickMark() const;
        bool has_tickLblPos() const;
        CT_TickLblPos* mutable_tickLblPos();
        const CT_TickLblPos& tickLblPos() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_crossAx() const;
        CT_UnsignedInt* mutable_crossAx();
        const CT_UnsignedInt& crossAx() const;
        bool has_crosses() const;
        CT_Crosses* mutable_crosses();
        const CT_Crosses& crosses() const;
        bool has_crossesAt() const;
        CT_Double* mutable_crossesAt();
        const CT_Double& crossesAt() const;
        bool has_auto() const;
        CT_Boolean* mutable_auto();
        const CT_Boolean& auto() const;
        bool has_lblAlgn() const;
        CT_LblAlgn* mutable_lblAlgn();
        const CT_LblAlgn& lblAlgn() const;
        bool has_lblOffset() const;
        CT_LblOffset* mutable_lblOffset();
        const CT_LblOffset& lblOffset() const;
        bool has_tickLblSkip() const;
        CT_Skip* mutable_tickLblSkip();
        const CT_Skip& tickLblSkip() const;
        bool has_tickMarkSkip() const;
        CT_Skip* mutable_tickMarkSkip();
        const CT_Skip& tickMarkSkip() const;
        bool has_noMultiLvlLbl() const;
        CT_Boolean* mutable_noMultiLvlLbl();
        const CT_Boolean& noMultiLvlLbl() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CatAx& default_instance() const;

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_auto ;
        CT_Boolean* m_auto ;
        bool m_has_lblAlgn ;
        CT_LblAlgn* m_lblAlgn ;
        bool m_has_lblOffset ;
        CT_LblOffset* m_lblOffset ;
        bool m_has_tickLblSkip ;
        CT_Skip* m_tickLblSkip ;
        bool m_has_tickMarkSkip ;
        CT_Skip* m_tickMarkSkip ;
        bool m_has_noMultiLvlLbl ;
        CT_Boolean* m_noMultiLvlLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_CatAx* default_instance_ ;

    }

    class CT_DateAx : public XSD::ComplexType{
    public:
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_scaling() const;
        CT_Scaling* mutable_scaling();
        const CT_Scaling& scaling() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_axPos() const;
        CT_AxPos* mutable_axPos();
        const CT_AxPos& axPos() const;
        bool has_majorGridlines() const;
        CT_ChartLines* mutable_majorGridlines();
        const CT_ChartLines& majorGridlines() const;
        bool has_minorGridlines() const;
        CT_ChartLines* mutable_minorGridlines();
        const CT_ChartLines& minorGridlines() const;
        bool has_title() const;
        CT_Title* mutable_title();
        const CT_Title& title() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_majorTickMark() const;
        CT_TickMark* mutable_majorTickMark();
        const CT_TickMark& majorTickMark() const;
        bool has_minorTickMark() const;
        CT_TickMark* mutable_minorTickMark();
        const CT_TickMark& minorTickMark() const;
        bool has_tickLblPos() const;
        CT_TickLblPos* mutable_tickLblPos();
        const CT_TickLblPos& tickLblPos() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_crossAx() const;
        CT_UnsignedInt* mutable_crossAx();
        const CT_UnsignedInt& crossAx() const;
        bool has_crosses() const;
        CT_Crosses* mutable_crosses();
        const CT_Crosses& crosses() const;
        bool has_crossesAt() const;
        CT_Double* mutable_crossesAt();
        const CT_Double& crossesAt() const;
        bool has_auto() const;
        CT_Boolean* mutable_auto();
        const CT_Boolean& auto() const;
        bool has_lblOffset() const;
        CT_LblOffset* mutable_lblOffset();
        const CT_LblOffset& lblOffset() const;
        bool has_baseTimeUnit() const;
        CT_TimeUnit* mutable_baseTimeUnit();
        const CT_TimeUnit& baseTimeUnit() const;
        bool has_majorUnit() const;
        CT_AxisUnit* mutable_majorUnit();
        const CT_AxisUnit& majorUnit() const;
        bool has_majorTimeUnit() const;
        CT_TimeUnit* mutable_majorTimeUnit();
        const CT_TimeUnit& majorTimeUnit() const;
        bool has_minorUnit() const;
        CT_AxisUnit* mutable_minorUnit();
        const CT_AxisUnit& minorUnit() const;
        bool has_minorTimeUnit() const;
        CT_TimeUnit* mutable_minorTimeUnit();
        const CT_TimeUnit& minorTimeUnit() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DateAx& default_instance() const;

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_auto ;
        CT_Boolean* m_auto ;
        bool m_has_lblOffset ;
        CT_LblOffset* m_lblOffset ;
        bool m_has_baseTimeUnit ;
        CT_TimeUnit* m_baseTimeUnit ;
        bool m_has_majorUnit ;
        CT_AxisUnit* m_majorUnit ;
        bool m_has_majorTimeUnit ;
        CT_TimeUnit* m_majorTimeUnit ;
        bool m_has_minorUnit ;
        CT_AxisUnit* m_minorUnit ;
        bool m_has_minorTimeUnit ;
        CT_TimeUnit* m_minorTimeUnit ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DateAx* default_instance_ ;

    }

    class CT_SerAx : public XSD::ComplexType{
    public:
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_scaling() const;
        CT_Scaling* mutable_scaling();
        const CT_Scaling& scaling() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_axPos() const;
        CT_AxPos* mutable_axPos();
        const CT_AxPos& axPos() const;
        bool has_majorGridlines() const;
        CT_ChartLines* mutable_majorGridlines();
        const CT_ChartLines& majorGridlines() const;
        bool has_minorGridlines() const;
        CT_ChartLines* mutable_minorGridlines();
        const CT_ChartLines& minorGridlines() const;
        bool has_title() const;
        CT_Title* mutable_title();
        const CT_Title& title() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_majorTickMark() const;
        CT_TickMark* mutable_majorTickMark();
        const CT_TickMark& majorTickMark() const;
        bool has_minorTickMark() const;
        CT_TickMark* mutable_minorTickMark();
        const CT_TickMark& minorTickMark() const;
        bool has_tickLblPos() const;
        CT_TickLblPos* mutable_tickLblPos();
        const CT_TickLblPos& tickLblPos() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_crossAx() const;
        CT_UnsignedInt* mutable_crossAx();
        const CT_UnsignedInt& crossAx() const;
        bool has_crosses() const;
        CT_Crosses* mutable_crosses();
        const CT_Crosses& crosses() const;
        bool has_crossesAt() const;
        CT_Double* mutable_crossesAt();
        const CT_Double& crossesAt() const;
        bool has_tickLblSkip() const;
        CT_Skip* mutable_tickLblSkip();
        const CT_Skip& tickLblSkip() const;
        bool has_tickMarkSkip() const;
        CT_Skip* mutable_tickMarkSkip();
        const CT_Skip& tickMarkSkip() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SerAx& default_instance() const;

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_tickLblSkip ;
        CT_Skip* m_tickLblSkip ;
        bool m_has_tickMarkSkip ;
        CT_Skip* m_tickMarkSkip ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SerAx* default_instance_ ;

    }

    class CT_ValAx : public XSD::ComplexType{
    public:
        bool has_axId() const;
        CT_UnsignedInt* mutable_axId();
        const CT_UnsignedInt& axId() const;
        bool has_scaling() const;
        CT_Scaling* mutable_scaling();
        const CT_Scaling& scaling() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_axPos() const;
        CT_AxPos* mutable_axPos();
        const CT_AxPos& axPos() const;
        bool has_majorGridlines() const;
        CT_ChartLines* mutable_majorGridlines();
        const CT_ChartLines& majorGridlines() const;
        bool has_minorGridlines() const;
        CT_ChartLines* mutable_minorGridlines();
        const CT_ChartLines& minorGridlines() const;
        bool has_title() const;
        CT_Title* mutable_title();
        const CT_Title& title() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_majorTickMark() const;
        CT_TickMark* mutable_majorTickMark();
        const CT_TickMark& majorTickMark() const;
        bool has_minorTickMark() const;
        CT_TickMark* mutable_minorTickMark();
        const CT_TickMark& minorTickMark() const;
        bool has_tickLblPos() const;
        CT_TickLblPos* mutable_tickLblPos();
        const CT_TickLblPos& tickLblPos() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_crossAx() const;
        CT_UnsignedInt* mutable_crossAx();
        const CT_UnsignedInt& crossAx() const;
        bool has_crosses() const;
        CT_Crosses* mutable_crosses();
        const CT_Crosses& crosses() const;
        bool has_crossesAt() const;
        CT_Double* mutable_crossesAt();
        const CT_Double& crossesAt() const;
        bool has_crossBetween() const;
        CT_CrossBetween* mutable_crossBetween();
        const CT_CrossBetween& crossBetween() const;
        bool has_majorUnit() const;
        CT_AxisUnit* mutable_majorUnit();
        const CT_AxisUnit& majorUnit() const;
        bool has_minorUnit() const;
        CT_AxisUnit* mutable_minorUnit();
        const CT_AxisUnit& minorUnit() const;
        bool has_dispUnits() const;
        CT_DispUnits* mutable_dispUnits();
        const CT_DispUnits& dispUnits() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ValAx& default_instance() const;

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_crossBetween ;
        CT_CrossBetween* m_crossBetween ;
        bool m_has_majorUnit ;
        CT_AxisUnit* m_majorUnit ;
        bool m_has_minorUnit ;
        CT_AxisUnit* m_minorUnit ;
        bool m_has_dispUnits ;
        CT_DispUnits* m_dispUnits ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ValAx* default_instance_ ;

    }

    class CT_PlotArea : public XSD::ComplexType{
    public:
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        CT_AreaChart* add_areaChart();
        CT_Area3DChart* add_area3DChart();
        CT_LineChart* add_lineChart();
        CT_Line3DChart* add_line3DChart();
        CT_StockChart* add_stockChart();
        CT_RadarChart* add_radarChart();
        CT_ScatterChart* add_scatterChart();
        CT_PieChart* add_pieChart();
        CT_Pie3DChart* add_pie3DChart();
        CT_DoughnutChart* add_doughnutChart();
        CT_BarChart* add_barChart();
        CT_Bar3DChart* add_bar3DChart();
        CT_OfPieChart* add_ofPieChart();
        CT_SurfaceChart* add_surfaceChart();
        CT_Surface3DChart* add_surface3DChart();
        CT_BubbleChart* add_bubbleChart();
        CT_ValAx* add_valAx();
        CT_CatAx* add_catAx();
        CT_DateAx* add_dateAx();
        CT_SerAx* add_serAx();
        bool has_dTable() const;
        CT_DTable* mutable_dTable();
        const CT_DTable& dTable() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PlotArea& default_instance() const;

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_dTable ;
        CT_DTable* m_dTable ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PlotArea* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_areaChart() const;
            CT_AreaChart* mutable_areaChart();
            const CT_AreaChart& areaChart() const;
            bool has_area3DChart() const;
            CT_Area3DChart* mutable_area3DChart();
            const CT_Area3DChart& area3DChart() const;
            bool has_lineChart() const;
            CT_LineChart* mutable_lineChart();
            const CT_LineChart& lineChart() const;
            bool has_line3DChart() const;
            CT_Line3DChart* mutable_line3DChart();
            const CT_Line3DChart& line3DChart() const;
            bool has_stockChart() const;
            CT_StockChart* mutable_stockChart();
            const CT_StockChart& stockChart() const;
            bool has_radarChart() const;
            CT_RadarChart* mutable_radarChart();
            const CT_RadarChart& radarChart() const;
            bool has_scatterChart() const;
            CT_ScatterChart* mutable_scatterChart();
            const CT_ScatterChart& scatterChart() const;
            bool has_pieChart() const;
            CT_PieChart* mutable_pieChart();
            const CT_PieChart& pieChart() const;
            bool has_pie3DChart() const;
            CT_Pie3DChart* mutable_pie3DChart();
            const CT_Pie3DChart& pie3DChart() const;
            bool has_doughnutChart() const;
            CT_DoughnutChart* mutable_doughnutChart();
            const CT_DoughnutChart& doughnutChart() const;
            bool has_barChart() const;
            CT_BarChart* mutable_barChart();
            const CT_BarChart& barChart() const;
            bool has_bar3DChart() const;
            CT_Bar3DChart* mutable_bar3DChart();
            const CT_Bar3DChart& bar3DChart() const;
            bool has_ofPieChart() const;
            CT_OfPieChart* mutable_ofPieChart();
            const CT_OfPieChart& ofPieChart() const;
            bool has_surfaceChart() const;
            CT_SurfaceChart* mutable_surfaceChart();
            const CT_SurfaceChart& surfaceChart() const;
            bool has_surface3DChart() const;
            CT_Surface3DChart* mutable_surface3DChart();
            const CT_Surface3DChart& surface3DChart() const;
            bool has_bubbleChart() const;
            CT_BubbleChart* mutable_bubbleChart();
            const CT_BubbleChart& bubbleChart() const;
            bool has_valAx() const;
            CT_ValAx* mutable_valAx();
            const CT_ValAx& valAx() const;
            bool has_catAx() const;
            CT_CatAx* mutable_catAx();
            const CT_CatAx& catAx() const;
            bool has_dateAx() const;
            CT_DateAx* mutable_dateAx();
            const CT_DateAx& dateAx() const;
            bool has_serAx() const;
            CT_SerAx* mutable_serAx();
            const CT_SerAx& serAx() const;

        private:
            bool m_has_areaChart ;
            CT_AreaChart* m_areaChart ;
            bool m_has_area3DChart ;
            CT_Area3DChart* m_area3DChart ;
            bool m_has_lineChart ;
            CT_LineChart* m_lineChart ;
            bool m_has_line3DChart ;
            CT_Line3DChart* m_line3DChart ;
            bool m_has_stockChart ;
            CT_StockChart* m_stockChart ;
            bool m_has_radarChart ;
            CT_RadarChart* m_radarChart ;
            bool m_has_scatterChart ;
            CT_ScatterChart* m_scatterChart ;
            bool m_has_pieChart ;
            CT_PieChart* m_pieChart ;
            bool m_has_pie3DChart ;
            CT_Pie3DChart* m_pie3DChart ;
            bool m_has_doughnutChart ;
            CT_DoughnutChart* m_doughnutChart ;
            bool m_has_barChart ;
            CT_BarChart* m_barChart ;
            bool m_has_bar3DChart ;
            CT_Bar3DChart* m_bar3DChart ;
            bool m_has_ofPieChart ;
            CT_OfPieChart* m_ofPieChart ;
            bool m_has_surfaceChart ;
            CT_SurfaceChart* m_surfaceChart ;
            bool m_has_surface3DChart ;
            CT_Surface3DChart* m_surface3DChart ;
            bool m_has_bubbleChart ;
            CT_BubbleChart* m_bubbleChart ;
            bool m_has_valAx ;
            CT_ValAx* m_valAx ;
            bool m_has_catAx ;
            CT_CatAx* m_catAx ;
            bool m_has_dateAx ;
            CT_DateAx* m_dateAx ;
            bool m_has_serAx ;
            CT_SerAx* m_serAx ;

        }


    }

    class CT_PivotFmt : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_marker() const;
        CT_Marker* mutable_marker();
        const CT_Marker& marker() const;
        bool has_dLbl() const;
        CT_DLbl* mutable_dLbl();
        const CT_DLbl& dLbl() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PivotFmt& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dLbl ;
        CT_DLbl* m_dLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PivotFmt* default_instance_ ;

    }

    class CT_PivotFmts : public XSD::ComplexType{
    public:
        bool has_pivotFmt() const;
        CT_PivotFmt* mutable_pivotFmt();
        const CT_PivotFmt& pivotFmt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PivotFmts& default_instance() const;

    private:
        bool m_has_pivotFmt ;
        CT_PivotFmt* m_pivotFmt ;
        static CT_PivotFmts* default_instance_ ;

    }

    class CT_LegendPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LegendPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LegendPos& _val_attr );
        const ST_LegendPos& val_attr() const;

    private:
        static CT_LegendPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_LegendPos* m_val_attr ;

    }

    class CT_LegendEntry : public XSD::ComplexType{
    public:
        bool has_idx() const;
        CT_UnsignedInt* mutable_idx();
        const CT_UnsignedInt& idx() const;
        bool has_delete() const;
        CT_Boolean* mutable_delete();
        const CT_Boolean& delete() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LegendEntry& default_instance() const;

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LegendEntry* default_instance_ ;

    }

    class CT_Legend : public XSD::ComplexType{
    public:
        bool has_legendPos() const;
        CT_LegendPos* mutable_legendPos();
        const CT_LegendPos& legendPos() const;
        bool has_legendEntry() const;
        CT_LegendEntry* mutable_legendEntry();
        const CT_LegendEntry& legendEntry() const;
        bool has_layout() const;
        CT_Layout* mutable_layout();
        const CT_Layout& layout() const;
        bool has_overlay() const;
        CT_Boolean* mutable_overlay();
        const CT_Boolean& overlay() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Legend& default_instance() const;

    private:
        bool m_has_legendPos ;
        CT_LegendPos* m_legendPos ;
        bool m_has_legendEntry ;
        CT_LegendEntry* m_legendEntry ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_overlay ;
        CT_Boolean* m_overlay ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Legend* default_instance_ ;

    }

    class CT_DispBlanksAs : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DispBlanksAs& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DispBlanksAs& _val_attr );
        const ST_DispBlanksAs& val_attr() const;

    private:
        static CT_DispBlanksAs* default_instance_ ;
        bool m_has_val_attr ;
        ST_DispBlanksAs* m_val_attr ;

    }

    class CT_Chart : public XSD::ComplexType{
    public:
        bool has_title() const;
        CT_Title* mutable_title();
        const CT_Title& title() const;
        bool has_autoTitleDeleted() const;
        CT_Boolean* mutable_autoTitleDeleted();
        const CT_Boolean& autoTitleDeleted() const;
        bool has_pivotFmts() const;
        CT_PivotFmts* mutable_pivotFmts();
        const CT_PivotFmts& pivotFmts() const;
        bool has_view3D() const;
        CT_View3D* mutable_view3D();
        const CT_View3D& view3D() const;
        bool has_floor() const;
        CT_Surface* mutable_floor();
        const CT_Surface& floor() const;
        bool has_sideWall() const;
        CT_Surface* mutable_sideWall();
        const CT_Surface& sideWall() const;
        bool has_backWall() const;
        CT_Surface* mutable_backWall();
        const CT_Surface& backWall() const;
        bool has_plotArea() const;
        CT_PlotArea* mutable_plotArea();
        const CT_PlotArea& plotArea() const;
        bool has_legend() const;
        CT_Legend* mutable_legend();
        const CT_Legend& legend() const;
        bool has_plotVisOnly() const;
        CT_Boolean* mutable_plotVisOnly();
        const CT_Boolean& plotVisOnly() const;
        bool has_dispBlanksAs() const;
        CT_DispBlanksAs* mutable_dispBlanksAs();
        const CT_DispBlanksAs& dispBlanksAs() const;
        bool has_showDLblsOverMax() const;
        CT_Boolean* mutable_showDLblsOverMax();
        const CT_Boolean& showDLblsOverMax() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Chart& default_instance() const;

    private:
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_autoTitleDeleted ;
        CT_Boolean* m_autoTitleDeleted ;
        bool m_has_pivotFmts ;
        CT_PivotFmts* m_pivotFmts ;
        bool m_has_view3D ;
        CT_View3D* m_view3D ;
        bool m_has_floor ;
        CT_Surface* m_floor ;
        bool m_has_sideWall ;
        CT_Surface* m_sideWall ;
        bool m_has_backWall ;
        CT_Surface* m_backWall ;
        bool m_has_plotArea ;
        CT_PlotArea* m_plotArea ;
        bool m_has_legend ;
        CT_Legend* m_legend ;
        bool m_has_plotVisOnly ;
        CT_Boolean* m_plotVisOnly ;
        bool m_has_dispBlanksAs ;
        CT_DispBlanksAs* m_dispBlanksAs ;
        bool m_has_showDLblsOverMax ;
        CT_Boolean* m_showDLblsOverMax ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Chart* default_instance_ ;

    }

    class CT_Style : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Style& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Style& _val_attr );
        const ST_Style& val_attr() const;

    private:
        static CT_Style* default_instance_ ;
        bool m_has_val_attr ;
        ST_Style* m_val_attr ;

    }

    class CT_PivotSource : public XSD::ComplexType{
    public:
        bool has_name() const;
        ns_s::ST_Xstring* mutable_name();
        const ns_s::ST_Xstring& name() const;
        bool has_fmtId() const;
        CT_UnsignedInt* mutable_fmtId();
        const CT_UnsignedInt& fmtId() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PivotSource& default_instance() const;

    private:
        bool m_has_name ;
        ns_s::ST_Xstring* m_name ;
        bool m_has_fmtId ;
        CT_UnsignedInt* m_fmtId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PivotSource* default_instance_ ;

    }

    class CT_Protection : public XSD::ComplexType{
    public:
        bool has_chartObject() const;
        CT_Boolean* mutable_chartObject();
        const CT_Boolean& chartObject() const;
        bool has_data() const;
        CT_Boolean* mutable_data();
        const CT_Boolean& data() const;
        bool has_formatting() const;
        CT_Boolean* mutable_formatting();
        const CT_Boolean& formatting() const;
        bool has_selection() const;
        CT_Boolean* mutable_selection();
        const CT_Boolean& selection() const;
        bool has_userInterface() const;
        CT_Boolean* mutable_userInterface();
        const CT_Boolean& userInterface() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Protection& default_instance() const;

    private:
        bool m_has_chartObject ;
        CT_Boolean* m_chartObject ;
        bool m_has_data ;
        CT_Boolean* m_data ;
        bool m_has_formatting ;
        CT_Boolean* m_formatting ;
        bool m_has_selection ;
        CT_Boolean* m_selection ;
        bool m_has_userInterface ;
        CT_Boolean* m_userInterface ;
        static CT_Protection* default_instance_ ;

    }

    class CT_HeaderFooter : public XSD::ComplexType{
    public:
        bool has_oddHeader() const;
        ns_s::ST_Xstring* mutable_oddHeader();
        const ns_s::ST_Xstring& oddHeader() const;
        bool has_oddFooter() const;
        ns_s::ST_Xstring* mutable_oddFooter();
        const ns_s::ST_Xstring& oddFooter() const;
        bool has_evenHeader() const;
        ns_s::ST_Xstring* mutable_evenHeader();
        const ns_s::ST_Xstring& evenHeader() const;
        bool has_evenFooter() const;
        ns_s::ST_Xstring* mutable_evenFooter();
        const ns_s::ST_Xstring& evenFooter() const;
        bool has_firstHeader() const;
        ns_s::ST_Xstring* mutable_firstHeader();
        const ns_s::ST_Xstring& firstHeader() const;
        bool has_firstFooter() const;
        ns_s::ST_Xstring* mutable_firstFooter();
        const ns_s::ST_Xstring& firstFooter() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HeaderFooter& default_instance() const;
        bool has_alignWithMargins_attr() const;
        void set_alignWithMargins_attr(const boolean& _alignWithMargins_attr );
        const boolean& alignWithMargins_attr() const;
        bool has_differentOddEven_attr() const;
        void set_differentOddEven_attr(const boolean& _differentOddEven_attr );
        const boolean& differentOddEven_attr() const;
        bool has_differentFirst_attr() const;
        void set_differentFirst_attr(const boolean& _differentFirst_attr );
        const boolean& differentFirst_attr() const;

    private:
        bool m_has_oddHeader ;
        ns_s::ST_Xstring* m_oddHeader ;
        bool m_has_oddFooter ;
        ns_s::ST_Xstring* m_oddFooter ;
        bool m_has_evenHeader ;
        ns_s::ST_Xstring* m_evenHeader ;
        bool m_has_evenFooter ;
        ns_s::ST_Xstring* m_evenFooter ;
        bool m_has_firstHeader ;
        ns_s::ST_Xstring* m_firstHeader ;
        bool m_has_firstFooter ;
        ns_s::ST_Xstring* m_firstFooter ;
        static CT_HeaderFooter* default_instance_ ;
        bool m_has_alignWithMargins_attr ;
        boolean m_alignWithMargins_attr ;
        bool m_has_differentOddEven_attr ;
        boolean m_differentOddEven_attr ;
        bool m_has_differentFirst_attr ;
        boolean m_differentFirst_attr ;

    }

    class CT_PageMargins : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageMargins& default_instance() const;
        bool has_l_attr() const;
        void set_l_attr(const double& _l_attr );
        const double& l_attr() const;
        bool has_r_attr() const;
        void set_r_attr(const double& _r_attr );
        const double& r_attr() const;
        bool has_t_attr() const;
        void set_t_attr(const double& _t_attr );
        const double& t_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const double& _b_attr );
        const double& b_attr() const;
        bool has_header_attr() const;
        void set_header_attr(const double& _header_attr );
        const double& header_attr() const;
        bool has_footer_attr() const;
        void set_footer_attr(const double& _footer_attr );
        const double& footer_attr() const;

    private:
        static CT_PageMargins* default_instance_ ;
        bool m_has_l_attr ;
        double m_l_attr ;
        bool m_has_r_attr ;
        double m_r_attr ;
        bool m_has_t_attr ;
        double m_t_attr ;
        bool m_has_b_attr ;
        double m_b_attr ;
        bool m_has_header_attr ;
        double m_header_attr ;
        bool m_has_footer_attr ;
        double m_footer_attr ;

    }

    class CT_ExternalData : public XSD::ComplexType{
    public:
        bool has_autoUpdate() const;
        CT_Boolean* mutable_autoUpdate();
        const CT_Boolean& autoUpdate() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ExternalData& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_autoUpdate ;
        CT_Boolean* m_autoUpdate ;
        static CT_ExternalData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_PageSetup : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageSetup& default_instance() const;
        bool has_paperSize_attr() const;
        void set_paperSize_attr(const unsignedInt& _paperSize_attr );
        const unsignedInt& paperSize_attr() const;
        bool has_paperHeight_attr() const;
        void set_paperHeight_attr(const ns_s::ST_PositiveUniversalMeasure& _paperHeight_attr );
        const ns_s::ST_PositiveUniversalMeasure& paperHeight_attr() const;
        bool has_paperWidth_attr() const;
        void set_paperWidth_attr(const ns_s::ST_PositiveUniversalMeasure& _paperWidth_attr );
        const ns_s::ST_PositiveUniversalMeasure& paperWidth_attr() const;
        bool has_firstPageNumber_attr() const;
        void set_firstPageNumber_attr(const unsignedInt& _firstPageNumber_attr );
        const unsignedInt& firstPageNumber_attr() const;
        bool has_orientation_attr() const;
        void set_orientation_attr(const ST_PageSetupOrientation& _orientation_attr );
        const ST_PageSetupOrientation& orientation_attr() const;
        bool has_blackAndWhite_attr() const;
        void set_blackAndWhite_attr(const boolean& _blackAndWhite_attr );
        const boolean& blackAndWhite_attr() const;
        bool has_draft_attr() const;
        void set_draft_attr(const boolean& _draft_attr );
        const boolean& draft_attr() const;
        bool has_useFirstPageNumber_attr() const;
        void set_useFirstPageNumber_attr(const boolean& _useFirstPageNumber_attr );
        const boolean& useFirstPageNumber_attr() const;
        bool has_horizontalDpi_attr() const;
        void set_horizontalDpi_attr(const int& _horizontalDpi_attr );
        const int& horizontalDpi_attr() const;
        bool has_verticalDpi_attr() const;
        void set_verticalDpi_attr(const int& _verticalDpi_attr );
        const int& verticalDpi_attr() const;
        bool has_copies_attr() const;
        void set_copies_attr(const unsignedInt& _copies_attr );
        const unsignedInt& copies_attr() const;

    private:
        static CT_PageSetup* default_instance_ ;
        bool m_has_paperSize_attr ;
        unsignedInt m_paperSize_attr ;
        bool m_has_paperHeight_attr ;
        ns_s::ST_PositiveUniversalMeasure* m_paperHeight_attr ;
        bool m_has_paperWidth_attr ;
        ns_s::ST_PositiveUniversalMeasure* m_paperWidth_attr ;
        bool m_has_firstPageNumber_attr ;
        unsignedInt m_firstPageNumber_attr ;
        bool m_has_orientation_attr ;
        ST_PageSetupOrientation* m_orientation_attr ;
        bool m_has_blackAndWhite_attr ;
        boolean m_blackAndWhite_attr ;
        bool m_has_draft_attr ;
        boolean m_draft_attr ;
        bool m_has_useFirstPageNumber_attr ;
        boolean m_useFirstPageNumber_attr ;
        bool m_has_horizontalDpi_attr ;
        int m_horizontalDpi_attr ;
        bool m_has_verticalDpi_attr ;
        int m_verticalDpi_attr ;
        bool m_has_copies_attr ;
        unsignedInt m_copies_attr ;

    }

    class CT_PrintSettings : public XSD::ComplexType{
    public:
        bool has_headerFooter() const;
        CT_HeaderFooter* mutable_headerFooter();
        const CT_HeaderFooter& headerFooter() const;
        bool has_pageMargins() const;
        CT_PageMargins* mutable_pageMargins();
        const CT_PageMargins& pageMargins() const;
        bool has_pageSetup() const;
        CT_PageSetup* mutable_pageSetup();
        const CT_PageSetup& pageSetup() const;
        bool has_legacyDrawingHF() const;
        CT_RelId* mutable_legacyDrawingHF();
        const CT_RelId& legacyDrawingHF() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PrintSettings& default_instance() const;

    private:
        bool m_has_headerFooter ;
        CT_HeaderFooter* m_headerFooter ;
        bool m_has_pageMargins ;
        CT_PageMargins* m_pageMargins ;
        bool m_has_pageSetup ;
        CT_PageSetup* m_pageSetup ;
        bool m_has_legacyDrawingHF ;
        CT_RelId* m_legacyDrawingHF ;
        static CT_PrintSettings* default_instance_ ;

    }

    class CT_ChartSpace : public XSD::ComplexType{
    public:
        bool has_date1904() const;
        CT_Boolean* mutable_date1904();
        const CT_Boolean& date1904() const;
        bool has_lang() const;
        CT_TextLanguageID* mutable_lang();
        const CT_TextLanguageID& lang() const;
        bool has_roundedCorners() const;
        CT_Boolean* mutable_roundedCorners();
        const CT_Boolean& roundedCorners() const;
        bool has_style() const;
        CT_Style* mutable_style();
        const CT_Style& style() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMapping* mutable_clrMapOvr();
        const ns_a::CT_ColorMapping& clrMapOvr() const;
        bool has_pivotSource() const;
        CT_PivotSource* mutable_pivotSource();
        const CT_PivotSource& pivotSource() const;
        bool has_protection() const;
        CT_Protection* mutable_protection();
        const CT_Protection& protection() const;
        bool has_chart() const;
        CT_Chart* mutable_chart();
        const CT_Chart& chart() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_txPr() const;
        ns_a::CT_TextBody* mutable_txPr();
        const ns_a::CT_TextBody& txPr() const;
        bool has_externalData() const;
        CT_ExternalData* mutable_externalData();
        const CT_ExternalData& externalData() const;
        bool has_printSettings() const;
        CT_PrintSettings* mutable_printSettings();
        const CT_PrintSettings& printSettings() const;
        bool has_userShapes() const;
        CT_RelId* mutable_userShapes();
        const CT_RelId& userShapes() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ChartSpace& default_instance() const;

    private:
        bool m_has_date1904 ;
        CT_Boolean* m_date1904 ;
        bool m_has_lang ;
        CT_TextLanguageID* m_lang ;
        bool m_has_roundedCorners ;
        CT_Boolean* m_roundedCorners ;
        bool m_has_style ;
        CT_Style* m_style ;
        bool m_has_clrMapOvr ;
        ns_a::CT_ColorMapping* m_clrMapOvr ;
        bool m_has_pivotSource ;
        CT_PivotSource* m_pivotSource ;
        bool m_has_protection ;
        CT_Protection* m_protection ;
        bool m_has_chart ;
        CT_Chart* m_chart ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_externalData ;
        CT_ExternalData* m_externalData ;
        bool m_has_printSettings ;
        CT_PrintSettings* m_printSettings ;
        bool m_has_userShapes ;
        CT_RelId* m_userShapes ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ChartSpace* default_instance_ ;

    }

    class chartSpace : public CT_ChartSpace : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class userShapes : public ns_cdr::CT_Drawing : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class chart : public CT_RelId : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}