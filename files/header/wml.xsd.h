#ifndef wml_xsd 
#define wml_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-wordprocessingDrawing_xsd.h"
#include "shared-math_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "shared-customXmlSchemaProperties_xsd.h"
#include "xml.h"
#include "vml-main_xsd.h"
#include "vml-officeDrawing_xsd.h"
namespace ns_w{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_LongHexNumber : public XSD::SimpleType{
    public:
        ST_LongHexNumber();
        ST_LongHexNumber(const XSD::hexBinary& _hexBinary );
        bool has_hexBinary() const;
        void set_hexBinary(const hexBinary& _hexBinary );
        const hexBinary& hexBinary() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LongHexNumber& default_instance() const;

    private:
        static ST_LongHexNumber* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_ShortHexNumber : public XSD::SimpleType{
    public:
        ST_ShortHexNumber();
        ST_ShortHexNumber(const XSD::hexBinary& _hexBinary );
        bool has_hexBinary() const;
        void set_hexBinary(const hexBinary& _hexBinary );
        const hexBinary& hexBinary() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ShortHexNumber& default_instance() const;

    private:
        static ST_ShortHexNumber* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_UcharHexNumber : public XSD::SimpleType{
    public:
        ST_UcharHexNumber();
        ST_UcharHexNumber(const XSD::hexBinary& _hexBinary );
        bool has_hexBinary() const;
        void set_hexBinary(const hexBinary& _hexBinary );
        const hexBinary& hexBinary() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UcharHexNumber& default_instance() const;

    private:
        static ST_UcharHexNumber* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_DecimalNumberOrPercent : public XSD::SimpleType{
    public:
        bool has_ST_UnqualifiedPercentage() const;
        ST_UnqualifiedPercentage* mutable_ST_UnqualifiedPercentage();
        const ST_UnqualifiedPercentage& ST_UnqualifiedPercentage() const;
        bool has_ST_Percentage() const;
        ns_s::ST_Percentage* mutable_ST_Percentage();
        const ns_s::ST_Percentage& ST_Percentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DecimalNumberOrPercent& default_instance() const;

    private:
        void clear_ST_UnqualifiedPercentage();
        void clear_ST_Percentage();
        bool m_has_ST_UnqualifiedPercentage ;
        ST_UnqualifiedPercentage* m_ST_UnqualifiedPercentage ;
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        static ST_DecimalNumberOrPercent* default_instance_ ;

    }

    class ST_UnqualifiedPercentage : public XSD::SimpleType{
    public:
        ST_UnqualifiedPercentage();
        ST_UnqualifiedPercentage(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UnqualifiedPercentage& default_instance() const;

    private:
        static ST_UnqualifiedPercentage* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_DecimalNumber : public XSD::SimpleType{
    public:
        ST_DecimalNumber();
        ST_DecimalNumber(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DecimalNumber& default_instance() const;

    private:
        static ST_DecimalNumber* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_SignedTwipsMeasure : public XSD::SimpleType{
    public:
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SignedTwipsMeasure& default_instance() const;

    private:
        void clear_integer();
        void clear_ST_UniversalMeasure();
        bool m_has_integer ;
        integer m_integer ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_SignedTwipsMeasure* default_instance_ ;

    }

    class ST_PixelsMeasure : public ST_UnsignedDecimalNumber{
    public:
        ST_PixelsMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber );

    private:

    }

    class ST_HpsMeasure : public XSD::SimpleType{
    public:
        bool has_ST_UnsignedDecimalNumber() const;
        ns_s::ST_UnsignedDecimalNumber* mutable_ST_UnsignedDecimalNumber();
        const ns_s::ST_UnsignedDecimalNumber& ST_UnsignedDecimalNumber() const;
        bool has_ST_PositiveUniversalMeasure() const;
        ns_s::ST_PositiveUniversalMeasure* mutable_ST_PositiveUniversalMeasure();
        const ns_s::ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HpsMeasure& default_instance() const;

    private:
        void clear_ST_UnsignedDecimalNumber();
        void clear_ST_PositiveUniversalMeasure();
        bool m_has_ST_UnsignedDecimalNumber ;
        ns_s::ST_UnsignedDecimalNumber* m_ST_UnsignedDecimalNumber ;
        bool m_has_ST_PositiveUniversalMeasure ;
        ns_s::ST_PositiveUniversalMeasure* m_ST_PositiveUniversalMeasure ;
        static ST_HpsMeasure* default_instance_ ;

    }

    class ST_SignedHpsMeasure : public XSD::SimpleType{
    public:
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SignedHpsMeasure& default_instance() const;

    private:
        void clear_integer();
        void clear_ST_UniversalMeasure();
        bool m_has_integer ;
        integer m_integer ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_SignedHpsMeasure* default_instance_ ;

    }

    class ST_DateTime : public XSD::SimpleType{
    public:
        ST_DateTime();
        ST_DateTime(const XSD::dateTime& _dateTime );
        bool has_dateTime() const;
        void set_dateTime(const dateTime& _dateTime );
        const dateTime& dateTime() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DateTime& default_instance() const;

    private:
        static ST_DateTime* default_instance_ ;
        bool m_has_dateTime ;
        dateTime m_dateTime ;

    }

    class ST_MacroName : public XSD::SimpleType{
    public:
        ST_MacroName();
        ST_MacroName(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MacroName& default_instance() const;

    private:
        static ST_MacroName* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_EighthPointMeasure : public ST_UnsignedDecimalNumber{
    public:
        ST_EighthPointMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber );

    private:

    }

    class ST_PointMeasure : public ST_UnsignedDecimalNumber{
    public:
        ST_PointMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber );

    private:

    }

    class ST_TextScale : public XSD::SimpleType{
    public:
        bool has_ST_TextScalePercent() const;
        ST_TextScalePercent* mutable_ST_TextScalePercent();
        const ST_TextScalePercent& ST_TextScalePercent() const;
        bool has_ST_TextScaleDecimal() const;
        ST_TextScaleDecimal* mutable_ST_TextScaleDecimal();
        const ST_TextScaleDecimal& ST_TextScaleDecimal() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextScale& default_instance() const;

    private:
        void clear_ST_TextScalePercent();
        void clear_ST_TextScaleDecimal();
        bool m_has_ST_TextScalePercent ;
        ST_TextScalePercent* m_ST_TextScalePercent ;
        bool m_has_ST_TextScaleDecimal ;
        ST_TextScaleDecimal* m_ST_TextScaleDecimal ;
        static ST_TextScale* default_instance_ ;

    }

    class ST_TextScalePercent : public XSD::SimpleType{
    public:
        ST_TextScalePercent();
        ST_TextScalePercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextScalePercent& default_instance() const;

    private:
        static ST_TextScalePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_TextScaleDecimal : public XSD::SimpleType{
    public:
        ST_TextScaleDecimal();
        ST_TextScaleDecimal(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextScaleDecimal& default_instance() const;

    private:
        static ST_TextScaleDecimal* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_HighlightColor : public XSD::SimpleType{
    public:
        ST_HighlightColor();
        ST_HighlightColor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HighlightColor& default_instance() const;
        enum Type{
            _black_ = 1,
            _blue_,
            _cyan_,
            _green_,
            _magenta_,
            _red_,
            _yellow_,
            _white_,
            _darkBlue_,
            _darkCyan_,
            _darkGreen_,
            _darkMagenta_,
            _darkRed_,
            _darkYellow_,
            _darkGray_,
            _lightGray_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_HighlightColor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HexColorAuto : public XSD::SimpleType{
    public:
        ST_HexColorAuto();
        ST_HexColorAuto(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HexColorAuto& default_instance() const;
        enum Type{
            _auto_ = 1
        }

    private:
        static const string TypeStrList [];
        static ST_HexColorAuto* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HexColor : public XSD::SimpleType{
    public:
        bool has_ST_HexColorAuto() const;
        ST_HexColorAuto* mutable_ST_HexColorAuto();
        const ST_HexColorAuto& ST_HexColorAuto() const;
        bool has_ST_HexColorRGB() const;
        ns_s::ST_HexColorRGB* mutable_ST_HexColorRGB();
        const ns_s::ST_HexColorRGB& ST_HexColorRGB() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HexColor& default_instance() const;

    private:
        void clear_ST_HexColorAuto();
        void clear_ST_HexColorRGB();
        bool m_has_ST_HexColorAuto ;
        ST_HexColorAuto* m_ST_HexColorAuto ;
        bool m_has_ST_HexColorRGB ;
        ns_s::ST_HexColorRGB* m_ST_HexColorRGB ;
        static ST_HexColor* default_instance_ ;

    }

    class ST_Underline : public XSD::SimpleType{
    public:
        ST_Underline();
        ST_Underline(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Underline& default_instance() const;
        enum Type{
            _single_ = 1,
            _words_,
            _double_,
            _thick_,
            _dotted_,
            _dottedHeavy_,
            _dash_,
            _dashedHeavy_,
            _dashLong_,
            _dashLongHeavy_,
            _dotDash_,
            _dashDotHeavy_,
            _dotDotDash_,
            _dashDotDotHeavy_,
            _wave_,
            _wavyHeavy_,
            _wavyDouble_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_Underline* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextEffect : public XSD::SimpleType{
    public:
        ST_TextEffect();
        ST_TextEffect(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextEffect& default_instance() const;
        enum Type{
            _blinkBackground_ = 1,
            _lights_,
            _antsBlack_,
            _antsRed_,
            _shimmer_,
            _sparkle_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_TextEffect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Border : public XSD::SimpleType{
    public:
        ST_Border();
        ST_Border(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Border& default_instance() const;
        enum Type{
            _nil_ = 1,
            _none_,
            _single_,
            _thick_,
            _double_,
            _dotted_,
            _dashed_,
            _dotDash_,
            _dotDotDash_,
            _triple_,
            _thinThickSmallGap_,
            _thickThinSmallGap_,
            _thinThickThinSmallGap_,
            _thinThickMediumGap_,
            _thickThinMediumGap_,
            _thinThickThinMediumGap_,
            _thinThickLargeGap_,
            _thickThinLargeGap_,
            _thinThickThinLargeGap_,
            _wave_,
            _doubleWave_,
            _dashSmallGap_,
            _dashDotStroked_,
            _threeDEmboss_,
            _threeDEngrave_,
            _outset_,
            _inset_,
            _apples_,
            _archedScallops_,
            _babyPacifier_,
            _babyRattle_,
            _balloons3Colors_,
            _balloonsHotAir_,
            _basicBlackDashes_,
            _basicBlackDots_,
            _basicBlackSquares_,
            _basicThinLines_,
            _basicWhiteDashes_,
            _basicWhiteDots_,
            _basicWhiteSquares_,
            _basicWideInline_,
            _basicWideMidline_,
            _basicWideOutline_,
            _bats_,
            _birds_,
            _birdsFlight_,
            _cabins_,
            _cakeSlice_,
            _candyCorn_,
            _celticKnotwork_,
            _certificateBanner_,
            _chainLink_,
            _champagneBottle_,
            _checkedBarBlack_,
            _checkedBarColor_,
            _checkered_,
            _christmasTree_,
            _circlesLines_,
            _circlesRectangles_,
            _classicalWave_,
            _clocks_,
            _compass_,
            _confetti_,
            _confettiGrays_,
            _confettiOutline_,
            _confettiStreamers_,
            _confettiWhite_,
            _cornerTriangles_,
            _couponCutoutDashes_,
            _couponCutoutDots_,
            _crazyMaze_,
            _creaturesButterfly_,
            _creaturesFish_,
            _creaturesInsects_,
            _creaturesLadyBug_,
            _crossStitch_,
            _cup_,
            _decoArch_,
            _decoArchColor_,
            _decoBlocks_,
            _diamondsGray_,
            _doubleD_,
            _doubleDiamonds_,
            _earth1_,
            _earth2_,
            _earth3_,
            _eclipsingSquares1_,
            _eclipsingSquares2_,
            _eggsBlack_,
            _fans_,
            _film_,
            _firecrackers_,
            _flowersBlockPrint_,
            _flowersDaisies_,
            _flowersModern1_,
            _flowersModern2_,
            _flowersPansy_,
            _flowersRedRose_,
            _flowersRoses_,
            _flowersTeacup_,
            _flowersTiny_,
            _gems_,
            _gingerbreadMan_,
            _gradient_,
            _handmade1_,
            _handmade2_,
            _heartBalloon_,
            _heartGray_,
            _hearts_,
            _heebieJeebies_,
            _holly_,
            _houseFunky_,
            _hypnotic_,
            _iceCreamCones_,
            _lightBulb_,
            _lightning1_,
            _lightning2_,
            _mapPins_,
            _mapleLeaf_,
            _mapleMuffins_,
            _marquee_,
            _marqueeToothed_,
            _moons_,
            _mosaic_,
            _musicNotes_,
            _northwest_,
            _ovals_,
            _packages_,
            _palmsBlack_,
            _palmsColor_,
            _paperClips_,
            _papyrus_,
            _partyFavor_,
            _partyGlass_,
            _pencils_,
            _people_,
            _peopleWaving_,
            _peopleHats_,
            _poinsettias_,
            _postageStamp_,
            _pumpkin1_,
            _pushPinNote2_,
            _pushPinNote1_,
            _pyramids_,
            _pyramidsAbove_,
            _quadrants_,
            _rings_,
            _safari_,
            _sawtooth_,
            _sawtoothGray_,
            _scaredCat_,
            _seattle_,
            _shadowedSquares_,
            _sharksTeeth_,
            _shorebirdTracks_,
            _skyrocket_,
            _snowflakeFancy_,
            _snowflakes_,
            _sombrero_,
            _southwest_,
            _stars_,
            _starsTop_,
            _stars3d_,
            _starsBlack_,
            _starsShadowed_,
            _sun_,
            _swirligig_,
            _tornPaper_,
            _tornPaperBlack_,
            _trees_,
            _triangleParty_,
            _triangles_,
            _triangle1_,
            _triangle2_,
            _triangleCircle1_,
            _triangleCircle2_,
            _shapes1_,
            _shapes2_,
            _twistedLines1_,
            _twistedLines2_,
            _vine_,
            _waveline_,
            _weavingAngles_,
            _weavingBraid_,
            _weavingRibbon_,
            _weavingStrips_,
            _whiteFlowers_,
            _woodwork_,
            _xIllusions_,
            _zanyTriangles_,
            _zigZag_,
            _zigZagStitch_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_Border* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Shd : public XSD::SimpleType{
    public:
        ST_Shd();
        ST_Shd(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Shd& default_instance() const;
        enum Type{
            _nil_ = 1,
            _clear_,
            _solid_,
            _horzStripe_,
            _vertStripe_,
            _reverseDiagStripe_,
            _diagStripe_,
            _horzCross_,
            _diagCross_,
            _thinHorzStripe_,
            _thinVertStripe_,
            _thinReverseDiagStripe_,
            _thinDiagStripe_,
            _thinHorzCross_,
            _thinDiagCross_,
            _pct5_,
            _pct10_,
            _pct12_,
            _pct15_,
            _pct20_,
            _pct25_,
            _pct30_,
            _pct35_,
            _pct37_,
            _pct40_,
            _pct45_,
            _pct50_,
            _pct55_,
            _pct60_,
            _pct62_,
            _pct65_,
            _pct70_,
            _pct75_,
            _pct80_,
            _pct85_,
            _pct87_,
            _pct90_,
            _pct95_
        }

    private:
        static const string TypeStrList [];
        static ST_Shd* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Em : public XSD::SimpleType{
    public:
        ST_Em();
        ST_Em(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Em& default_instance() const;
        enum Type{
            _none_ = 1,
            _dot_,
            _comma_,
            _circle_,
            _underDot_
        }

    private:
        static const string TypeStrList [];
        static ST_Em* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CombineBrackets : public XSD::SimpleType{
    public:
        ST_CombineBrackets();
        ST_CombineBrackets(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CombineBrackets& default_instance() const;
        enum Type{
            _none_ = 1,
            _round_,
            _square_,
            _angle_,
            _curly_
        }

    private:
        static const string TypeStrList [];
        static ST_CombineBrackets* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HeightRule : public XSD::SimpleType{
    public:
        ST_HeightRule();
        ST_HeightRule(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HeightRule& default_instance() const;
        enum Type{
            _auto_ = 1,
            _exact_,
            _atLeast_
        }

    private:
        static const string TypeStrList [];
        static ST_HeightRule* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Wrap : public XSD::SimpleType{
    public:
        ST_Wrap();
        ST_Wrap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Wrap& default_instance() const;
        enum Type{
            _auto_ = 1,
            _notBeside_,
            _around_,
            _tight_,
            _through_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_Wrap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_VAnchor : public XSD::SimpleType{
    public:
        ST_VAnchor();
        ST_VAnchor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VAnchor& default_instance() const;
        enum Type{
            _text_ = 1,
            _margin_,
            _page_
        }

    private:
        static const string TypeStrList [];
        static ST_VAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HAnchor : public XSD::SimpleType{
    public:
        ST_HAnchor();
        ST_HAnchor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HAnchor& default_instance() const;
        enum Type{
            _text_ = 1,
            _margin_,
            _page_
        }

    private:
        static const string TypeStrList [];
        static ST_HAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DropCap : public XSD::SimpleType{
    public:
        ST_DropCap();
        ST_DropCap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DropCap& default_instance() const;
        enum Type{
            _none_ = 1,
            _drop_,
            _margin_
        }

    private:
        static const string TypeStrList [];
        static ST_DropCap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TabJc : public XSD::SimpleType{
    public:
        ST_TabJc();
        ST_TabJc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TabJc& default_instance() const;
        enum Type{
            _clear_ = 1,
            _start_,
            _center_,
            _end_,
            _decimal_,
            _bar_,
            _num_,
            _left_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_TabJc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TabTlc : public XSD::SimpleType{
    public:
        ST_TabTlc();
        ST_TabTlc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TabTlc& default_instance() const;
        enum Type{
            _none_ = 1,
            _dot_,
            _hyphen_,
            _underscore_,
            _heavy_,
            _middleDot_
        }

    private:
        static const string TypeStrList [];
        static ST_TabTlc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineSpacingRule : public XSD::SimpleType{
    public:
        ST_LineSpacingRule();
        ST_LineSpacingRule(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineSpacingRule& default_instance() const;
        enum Type{
            _auto_ = 1,
            _exact_,
            _atLeast_
        }

    private:
        static const string TypeStrList [];
        static ST_LineSpacingRule* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Jc : public XSD::SimpleType{
    public:
        ST_Jc();
        ST_Jc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Jc& default_instance() const;
        enum Type{
            _start_ = 1,
            _center_,
            _end_,
            _both_,
            _mediumKashida_,
            _distribute_,
            _numTab_,
            _highKashida_,
            _lowKashida_,
            _thaiDistribute_,
            _left_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_Jc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_JcTable : public XSD::SimpleType{
    public:
        ST_JcTable();
        ST_JcTable(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_JcTable& default_instance() const;
        enum Type{
            _center_ = 1,
            _end_,
            _left_,
            _right_,
            _start_
        }

    private:
        static const string TypeStrList [];
        static ST_JcTable* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_View : public XSD::SimpleType{
    public:
        ST_View();
        ST_View(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_View& default_instance() const;
        enum Type{
            _none_ = 1,
            _print_,
            _outline_,
            _masterPages_,
            _normal_,
            _web_
        }

    private:
        static const string TypeStrList [];
        static ST_View* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Zoom : public XSD::SimpleType{
    public:
        ST_Zoom();
        ST_Zoom(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Zoom& default_instance() const;
        enum Type{
            _none_ = 1,
            _fullPage_,
            _bestFit_,
            _textFit_
        }

    private:
        static const string TypeStrList [];
        static ST_Zoom* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Proof : public XSD::SimpleType{
    public:
        ST_Proof();
        ST_Proof(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Proof& default_instance() const;
        enum Type{
            _clean_ = 1,
            _dirty_
        }

    private:
        static const string TypeStrList [];
        static ST_Proof* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DocType : public XSD::SimpleType{
    public:
        ST_DocType();
        ST_DocType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocType& default_instance() const;

    private:
        static ST_DocType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_DocProtect : public XSD::SimpleType{
    public:
        ST_DocProtect();
        ST_DocProtect(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocProtect& default_instance() const;
        enum Type{
            _none_ = 1,
            _readOnly_,
            _comments_,
            _trackedChanges_,
            _forms_
        }

    private:
        static const string TypeStrList [];
        static ST_DocProtect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MailMergeDocType : public XSD::SimpleType{
    public:
        ST_MailMergeDocType();
        ST_MailMergeDocType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MailMergeDocType& default_instance() const;
        enum Type{
            _catalog_ = 1,
            _envelopes_,
            _mailingLabels_,
            _formLetters_,
            _email_,
            _fax_
        }

    private:
        static const string TypeStrList [];
        static ST_MailMergeDocType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MailMergeDataType : public XSD::SimpleType{
    public:
        ST_MailMergeDataType();
        ST_MailMergeDataType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MailMergeDataType& default_instance() const;

    private:
        static ST_MailMergeDataType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_MailMergeDest : public XSD::SimpleType{
    public:
        ST_MailMergeDest();
        ST_MailMergeDest(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MailMergeDest& default_instance() const;
        enum Type{
            _newDocument_ = 1,
            _printer_,
            _email_,
            _fax_
        }

    private:
        static const string TypeStrList [];
        static ST_MailMergeDest* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MailMergeOdsoFMDFieldType : public XSD::SimpleType{
    public:
        ST_MailMergeOdsoFMDFieldType();
        ST_MailMergeOdsoFMDFieldType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MailMergeOdsoFMDFieldType& default_instance() const;
        enum Type{
            _null_ = 1,
            _dbColumn_
        }

    private:
        static const string TypeStrList [];
        static ST_MailMergeOdsoFMDFieldType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextDirection : public XSD::SimpleType{
    public:
        ST_TextDirection();
        ST_TextDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextDirection& default_instance() const;
        enum Type{
            _tb_ = 1,
            _rl_,
            _lr_,
            _tbV_,
            _rlV_,
            _lrV_,
            _btLr_,
            _lrTb_,
            _lrTbV_,
            _tbLrV_,
            _tbRl_,
            _tbRlV_
        }

    private:
        static const string TypeStrList [];
        static ST_TextDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextAlignment : public XSD::SimpleType{
    public:
        ST_TextAlignment();
        ST_TextAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAlignment& default_instance() const;
        enum Type{
            _top_ = 1,
            _center_,
            _baseline_,
            _bottom_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DisplacedByCustomXml : public XSD::SimpleType{
    public:
        ST_DisplacedByCustomXml();
        ST_DisplacedByCustomXml(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DisplacedByCustomXml& default_instance() const;
        enum Type{
            _next_ = 1,
            _prev_
        }

    private:
        static const string TypeStrList [];
        static ST_DisplacedByCustomXml* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnnotationVMerge : public XSD::SimpleType{
    public:
        ST_AnnotationVMerge();
        ST_AnnotationVMerge(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnnotationVMerge& default_instance() const;
        enum Type{
            _cont_ = 1,
            _rest_
        }

    private:
        static const string TypeStrList [];
        static ST_AnnotationVMerge* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextboxTightWrap : public XSD::SimpleType{
    public:
        ST_TextboxTightWrap();
        ST_TextboxTightWrap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextboxTightWrap& default_instance() const;
        enum Type{
            _none_ = 1,
            _allLines_,
            _firstAndLastLine_,
            _firstLineOnly_,
            _lastLineOnly_
        }

    private:
        static const string TypeStrList [];
        static ST_TextboxTightWrap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ObjectDrawAspect : public XSD::SimpleType{
    public:
        ST_ObjectDrawAspect();
        ST_ObjectDrawAspect(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ObjectDrawAspect& default_instance() const;
        enum Type{
            _content_ = 1,
            _icon_
        }

    private:
        static const string TypeStrList [];
        static ST_ObjectDrawAspect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ObjectUpdateMode : public XSD::SimpleType{
    public:
        ST_ObjectUpdateMode();
        ST_ObjectUpdateMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ObjectUpdateMode& default_instance() const;
        enum Type{
            _always_ = 1,
            _onCall_
        }

    private:
        static const string TypeStrList [];
        static ST_ObjectUpdateMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FldCharType : public XSD::SimpleType{
    public:
        ST_FldCharType();
        ST_FldCharType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FldCharType& default_instance() const;
        enum Type{
            _begin_ = 1,
            _separate_,
            _end_
        }

    private:
        static const string TypeStrList [];
        static ST_FldCharType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_InfoTextType : public XSD::SimpleType{
    public:
        ST_InfoTextType();
        ST_InfoTextType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_InfoTextType& default_instance() const;
        enum Type{
            _text_ = 1,
            _autoText_
        }

    private:
        static const string TypeStrList [];
        static ST_InfoTextType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FFHelpTextVal : public XSD::SimpleType{
    public:
        ST_FFHelpTextVal();
        ST_FFHelpTextVal(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FFHelpTextVal& default_instance() const;

    private:
        static ST_FFHelpTextVal* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_FFStatusTextVal : public XSD::SimpleType{
    public:
        ST_FFStatusTextVal();
        ST_FFStatusTextVal(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FFStatusTextVal& default_instance() const;

    private:
        static ST_FFStatusTextVal* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_FFName : public XSD::SimpleType{
    public:
        ST_FFName();
        ST_FFName(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FFName& default_instance() const;

    private:
        static ST_FFName* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_FFTextType : public XSD::SimpleType{
    public:
        ST_FFTextType();
        ST_FFTextType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FFTextType& default_instance() const;
        enum Type{
            _regular_ = 1,
            _number_,
            _date_,
            _currentTime_,
            _currentDate_,
            _calculated_
        }

    private:
        static const string TypeStrList [];
        static ST_FFTextType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SectionMark : public XSD::SimpleType{
    public:
        ST_SectionMark();
        ST_SectionMark(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SectionMark& default_instance() const;
        enum Type{
            _nextPage_ = 1,
            _nextColumn_,
            _continuous_,
            _evenPage_,
            _oddPage_
        }

    private:
        static const string TypeStrList [];
        static ST_SectionMark* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_NumberFormat : public XSD::SimpleType{
    public:
        ST_NumberFormat();
        ST_NumberFormat(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_NumberFormat& default_instance() const;
        enum Type{
            _decimal_ = 1,
            _upperRoman_,
            _lowerRoman_,
            _upperLetter_,
            _lowerLetter_,
            _ordinal_,
            _cardinalText_,
            _ordinalText_,
            _hex_,
            _chicago_,
            _ideographDigital_,
            _japaneseCounting_,
            _aiueo_,
            _iroha_,
            _decimalFullWidth_,
            _decimalHalfWidth_,
            _japaneseLegal_,
            _japaneseDigitalTenThousand_,
            _decimalEnclosedCircle_,
            _decimalFullWidth2_,
            _aiueoFullWidth_,
            _irohaFullWidth_,
            _decimalZero_,
            _bullet_,
            _ganada_,
            _chosung_,
            _decimalEnclosedFullstop_,
            _decimalEnclosedParen_,
            _decimalEnclosedCircleChinese_,
            _ideographEnclosedCircle_,
            _ideographTraditional_,
            _ideographZodiac_,
            _ideographZodiacTraditional_,
            _taiwaneseCounting_,
            _ideographLegalTraditional_,
            _taiwaneseCountingThousand_,
            _taiwaneseDigital_,
            _chineseCounting_,
            _chineseLegalSimplified_,
            _chineseCountingThousand_,
            _koreanDigital_,
            _koreanCounting_,
            _koreanLegal_,
            _koreanDigital2_,
            _vietnameseCounting_,
            _russianLower_,
            _russianUpper_,
            _none_,
            _numberInDash_,
            _hebrew1_,
            _hebrew2_,
            _arabicAlpha_,
            _arabicAbjad_,
            _hindiVowels_,
            _hindiConsonants_,
            _hindiNumbers_,
            _hindiCounting_,
            _thaiLetters_,
            _thaiNumbers_,
            _thaiCounting_,
            _bahtText_,
            _dollarText_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_NumberFormat* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PageOrientation : public XSD::SimpleType{
    public:
        ST_PageOrientation();
        ST_PageOrientation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PageOrientation& default_instance() const;
        enum Type{
            _portrait_ = 1,
            _landscape_
        }

    private:
        static const string TypeStrList [];
        static ST_PageOrientation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PageBorderZOrder : public XSD::SimpleType{
    public:
        ST_PageBorderZOrder();
        ST_PageBorderZOrder(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PageBorderZOrder& default_instance() const;
        enum Type{
            _front_ = 1,
            _back_
        }

    private:
        static const string TypeStrList [];
        static ST_PageBorderZOrder* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PageBorderDisplay : public XSD::SimpleType{
    public:
        ST_PageBorderDisplay();
        ST_PageBorderDisplay(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PageBorderDisplay& default_instance() const;
        enum Type{
            _allPages_ = 1,
            _firstPage_,
            _notFirstPage_
        }

    private:
        static const string TypeStrList [];
        static ST_PageBorderDisplay* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PageBorderOffset : public XSD::SimpleType{
    public:
        ST_PageBorderOffset();
        ST_PageBorderOffset(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PageBorderOffset& default_instance() const;
        enum Type{
            _page_ = 1,
            _text_
        }

    private:
        static const string TypeStrList [];
        static ST_PageBorderOffset* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ChapterSep : public XSD::SimpleType{
    public:
        ST_ChapterSep();
        ST_ChapterSep(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ChapterSep& default_instance() const;
        enum Type{
            _hyphen_ = 1,
            _period_,
            _colon_,
            _emDash_,
            _enDash_
        }

    private:
        static const string TypeStrList [];
        static ST_ChapterSep* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineNumberRestart : public XSD::SimpleType{
    public:
        ST_LineNumberRestart();
        ST_LineNumberRestart(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineNumberRestart& default_instance() const;
        enum Type{
            _newPage_ = 1,
            _newSection_,
            _continuous_
        }

    private:
        static const string TypeStrList [];
        static ST_LineNumberRestart* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_VerticalJc : public XSD::SimpleType{
    public:
        ST_VerticalJc();
        ST_VerticalJc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VerticalJc& default_instance() const;
        enum Type{
            _top_ = 1,
            _center_,
            _both_,
            _bottom_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalJc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DocGrid : public XSD::SimpleType{
    public:
        ST_DocGrid();
        ST_DocGrid(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocGrid& default_instance() const;
        enum Type{
            _default_ = 1,
            _lines_,
            _linesAndChars_,
            _snapToChars_
        }

    private:
        static const string TypeStrList [];
        static ST_DocGrid* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HdrFtr : public XSD::SimpleType{
    public:
        ST_HdrFtr();
        ST_HdrFtr(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HdrFtr& default_instance() const;
        enum Type{
            _even_ = 1,
            _default_,
            _first_
        }

    private:
        static const string TypeStrList [];
        static ST_HdrFtr* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FtnEdn : public XSD::SimpleType{
    public:
        ST_FtnEdn();
        ST_FtnEdn(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FtnEdn& default_instance() const;
        enum Type{
            _normal_ = 1,
            _separator_,
            _continuationSeparator_,
            _continuationNotice_
        }

    private:
        static const string TypeStrList [];
        static ST_FtnEdn* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BrType : public XSD::SimpleType{
    public:
        ST_BrType();
        ST_BrType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BrType& default_instance() const;
        enum Type{
            _page_ = 1,
            _column_,
            _textWrapping_
        }

    private:
        static const string TypeStrList [];
        static ST_BrType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BrClear : public XSD::SimpleType{
    public:
        ST_BrClear();
        ST_BrClear(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BrClear& default_instance() const;
        enum Type{
            _none_ = 1,
            _left_,
            _right_,
            _all_
        }

    private:
        static const string TypeStrList [];
        static ST_BrClear* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PTabAlignment : public XSD::SimpleType{
    public:
        ST_PTabAlignment();
        ST_PTabAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PTabAlignment& default_instance() const;
        enum Type{
            _left_ = 1,
            _center_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_PTabAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PTabRelativeTo : public XSD::SimpleType{
    public:
        ST_PTabRelativeTo();
        ST_PTabRelativeTo(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PTabRelativeTo& default_instance() const;
        enum Type{
            _margin_ = 1,
            _indent_
        }

    private:
        static const string TypeStrList [];
        static ST_PTabRelativeTo* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PTabLeader : public XSD::SimpleType{
    public:
        ST_PTabLeader();
        ST_PTabLeader(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PTabLeader& default_instance() const;
        enum Type{
            _none_ = 1,
            _dot_,
            _hyphen_,
            _underscore_,
            _middleDot_
        }

    private:
        static const string TypeStrList [];
        static ST_PTabLeader* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ProofErr : public XSD::SimpleType{
    public:
        ST_ProofErr();
        ST_ProofErr(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ProofErr& default_instance() const;
        enum Type{
            _spellStart_ = 1,
            _spellEnd_,
            _gramStart_,
            _gramEnd_
        }

    private:
        static const string TypeStrList [];
        static ST_ProofErr* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_EdGrp : public XSD::SimpleType{
    public:
        ST_EdGrp();
        ST_EdGrp(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_EdGrp& default_instance() const;
        enum Type{
            _none_ = 1,
            _everyone_,
            _administrators_,
            _contributors_,
            _editors_,
            _owners_,
            _current_
        }

    private:
        static const string TypeStrList [];
        static ST_EdGrp* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Hint : public XSD::SimpleType{
    public:
        ST_Hint();
        ST_Hint(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Hint& default_instance() const;
        enum Type{
            _default_ = 1,
            _eastAsia_,
            _cs_
        }

    private:
        static const string TypeStrList [];
        static ST_Hint* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Theme : public XSD::SimpleType{
    public:
        ST_Theme();
        ST_Theme(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Theme& default_instance() const;
        enum Type{
            _majorEastAsia_ = 1,
            _majorBidi_,
            _majorAscii_,
            _majorHAnsi_,
            _minorEastAsia_,
            _minorBidi_,
            _minorAscii_,
            _minorHAnsi_
        }

    private:
        static const string TypeStrList [];
        static ST_Theme* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RubyAlign : public XSD::SimpleType{
    public:
        ST_RubyAlign();
        ST_RubyAlign(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RubyAlign& default_instance() const;
        enum Type{
            _center_ = 1,
            _distributeLetter_,
            _distributeSpace_,
            _left_,
            _right_,
            _rightVertical_
        }

    private:
        static const string TypeStrList [];
        static ST_RubyAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Lock : public XSD::SimpleType{
    public:
        ST_Lock();
        ST_Lock(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Lock& default_instance() const;
        enum Type{
            _sdtLocked_ = 1,
            _contentLocked_,
            _unlocked_,
            _sdtContentLocked_
        }

    private:
        static const string TypeStrList [];
        static ST_Lock* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SdtDateMappingType : public XSD::SimpleType{
    public:
        ST_SdtDateMappingType();
        ST_SdtDateMappingType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SdtDateMappingType& default_instance() const;
        enum Type{
            _text_ = 1,
            _date_,
            _dateTime_
        }

    private:
        static const string TypeStrList [];
        static ST_SdtDateMappingType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Direction : public XSD::SimpleType{
    public:
        ST_Direction();
        ST_Direction(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Direction& default_instance() const;
        enum Type{
            _ltr_ = 1,
            _rtl_
        }

    private:
        static const string TypeStrList [];
        static ST_Direction* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TblWidth : public XSD::SimpleType{
    public:
        ST_TblWidth();
        ST_TblWidth(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TblWidth& default_instance() const;
        enum Type{
            _nil_ = 1,
            _pct_,
            _dxa_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_TblWidth* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MeasurementOrPercent : public XSD::SimpleType{
    public:
        bool has_ST_DecimalNumberOrPercent() const;
        ST_DecimalNumberOrPercent* mutable_ST_DecimalNumberOrPercent();
        const ST_DecimalNumberOrPercent& ST_DecimalNumberOrPercent() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MeasurementOrPercent& default_instance() const;

    private:
        void clear_ST_DecimalNumberOrPercent();
        void clear_ST_UniversalMeasure();
        bool m_has_ST_DecimalNumberOrPercent ;
        ST_DecimalNumberOrPercent* m_ST_DecimalNumberOrPercent ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_MeasurementOrPercent* default_instance_ ;

    }

    class ST_Merge : public XSD::SimpleType{
    public:
        ST_Merge();
        ST_Merge(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Merge& default_instance() const;
        enum Type{
            _continue_ = 1,
            _restart_
        }

    private:
        static const string TypeStrList [];
        static ST_Merge* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Cnf : public XSD::SimpleType{
    public:
        ST_Cnf();
        ST_Cnf(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Cnf& default_instance() const;

    private:
        static ST_Cnf* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_TblLayoutType : public XSD::SimpleType{
    public:
        ST_TblLayoutType();
        ST_TblLayoutType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TblLayoutType& default_instance() const;
        enum Type{
            _fixed_ = 1,
            _autofit_
        }

    private:
        static const string TypeStrList [];
        static ST_TblLayoutType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TblOverlap : public XSD::SimpleType{
    public:
        ST_TblOverlap();
        ST_TblOverlap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TblOverlap& default_instance() const;
        enum Type{
            _never_ = 1,
            _overlap_
        }

    private:
        static const string TypeStrList [];
        static ST_TblOverlap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FtnPos : public XSD::SimpleType{
    public:
        ST_FtnPos();
        ST_FtnPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FtnPos& default_instance() const;
        enum Type{
            _pageBottom_ = 1,
            _beneathText_,
            _sectEnd_,
            _docEnd_
        }

    private:
        static const string TypeStrList [];
        static ST_FtnPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_EdnPos : public XSD::SimpleType{
    public:
        ST_EdnPos();
        ST_EdnPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_EdnPos& default_instance() const;
        enum Type{
            _sectEnd_ = 1,
            _docEnd_
        }

    private:
        static const string TypeStrList [];
        static ST_EdnPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RestartNumber : public XSD::SimpleType{
    public:
        ST_RestartNumber();
        ST_RestartNumber(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RestartNumber& default_instance() const;
        enum Type{
            _continuous_ = 1,
            _eachSect_,
            _eachPage_
        }

    private:
        static const string TypeStrList [];
        static ST_RestartNumber* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MailMergeSourceType : public XSD::SimpleType{
    public:
        ST_MailMergeSourceType();
        ST_MailMergeSourceType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MailMergeSourceType& default_instance() const;
        enum Type{
            _database_ = 1,
            _addressBook_,
            _document1_,
            _document2_,
            _text_,
            _email_,
            _native_,
            _legacy_,
            _master_
        }

    private:
        static const string TypeStrList [];
        static ST_MailMergeSourceType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TargetScreenSz : public XSD::SimpleType{
    public:
        ST_TargetScreenSz();
        ST_TargetScreenSz(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TargetScreenSz& default_instance() const;
        enum Type{
            _544x376_ = 1,
            _640x480_,
            _720x512_,
            _800x600_,
            _1024x768_,
            _1152x882_,
            _1152x900_,
            _1280x1024_,
            _1600x1200_,
            _1800x1440_,
            _1920x1200_
        }

    private:
        static const string TypeStrList [];
        static ST_TargetScreenSz* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CharacterSpacing : public XSD::SimpleType{
    public:
        ST_CharacterSpacing();
        ST_CharacterSpacing(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CharacterSpacing& default_instance() const;
        enum Type{
            _doNotCompress_ = 1,
            _compressPunctuation_,
            _compressPunctuationAndJapaneseKana_
        }

    private:
        static const string TypeStrList [];
        static ST_CharacterSpacing* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WmlColorSchemeIndex : public XSD::SimpleType{
    public:
        ST_WmlColorSchemeIndex();
        ST_WmlColorSchemeIndex(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WmlColorSchemeIndex& default_instance() const;
        enum Type{
            _dark1_ = 1,
            _light1_,
            _dark2_,
            _light2_,
            _accent1_,
            _accent2_,
            _accent3_,
            _accent4_,
            _accent5_,
            _accent6_,
            _hyperlink_,
            _followedHyperlink_
        }

    private:
        static const string TypeStrList [];
        static ST_WmlColorSchemeIndex* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StyleSort : public XSD::SimpleType{
    public:
        ST_StyleSort();
        ST_StyleSort(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StyleSort& default_instance() const;
        enum Type{
            _name_ = 1,
            _priority_,
            _default_,
            _font_,
            _basedOn_,
            _type_,
            _0000_,
            _0001_,
            _0002_,
            _0003_,
            _0004_,
            _0005_
        }

    private:
        static const string TypeStrList [];
        static ST_StyleSort* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FrameScrollbar : public XSD::SimpleType{
    public:
        ST_FrameScrollbar();
        ST_FrameScrollbar(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FrameScrollbar& default_instance() const;
        enum Type{
            _on_ = 1,
            _off_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_FrameScrollbar* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FrameLayout : public XSD::SimpleType{
    public:
        ST_FrameLayout();
        ST_FrameLayout(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FrameLayout& default_instance() const;
        enum Type{
            _rows_ = 1,
            _cols_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_FrameLayout* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LevelSuffix : public XSD::SimpleType{
    public:
        ST_LevelSuffix();
        ST_LevelSuffix(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LevelSuffix& default_instance() const;
        enum Type{
            _tab_ = 1,
            _space_,
            _nothing_
        }

    private:
        static const string TypeStrList [];
        static ST_LevelSuffix* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MultiLevelType : public XSD::SimpleType{
    public:
        ST_MultiLevelType();
        ST_MultiLevelType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_MultiLevelType& default_instance() const;
        enum Type{
            _singleLevel_ = 1,
            _multilevel_,
            _hybridMultilevel_
        }

    private:
        static const string TypeStrList [];
        static ST_MultiLevelType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TblStyleOverrideType : public XSD::SimpleType{
    public:
        ST_TblStyleOverrideType();
        ST_TblStyleOverrideType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TblStyleOverrideType& default_instance() const;
        enum Type{
            _wholeTable_ = 1,
            _firstRow_,
            _lastRow_,
            _firstCol_,
            _lastCol_,
            _band1Vert_,
            _band2Vert_,
            _band1Horz_,
            _band2Horz_,
            _neCell_,
            _nwCell_,
            _seCell_,
            _swCell_
        }

    private:
        static const string TypeStrList [];
        static ST_TblStyleOverrideType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_StyleType : public XSD::SimpleType{
    public:
        ST_StyleType();
        ST_StyleType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StyleType& default_instance() const;
        enum Type{
            _paragraph_ = 1,
            _character_,
            _table_,
            _numbering_
        }

    private:
        static const string TypeStrList [];
        static ST_StyleType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FontFamily : public XSD::SimpleType{
    public:
        ST_FontFamily();
        ST_FontFamily(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FontFamily& default_instance() const;
        enum Type{
            _decorative_ = 1,
            _modern_,
            _roman_,
            _script_,
            _swiss_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_FontFamily* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Pitch : public XSD::SimpleType{
    public:
        ST_Pitch();
        ST_Pitch(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Pitch& default_instance() const;
        enum Type{
            _fixed_ = 1,
            _variable_,
            _default_
        }

    private:
        static const string TypeStrList [];
        static ST_Pitch* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ThemeColor : public XSD::SimpleType{
    public:
        ST_ThemeColor();
        ST_ThemeColor(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ThemeColor& default_instance() const;
        enum Type{
            _dark1_ = 1,
            _light1_,
            _dark2_,
            _light2_,
            _accent1_,
            _accent2_,
            _accent3_,
            _accent4_,
            _accent5_,
            _accent6_,
            _hyperlink_,
            _followedHyperlink_,
            _none_,
            _background1_,
            _text1_,
            _background2_,
            _text2_
        }

    private:
        static const string TypeStrList [];
        static ST_ThemeColor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DocPartBehavior : public XSD::SimpleType{
    public:
        ST_DocPartBehavior();
        ST_DocPartBehavior(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocPartBehavior& default_instance() const;
        enum Type{
            _content_ = 1,
            _p_,
            _pg_
        }

    private:
        static const string TypeStrList [];
        static ST_DocPartBehavior* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DocPartType : public XSD::SimpleType{
    public:
        ST_DocPartType();
        ST_DocPartType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocPartType& default_instance() const;
        enum Type{
            _none_ = 1,
            _normal_,
            _autoExp_,
            _toolbar_,
            _speller_,
            _formFld_,
            _bbPlcHdr_
        }

    private:
        static const string TypeStrList [];
        static ST_DocPartType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DocPartGallery : public XSD::SimpleType{
    public:
        ST_DocPartGallery();
        ST_DocPartGallery(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DocPartGallery& default_instance() const;
        enum Type{
            _placeholder_ = 1,
            _any_,
            _default_,
            _docParts_,
            _coverPg_,
            _eq_,
            _ftrs_,
            _hdrs_,
            _pgNum_,
            _tbls_,
            _watermarks_,
            _autoTxt_,
            _txtBox_,
            _pgNumT_,
            _pgNumB_,
            _pgNumMargins_,
            _tblOfContents_,
            _bib_,
            _custQuickParts_,
            _custCoverPg_,
            _custEq_,
            _custFtrs_,
            _custHdrs_,
            _custPgNum_,
            _custTbls_,
            _custWatermarks_,
            _custAutoTxt_,
            _custTxtBox_,
            _custPgNumT_,
            _custPgNumB_,
            _custPgNumMargins_,
            _custTblOfContents_,
            _custBib_,
            _custom1_,
            _custom2_,
            _custom3_,
            _custom4_,
            _custom5_
        }

    private:
        static const string TypeStrList [];
        static ST_DocPartGallery* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CaptionPos : public XSD::SimpleType{
    public:
        ST_CaptionPos();
        ST_CaptionPos(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CaptionPos& default_instance() const;
        enum Type{
            _above_ = 1,
            _below_,
            _left_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_CaptionPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Empty : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Empty& default_instance() const;

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_OnOff : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OnOff& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_OnOff& _val_attr );
        const ns_s::ST_OnOff& val_attr() const;

    private:
        static CT_OnOff* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_OnOff* m_val_attr ;

    }

    class CT_LongHexNumber : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LongHexNumber& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LongHexNumber& _val_attr );
        const ST_LongHexNumber& val_attr() const;

    private:
        static CT_LongHexNumber* default_instance_ ;
        bool m_has_val_attr ;
        ST_LongHexNumber* m_val_attr ;

    }

    class CT_Charset : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Charset& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_UcharHexNumber& _val_attr );
        const ST_UcharHexNumber& val_attr() const;
        bool has_characterSet_attr() const;
        void set_characterSet_attr(const ns_s::ST_String& _characterSet_attr );
        const ns_s::ST_String& characterSet_attr() const;

    private:
        static CT_Charset* default_instance_ ;
        bool m_has_val_attr ;
        ST_UcharHexNumber* m_val_attr ;
        bool m_has_characterSet_attr ;
        ns_s::ST_String* m_characterSet_attr ;

    }

    class CT_DecimalNumber : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DecimalNumber& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DecimalNumber& _val_attr );
        const ST_DecimalNumber& val_attr() const;

    private:
        static CT_DecimalNumber* default_instance_ ;
        bool m_has_val_attr ;
        ST_DecimalNumber* m_val_attr ;

    }

    class CT_UnsignedDecimalNumber : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_UnsignedDecimalNumber& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_UnsignedDecimalNumber& _val_attr );
        const ns_s::ST_UnsignedDecimalNumber& val_attr() const;

    private:
        static CT_UnsignedDecimalNumber* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_UnsignedDecimalNumber* m_val_attr ;

    }

    class CT_DecimalNumberOrPrecent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DecimalNumberOrPrecent& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DecimalNumberOrPercent& _val_attr );
        const ST_DecimalNumberOrPercent& val_attr() const;

    private:
        static CT_DecimalNumberOrPrecent* default_instance_ ;
        bool m_has_val_attr ;
        ST_DecimalNumberOrPercent* m_val_attr ;

    }

    class CT_TwipsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TwipsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr );
        const ns_s::ST_TwipsMeasure& val_attr() const;

    private:
        static CT_TwipsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_TwipsMeasure* m_val_attr ;

    }

    class CT_SignedTwipsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SignedTwipsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SignedTwipsMeasure& _val_attr );
        const ST_SignedTwipsMeasure& val_attr() const;

    private:
        static CT_SignedTwipsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ST_SignedTwipsMeasure* m_val_attr ;

    }

    class CT_PixelsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PixelsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PixelsMeasure& _val_attr );
        const ST_PixelsMeasure& val_attr() const;

    private:
        static CT_PixelsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ST_PixelsMeasure* m_val_attr ;

    }

    class CT_HpsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HpsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HpsMeasure& _val_attr );
        const ST_HpsMeasure& val_attr() const;

    private:
        static CT_HpsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ST_HpsMeasure* m_val_attr ;

    }

    class CT_SignedHpsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SignedHpsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SignedHpsMeasure& _val_attr );
        const ST_SignedHpsMeasure& val_attr() const;

    private:
        static CT_SignedHpsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ST_SignedHpsMeasure* m_val_attr ;

    }

    class CT_MacroName : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MacroName& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MacroName& _val_attr );
        const ST_MacroName& val_attr() const;

    private:
        static CT_MacroName* default_instance_ ;
        bool m_has_val_attr ;
        ST_MacroName* m_val_attr ;

    }

    class CT_String : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_String& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_String* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_TextScale : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextScale& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextScale& _val_attr );
        const ST_TextScale& val_attr() const;

    private:
        static CT_TextScale* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextScale* m_val_attr ;

    }

    class CT_Highlight : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Highlight& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HighlightColor& _val_attr );
        const ST_HighlightColor& val_attr() const;

    private:
        static CT_Highlight* default_instance_ ;
        bool m_has_val_attr ;
        ST_HighlightColor* m_val_attr ;

    }

    class CT_Color : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Color& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_HexColor& _val_attr );
        const ST_HexColor& val_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;

    private:
        static CT_Color* default_instance_ ;
        bool m_has_val_attr ;
        ST_HexColor* m_val_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;

    }

    class CT_Lang : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Lang& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_Lang& _val_attr );
        const ns_s::ST_Lang& val_attr() const;

    private:
        static CT_Lang* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Lang* m_val_attr ;

    }

    class CT_Guid : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Guid& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_Guid& _val_attr );
        const ns_s::ST_Guid& val_attr() const;

    private:
        static CT_Guid* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Guid* m_val_attr ;

    }

    class CT_Underline : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Underline& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Underline& _val_attr );
        const ST_Underline& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;

    private:
        static CT_Underline* default_instance_ ;
        bool m_has_val_attr ;
        ST_Underline* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;

    }

    class CT_TextEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextEffect& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextEffect& _val_attr );
        const ST_TextEffect& val_attr() const;

    private:
        static CT_TextEffect* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextEffect* m_val_attr ;

    }

    class CT_Border : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Border& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Border& _val_attr );
        const ST_Border& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_EighthPointMeasure& _sz_attr );
        const ST_EighthPointMeasure& sz_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ST_PointMeasure& _space_attr );
        const ST_PointMeasure& space_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr );
        const ns_s::ST_OnOff& shadow_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ns_s::ST_OnOff& _frame_attr );
        const ns_s::ST_OnOff& frame_attr() const;

    private:
        static CT_Border* default_instance_ ;
        bool m_has_val_attr ;
        ST_Border* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        bool m_has_sz_attr ;
        ST_EighthPointMeasure* m_sz_attr ;
        bool m_has_space_attr ;
        ST_PointMeasure* m_space_attr ;
        bool m_has_shadow_attr ;
        ns_s::ST_OnOff* m_shadow_attr ;
        bool m_has_frame_attr ;
        ns_s::ST_OnOff* m_frame_attr ;

    }

    class CT_Shd : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shd& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Shd& _val_attr );
        const ST_Shd& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ST_HexColor& _fill_attr );
        const ST_HexColor& fill_attr() const;
        bool has_themeFill_attr() const;
        void set_themeFill_attr(const ST_ThemeColor& _themeFill_attr );
        const ST_ThemeColor& themeFill_attr() const;
        bool has_themeFillTint_attr() const;
        void set_themeFillTint_attr(const ST_UcharHexNumber& _themeFillTint_attr );
        const ST_UcharHexNumber& themeFillTint_attr() const;
        bool has_themeFillShade_attr() const;
        void set_themeFillShade_attr(const ST_UcharHexNumber& _themeFillShade_attr );
        const ST_UcharHexNumber& themeFillShade_attr() const;

    private:
        static CT_Shd* default_instance_ ;
        bool m_has_val_attr ;
        ST_Shd* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        bool m_has_fill_attr ;
        ST_HexColor* m_fill_attr ;
        bool m_has_themeFill_attr ;
        ST_ThemeColor* m_themeFill_attr ;
        bool m_has_themeFillTint_attr ;
        ST_UcharHexNumber* m_themeFillTint_attr ;
        bool m_has_themeFillShade_attr ;
        ST_UcharHexNumber* m_themeFillShade_attr ;

    }

    class CT_VerticalAlignRun : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VerticalAlignRun& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_VerticalAlignRun& _val_attr );
        const ns_s::ST_VerticalAlignRun& val_attr() const;

    private:
        static CT_VerticalAlignRun* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_VerticalAlignRun* m_val_attr ;

    }

    class CT_FitText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FitText& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr );
        const ns_s::ST_TwipsMeasure& val_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        static CT_FitText* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_TwipsMeasure* m_val_attr ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_Em : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Em& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Em& _val_attr );
        const ST_Em& val_attr() const;

    private:
        static CT_Em* default_instance_ ;
        bool m_has_val_attr ;
        ST_Em* m_val_attr ;

    }

    class CT_Language : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Language& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_Lang& _val_attr );
        const ns_s::ST_Lang& val_attr() const;
        bool has_eastAsia_attr() const;
        void set_eastAsia_attr(const ns_s::ST_Lang& _eastAsia_attr );
        const ns_s::ST_Lang& eastAsia_attr() const;
        bool has_bidi_attr() const;
        void set_bidi_attr(const ns_s::ST_Lang& _bidi_attr );
        const ns_s::ST_Lang& bidi_attr() const;

    private:
        static CT_Language* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Lang* m_val_attr ;
        bool m_has_eastAsia_attr ;
        ns_s::ST_Lang* m_eastAsia_attr ;
        bool m_has_bidi_attr ;
        ns_s::ST_Lang* m_bidi_attr ;

    }

    class CT_EastAsianLayout : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EastAsianLayout& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_combine_attr() const;
        void set_combine_attr(const ns_s::ST_OnOff& _combine_attr );
        const ns_s::ST_OnOff& combine_attr() const;
        bool has_combineBrackets_attr() const;
        void set_combineBrackets_attr(const ST_CombineBrackets& _combineBrackets_attr );
        const ST_CombineBrackets& combineBrackets_attr() const;
        bool has_vert_attr() const;
        void set_vert_attr(const ns_s::ST_OnOff& _vert_attr );
        const ns_s::ST_OnOff& vert_attr() const;
        bool has_vertCompress_attr() const;
        void set_vertCompress_attr(const ns_s::ST_OnOff& _vertCompress_attr );
        const ns_s::ST_OnOff& vertCompress_attr() const;

    private:
        static CT_EastAsianLayout* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_combine_attr ;
        ns_s::ST_OnOff* m_combine_attr ;
        bool m_has_combineBrackets_attr ;
        ST_CombineBrackets* m_combineBrackets_attr ;
        bool m_has_vert_attr ;
        ns_s::ST_OnOff* m_vert_attr ;
        bool m_has_vertCompress_attr ;
        ns_s::ST_OnOff* m_vertCompress_attr ;

    }

    class CT_FramePr : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FramePr& default_instance() const;
        bool has_dropCap_attr() const;
        void set_dropCap_attr(const ST_DropCap& _dropCap_attr );
        const ST_DropCap& dropCap_attr() const;
        bool has_lines_attr() const;
        void set_lines_attr(const ST_DecimalNumber& _lines_attr );
        const ST_DecimalNumber& lines_attr() const;
        bool has_w_attr() const;
        void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr );
        const ns_s::ST_TwipsMeasure& w_attr() const;
        bool has_h_attr() const;
        void set_h_attr(const ns_s::ST_TwipsMeasure& _h_attr );
        const ns_s::ST_TwipsMeasure& h_attr() const;
        bool has_vSpace_attr() const;
        void set_vSpace_attr(const ns_s::ST_TwipsMeasure& _vSpace_attr );
        const ns_s::ST_TwipsMeasure& vSpace_attr() const;
        bool has_hSpace_attr() const;
        void set_hSpace_attr(const ns_s::ST_TwipsMeasure& _hSpace_attr );
        const ns_s::ST_TwipsMeasure& hSpace_attr() const;
        bool has_wrap_attr() const;
        void set_wrap_attr(const ST_Wrap& _wrap_attr );
        const ST_Wrap& wrap_attr() const;
        bool has_hAnchor_attr() const;
        void set_hAnchor_attr(const ST_HAnchor& _hAnchor_attr );
        const ST_HAnchor& hAnchor_attr() const;
        bool has_vAnchor_attr() const;
        void set_vAnchor_attr(const ST_VAnchor& _vAnchor_attr );
        const ST_VAnchor& vAnchor_attr() const;
        bool has_x_attr() const;
        void set_x_attr(const ST_SignedTwipsMeasure& _x_attr );
        const ST_SignedTwipsMeasure& x_attr() const;
        bool has_xAlign_attr() const;
        void set_xAlign_attr(const ns_s::ST_XAlign& _xAlign_attr );
        const ns_s::ST_XAlign& xAlign_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ST_SignedTwipsMeasure& _y_attr );
        const ST_SignedTwipsMeasure& y_attr() const;
        bool has_yAlign_attr() const;
        void set_yAlign_attr(const ns_s::ST_YAlign& _yAlign_attr );
        const ns_s::ST_YAlign& yAlign_attr() const;
        bool has_hRule_attr() const;
        void set_hRule_attr(const ST_HeightRule& _hRule_attr );
        const ST_HeightRule& hRule_attr() const;
        bool has_anchorLock_attr() const;
        void set_anchorLock_attr(const ns_s::ST_OnOff& _anchorLock_attr );
        const ns_s::ST_OnOff& anchorLock_attr() const;

    private:
        static CT_FramePr* default_instance_ ;
        bool m_has_dropCap_attr ;
        ST_DropCap* m_dropCap_attr ;
        bool m_has_lines_attr ;
        ST_DecimalNumber* m_lines_attr ;
        bool m_has_w_attr ;
        ns_s::ST_TwipsMeasure* m_w_attr ;
        bool m_has_h_attr ;
        ns_s::ST_TwipsMeasure* m_h_attr ;
        bool m_has_vSpace_attr ;
        ns_s::ST_TwipsMeasure* m_vSpace_attr ;
        bool m_has_hSpace_attr ;
        ns_s::ST_TwipsMeasure* m_hSpace_attr ;
        bool m_has_wrap_attr ;
        ST_Wrap* m_wrap_attr ;
        bool m_has_hAnchor_attr ;
        ST_HAnchor* m_hAnchor_attr ;
        bool m_has_vAnchor_attr ;
        ST_VAnchor* m_vAnchor_attr ;
        bool m_has_x_attr ;
        ST_SignedTwipsMeasure* m_x_attr ;
        bool m_has_xAlign_attr ;
        ns_s::ST_XAlign* m_xAlign_attr ;
        bool m_has_y_attr ;
        ST_SignedTwipsMeasure* m_y_attr ;
        bool m_has_yAlign_attr ;
        ns_s::ST_YAlign* m_yAlign_attr ;
        bool m_has_hRule_attr ;
        ST_HeightRule* m_hRule_attr ;
        bool m_has_anchorLock_attr ;
        ns_s::ST_OnOff* m_anchorLock_attr ;

    }

    class CT_TabStop : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TabStop& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TabJc& _val_attr );
        const ST_TabJc& val_attr() const;
        bool has_leader_attr() const;
        void set_leader_attr(const ST_TabTlc& _leader_attr );
        const ST_TabTlc& leader_attr() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ST_SignedTwipsMeasure& _pos_attr );
        const ST_SignedTwipsMeasure& pos_attr() const;

    private:
        static CT_TabStop* default_instance_ ;
        bool m_has_val_attr ;
        ST_TabJc* m_val_attr ;
        bool m_has_leader_attr ;
        ST_TabTlc* m_leader_attr ;
        bool m_has_pos_attr ;
        ST_SignedTwipsMeasure* m_pos_attr ;

    }

    class CT_Spacing : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Spacing& default_instance() const;
        bool has_before_attr() const;
        void set_before_attr(const ns_s::ST_TwipsMeasure& _before_attr );
        const ns_s::ST_TwipsMeasure& before_attr() const;
        bool has_beforeLines_attr() const;
        void set_beforeLines_attr(const ST_DecimalNumber& _beforeLines_attr );
        const ST_DecimalNumber& beforeLines_attr() const;
        bool has_beforeAutospacing_attr() const;
        void set_beforeAutospacing_attr(const ns_s::ST_OnOff& _beforeAutospacing_attr );
        const ns_s::ST_OnOff& beforeAutospacing_attr() const;
        bool has_after_attr() const;
        void set_after_attr(const ns_s::ST_TwipsMeasure& _after_attr );
        const ns_s::ST_TwipsMeasure& after_attr() const;
        bool has_afterLines_attr() const;
        void set_afterLines_attr(const ST_DecimalNumber& _afterLines_attr );
        const ST_DecimalNumber& afterLines_attr() const;
        bool has_afterAutospacing_attr() const;
        void set_afterAutospacing_attr(const ns_s::ST_OnOff& _afterAutospacing_attr );
        const ns_s::ST_OnOff& afterAutospacing_attr() const;
        bool has_line_attr() const;
        void set_line_attr(const ST_SignedTwipsMeasure& _line_attr );
        const ST_SignedTwipsMeasure& line_attr() const;
        bool has_lineRule_attr() const;
        void set_lineRule_attr(const ST_LineSpacingRule& _lineRule_attr );
        const ST_LineSpacingRule& lineRule_attr() const;

    private:
        static CT_Spacing* default_instance_ ;
        bool m_has_before_attr ;
        ns_s::ST_TwipsMeasure* m_before_attr ;
        bool m_has_beforeLines_attr ;
        ST_DecimalNumber* m_beforeLines_attr ;
        bool m_has_beforeAutospacing_attr ;
        ns_s::ST_OnOff* m_beforeAutospacing_attr ;
        bool m_has_after_attr ;
        ns_s::ST_TwipsMeasure* m_after_attr ;
        bool m_has_afterLines_attr ;
        ST_DecimalNumber* m_afterLines_attr ;
        bool m_has_afterAutospacing_attr ;
        ns_s::ST_OnOff* m_afterAutospacing_attr ;
        bool m_has_line_attr ;
        ST_SignedTwipsMeasure* m_line_attr ;
        bool m_has_lineRule_attr ;
        ST_LineSpacingRule* m_lineRule_attr ;

    }

    class CT_Ind : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Ind& default_instance() const;
        bool has_start_attr() const;
        void set_start_attr(const ST_SignedTwipsMeasure& _start_attr );
        const ST_SignedTwipsMeasure& start_attr() const;
        bool has_startChars_attr() const;
        void set_startChars_attr(const ST_DecimalNumber& _startChars_attr );
        const ST_DecimalNumber& startChars_attr() const;
        bool has_end_attr() const;
        void set_end_attr(const ST_SignedTwipsMeasure& _end_attr );
        const ST_SignedTwipsMeasure& end_attr() const;
        bool has_endChars_attr() const;
        void set_endChars_attr(const ST_DecimalNumber& _endChars_attr );
        const ST_DecimalNumber& endChars_attr() const;
        bool has_left_attr() const;
        void set_left_attr(const ST_SignedTwipsMeasure& _left_attr );
        const ST_SignedTwipsMeasure& left_attr() const;
        bool has_leftChars_attr() const;
        void set_leftChars_attr(const ST_DecimalNumber& _leftChars_attr );
        const ST_DecimalNumber& leftChars_attr() const;
        bool has_right_attr() const;
        void set_right_attr(const ST_SignedTwipsMeasure& _right_attr );
        const ST_SignedTwipsMeasure& right_attr() const;
        bool has_rightChars_attr() const;
        void set_rightChars_attr(const ST_DecimalNumber& _rightChars_attr );
        const ST_DecimalNumber& rightChars_attr() const;
        bool has_hanging_attr() const;
        void set_hanging_attr(const ns_s::ST_TwipsMeasure& _hanging_attr );
        const ns_s::ST_TwipsMeasure& hanging_attr() const;
        bool has_hangingChars_attr() const;
        void set_hangingChars_attr(const ST_DecimalNumber& _hangingChars_attr );
        const ST_DecimalNumber& hangingChars_attr() const;
        bool has_firstLine_attr() const;
        void set_firstLine_attr(const ns_s::ST_TwipsMeasure& _firstLine_attr );
        const ns_s::ST_TwipsMeasure& firstLine_attr() const;
        bool has_firstLineChars_attr() const;
        void set_firstLineChars_attr(const ST_DecimalNumber& _firstLineChars_attr );
        const ST_DecimalNumber& firstLineChars_attr() const;

    private:
        static CT_Ind* default_instance_ ;
        bool m_has_start_attr ;
        ST_SignedTwipsMeasure* m_start_attr ;
        bool m_has_startChars_attr ;
        ST_DecimalNumber* m_startChars_attr ;
        bool m_has_end_attr ;
        ST_SignedTwipsMeasure* m_end_attr ;
        bool m_has_endChars_attr ;
        ST_DecimalNumber* m_endChars_attr ;
        bool m_has_left_attr ;
        ST_SignedTwipsMeasure* m_left_attr ;
        bool m_has_leftChars_attr ;
        ST_DecimalNumber* m_leftChars_attr ;
        bool m_has_right_attr ;
        ST_SignedTwipsMeasure* m_right_attr ;
        bool m_has_rightChars_attr ;
        ST_DecimalNumber* m_rightChars_attr ;
        bool m_has_hanging_attr ;
        ns_s::ST_TwipsMeasure* m_hanging_attr ;
        bool m_has_hangingChars_attr ;
        ST_DecimalNumber* m_hangingChars_attr ;
        bool m_has_firstLine_attr ;
        ns_s::ST_TwipsMeasure* m_firstLine_attr ;
        bool m_has_firstLineChars_attr ;
        ST_DecimalNumber* m_firstLineChars_attr ;

    }

    class CT_Jc : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Jc& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Jc& _val_attr );
        const ST_Jc& val_attr() const;

    private:
        static CT_Jc* default_instance_ ;
        bool m_has_val_attr ;
        ST_Jc* m_val_attr ;

    }

    class CT_JcTable : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_JcTable& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_JcTable& _val_attr );
        const ST_JcTable& val_attr() const;

    private:
        static CT_JcTable* default_instance_ ;
        bool m_has_val_attr ;
        ST_JcTable* m_val_attr ;

    }

    class CT_View : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_View& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_View& _val_attr );
        const ST_View& val_attr() const;

    private:
        static CT_View* default_instance_ ;
        bool m_has_val_attr ;
        ST_View* m_val_attr ;

    }

    class CT_Zoom : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Zoom& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Zoom& _val_attr );
        const ST_Zoom& val_attr() const;
        bool has_percent_attr() const;
        void set_percent_attr(const ST_DecimalNumberOrPercent& _percent_attr );
        const ST_DecimalNumberOrPercent& percent_attr() const;

    private:
        static CT_Zoom* default_instance_ ;
        bool m_has_val_attr ;
        ST_Zoom* m_val_attr ;
        bool m_has_percent_attr ;
        ST_DecimalNumberOrPercent* m_percent_attr ;

    }

    class CT_WritingStyle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WritingStyle& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const ns_s::ST_Lang& _lang_attr );
        const ns_s::ST_Lang& lang_attr() const;
        bool has_vendorID_attr() const;
        void set_vendorID_attr(const ns_s::ST_String& _vendorID_attr );
        const ns_s::ST_String& vendorID_attr() const;
        bool has_dllVersion_attr() const;
        void set_dllVersion_attr(const ns_s::ST_String& _dllVersion_attr );
        const ns_s::ST_String& dllVersion_attr() const;
        bool has_nlCheck_attr() const;
        void set_nlCheck_attr(const ns_s::ST_OnOff& _nlCheck_attr );
        const ns_s::ST_OnOff& nlCheck_attr() const;
        bool has_checkStyle_attr() const;
        void set_checkStyle_attr(const ns_s::ST_OnOff& _checkStyle_attr );
        const ns_s::ST_OnOff& checkStyle_attr() const;
        bool has_appName_attr() const;
        void set_appName_attr(const ns_s::ST_String& _appName_attr );
        const ns_s::ST_String& appName_attr() const;

    private:
        static CT_WritingStyle* default_instance_ ;
        bool m_has_lang_attr ;
        ns_s::ST_Lang* m_lang_attr ;
        bool m_has_vendorID_attr ;
        ns_s::ST_String* m_vendorID_attr ;
        bool m_has_dllVersion_attr ;
        ns_s::ST_String* m_dllVersion_attr ;
        bool m_has_nlCheck_attr ;
        ns_s::ST_OnOff* m_nlCheck_attr ;
        bool m_has_checkStyle_attr ;
        ns_s::ST_OnOff* m_checkStyle_attr ;
        bool m_has_appName_attr ;
        ns_s::ST_String* m_appName_attr ;

    }

    class CT_Proof : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Proof& default_instance() const;
        bool has_spelling_attr() const;
        void set_spelling_attr(const ST_Proof& _spelling_attr );
        const ST_Proof& spelling_attr() const;
        bool has_grammar_attr() const;
        void set_grammar_attr(const ST_Proof& _grammar_attr );
        const ST_Proof& grammar_attr() const;

    private:
        static CT_Proof* default_instance_ ;
        bool m_has_spelling_attr ;
        ST_Proof* m_spelling_attr ;
        bool m_has_grammar_attr ;
        ST_Proof* m_grammar_attr ;

    }

    class CT_DocType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DocType& _val_attr );
        const ST_DocType& val_attr() const;

    private:
        static CT_DocType* default_instance_ ;
        bool m_has_val_attr ;
        ST_DocType* m_val_attr ;

    }

    class CT_DocProtect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocProtect& default_instance() const;
        bool has_edit_attr() const;
        void set_edit_attr(const ST_DocProtect& _edit_attr );
        const ST_DocProtect& edit_attr() const;
        bool has_formatting_attr() const;
        void set_formatting_attr(const ns_s::ST_OnOff& _formatting_attr );
        const ns_s::ST_OnOff& formatting_attr() const;
        bool has_enforcement_attr() const;
        void set_enforcement_attr(const ns_s::ST_OnOff& _enforcement_attr );
        const ns_s::ST_OnOff& enforcement_attr() const;
        bool has_algorithmName_attr() const;
        void set_algorithmName_attr(const ns_s::ST_String& _algorithmName_attr );
        const ns_s::ST_String& algorithmName_attr() const;
        bool has_hashValue_attr() const;
        void set_hashValue_attr(const base64Binary& _hashValue_attr );
        const base64Binary& hashValue_attr() const;
        bool has_saltValue_attr() const;
        void set_saltValue_attr(const base64Binary& _saltValue_attr );
        const base64Binary& saltValue_attr() const;
        bool has_spinCount_attr() const;
        void set_spinCount_attr(const ST_DecimalNumber& _spinCount_attr );
        const ST_DecimalNumber& spinCount_attr() const;
        bool has_cryptProviderType_attr() const;
        void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr );
        const ns_s::ST_CryptProv& cryptProviderType_attr() const;
        bool has_cryptAlgorithmClass_attr() const;
        void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr );
        const ns_s::ST_AlgClass& cryptAlgorithmClass_attr() const;
        bool has_cryptAlgorithmType_attr() const;
        void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr );
        const ns_s::ST_AlgType& cryptAlgorithmType_attr() const;
        bool has_cryptAlgorithmSid_attr() const;
        void set_cryptAlgorithmSid_attr(const ST_DecimalNumber& _cryptAlgorithmSid_attr );
        const ST_DecimalNumber& cryptAlgorithmSid_attr() const;
        bool has_cryptSpinCount_attr() const;
        void set_cryptSpinCount_attr(const ST_DecimalNumber& _cryptSpinCount_attr );
        const ST_DecimalNumber& cryptSpinCount_attr() const;
        bool has_cryptProvider_attr() const;
        void set_cryptProvider_attr(const ns_s::ST_String& _cryptProvider_attr );
        const ns_s::ST_String& cryptProvider_attr() const;
        bool has_algIdExt_attr() const;
        void set_algIdExt_attr(const ST_LongHexNumber& _algIdExt_attr );
        const ST_LongHexNumber& algIdExt_attr() const;
        bool has_algIdExtSource_attr() const;
        void set_algIdExtSource_attr(const ns_s::ST_String& _algIdExtSource_attr );
        const ns_s::ST_String& algIdExtSource_attr() const;
        bool has_cryptProviderTypeExt_attr() const;
        void set_cryptProviderTypeExt_attr(const ST_LongHexNumber& _cryptProviderTypeExt_attr );
        const ST_LongHexNumber& cryptProviderTypeExt_attr() const;
        bool has_cryptProviderTypeExtSource_attr() const;
        void set_cryptProviderTypeExtSource_attr(const ns_s::ST_String& _cryptProviderTypeExtSource_attr );
        const ns_s::ST_String& cryptProviderTypeExtSource_attr() const;
        bool has_hash_attr() const;
        void set_hash_attr(const base64Binary& _hash_attr );
        const base64Binary& hash_attr() const;
        bool has_salt_attr() const;
        void set_salt_attr(const base64Binary& _salt_attr );
        const base64Binary& salt_attr() const;

    private:
        static CT_DocProtect* default_instance_ ;
        bool m_has_edit_attr ;
        ST_DocProtect* m_edit_attr ;
        bool m_has_formatting_attr ;
        ns_s::ST_OnOff* m_formatting_attr ;
        bool m_has_enforcement_attr ;
        ns_s::ST_OnOff* m_enforcement_attr ;
        bool m_has_algorithmName_attr ;
        ns_s::ST_String* m_algorithmName_attr ;
        bool m_has_hashValue_attr ;
        base64Binary m_hashValue_attr ;
        bool m_has_saltValue_attr ;
        base64Binary m_saltValue_attr ;
        bool m_has_spinCount_attr ;
        ST_DecimalNumber* m_spinCount_attr ;
        bool m_has_cryptProviderType_attr ;
        ns_s::ST_CryptProv* m_cryptProviderType_attr ;
        bool m_has_cryptAlgorithmClass_attr ;
        ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr ;
        bool m_has_cryptAlgorithmType_attr ;
        ns_s::ST_AlgType* m_cryptAlgorithmType_attr ;
        bool m_has_cryptAlgorithmSid_attr ;
        ST_DecimalNumber* m_cryptAlgorithmSid_attr ;
        bool m_has_cryptSpinCount_attr ;
        ST_DecimalNumber* m_cryptSpinCount_attr ;
        bool m_has_cryptProvider_attr ;
        ns_s::ST_String* m_cryptProvider_attr ;
        bool m_has_algIdExt_attr ;
        ST_LongHexNumber* m_algIdExt_attr ;
        bool m_has_algIdExtSource_attr ;
        ns_s::ST_String* m_algIdExtSource_attr ;
        bool m_has_cryptProviderTypeExt_attr ;
        ST_LongHexNumber* m_cryptProviderTypeExt_attr ;
        bool m_has_cryptProviderTypeExtSource_attr ;
        ns_s::ST_String* m_cryptProviderTypeExtSource_attr ;
        bool m_has_hash_attr ;
        base64Binary m_hash_attr ;
        bool m_has_salt_attr ;
        base64Binary m_salt_attr ;

    }

    class CT_MailMergeDocType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMergeDocType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MailMergeDocType& _val_attr );
        const ST_MailMergeDocType& val_attr() const;

    private:
        static CT_MailMergeDocType* default_instance_ ;
        bool m_has_val_attr ;
        ST_MailMergeDocType* m_val_attr ;

    }

    class CT_MailMergeDataType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMergeDataType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MailMergeDataType& _val_attr );
        const ST_MailMergeDataType& val_attr() const;

    private:
        static CT_MailMergeDataType* default_instance_ ;
        bool m_has_val_attr ;
        ST_MailMergeDataType* m_val_attr ;

    }

    class CT_MailMergeDest : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMergeDest& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MailMergeDest& _val_attr );
        const ST_MailMergeDest& val_attr() const;

    private:
        static CT_MailMergeDest* default_instance_ ;
        bool m_has_val_attr ;
        ST_MailMergeDest* m_val_attr ;

    }

    class CT_MailMergeOdsoFMDFieldType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMergeOdsoFMDFieldType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MailMergeOdsoFMDFieldType& _val_attr );
        const ST_MailMergeOdsoFMDFieldType& val_attr() const;

    private:
        static CT_MailMergeOdsoFMDFieldType* default_instance_ ;
        bool m_has_val_attr ;
        ST_MailMergeOdsoFMDFieldType* m_val_attr ;

    }

    class CT_TrackChangesView : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrackChangesView& default_instance() const;
        bool has_markup_attr() const;
        void set_markup_attr(const ns_s::ST_OnOff& _markup_attr );
        const ns_s::ST_OnOff& markup_attr() const;
        bool has_comments_attr() const;
        void set_comments_attr(const ns_s::ST_OnOff& _comments_attr );
        const ns_s::ST_OnOff& comments_attr() const;
        bool has_insDel_attr() const;
        void set_insDel_attr(const ns_s::ST_OnOff& _insDel_attr );
        const ns_s::ST_OnOff& insDel_attr() const;
        bool has_formatting_attr() const;
        void set_formatting_attr(const ns_s::ST_OnOff& _formatting_attr );
        const ns_s::ST_OnOff& formatting_attr() const;
        bool has_inkAnnotations_attr() const;
        void set_inkAnnotations_attr(const ns_s::ST_OnOff& _inkAnnotations_attr );
        const ns_s::ST_OnOff& inkAnnotations_attr() const;

    private:
        static CT_TrackChangesView* default_instance_ ;
        bool m_has_markup_attr ;
        ns_s::ST_OnOff* m_markup_attr ;
        bool m_has_comments_attr ;
        ns_s::ST_OnOff* m_comments_attr ;
        bool m_has_insDel_attr ;
        ns_s::ST_OnOff* m_insDel_attr ;
        bool m_has_formatting_attr ;
        ns_s::ST_OnOff* m_formatting_attr ;
        bool m_has_inkAnnotations_attr ;
        ns_s::ST_OnOff* m_inkAnnotations_attr ;

    }

    class CT_Kinsoku : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Kinsoku& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const ns_s::ST_Lang& _lang_attr );
        const ns_s::ST_Lang& lang_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_Kinsoku* default_instance_ ;
        bool m_has_lang_attr ;
        ns_s::ST_Lang* m_lang_attr ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_TextDirection : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextDirection& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextDirection& _val_attr );
        const ST_TextDirection& val_attr() const;

    private:
        static CT_TextDirection* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextDirection* m_val_attr ;

    }

    class CT_TextAlignment : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextAlignment& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextAlignment& _val_attr );
        const ST_TextAlignment& val_attr() const;

    private:
        static CT_TextAlignment* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextAlignment* m_val_attr ;

    }

    class CT_Markup : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Markup& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        static CT_Markup* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_TrackChange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrackChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        static CT_TrackChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_CellMergeTrackChange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CellMergeTrackChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;
        bool has_vMerge_attr() const;
        void set_vMerge_attr(const ST_AnnotationVMerge& _vMerge_attr );
        const ST_AnnotationVMerge& vMerge_attr() const;
        bool has_vMergeOrig_attr() const;
        void set_vMergeOrig_attr(const ST_AnnotationVMerge& _vMergeOrig_attr );
        const ST_AnnotationVMerge& vMergeOrig_attr() const;

    private:
        static CT_CellMergeTrackChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;
        bool m_has_vMerge_attr ;
        ST_AnnotationVMerge* m_vMerge_attr ;
        bool m_has_vMergeOrig_attr ;
        ST_AnnotationVMerge* m_vMergeOrig_attr ;

    }

    class CT_TrackChangeRange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrackChangeRange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;

    private:
        static CT_TrackChangeRange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;

    }

    class CT_MarkupRange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MarkupRange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;

    private:
        static CT_MarkupRange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;

    }

    class CT_BookmarkRange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BookmarkRange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;
        bool has_colFirst_attr() const;
        void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr );
        const ST_DecimalNumber& colFirst_attr() const;
        bool has_colLast_attr() const;
        void set_colLast_attr(const ST_DecimalNumber& _colLast_attr );
        const ST_DecimalNumber& colLast_attr() const;

    private:
        static CT_BookmarkRange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;
        bool m_has_colFirst_attr ;
        ST_DecimalNumber* m_colFirst_attr ;
        bool m_has_colLast_attr ;
        ST_DecimalNumber* m_colLast_attr ;

    }

    class CT_Bookmark : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Bookmark& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;
        bool has_colFirst_attr() const;
        void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr );
        const ST_DecimalNumber& colFirst_attr() const;
        bool has_colLast_attr() const;
        void set_colLast_attr(const ST_DecimalNumber& _colLast_attr );
        const ST_DecimalNumber& colLast_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;

    private:
        static CT_Bookmark* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;
        bool m_has_colFirst_attr ;
        ST_DecimalNumber* m_colFirst_attr ;
        bool m_has_colLast_attr ;
        ST_DecimalNumber* m_colLast_attr ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;

    }

    class CT_MoveBookmark : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MoveBookmark& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;
        bool has_colFirst_attr() const;
        void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr );
        const ST_DecimalNumber& colFirst_attr() const;
        bool has_colLast_attr() const;
        void set_colLast_attr(const ST_DecimalNumber& _colLast_attr );
        const ST_DecimalNumber& colLast_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        static CT_MoveBookmark* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;
        bool m_has_colFirst_attr ;
        ST_DecimalNumber* m_colFirst_attr ;
        bool m_has_colLast_attr ;
        ST_DecimalNumber* m_colLast_attr ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_Comment : public XSD::ComplexType{
    public:
        CT_CustomXmlBlock* add_customXml();
        CT_SdtBlock* add_sdt();
        CT_P* add_p();
        CT_Tbl* add_tbl();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_AltChunk* add_altChunk();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Comment& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;
        bool has_initials_attr() const;
        void set_initials_attr(const ns_s::ST_String& _initials_attr );
        const ns_s::ST_String& initials_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Comment* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;
        bool m_has_initials_attr ;
        ns_s::ST_String* m_initials_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlBlock* mutable_customXml();
            const CT_CustomXmlBlock& customXml() const;
            bool has_sdt() const;
            CT_SdtBlock* mutable_sdt();
            const CT_SdtBlock& sdt() const;
            bool has_p() const;
            CT_P* mutable_p();
            const CT_P& p() const;
            bool has_tbl() const;
            CT_Tbl* mutable_tbl();
            const CT_Tbl& tbl() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_altChunk() const;
            CT_AltChunk* mutable_altChunk();
            const CT_AltChunk& altChunk() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlBlock* m_customXml ;
            bool m_has_sdt ;
            CT_SdtBlock* m_sdt ;
            bool m_has_p ;
            CT_P* m_p ;
            bool m_has_tbl ;
            CT_Tbl* m_tbl ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_altChunk ;
            CT_AltChunk* m_altChunk ;

        }


    }

    class CT_TrackChangeNumbering : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrackChangeNumbering& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;
        bool has_original_attr() const;
        void set_original_attr(const ns_s::ST_String& _original_attr );
        const ns_s::ST_String& original_attr() const;

    private:
        static CT_TrackChangeNumbering* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;
        bool m_has_original_attr ;
        ns_s::ST_String* m_original_attr ;

    }

    class CT_TblPrExChange : public XSD::ComplexType{
    public:
        bool has_tblPrEx() const;
        CT_TblPrExBase* mutable_tblPrEx();
        const CT_TblPrExBase& tblPrEx() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPrExChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_tblPrEx ;
        CT_TblPrExBase* m_tblPrEx ;
        static CT_TblPrExChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_TcPrChange : public XSD::ComplexType{
    public:
        bool has_tcPr() const;
        CT_TcPrInner* mutable_tcPr();
        const CT_TcPrInner& tcPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_tcPr ;
        CT_TcPrInner* m_tcPr ;
        static CT_TcPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_TrPrChange : public XSD::ComplexType{
    public:
        bool has_trPr() const;
        CT_TrPrBase* mutable_trPr();
        const CT_TrPrBase& trPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_trPr ;
        CT_TrPrBase* m_trPr ;
        static CT_TrPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_TblGridChange : public XSD::ComplexType{
    public:
        bool has_tblGrid() const;
        CT_TblGridBase* mutable_tblGrid();
        const CT_TblGridBase& tblGrid() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblGridChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        bool m_has_tblGrid ;
        CT_TblGridBase* m_tblGrid ;
        static CT_TblGridChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_TblPrChange : public XSD::ComplexType{
    public:
        bool has_tblPr() const;
        CT_TblPrBase* mutable_tblPr();
        const CT_TblPrBase& tblPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_tblPr ;
        CT_TblPrBase* m_tblPr ;
        static CT_TblPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_SectPrChange : public XSD::ComplexType{
    public:
        bool has_sectPr() const;
        CT_SectPrBase* mutable_sectPr();
        const CT_SectPrBase& sectPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SectPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_sectPr ;
        CT_SectPrBase* m_sectPr ;
        static CT_SectPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_PPrChange : public XSD::ComplexType{
    public:
        bool has_pPr() const;
        CT_PPrBase* mutable_pPr();
        const CT_PPrBase& pPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_pPr ;
        CT_PPrBase* m_pPr ;
        static CT_PPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_RPrChange : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPrOriginal* mutable_rPr();
        const CT_RPrOriginal& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_rPr ;
        CT_RPrOriginal* m_rPr ;
        static CT_RPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_ParaRPrChange : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_ParaRPrOriginal* mutable_rPr();
        const CT_ParaRPrOriginal& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ParaRPrChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_rPr ;
        CT_ParaRPrOriginal* m_rPr ;
        static CT_ParaRPrChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_RunTrackChange : public XSD::ComplexType{
    public:
        CT_CustomXmlRun* add_customXml();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
        CT_DirContentRun* add_dir();
        CT_BdoContentRun* add_bdo();
        CT_R* add_r();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_Acc* add_acc();
        CT_Bar* add_bar();
        CT_Box* add_box();
        CT_BorderBox* add_borderBox();
        CT_D* add_d();
        CT_EqArr* add_eqArr();
        CT_F* add_f();
        CT_Func* add_func();
        CT_GroupChr* add_groupChr();
        CT_LimLow* add_limLow();
        CT_LimUpp* add_limUpp();
        CT_M* add_m();
        CT_Nary* add_nary();
        CT_Phant* add_phant();
        CT_Rad* add_rad();
        CT_SPre* add_sPre();
        CT_SSub* add_sSub();
        CT_SSubSup* add_sSubSup();
        CT_SSup* add_sSup();
        CT_R* add_r();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RunTrackChange& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_RunTrackChange* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_dir() const;
            CT_DirContentRun* mutable_dir();
            const CT_DirContentRun& dir() const;
            bool has_bdo() const;
            CT_BdoContentRun* mutable_bdo();
            const CT_BdoContentRun& bdo() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_dir ;
            CT_DirContentRun* m_dir ;
            bool m_has_bdo ;
            CT_BdoContentRun* m_bdo ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_acc ;
            CT_Acc* m_acc ;
            bool m_has_bar ;
            CT_Bar* m_bar ;
            bool m_has_box ;
            CT_Box* m_box ;
            bool m_has_borderBox ;
            CT_BorderBox* m_borderBox ;
            bool m_has_d ;
            CT_D* m_d ;
            bool m_has_eqArr ;
            CT_EqArr* m_eqArr ;
            bool m_has_f ;
            CT_F* m_f ;
            bool m_has_func ;
            CT_Func* m_func ;
            bool m_has_groupChr ;
            CT_GroupChr* m_groupChr ;
            bool m_has_limLow ;
            CT_LimLow* m_limLow ;
            bool m_has_limUpp ;
            CT_LimUpp* m_limUpp ;
            bool m_has_m ;
            CT_M* m_m ;
            bool m_has_nary ;
            CT_Nary* m_nary ;
            bool m_has_phant ;
            CT_Phant* m_phant ;
            bool m_has_rad ;
            CT_Rad* m_rad ;
            bool m_has_sPre ;
            CT_SPre* m_sPre ;
            bool m_has_sSub ;
            CT_SSub* m_sSub ;
            bool m_has_sSubSup ;
            CT_SSubSup* m_sSubSup ;
            bool m_has_sSup ;
            CT_SSup* m_sSup ;
            bool m_has_r ;
            CT_R* m_r ;

        }


    }

    class CT_NumPr : public XSD::ComplexType{
    public:
        bool has_ilvl() const;
        CT_DecimalNumber* mutable_ilvl();
        const CT_DecimalNumber& ilvl() const;
        bool has_numId() const;
        CT_DecimalNumber* mutable_numId();
        const CT_DecimalNumber& numId() const;
        bool has_numberingChange() const;
        CT_TrackChangeNumbering* mutable_numberingChange();
        const CT_TrackChangeNumbering& numberingChange() const;
        bool has_ins() const;
        CT_TrackChange* mutable_ins();
        const CT_TrackChange& ins() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumPr& default_instance() const;

    private:
        bool m_has_ilvl ;
        CT_DecimalNumber* m_ilvl ;
        bool m_has_numId ;
        CT_DecimalNumber* m_numId ;
        bool m_has_numberingChange ;
        CT_TrackChangeNumbering* m_numberingChange ;
        bool m_has_ins ;
        CT_TrackChange* m_ins ;
        static CT_NumPr* default_instance_ ;

    }

    class CT_PBdr : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_Border* mutable_top();
        const CT_Border& top() const;
        bool has_left() const;
        CT_Border* mutable_left();
        const CT_Border& left() const;
        bool has_bottom() const;
        CT_Border* mutable_bottom();
        const CT_Border& bottom() const;
        bool has_right() const;
        CT_Border* mutable_right();
        const CT_Border& right() const;
        bool has_between() const;
        CT_Border* mutable_between();
        const CT_Border& between() const;
        bool has_bar() const;
        CT_Border* mutable_bar();
        const CT_Border& bar() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PBdr& default_instance() const;

    private:
        bool m_has_top ;
        CT_Border* m_top ;
        bool m_has_left ;
        CT_Border* m_left ;
        bool m_has_bottom ;
        CT_Border* m_bottom ;
        bool m_has_right ;
        CT_Border* m_right ;
        bool m_has_between ;
        CT_Border* m_between ;
        bool m_has_bar ;
        CT_Border* m_bar ;
        static CT_PBdr* default_instance_ ;

    }

    class CT_Tabs : public XSD::ComplexType{
    public:
        bool has_tab() const;
        CT_TabStop* mutable_tab();
        const CT_TabStop& tab() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Tabs& default_instance() const;

    private:
        bool m_has_tab ;
        CT_TabStop* m_tab ;
        static CT_Tabs* default_instance_ ;

    }

    class CT_TextboxTightWrap : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextboxTightWrap& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextboxTightWrap& _val_attr );
        const ST_TextboxTightWrap& val_attr() const;

    private:
        static CT_TextboxTightWrap* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextboxTightWrap* m_val_attr ;

    }

    class CT_PPr : public XSD::ComplexType{
    public:
        bool has_pStyle() const;
        CT_String* mutable_pStyle();
        const CT_String& pStyle() const;
        bool has_keepNext() const;
        CT_OnOff* mutable_keepNext();
        const CT_OnOff& keepNext() const;
        bool has_keepLines() const;
        CT_OnOff* mutable_keepLines();
        const CT_OnOff& keepLines() const;
        bool has_pageBreakBefore() const;
        CT_OnOff* mutable_pageBreakBefore();
        const CT_OnOff& pageBreakBefore() const;
        bool has_framePr() const;
        CT_FramePr* mutable_framePr();
        const CT_FramePr& framePr() const;
        bool has_widowControl() const;
        CT_OnOff* mutable_widowControl();
        const CT_OnOff& widowControl() const;
        bool has_numPr() const;
        CT_NumPr* mutable_numPr();
        const CT_NumPr& numPr() const;
        bool has_suppressLineNumbers() const;
        CT_OnOff* mutable_suppressLineNumbers();
        const CT_OnOff& suppressLineNumbers() const;
        bool has_pBdr() const;
        CT_PBdr* mutable_pBdr();
        const CT_PBdr& pBdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tabs() const;
        CT_Tabs* mutable_tabs();
        const CT_Tabs& tabs() const;
        bool has_suppressAutoHyphens() const;
        CT_OnOff* mutable_suppressAutoHyphens();
        const CT_OnOff& suppressAutoHyphens() const;
        bool has_kinsoku() const;
        CT_OnOff* mutable_kinsoku();
        const CT_OnOff& kinsoku() const;
        bool has_wordWrap() const;
        CT_OnOff* mutable_wordWrap();
        const CT_OnOff& wordWrap() const;
        bool has_overflowPunct() const;
        CT_OnOff* mutable_overflowPunct();
        const CT_OnOff& overflowPunct() const;
        bool has_topLinePunct() const;
        CT_OnOff* mutable_topLinePunct();
        const CT_OnOff& topLinePunct() const;
        bool has_autoSpaceDE() const;
        CT_OnOff* mutable_autoSpaceDE();
        const CT_OnOff& autoSpaceDE() const;
        bool has_autoSpaceDN() const;
        CT_OnOff* mutable_autoSpaceDN();
        const CT_OnOff& autoSpaceDN() const;
        bool has_bidi() const;
        CT_OnOff* mutable_bidi();
        const CT_OnOff& bidi() const;
        bool has_adjustRightInd() const;
        CT_OnOff* mutable_adjustRightInd();
        const CT_OnOff& adjustRightInd() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& snapToGrid() const;
        bool has_spacing() const;
        CT_Spacing* mutable_spacing();
        const CT_Spacing& spacing() const;
        bool has_ind() const;
        CT_Ind* mutable_ind();
        const CT_Ind& ind() const;
        bool has_contextualSpacing() const;
        CT_OnOff* mutable_contextualSpacing();
        const CT_OnOff& contextualSpacing() const;
        bool has_mirrorIndents() const;
        CT_OnOff* mutable_mirrorIndents();
        const CT_OnOff& mirrorIndents() const;
        bool has_suppressOverlap() const;
        CT_OnOff* mutable_suppressOverlap();
        const CT_OnOff& suppressOverlap() const;
        bool has_jc() const;
        CT_Jc* mutable_jc();
        const CT_Jc& jc() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_textAlignment() const;
        CT_TextAlignment* mutable_textAlignment();
        const CT_TextAlignment& textAlignment() const;
        bool has_textboxTightWrap() const;
        CT_TextboxTightWrap* mutable_textboxTightWrap();
        const CT_TextboxTightWrap& textboxTightWrap() const;
        bool has_outlineLvl() const;
        CT_DecimalNumber* mutable_outlineLvl();
        const CT_DecimalNumber& outlineLvl() const;
        bool has_divId() const;
        CT_DecimalNumber* mutable_divId();
        const CT_DecimalNumber& divId() const;
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        bool has_rPr() const;
        CT_ParaRPr* mutable_rPr();
        const CT_ParaRPr& rPr() const;
        bool has_sectPr() const;
        CT_SectPr* mutable_sectPr();
        const CT_SectPr& sectPr() const;
        bool has_pPrChange() const;
        CT_PPrChange* mutable_pPrChange();
        const CT_PPrChange& pPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PPr& default_instance() const;

    private:
        bool m_has_pStyle ;
        CT_String* m_pStyle ;
        bool m_has_keepNext ;
        CT_OnOff* m_keepNext ;
        bool m_has_keepLines ;
        CT_OnOff* m_keepLines ;
        bool m_has_pageBreakBefore ;
        CT_OnOff* m_pageBreakBefore ;
        bool m_has_framePr ;
        CT_FramePr* m_framePr ;
        bool m_has_widowControl ;
        CT_OnOff* m_widowControl ;
        bool m_has_numPr ;
        CT_NumPr* m_numPr ;
        bool m_has_suppressLineNumbers ;
        CT_OnOff* m_suppressLineNumbers ;
        bool m_has_pBdr ;
        CT_PBdr* m_pBdr ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tabs ;
        CT_Tabs* m_tabs ;
        bool m_has_suppressAutoHyphens ;
        CT_OnOff* m_suppressAutoHyphens ;
        bool m_has_kinsoku ;
        CT_OnOff* m_kinsoku ;
        bool m_has_wordWrap ;
        CT_OnOff* m_wordWrap ;
        bool m_has_overflowPunct ;
        CT_OnOff* m_overflowPunct ;
        bool m_has_topLinePunct ;
        CT_OnOff* m_topLinePunct ;
        bool m_has_autoSpaceDE ;
        CT_OnOff* m_autoSpaceDE ;
        bool m_has_autoSpaceDN ;
        CT_OnOff* m_autoSpaceDN ;
        bool m_has_bidi ;
        CT_OnOff* m_bidi ;
        bool m_has_adjustRightInd ;
        CT_OnOff* m_adjustRightInd ;
        bool m_has_snapToGrid ;
        CT_OnOff* m_snapToGrid ;
        bool m_has_spacing ;
        CT_Spacing* m_spacing ;
        bool m_has_ind ;
        CT_Ind* m_ind ;
        bool m_has_contextualSpacing ;
        CT_OnOff* m_contextualSpacing ;
        bool m_has_mirrorIndents ;
        CT_OnOff* m_mirrorIndents ;
        bool m_has_suppressOverlap ;
        CT_OnOff* m_suppressOverlap ;
        bool m_has_jc ;
        CT_Jc* m_jc ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_textAlignment ;
        CT_TextAlignment* m_textAlignment ;
        bool m_has_textboxTightWrap ;
        CT_TextboxTightWrap* m_textboxTightWrap ;
        bool m_has_outlineLvl ;
        CT_DecimalNumber* m_outlineLvl ;
        bool m_has_divId ;
        CT_DecimalNumber* m_divId ;
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        bool m_has_rPr ;
        CT_ParaRPr* m_rPr ;
        bool m_has_sectPr ;
        CT_SectPr* m_sectPr ;
        bool m_has_pPrChange ;
        CT_PPrChange* m_pPrChange ;
        static CT_PPr* default_instance_ ;

    }

    class CT_PPrBase : public XSD::ComplexType{
    public:
        bool has_pStyle() const;
        CT_String* mutable_pStyle();
        const CT_String& pStyle() const;
        bool has_keepNext() const;
        CT_OnOff* mutable_keepNext();
        const CT_OnOff& keepNext() const;
        bool has_keepLines() const;
        CT_OnOff* mutable_keepLines();
        const CT_OnOff& keepLines() const;
        bool has_pageBreakBefore() const;
        CT_OnOff* mutable_pageBreakBefore();
        const CT_OnOff& pageBreakBefore() const;
        bool has_framePr() const;
        CT_FramePr* mutable_framePr();
        const CT_FramePr& framePr() const;
        bool has_widowControl() const;
        CT_OnOff* mutable_widowControl();
        const CT_OnOff& widowControl() const;
        bool has_numPr() const;
        CT_NumPr* mutable_numPr();
        const CT_NumPr& numPr() const;
        bool has_suppressLineNumbers() const;
        CT_OnOff* mutable_suppressLineNumbers();
        const CT_OnOff& suppressLineNumbers() const;
        bool has_pBdr() const;
        CT_PBdr* mutable_pBdr();
        const CT_PBdr& pBdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tabs() const;
        CT_Tabs* mutable_tabs();
        const CT_Tabs& tabs() const;
        bool has_suppressAutoHyphens() const;
        CT_OnOff* mutable_suppressAutoHyphens();
        const CT_OnOff& suppressAutoHyphens() const;
        bool has_kinsoku() const;
        CT_OnOff* mutable_kinsoku();
        const CT_OnOff& kinsoku() const;
        bool has_wordWrap() const;
        CT_OnOff* mutable_wordWrap();
        const CT_OnOff& wordWrap() const;
        bool has_overflowPunct() const;
        CT_OnOff* mutable_overflowPunct();
        const CT_OnOff& overflowPunct() const;
        bool has_topLinePunct() const;
        CT_OnOff* mutable_topLinePunct();
        const CT_OnOff& topLinePunct() const;
        bool has_autoSpaceDE() const;
        CT_OnOff* mutable_autoSpaceDE();
        const CT_OnOff& autoSpaceDE() const;
        bool has_autoSpaceDN() const;
        CT_OnOff* mutable_autoSpaceDN();
        const CT_OnOff& autoSpaceDN() const;
        bool has_bidi() const;
        CT_OnOff* mutable_bidi();
        const CT_OnOff& bidi() const;
        bool has_adjustRightInd() const;
        CT_OnOff* mutable_adjustRightInd();
        const CT_OnOff& adjustRightInd() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& snapToGrid() const;
        bool has_spacing() const;
        CT_Spacing* mutable_spacing();
        const CT_Spacing& spacing() const;
        bool has_ind() const;
        CT_Ind* mutable_ind();
        const CT_Ind& ind() const;
        bool has_contextualSpacing() const;
        CT_OnOff* mutable_contextualSpacing();
        const CT_OnOff& contextualSpacing() const;
        bool has_mirrorIndents() const;
        CT_OnOff* mutable_mirrorIndents();
        const CT_OnOff& mirrorIndents() const;
        bool has_suppressOverlap() const;
        CT_OnOff* mutable_suppressOverlap();
        const CT_OnOff& suppressOverlap() const;
        bool has_jc() const;
        CT_Jc* mutable_jc();
        const CT_Jc& jc() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_textAlignment() const;
        CT_TextAlignment* mutable_textAlignment();
        const CT_TextAlignment& textAlignment() const;
        bool has_textboxTightWrap() const;
        CT_TextboxTightWrap* mutable_textboxTightWrap();
        const CT_TextboxTightWrap& textboxTightWrap() const;
        bool has_outlineLvl() const;
        CT_DecimalNumber* mutable_outlineLvl();
        const CT_DecimalNumber& outlineLvl() const;
        bool has_divId() const;
        CT_DecimalNumber* mutable_divId();
        const CT_DecimalNumber& divId() const;
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PPrBase& default_instance() const;

    private:
        bool m_has_pStyle ;
        CT_String* m_pStyle ;
        bool m_has_keepNext ;
        CT_OnOff* m_keepNext ;
        bool m_has_keepLines ;
        CT_OnOff* m_keepLines ;
        bool m_has_pageBreakBefore ;
        CT_OnOff* m_pageBreakBefore ;
        bool m_has_framePr ;
        CT_FramePr* m_framePr ;
        bool m_has_widowControl ;
        CT_OnOff* m_widowControl ;
        bool m_has_numPr ;
        CT_NumPr* m_numPr ;
        bool m_has_suppressLineNumbers ;
        CT_OnOff* m_suppressLineNumbers ;
        bool m_has_pBdr ;
        CT_PBdr* m_pBdr ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tabs ;
        CT_Tabs* m_tabs ;
        bool m_has_suppressAutoHyphens ;
        CT_OnOff* m_suppressAutoHyphens ;
        bool m_has_kinsoku ;
        CT_OnOff* m_kinsoku ;
        bool m_has_wordWrap ;
        CT_OnOff* m_wordWrap ;
        bool m_has_overflowPunct ;
        CT_OnOff* m_overflowPunct ;
        bool m_has_topLinePunct ;
        CT_OnOff* m_topLinePunct ;
        bool m_has_autoSpaceDE ;
        CT_OnOff* m_autoSpaceDE ;
        bool m_has_autoSpaceDN ;
        CT_OnOff* m_autoSpaceDN ;
        bool m_has_bidi ;
        CT_OnOff* m_bidi ;
        bool m_has_adjustRightInd ;
        CT_OnOff* m_adjustRightInd ;
        bool m_has_snapToGrid ;
        CT_OnOff* m_snapToGrid ;
        bool m_has_spacing ;
        CT_Spacing* m_spacing ;
        bool m_has_ind ;
        CT_Ind* m_ind ;
        bool m_has_contextualSpacing ;
        CT_OnOff* m_contextualSpacing ;
        bool m_has_mirrorIndents ;
        CT_OnOff* m_mirrorIndents ;
        bool m_has_suppressOverlap ;
        CT_OnOff* m_suppressOverlap ;
        bool m_has_jc ;
        CT_Jc* m_jc ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_textAlignment ;
        CT_TextAlignment* m_textAlignment ;
        bool m_has_textboxTightWrap ;
        CT_TextboxTightWrap* m_textboxTightWrap ;
        bool m_has_outlineLvl ;
        CT_DecimalNumber* m_outlineLvl ;
        bool m_has_divId ;
        CT_DecimalNumber* m_divId ;
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        static CT_PPrBase* default_instance_ ;

    }

    class CT_PPrGeneral : public XSD::ComplexType{
    public:
        bool has_pStyle() const;
        CT_String* mutable_pStyle();
        const CT_String& pStyle() const;
        bool has_keepNext() const;
        CT_OnOff* mutable_keepNext();
        const CT_OnOff& keepNext() const;
        bool has_keepLines() const;
        CT_OnOff* mutable_keepLines();
        const CT_OnOff& keepLines() const;
        bool has_pageBreakBefore() const;
        CT_OnOff* mutable_pageBreakBefore();
        const CT_OnOff& pageBreakBefore() const;
        bool has_framePr() const;
        CT_FramePr* mutable_framePr();
        const CT_FramePr& framePr() const;
        bool has_widowControl() const;
        CT_OnOff* mutable_widowControl();
        const CT_OnOff& widowControl() const;
        bool has_numPr() const;
        CT_NumPr* mutable_numPr();
        const CT_NumPr& numPr() const;
        bool has_suppressLineNumbers() const;
        CT_OnOff* mutable_suppressLineNumbers();
        const CT_OnOff& suppressLineNumbers() const;
        bool has_pBdr() const;
        CT_PBdr* mutable_pBdr();
        const CT_PBdr& pBdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tabs() const;
        CT_Tabs* mutable_tabs();
        const CT_Tabs& tabs() const;
        bool has_suppressAutoHyphens() const;
        CT_OnOff* mutable_suppressAutoHyphens();
        const CT_OnOff& suppressAutoHyphens() const;
        bool has_kinsoku() const;
        CT_OnOff* mutable_kinsoku();
        const CT_OnOff& kinsoku() const;
        bool has_wordWrap() const;
        CT_OnOff* mutable_wordWrap();
        const CT_OnOff& wordWrap() const;
        bool has_overflowPunct() const;
        CT_OnOff* mutable_overflowPunct();
        const CT_OnOff& overflowPunct() const;
        bool has_topLinePunct() const;
        CT_OnOff* mutable_topLinePunct();
        const CT_OnOff& topLinePunct() const;
        bool has_autoSpaceDE() const;
        CT_OnOff* mutable_autoSpaceDE();
        const CT_OnOff& autoSpaceDE() const;
        bool has_autoSpaceDN() const;
        CT_OnOff* mutable_autoSpaceDN();
        const CT_OnOff& autoSpaceDN() const;
        bool has_bidi() const;
        CT_OnOff* mutable_bidi();
        const CT_OnOff& bidi() const;
        bool has_adjustRightInd() const;
        CT_OnOff* mutable_adjustRightInd();
        const CT_OnOff& adjustRightInd() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& snapToGrid() const;
        bool has_spacing() const;
        CT_Spacing* mutable_spacing();
        const CT_Spacing& spacing() const;
        bool has_ind() const;
        CT_Ind* mutable_ind();
        const CT_Ind& ind() const;
        bool has_contextualSpacing() const;
        CT_OnOff* mutable_contextualSpacing();
        const CT_OnOff& contextualSpacing() const;
        bool has_mirrorIndents() const;
        CT_OnOff* mutable_mirrorIndents();
        const CT_OnOff& mirrorIndents() const;
        bool has_suppressOverlap() const;
        CT_OnOff* mutable_suppressOverlap();
        const CT_OnOff& suppressOverlap() const;
        bool has_jc() const;
        CT_Jc* mutable_jc();
        const CT_Jc& jc() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_textAlignment() const;
        CT_TextAlignment* mutable_textAlignment();
        const CT_TextAlignment& textAlignment() const;
        bool has_textboxTightWrap() const;
        CT_TextboxTightWrap* mutable_textboxTightWrap();
        const CT_TextboxTightWrap& textboxTightWrap() const;
        bool has_outlineLvl() const;
        CT_DecimalNumber* mutable_outlineLvl();
        const CT_DecimalNumber& outlineLvl() const;
        bool has_divId() const;
        CT_DecimalNumber* mutable_divId();
        const CT_DecimalNumber& divId() const;
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        bool has_pPrChange() const;
        CT_PPrChange* mutable_pPrChange();
        const CT_PPrChange& pPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PPrGeneral& default_instance() const;

    private:
        bool m_has_pStyle ;
        CT_String* m_pStyle ;
        bool m_has_keepNext ;
        CT_OnOff* m_keepNext ;
        bool m_has_keepLines ;
        CT_OnOff* m_keepLines ;
        bool m_has_pageBreakBefore ;
        CT_OnOff* m_pageBreakBefore ;
        bool m_has_framePr ;
        CT_FramePr* m_framePr ;
        bool m_has_widowControl ;
        CT_OnOff* m_widowControl ;
        bool m_has_numPr ;
        CT_NumPr* m_numPr ;
        bool m_has_suppressLineNumbers ;
        CT_OnOff* m_suppressLineNumbers ;
        bool m_has_pBdr ;
        CT_PBdr* m_pBdr ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tabs ;
        CT_Tabs* m_tabs ;
        bool m_has_suppressAutoHyphens ;
        CT_OnOff* m_suppressAutoHyphens ;
        bool m_has_kinsoku ;
        CT_OnOff* m_kinsoku ;
        bool m_has_wordWrap ;
        CT_OnOff* m_wordWrap ;
        bool m_has_overflowPunct ;
        CT_OnOff* m_overflowPunct ;
        bool m_has_topLinePunct ;
        CT_OnOff* m_topLinePunct ;
        bool m_has_autoSpaceDE ;
        CT_OnOff* m_autoSpaceDE ;
        bool m_has_autoSpaceDN ;
        CT_OnOff* m_autoSpaceDN ;
        bool m_has_bidi ;
        CT_OnOff* m_bidi ;
        bool m_has_adjustRightInd ;
        CT_OnOff* m_adjustRightInd ;
        bool m_has_snapToGrid ;
        CT_OnOff* m_snapToGrid ;
        bool m_has_spacing ;
        CT_Spacing* m_spacing ;
        bool m_has_ind ;
        CT_Ind* m_ind ;
        bool m_has_contextualSpacing ;
        CT_OnOff* m_contextualSpacing ;
        bool m_has_mirrorIndents ;
        CT_OnOff* m_mirrorIndents ;
        bool m_has_suppressOverlap ;
        CT_OnOff* m_suppressOverlap ;
        bool m_has_jc ;
        CT_Jc* m_jc ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_textAlignment ;
        CT_TextAlignment* m_textAlignment ;
        bool m_has_textboxTightWrap ;
        CT_TextboxTightWrap* m_textboxTightWrap ;
        bool m_has_outlineLvl ;
        CT_DecimalNumber* m_outlineLvl ;
        bool m_has_divId ;
        CT_DecimalNumber* m_divId ;
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        bool m_has_pPrChange ;
        CT_PPrChange* m_pPrChange ;
        static CT_PPrGeneral* default_instance_ ;

    }

    class CT_Control : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Control& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_shapeid_attr() const;
        void set_shapeid_attr(const ns_s::ST_String& _shapeid_attr );
        const ns_s::ST_String& shapeid_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_Control* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_shapeid_attr ;
        ns_s::ST_String* m_shapeid_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_Background : public XSD::ComplexType{
    public:
        ns_v::Element* add_any_v();
        ns_o::Element* add_any_o();
        bool has_drawing() const;
        CT_Drawing* mutable_drawing();
        const CT_Drawing& drawing() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Background& default_instance() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_drawing ;
        CT_Drawing* m_drawing ;
        static CT_Background* default_instance_ ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        class ChildGroup_1{
        public:

        private:

        }


    }

    class CT_Rel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rel& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_Rel* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_Object : public XSD::ComplexType{
    public:
        ns_::Element* add_any();
        ns_::Element* add_any();
        bool has_drawing() const;
        CT_Drawing* mutable_drawing();
        const CT_Drawing& drawing() const;
        bool has_control() const;
        CT_Control* mutable_control();
        const CT_Control& control() const;
        bool has_objectLink() const;
        CT_ObjectLink* mutable_objectLink();
        const CT_ObjectLink& objectLink() const;
        bool has_objectEmbed() const;
        CT_ObjectEmbed* mutable_objectEmbed();
        const CT_ObjectEmbed& objectEmbed() const;
        bool has_movie() const;
        CT_Rel* mutable_movie();
        const CT_Rel& movie() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Object& default_instance() const;
        bool has_dxaOrig_attr() const;
        void set_dxaOrig_attr(const ns_s::ST_TwipsMeasure& _dxaOrig_attr );
        const ns_s::ST_TwipsMeasure& dxaOrig_attr() const;
        bool has_dyaOrig_attr() const;
        void set_dyaOrig_attr(const ns_s::ST_TwipsMeasure& _dyaOrig_attr );
        const ns_s::ST_TwipsMeasure& dyaOrig_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_drawing ;
        CT_Drawing* m_drawing ;
        bool m_has_control ;
        CT_Control* m_control ;
        bool m_has_objectLink ;
        CT_ObjectLink* m_objectLink ;
        bool m_has_objectEmbed ;
        CT_ObjectEmbed* m_objectEmbed ;
        bool m_has_movie ;
        CT_Rel* m_movie ;
        static CT_Object* default_instance_ ;
        bool m_has_dxaOrig_attr ;
        ns_s::ST_TwipsMeasure* m_dxaOrig_attr ;
        bool m_has_dyaOrig_attr ;
        ns_s::ST_TwipsMeasure* m_dyaOrig_attr ;
        class ChildGroup_1{
        public:

        private:

        }


    }

    class CT_Picture : public XSD::ComplexType{
    public:
        ns_::Element* add_any();
        ns_::Element* add_any();
        bool has_movie() const;
        CT_Rel* mutable_movie();
        const CT_Rel& movie() const;
        bool has_control() const;
        CT_Control* mutable_control();
        const CT_Control& control() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Picture& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_movie ;
        CT_Rel* m_movie ;
        bool m_has_control ;
        CT_Control* m_control ;
        static CT_Picture* default_instance_ ;
        class ChildGroup_1{
        public:

        private:

        }


    }

    class CT_ObjectEmbed : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ObjectEmbed& default_instance() const;
        bool has_drawAspect_attr() const;
        void set_drawAspect_attr(const ST_ObjectDrawAspect& _drawAspect_attr );
        const ST_ObjectDrawAspect& drawAspect_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_progId_attr() const;
        void set_progId_attr(const ns_s::ST_String& _progId_attr );
        const ns_s::ST_String& progId_attr() const;
        bool has_shapeId_attr() const;
        void set_shapeId_attr(const ns_s::ST_String& _shapeId_attr );
        const ns_s::ST_String& shapeId_attr() const;
        bool has_fieldCodes_attr() const;
        void set_fieldCodes_attr(const ns_s::ST_String& _fieldCodes_attr );
        const ns_s::ST_String& fieldCodes_attr() const;

    private:
        static CT_ObjectEmbed* default_instance_ ;
        bool m_has_drawAspect_attr ;
        ST_ObjectDrawAspect* m_drawAspect_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_progId_attr ;
        ns_s::ST_String* m_progId_attr ;
        bool m_has_shapeId_attr ;
        ns_s::ST_String* m_shapeId_attr ;
        bool m_has_fieldCodes_attr ;
        ns_s::ST_String* m_fieldCodes_attr ;

    }

    class CT_ObjectLink : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ObjectLink& default_instance() const;
        bool has_drawAspect_attr() const;
        void set_drawAspect_attr(const ST_ObjectDrawAspect& _drawAspect_attr );
        const ST_ObjectDrawAspect& drawAspect_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_progId_attr() const;
        void set_progId_attr(const ns_s::ST_String& _progId_attr );
        const ns_s::ST_String& progId_attr() const;
        bool has_shapeId_attr() const;
        void set_shapeId_attr(const ns_s::ST_String& _shapeId_attr );
        const ns_s::ST_String& shapeId_attr() const;
        bool has_fieldCodes_attr() const;
        void set_fieldCodes_attr(const ns_s::ST_String& _fieldCodes_attr );
        const ns_s::ST_String& fieldCodes_attr() const;
        bool has_updateMode_attr() const;
        void set_updateMode_attr(const ST_ObjectUpdateMode& _updateMode_attr );
        const ST_ObjectUpdateMode& updateMode_attr() const;
        bool has_lockedField_attr() const;
        void set_lockedField_attr(const ns_s::ST_OnOff& _lockedField_attr );
        const ns_s::ST_OnOff& lockedField_attr() const;

    private:
        static CT_ObjectLink* default_instance_ ;
        bool m_has_drawAspect_attr ;
        ST_ObjectDrawAspect* m_drawAspect_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_progId_attr ;
        ns_s::ST_String* m_progId_attr ;
        bool m_has_shapeId_attr ;
        ns_s::ST_String* m_shapeId_attr ;
        bool m_has_fieldCodes_attr ;
        ns_s::ST_String* m_fieldCodes_attr ;
        bool m_has_updateMode_attr ;
        ST_ObjectUpdateMode* m_updateMode_attr ;
        bool m_has_lockedField_attr ;
        ns_s::ST_OnOff* m_lockedField_attr ;

    }

    class CT_Drawing : public XSD::ComplexType{
    public:
        CT_Anchor* add_anchor();
        CT_Inline* add_inline();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Drawing& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Drawing* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_anchor() const;
            CT_Anchor* mutable_anchor();
            const CT_Anchor& anchor() const;
            bool has_inline() const;
            CT_Inline* mutable_inline();
            const CT_Inline& inline() const;

        private:
            bool m_has_anchor ;
            CT_Anchor* m_anchor ;
            bool m_has_inline ;
            CT_Inline* m_inline ;

        }


    }

    class CT_SimpleField : public XSD::ComplexType{
    public:
        bool has_fldData() const;
        CT_Text* mutable_fldData();
        const CT_Text& fldData() const;
        CT_CustomXmlRun* add_customXml();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
        CT_DirContentRun* add_dir();
        CT_BdoContentRun* add_bdo();
        CT_R* add_r();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_Rel* add_subDoc();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SimpleField& default_instance() const;
        bool has_instr_attr() const;
        void set_instr_attr(const ns_s::ST_String& _instr_attr );
        const ns_s::ST_String& instr_attr() const;
        bool has_fldLock_attr() const;
        void set_fldLock_attr(const ns_s::ST_OnOff& _fldLock_attr );
        const ns_s::ST_OnOff& fldLock_attr() const;
        bool has_dirty_attr() const;
        void set_dirty_attr(const ns_s::ST_OnOff& _dirty_attr );
        const ns_s::ST_OnOff& dirty_attr() const;

    private:
        bool m_has_fldData ;
        CT_Text* m_fldData ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SimpleField* default_instance_ ;
        bool m_has_instr_attr ;
        ns_s::ST_String* m_instr_attr ;
        bool m_has_fldLock_attr ;
        ns_s::ST_OnOff* m_fldLock_attr ;
        bool m_has_dirty_attr ;
        ns_s::ST_OnOff* m_dirty_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_dir() const;
            CT_DirContentRun* mutable_dir();
            const CT_DirContentRun& dir() const;
            bool has_bdo() const;
            CT_BdoContentRun* mutable_bdo();
            const CT_BdoContentRun& bdo() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_subDoc() const;
            CT_Rel* mutable_subDoc();
            const CT_Rel& subDoc() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_dir ;
            CT_DirContentRun* m_dir ;
            bool m_has_bdo ;
            CT_BdoContentRun* m_bdo ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_subDoc ;
            CT_Rel* m_subDoc ;

        }


    }

    class CT_FFTextType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFTextType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FFTextType& _val_attr );
        const ST_FFTextType& val_attr() const;

    private:
        static CT_FFTextType* default_instance_ ;
        bool m_has_val_attr ;
        ST_FFTextType* m_val_attr ;

    }

    class CT_FFName : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFName& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FFName& _val_attr );
        const ST_FFName& val_attr() const;

    private:
        static CT_FFName* default_instance_ ;
        bool m_has_val_attr ;
        ST_FFName* m_val_attr ;

    }

    class CT_FldChar : public XSD::ComplexType{
    public:
        bool has_fldData() const;
        CT_Text* mutable_fldData();
        const CT_Text& fldData() const;
        bool has_ffData() const;
        CT_FFData* mutable_ffData();
        const CT_FFData& ffData() const;
        bool has_numberingChange() const;
        CT_TrackChangeNumbering* mutable_numberingChange();
        const CT_TrackChangeNumbering& numberingChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FldChar& default_instance() const;
        bool has_fldCharType_attr() const;
        void set_fldCharType_attr(const ST_FldCharType& _fldCharType_attr );
        const ST_FldCharType& fldCharType_attr() const;
        bool has_fldLock_attr() const;
        void set_fldLock_attr(const ns_s::ST_OnOff& _fldLock_attr );
        const ns_s::ST_OnOff& fldLock_attr() const;
        bool has_dirty_attr() const;
        void set_dirty_attr(const ns_s::ST_OnOff& _dirty_attr );
        const ns_s::ST_OnOff& dirty_attr() const;

    private:
        bool m_has_fldData ;
        CT_Text* m_fldData ;
        bool m_has_ffData ;
        CT_FFData* m_ffData ;
        bool m_has_numberingChange ;
        CT_TrackChangeNumbering* m_numberingChange ;
        static CT_FldChar* default_instance_ ;
        bool m_has_fldCharType_attr ;
        ST_FldCharType* m_fldCharType_attr ;
        bool m_has_fldLock_attr ;
        ns_s::ST_OnOff* m_fldLock_attr ;
        bool m_has_dirty_attr ;
        ns_s::ST_OnOff* m_dirty_attr ;

    }

    class CT_Hyperlink : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Hyperlink& default_instance() const;
        bool has_tgtFrame_attr() const;
        void set_tgtFrame_attr(const ns_s::ST_String& _tgtFrame_attr );
        const ns_s::ST_String& tgtFrame_attr() const;
        bool has_tooltip_attr() const;
        void set_tooltip_attr(const ns_s::ST_String& _tooltip_attr );
        const ns_s::ST_String& tooltip_attr() const;
        bool has_docLocation_attr() const;
        void set_docLocation_attr(const ns_s::ST_String& _docLocation_attr );
        const ns_s::ST_String& docLocation_attr() const;
        bool has_history_attr() const;
        void set_history_attr(const ns_s::ST_OnOff& _history_attr );
        const ns_s::ST_OnOff& history_attr() const;
        bool has_anchor_attr() const;
        void set_anchor_attr(const ns_s::ST_String& _anchor_attr );
        const ns_s::ST_String& anchor_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_Hyperlink* default_instance_ ;
        bool m_has_tgtFrame_attr ;
        ns_s::ST_String* m_tgtFrame_attr ;
        bool m_has_tooltip_attr ;
        ns_s::ST_String* m_tooltip_attr ;
        bool m_has_docLocation_attr ;
        ns_s::ST_String* m_docLocation_attr ;
        bool m_has_history_attr ;
        ns_s::ST_OnOff* m_history_attr ;
        bool m_has_anchor_attr ;
        ns_s::ST_String* m_anchor_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_FFData : public XSD::ComplexType{
    public:
        CT_FFName* add_name();
        CT_DecimalNumber* add_label();
        CT_UnsignedDecimalNumber* add_tabIndex();
        CT_OnOff* add_enabled();
        CT_OnOff* add_calcOnExit();
        CT_MacroName* add_entryMacro();
        CT_MacroName* add_exitMacro();
        CT_FFHelpText* add_helpText();
        CT_FFStatusText* add_statusText();
        CT_FFCheckBox* add_checkBox();
        CT_FFDDList* add_ddList();
        CT_FFTextInput* add_textInput();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFData& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_FFData* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_name() const;
            CT_FFName* mutable_name();
            const CT_FFName& name() const;
            bool has_label() const;
            CT_DecimalNumber* mutable_label();
            const CT_DecimalNumber& label() const;
            bool has_tabIndex() const;
            CT_UnsignedDecimalNumber* mutable_tabIndex();
            const CT_UnsignedDecimalNumber& tabIndex() const;
            bool has_enabled() const;
            CT_OnOff* mutable_enabled();
            const CT_OnOff& enabled() const;
            bool has_calcOnExit() const;
            CT_OnOff* mutable_calcOnExit();
            const CT_OnOff& calcOnExit() const;
            bool has_entryMacro() const;
            CT_MacroName* mutable_entryMacro();
            const CT_MacroName& entryMacro() const;
            bool has_exitMacro() const;
            CT_MacroName* mutable_exitMacro();
            const CT_MacroName& exitMacro() const;
            bool has_helpText() const;
            CT_FFHelpText* mutable_helpText();
            const CT_FFHelpText& helpText() const;
            bool has_statusText() const;
            CT_FFStatusText* mutable_statusText();
            const CT_FFStatusText& statusText() const;
            bool has_checkBox() const;
            CT_FFCheckBox* mutable_checkBox();
            const CT_FFCheckBox& checkBox() const;
            bool has_ddList() const;
            CT_FFDDList* mutable_ddList();
            const CT_FFDDList& ddList() const;
            bool has_textInput() const;
            CT_FFTextInput* mutable_textInput();
            const CT_FFTextInput& textInput() const;

        private:
            bool m_has_name ;
            CT_FFName* m_name ;
            bool m_has_label ;
            CT_DecimalNumber* m_label ;
            bool m_has_tabIndex ;
            CT_UnsignedDecimalNumber* m_tabIndex ;
            bool m_has_enabled ;
            CT_OnOff* m_enabled ;
            bool m_has_calcOnExit ;
            CT_OnOff* m_calcOnExit ;
            bool m_has_entryMacro ;
            CT_MacroName* m_entryMacro ;
            bool m_has_exitMacro ;
            CT_MacroName* m_exitMacro ;
            bool m_has_helpText ;
            CT_FFHelpText* m_helpText ;
            bool m_has_statusText ;
            CT_FFStatusText* m_statusText ;
            bool m_has_checkBox ;
            CT_FFCheckBox* m_checkBox ;
            bool m_has_ddList ;
            CT_FFDDList* m_ddList ;
            bool m_has_textInput ;
            CT_FFTextInput* m_textInput ;

        }


    }

    class CT_FFHelpText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFHelpText& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_InfoTextType& _type_attr );
        const ST_InfoTextType& type_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FFHelpTextVal& _val_attr );
        const ST_FFHelpTextVal& val_attr() const;

    private:
        static CT_FFHelpText* default_instance_ ;
        bool m_has_type_attr ;
        ST_InfoTextType* m_type_attr ;
        bool m_has_val_attr ;
        ST_FFHelpTextVal* m_val_attr ;

    }

    class CT_FFStatusText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFStatusText& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_InfoTextType& _type_attr );
        const ST_InfoTextType& type_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FFStatusTextVal& _val_attr );
        const ST_FFStatusTextVal& val_attr() const;

    private:
        static CT_FFStatusText* default_instance_ ;
        bool m_has_type_attr ;
        ST_InfoTextType* m_type_attr ;
        bool m_has_val_attr ;
        ST_FFStatusTextVal* m_val_attr ;

    }

    class CT_FFCheckBox : public XSD::ComplexType{
    public:
        bool has_size() const;
        CT_HpsMeasure* mutable_size();
        const CT_HpsMeasure& size() const;
        bool has_sizeAuto() const;
        CT_OnOff* mutable_sizeAuto();
        const CT_OnOff& sizeAuto() const;
        bool has_default() const;
        CT_OnOff* mutable_default();
        const CT_OnOff& default() const;
        bool has_checked() const;
        CT_OnOff* mutable_checked();
        const CT_OnOff& checked() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFCheckBox& default_instance() const;

    private:
        bool m_has_size ;
        CT_HpsMeasure* m_size ;
        bool m_has_sizeAuto ;
        CT_OnOff* m_sizeAuto ;
        bool m_has_default ;
        CT_OnOff* m_default ;
        bool m_has_checked ;
        CT_OnOff* m_checked ;
        static CT_FFCheckBox* default_instance_ ;

    }

    class CT_FFDDList : public XSD::ComplexType{
    public:
        bool has_result() const;
        CT_DecimalNumber* mutable_result();
        const CT_DecimalNumber& result() const;
        bool has_default() const;
        CT_DecimalNumber* mutable_default();
        const CT_DecimalNumber& default() const;
        bool has_listEntry() const;
        CT_String* mutable_listEntry();
        const CT_String& listEntry() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFDDList& default_instance() const;

    private:
        bool m_has_result ;
        CT_DecimalNumber* m_result ;
        bool m_has_default ;
        CT_DecimalNumber* m_default ;
        bool m_has_listEntry ;
        CT_String* m_listEntry ;
        static CT_FFDDList* default_instance_ ;

    }

    class CT_FFTextInput : public XSD::ComplexType{
    public:
        bool has_type() const;
        CT_FFTextType* mutable_type();
        const CT_FFTextType& type() const;
        bool has_default() const;
        CT_String* mutable_default();
        const CT_String& default() const;
        bool has_maxLength() const;
        CT_DecimalNumber* mutable_maxLength();
        const CT_DecimalNumber& maxLength() const;
        bool has_format() const;
        CT_String* mutable_format();
        const CT_String& format() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FFTextInput& default_instance() const;

    private:
        bool m_has_type ;
        CT_FFTextType* m_type ;
        bool m_has_default ;
        CT_String* m_default ;
        bool m_has_maxLength ;
        CT_DecimalNumber* m_maxLength ;
        bool m_has_format ;
        CT_String* m_format ;
        static CT_FFTextInput* default_instance_ ;

    }

    class CT_SectType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SectType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SectionMark& _val_attr );
        const ST_SectionMark& val_attr() const;

    private:
        static CT_SectType* default_instance_ ;
        bool m_has_val_attr ;
        ST_SectionMark* m_val_attr ;

    }

    class CT_PaperSource : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PaperSource& default_instance() const;
        bool has_first_attr() const;
        void set_first_attr(const ST_DecimalNumber& _first_attr );
        const ST_DecimalNumber& first_attr() const;
        bool has_other_attr() const;
        void set_other_attr(const ST_DecimalNumber& _other_attr );
        const ST_DecimalNumber& other_attr() const;

    private:
        static CT_PaperSource* default_instance_ ;
        bool m_has_first_attr ;
        ST_DecimalNumber* m_first_attr ;
        bool m_has_other_attr ;
        ST_DecimalNumber* m_other_attr ;

    }

    class CT_PageSz : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageSz& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr );
        const ns_s::ST_TwipsMeasure& w_attr() const;
        bool has_h_attr() const;
        void set_h_attr(const ns_s::ST_TwipsMeasure& _h_attr );
        const ns_s::ST_TwipsMeasure& h_attr() const;
        bool has_orient_attr() const;
        void set_orient_attr(const ST_PageOrientation& _orient_attr );
        const ST_PageOrientation& orient_attr() const;
        bool has_code_attr() const;
        void set_code_attr(const ST_DecimalNumber& _code_attr );
        const ST_DecimalNumber& code_attr() const;

    private:
        static CT_PageSz* default_instance_ ;
        bool m_has_w_attr ;
        ns_s::ST_TwipsMeasure* m_w_attr ;
        bool m_has_h_attr ;
        ns_s::ST_TwipsMeasure* m_h_attr ;
        bool m_has_orient_attr ;
        ST_PageOrientation* m_orient_attr ;
        bool m_has_code_attr ;
        ST_DecimalNumber* m_code_attr ;

    }

    class CT_PageMar : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageMar& default_instance() const;
        bool has_top_attr() const;
        void set_top_attr(const ST_SignedTwipsMeasure& _top_attr );
        const ST_SignedTwipsMeasure& top_attr() const;
        bool has_right_attr() const;
        void set_right_attr(const ns_s::ST_TwipsMeasure& _right_attr );
        const ns_s::ST_TwipsMeasure& right_attr() const;
        bool has_bottom_attr() const;
        void set_bottom_attr(const ST_SignedTwipsMeasure& _bottom_attr );
        const ST_SignedTwipsMeasure& bottom_attr() const;
        bool has_left_attr() const;
        void set_left_attr(const ns_s::ST_TwipsMeasure& _left_attr );
        const ns_s::ST_TwipsMeasure& left_attr() const;
        bool has_header_attr() const;
        void set_header_attr(const ns_s::ST_TwipsMeasure& _header_attr );
        const ns_s::ST_TwipsMeasure& header_attr() const;
        bool has_footer_attr() const;
        void set_footer_attr(const ns_s::ST_TwipsMeasure& _footer_attr );
        const ns_s::ST_TwipsMeasure& footer_attr() const;
        bool has_gutter_attr() const;
        void set_gutter_attr(const ns_s::ST_TwipsMeasure& _gutter_attr );
        const ns_s::ST_TwipsMeasure& gutter_attr() const;

    private:
        static CT_PageMar* default_instance_ ;
        bool m_has_top_attr ;
        ST_SignedTwipsMeasure* m_top_attr ;
        bool m_has_right_attr ;
        ns_s::ST_TwipsMeasure* m_right_attr ;
        bool m_has_bottom_attr ;
        ST_SignedTwipsMeasure* m_bottom_attr ;
        bool m_has_left_attr ;
        ns_s::ST_TwipsMeasure* m_left_attr ;
        bool m_has_header_attr ;
        ns_s::ST_TwipsMeasure* m_header_attr ;
        bool m_has_footer_attr ;
        ns_s::ST_TwipsMeasure* m_footer_attr ;
        bool m_has_gutter_attr ;
        ns_s::ST_TwipsMeasure* m_gutter_attr ;

    }

    class CT_PageBorders : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_TopPageBorder* mutable_top();
        const CT_TopPageBorder& top() const;
        bool has_left() const;
        CT_PageBorder* mutable_left();
        const CT_PageBorder& left() const;
        bool has_bottom() const;
        CT_BottomPageBorder* mutable_bottom();
        const CT_BottomPageBorder& bottom() const;
        bool has_right() const;
        CT_PageBorder* mutable_right();
        const CT_PageBorder& right() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageBorders& default_instance() const;
        bool has_zOrder_attr() const;
        void set_zOrder_attr(const ST_PageBorderZOrder& _zOrder_attr );
        const ST_PageBorderZOrder& zOrder_attr() const;
        bool has_display_attr() const;
        void set_display_attr(const ST_PageBorderDisplay& _display_attr );
        const ST_PageBorderDisplay& display_attr() const;
        bool has_offsetFrom_attr() const;
        void set_offsetFrom_attr(const ST_PageBorderOffset& _offsetFrom_attr );
        const ST_PageBorderOffset& offsetFrom_attr() const;

    private:
        bool m_has_top ;
        CT_TopPageBorder* m_top ;
        bool m_has_left ;
        CT_PageBorder* m_left ;
        bool m_has_bottom ;
        CT_BottomPageBorder* m_bottom ;
        bool m_has_right ;
        CT_PageBorder* m_right ;
        static CT_PageBorders* default_instance_ ;
        bool m_has_zOrder_attr ;
        ST_PageBorderZOrder* m_zOrder_attr ;
        bool m_has_display_attr ;
        ST_PageBorderDisplay* m_display_attr ;
        bool m_has_offsetFrom_attr ;
        ST_PageBorderOffset* m_offsetFrom_attr ;

    }

    class CT_PageBorder : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageBorder& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Border& _val_attr );
        const ST_Border& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_EighthPointMeasure& _sz_attr );
        const ST_EighthPointMeasure& sz_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ST_PointMeasure& _space_attr );
        const ST_PointMeasure& space_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr );
        const ns_s::ST_OnOff& shadow_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ns_s::ST_OnOff& _frame_attr );
        const ns_s::ST_OnOff& frame_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_PageBorder* default_instance_ ;
        bool m_has_val_attr ;
        ST_Border* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        bool m_has_sz_attr ;
        ST_EighthPointMeasure* m_sz_attr ;
        bool m_has_space_attr ;
        ST_PointMeasure* m_space_attr ;
        bool m_has_shadow_attr ;
        ns_s::ST_OnOff* m_shadow_attr ;
        bool m_has_frame_attr ;
        ns_s::ST_OnOff* m_frame_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_BottomPageBorder : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BottomPageBorder& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Border& _val_attr );
        const ST_Border& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_EighthPointMeasure& _sz_attr );
        const ST_EighthPointMeasure& sz_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ST_PointMeasure& _space_attr );
        const ST_PointMeasure& space_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr );
        const ns_s::ST_OnOff& shadow_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ns_s::ST_OnOff& _frame_attr );
        const ns_s::ST_OnOff& frame_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_bottomLeft_attr() const;
        void set_bottomLeft_attr(const ST_RelationshipId& _bottomLeft_attr );
        const ST_RelationshipId& bottomLeft_attr() const;
        bool has_bottomRight_attr() const;
        void set_bottomRight_attr(const ST_RelationshipId& _bottomRight_attr );
        const ST_RelationshipId& bottomRight_attr() const;

    private:
        static CT_BottomPageBorder* default_instance_ ;
        bool m_has_val_attr ;
        ST_Border* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        bool m_has_sz_attr ;
        ST_EighthPointMeasure* m_sz_attr ;
        bool m_has_space_attr ;
        ST_PointMeasure* m_space_attr ;
        bool m_has_shadow_attr ;
        ns_s::ST_OnOff* m_shadow_attr ;
        bool m_has_frame_attr ;
        ns_s::ST_OnOff* m_frame_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_bottomLeft_attr ;
        ST_RelationshipId* m_bottomLeft_attr ;
        bool m_has_bottomRight_attr ;
        ST_RelationshipId* m_bottomRight_attr ;

    }

    class CT_TopPageBorder : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TopPageBorder& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Border& _val_attr );
        const ST_Border& val_attr() const;
        bool has_color_attr() const;
        void set_color_attr(const ST_HexColor& _color_attr );
        const ST_HexColor& color_attr() const;
        bool has_themeColor_attr() const;
        void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr );
        const ST_ThemeColor& themeColor_attr() const;
        bool has_themeTint_attr() const;
        void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr );
        const ST_UcharHexNumber& themeTint_attr() const;
        bool has_themeShade_attr() const;
        void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr );
        const ST_UcharHexNumber& themeShade_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_EighthPointMeasure& _sz_attr );
        const ST_EighthPointMeasure& sz_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ST_PointMeasure& _space_attr );
        const ST_PointMeasure& space_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr );
        const ns_s::ST_OnOff& shadow_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ns_s::ST_OnOff& _frame_attr );
        const ns_s::ST_OnOff& frame_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_topLeft_attr() const;
        void set_topLeft_attr(const ST_RelationshipId& _topLeft_attr );
        const ST_RelationshipId& topLeft_attr() const;
        bool has_topRight_attr() const;
        void set_topRight_attr(const ST_RelationshipId& _topRight_attr );
        const ST_RelationshipId& topRight_attr() const;

    private:
        static CT_TopPageBorder* default_instance_ ;
        bool m_has_val_attr ;
        ST_Border* m_val_attr ;
        bool m_has_color_attr ;
        ST_HexColor* m_color_attr ;
        bool m_has_themeColor_attr ;
        ST_ThemeColor* m_themeColor_attr ;
        bool m_has_themeTint_attr ;
        ST_UcharHexNumber* m_themeTint_attr ;
        bool m_has_themeShade_attr ;
        ST_UcharHexNumber* m_themeShade_attr ;
        bool m_has_sz_attr ;
        ST_EighthPointMeasure* m_sz_attr ;
        bool m_has_space_attr ;
        ST_PointMeasure* m_space_attr ;
        bool m_has_shadow_attr ;
        ns_s::ST_OnOff* m_shadow_attr ;
        bool m_has_frame_attr ;
        ns_s::ST_OnOff* m_frame_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_topLeft_attr ;
        ST_RelationshipId* m_topLeft_attr ;
        bool m_has_topRight_attr ;
        ST_RelationshipId* m_topRight_attr ;

    }

    class CT_LineNumber : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineNumber& default_instance() const;
        bool has_countBy_attr() const;
        void set_countBy_attr(const ST_DecimalNumber& _countBy_attr );
        const ST_DecimalNumber& countBy_attr() const;
        bool has_start_attr() const;
        void set_start_attr(const ST_DecimalNumber& _start_attr );
        const ST_DecimalNumber& start_attr() const;
        bool has_distance_attr() const;
        void set_distance_attr(const ns_s::ST_TwipsMeasure& _distance_attr );
        const ns_s::ST_TwipsMeasure& distance_attr() const;
        bool has_restart_attr() const;
        void set_restart_attr(const ST_LineNumberRestart& _restart_attr );
        const ST_LineNumberRestart& restart_attr() const;

    private:
        static CT_LineNumber* default_instance_ ;
        bool m_has_countBy_attr ;
        ST_DecimalNumber* m_countBy_attr ;
        bool m_has_start_attr ;
        ST_DecimalNumber* m_start_attr ;
        bool m_has_distance_attr ;
        ns_s::ST_TwipsMeasure* m_distance_attr ;
        bool m_has_restart_attr ;
        ST_LineNumberRestart* m_restart_attr ;

    }

    class CT_PageNumber : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PageNumber& default_instance() const;
        bool has_fmt_attr() const;
        void set_fmt_attr(const ST_NumberFormat& _fmt_attr );
        const ST_NumberFormat& fmt_attr() const;
        bool has_start_attr() const;
        void set_start_attr(const ST_DecimalNumber& _start_attr );
        const ST_DecimalNumber& start_attr() const;
        bool has_chapStyle_attr() const;
        void set_chapStyle_attr(const ST_DecimalNumber& _chapStyle_attr );
        const ST_DecimalNumber& chapStyle_attr() const;
        bool has_chapSep_attr() const;
        void set_chapSep_attr(const ST_ChapterSep& _chapSep_attr );
        const ST_ChapterSep& chapSep_attr() const;

    private:
        static CT_PageNumber* default_instance_ ;
        bool m_has_fmt_attr ;
        ST_NumberFormat* m_fmt_attr ;
        bool m_has_start_attr ;
        ST_DecimalNumber* m_start_attr ;
        bool m_has_chapStyle_attr ;
        ST_DecimalNumber* m_chapStyle_attr ;
        bool m_has_chapSep_attr ;
        ST_ChapterSep* m_chapSep_attr ;

    }

    class CT_Column : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Column& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr );
        const ns_s::ST_TwipsMeasure& w_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ns_s::ST_TwipsMeasure& _space_attr );
        const ns_s::ST_TwipsMeasure& space_attr() const;

    private:
        static CT_Column* default_instance_ ;
        bool m_has_w_attr ;
        ns_s::ST_TwipsMeasure* m_w_attr ;
        bool m_has_space_attr ;
        ns_s::ST_TwipsMeasure* m_space_attr ;

    }

    class CT_Columns : public XSD::ComplexType{
    public:
        bool has_col() const;
        CT_Column* mutable_col();
        const CT_Column& col() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Columns& default_instance() const;
        bool has_equalWidth_attr() const;
        void set_equalWidth_attr(const ns_s::ST_OnOff& _equalWidth_attr );
        const ns_s::ST_OnOff& equalWidth_attr() const;
        bool has_space_attr() const;
        void set_space_attr(const ns_s::ST_TwipsMeasure& _space_attr );
        const ns_s::ST_TwipsMeasure& space_attr() const;
        bool has_num_attr() const;
        void set_num_attr(const ST_DecimalNumber& _num_attr );
        const ST_DecimalNumber& num_attr() const;
        bool has_sep_attr() const;
        void set_sep_attr(const ns_s::ST_OnOff& _sep_attr );
        const ns_s::ST_OnOff& sep_attr() const;

    private:
        bool m_has_col ;
        CT_Column* m_col ;
        static CT_Columns* default_instance_ ;
        bool m_has_equalWidth_attr ;
        ns_s::ST_OnOff* m_equalWidth_attr ;
        bool m_has_space_attr ;
        ns_s::ST_TwipsMeasure* m_space_attr ;
        bool m_has_num_attr ;
        ST_DecimalNumber* m_num_attr ;
        bool m_has_sep_attr ;
        ns_s::ST_OnOff* m_sep_attr ;

    }

    class CT_VerticalJc : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VerticalJc& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_VerticalJc& _val_attr );
        const ST_VerticalJc& val_attr() const;

    private:
        static CT_VerticalJc* default_instance_ ;
        bool m_has_val_attr ;
        ST_VerticalJc* m_val_attr ;

    }

    class CT_DocGrid : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocGrid& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_DocGrid& _type_attr );
        const ST_DocGrid& type_attr() const;
        bool has_linePitch_attr() const;
        void set_linePitch_attr(const ST_DecimalNumber& _linePitch_attr );
        const ST_DecimalNumber& linePitch_attr() const;
        bool has_charSpace_attr() const;
        void set_charSpace_attr(const ST_DecimalNumber& _charSpace_attr );
        const ST_DecimalNumber& charSpace_attr() const;

    private:
        static CT_DocGrid* default_instance_ ;
        bool m_has_type_attr ;
        ST_DocGrid* m_type_attr ;
        bool m_has_linePitch_attr ;
        ST_DecimalNumber* m_linePitch_attr ;
        bool m_has_charSpace_attr ;
        ST_DecimalNumber* m_charSpace_attr ;

    }

    class CT_HdrFtrRef : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HdrFtrRef& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_HdrFtr& _type_attr );
        const ST_HdrFtr& type_attr() const;

    private:
        static CT_HdrFtrRef* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_type_attr ;
        ST_HdrFtr* m_type_attr ;

    }

    class CT_HdrFtr : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HdrFtr& default_instance() const;

    private:
        static CT_HdrFtr* default_instance_ ;

    }

    class CT_SectPrBase : public XSD::ComplexType{
    public:
        bool has_footnotePr() const;
        CT_FtnProps* mutable_footnotePr();
        const CT_FtnProps& footnotePr() const;
        bool has_endnotePr() const;
        CT_EdnProps* mutable_endnotePr();
        const CT_EdnProps& endnotePr() const;
        bool has_type() const;
        CT_SectType* mutable_type();
        const CT_SectType& type() const;
        bool has_pgSz() const;
        CT_PageSz* mutable_pgSz();
        const CT_PageSz& pgSz() const;
        bool has_pgMar() const;
        CT_PageMar* mutable_pgMar();
        const CT_PageMar& pgMar() const;
        bool has_paperSrc() const;
        CT_PaperSource* mutable_paperSrc();
        const CT_PaperSource& paperSrc() const;
        bool has_pgBorders() const;
        CT_PageBorders* mutable_pgBorders();
        const CT_PageBorders& pgBorders() const;
        bool has_lnNumType() const;
        CT_LineNumber* mutable_lnNumType();
        const CT_LineNumber& lnNumType() const;
        bool has_pgNumType() const;
        CT_PageNumber* mutable_pgNumType();
        const CT_PageNumber& pgNumType() const;
        bool has_cols() const;
        CT_Columns* mutable_cols();
        const CT_Columns& cols() const;
        bool has_formProt() const;
        CT_OnOff* mutable_formProt();
        const CT_OnOff& formProt() const;
        bool has_vAlign() const;
        CT_VerticalJc* mutable_vAlign();
        const CT_VerticalJc& vAlign() const;
        bool has_noEndnote() const;
        CT_OnOff* mutable_noEndnote();
        const CT_OnOff& noEndnote() const;
        bool has_titlePg() const;
        CT_OnOff* mutable_titlePg();
        const CT_OnOff& titlePg() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_bidi() const;
        CT_OnOff* mutable_bidi();
        const CT_OnOff& bidi() const;
        bool has_rtlGutter() const;
        CT_OnOff* mutable_rtlGutter();
        const CT_OnOff& rtlGutter() const;
        bool has_docGrid() const;
        CT_DocGrid* mutable_docGrid();
        const CT_DocGrid& docGrid() const;
        bool has_printerSettings() const;
        CT_Rel* mutable_printerSettings();
        const CT_Rel& printerSettings() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SectPrBase& default_instance() const;
        bool has_rsidRPr_attr() const;
        void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr );
        const ST_LongHexNumber& rsidRPr_attr() const;
        bool has_rsidDel_attr() const;
        void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr );
        const ST_LongHexNumber& rsidDel_attr() const;
        bool has_rsidR_attr() const;
        void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr );
        const ST_LongHexNumber& rsidR_attr() const;
        bool has_rsidSect_attr() const;
        void set_rsidSect_attr(const ST_LongHexNumber& _rsidSect_attr );
        const ST_LongHexNumber& rsidSect_attr() const;

    private:
        bool m_has_footnotePr ;
        CT_FtnProps* m_footnotePr ;
        bool m_has_endnotePr ;
        CT_EdnProps* m_endnotePr ;
        bool m_has_type ;
        CT_SectType* m_type ;
        bool m_has_pgSz ;
        CT_PageSz* m_pgSz ;
        bool m_has_pgMar ;
        CT_PageMar* m_pgMar ;
        bool m_has_paperSrc ;
        CT_PaperSource* m_paperSrc ;
        bool m_has_pgBorders ;
        CT_PageBorders* m_pgBorders ;
        bool m_has_lnNumType ;
        CT_LineNumber* m_lnNumType ;
        bool m_has_pgNumType ;
        CT_PageNumber* m_pgNumType ;
        bool m_has_cols ;
        CT_Columns* m_cols ;
        bool m_has_formProt ;
        CT_OnOff* m_formProt ;
        bool m_has_vAlign ;
        CT_VerticalJc* m_vAlign ;
        bool m_has_noEndnote ;
        CT_OnOff* m_noEndnote ;
        bool m_has_titlePg ;
        CT_OnOff* m_titlePg ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_bidi ;
        CT_OnOff* m_bidi ;
        bool m_has_rtlGutter ;
        CT_OnOff* m_rtlGutter ;
        bool m_has_docGrid ;
        CT_DocGrid* m_docGrid ;
        bool m_has_printerSettings ;
        CT_Rel* m_printerSettings ;
        static CT_SectPrBase* default_instance_ ;
        bool m_has_rsidRPr_attr ;
        ST_LongHexNumber* m_rsidRPr_attr ;
        bool m_has_rsidDel_attr ;
        ST_LongHexNumber* m_rsidDel_attr ;
        bool m_has_rsidR_attr ;
        ST_LongHexNumber* m_rsidR_attr ;
        bool m_has_rsidSect_attr ;
        ST_LongHexNumber* m_rsidSect_attr ;

    }

    class CT_SectPr : public XSD::ComplexType{
    public:
        CT_HdrFtrRef* add_headerReference();
        CT_HdrFtrRef* add_footerReference();
        bool has_footnotePr() const;
        CT_FtnProps* mutable_footnotePr();
        const CT_FtnProps& footnotePr() const;
        bool has_endnotePr() const;
        CT_EdnProps* mutable_endnotePr();
        const CT_EdnProps& endnotePr() const;
        bool has_type() const;
        CT_SectType* mutable_type();
        const CT_SectType& type() const;
        bool has_pgSz() const;
        CT_PageSz* mutable_pgSz();
        const CT_PageSz& pgSz() const;
        bool has_pgMar() const;
        CT_PageMar* mutable_pgMar();
        const CT_PageMar& pgMar() const;
        bool has_paperSrc() const;
        CT_PaperSource* mutable_paperSrc();
        const CT_PaperSource& paperSrc() const;
        bool has_pgBorders() const;
        CT_PageBorders* mutable_pgBorders();
        const CT_PageBorders& pgBorders() const;
        bool has_lnNumType() const;
        CT_LineNumber* mutable_lnNumType();
        const CT_LineNumber& lnNumType() const;
        bool has_pgNumType() const;
        CT_PageNumber* mutable_pgNumType();
        const CT_PageNumber& pgNumType() const;
        bool has_cols() const;
        CT_Columns* mutable_cols();
        const CT_Columns& cols() const;
        bool has_formProt() const;
        CT_OnOff* mutable_formProt();
        const CT_OnOff& formProt() const;
        bool has_vAlign() const;
        CT_VerticalJc* mutable_vAlign();
        const CT_VerticalJc& vAlign() const;
        bool has_noEndnote() const;
        CT_OnOff* mutable_noEndnote();
        const CT_OnOff& noEndnote() const;
        bool has_titlePg() const;
        CT_OnOff* mutable_titlePg();
        const CT_OnOff& titlePg() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_bidi() const;
        CT_OnOff* mutable_bidi();
        const CT_OnOff& bidi() const;
        bool has_rtlGutter() const;
        CT_OnOff* mutable_rtlGutter();
        const CT_OnOff& rtlGutter() const;
        bool has_docGrid() const;
        CT_DocGrid* mutable_docGrid();
        const CT_DocGrid& docGrid() const;
        bool has_printerSettings() const;
        CT_Rel* mutable_printerSettings();
        const CT_Rel& printerSettings() const;
        bool has_sectPrChange() const;
        CT_SectPrChange* mutable_sectPrChange();
        const CT_SectPrChange& sectPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SectPr& default_instance() const;
        bool has_rsidRPr_attr() const;
        void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr );
        const ST_LongHexNumber& rsidRPr_attr() const;
        bool has_rsidDel_attr() const;
        void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr );
        const ST_LongHexNumber& rsidDel_attr() const;
        bool has_rsidR_attr() const;
        void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr );
        const ST_LongHexNumber& rsidR_attr() const;
        bool has_rsidSect_attr() const;
        void set_rsidSect_attr(const ST_LongHexNumber& _rsidSect_attr );
        const ST_LongHexNumber& rsidSect_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_footnotePr ;
        CT_FtnProps* m_footnotePr ;
        bool m_has_endnotePr ;
        CT_EdnProps* m_endnotePr ;
        bool m_has_type ;
        CT_SectType* m_type ;
        bool m_has_pgSz ;
        CT_PageSz* m_pgSz ;
        bool m_has_pgMar ;
        CT_PageMar* m_pgMar ;
        bool m_has_paperSrc ;
        CT_PaperSource* m_paperSrc ;
        bool m_has_pgBorders ;
        CT_PageBorders* m_pgBorders ;
        bool m_has_lnNumType ;
        CT_LineNumber* m_lnNumType ;
        bool m_has_pgNumType ;
        CT_PageNumber* m_pgNumType ;
        bool m_has_cols ;
        CT_Columns* m_cols ;
        bool m_has_formProt ;
        CT_OnOff* m_formProt ;
        bool m_has_vAlign ;
        CT_VerticalJc* m_vAlign ;
        bool m_has_noEndnote ;
        CT_OnOff* m_noEndnote ;
        bool m_has_titlePg ;
        CT_OnOff* m_titlePg ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_bidi ;
        CT_OnOff* m_bidi ;
        bool m_has_rtlGutter ;
        CT_OnOff* m_rtlGutter ;
        bool m_has_docGrid ;
        CT_DocGrid* m_docGrid ;
        bool m_has_printerSettings ;
        CT_Rel* m_printerSettings ;
        bool m_has_sectPrChange ;
        CT_SectPrChange* m_sectPrChange ;
        static CT_SectPr* default_instance_ ;
        bool m_has_rsidRPr_attr ;
        ST_LongHexNumber* m_rsidRPr_attr ;
        bool m_has_rsidDel_attr ;
        ST_LongHexNumber* m_rsidDel_attr ;
        bool m_has_rsidR_attr ;
        ST_LongHexNumber* m_rsidR_attr ;
        bool m_has_rsidSect_attr ;
        ST_LongHexNumber* m_rsidSect_attr ;
        class ChildGroup_1{
        public:
            bool has_headerReference() const;
            CT_HdrFtrRef* mutable_headerReference();
            const CT_HdrFtrRef& headerReference() const;
            bool has_footerReference() const;
            CT_HdrFtrRef* mutable_footerReference();
            const CT_HdrFtrRef& footerReference() const;

        private:
            bool m_has_headerReference ;
            CT_HdrFtrRef* m_headerReference ;
            bool m_has_footerReference ;
            CT_HdrFtrRef* m_footerReference ;

        }


    }

    class CT_Br : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Br& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_BrType& _type_attr );
        const ST_BrType& type_attr() const;
        bool has_clear_attr() const;
        void set_clear_attr(const ST_BrClear& _clear_attr );
        const ST_BrClear& clear_attr() const;

    private:
        static CT_Br* default_instance_ ;
        bool m_has_type_attr ;
        ST_BrType* m_type_attr ;
        bool m_has_clear_attr ;
        ST_BrClear* m_clear_attr ;

    }

    class CT_PTab : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PTab& default_instance() const;
        bool has_alignment_attr() const;
        void set_alignment_attr(const ST_PTabAlignment& _alignment_attr );
        const ST_PTabAlignment& alignment_attr() const;
        bool has_relativeTo_attr() const;
        void set_relativeTo_attr(const ST_PTabRelativeTo& _relativeTo_attr );
        const ST_PTabRelativeTo& relativeTo_attr() const;
        bool has_leader_attr() const;
        void set_leader_attr(const ST_PTabLeader& _leader_attr );
        const ST_PTabLeader& leader_attr() const;

    private:
        static CT_PTab* default_instance_ ;
        bool m_has_alignment_attr ;
        ST_PTabAlignment* m_alignment_attr ;
        bool m_has_relativeTo_attr ;
        ST_PTabRelativeTo* m_relativeTo_attr ;
        bool m_has_leader_attr ;
        ST_PTabLeader* m_leader_attr ;

    }

    class CT_Sym : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Sym& default_instance() const;
        bool has_font_attr() const;
        void set_font_attr(const ns_s::ST_String& _font_attr );
        const ns_s::ST_String& font_attr() const;
        bool has_char_attr() const;
        void set_char_attr(const ST_ShortHexNumber& _char_attr );
        const ST_ShortHexNumber& char_attr() const;

    private:
        static CT_Sym* default_instance_ ;
        bool m_has_font_attr ;
        ns_s::ST_String* m_font_attr ;
        bool m_has_char_attr ;
        ST_ShortHexNumber* m_char_attr ;

    }

    class CT_ProofErr : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ProofErr& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_ProofErr& _type_attr );
        const ST_ProofErr& type_attr() const;

    private:
        static CT_ProofErr* default_instance_ ;
        bool m_has_type_attr ;
        ST_ProofErr* m_type_attr ;

    }

    class CT_Perm : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Perm& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_String& _id_attr );
        const ns_s::ST_String& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;

    private:
        static CT_Perm* default_instance_ ;
        bool m_has_id_attr ;
        ns_s::ST_String* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;

    }

    class CT_PermStart : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PermStart& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_String& _id_attr );
        const ns_s::ST_String& id_attr() const;
        bool has_displacedByCustomXml_attr() const;
        void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr );
        const ST_DisplacedByCustomXml& displacedByCustomXml_attr() const;
        bool has_edGrp_attr() const;
        void set_edGrp_attr(const ST_EdGrp& _edGrp_attr );
        const ST_EdGrp& edGrp_attr() const;
        bool has_ed_attr() const;
        void set_ed_attr(const ns_s::ST_String& _ed_attr );
        const ns_s::ST_String& ed_attr() const;
        bool has_colFirst_attr() const;
        void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr );
        const ST_DecimalNumber& colFirst_attr() const;
        bool has_colLast_attr() const;
        void set_colLast_attr(const ST_DecimalNumber& _colLast_attr );
        const ST_DecimalNumber& colLast_attr() const;

    private:
        static CT_PermStart* default_instance_ ;
        bool m_has_id_attr ;
        ns_s::ST_String* m_id_attr ;
        bool m_has_displacedByCustomXml_attr ;
        ST_DisplacedByCustomXml* m_displacedByCustomXml_attr ;
        bool m_has_edGrp_attr ;
        ST_EdGrp* m_edGrp_attr ;
        bool m_has_ed_attr ;
        ns_s::ST_String* m_ed_attr ;
        bool m_has_colFirst_attr ;
        ST_DecimalNumber* m_colFirst_attr ;
        bool m_has_colLast_attr ;
        ST_DecimalNumber* m_colLast_attr ;

    }

    class CT_Text : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Text& default_instance() const;

    private:
        static CT_Text* default_instance_ ;

    }

    class CT_R : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        CT_Br* add_br();
        CT_Text* add_t();
        CT_Rel* add_contentPart();
        CT_Text* add_delText();
        CT_Text* add_instrText();
        CT_Text* add_delInstrText();
        CT_Empty* add_noBreakHyphen();
        CT_Empty* add_softHyphen();
        CT_Empty* add_dayShort();
        CT_Empty* add_monthShort();
        CT_Empty* add_yearShort();
        CT_Empty* add_dayLong();
        CT_Empty* add_monthLong();
        CT_Empty* add_yearLong();
        CT_Empty* add_annotationRef();
        CT_Empty* add_footnoteRef();
        CT_Empty* add_endnoteRef();
        CT_Empty* add_separator();
        CT_Empty* add_continuationSeparator();
        CT_Sym* add_sym();
        CT_Empty* add_pgNum();
        CT_Empty* add_cr();
        CT_Empty* add_tab();
        CT_Object* add_object();
        CT_Picture* add_pict();
        CT_FldChar* add_fldChar();
        CT_Ruby* add_ruby();
        CT_FtnEdnRef* add_footnoteReference();
        CT_FtnEdnRef* add_endnoteReference();
        CT_Markup* add_commentReference();
        CT_Drawing* add_drawing();
        CT_PTab* add_ptab();
        CT_Empty* add_lastRenderedPageBreak();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_R& default_instance() const;
        bool has_rsidRPr_attr() const;
        void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr );
        const ST_LongHexNumber& rsidRPr_attr() const;
        bool has_rsidDel_attr() const;
        void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr );
        const ST_LongHexNumber& rsidDel_attr() const;
        bool has_rsidR_attr() const;
        void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr );
        const ST_LongHexNumber& rsidR_attr() const;

    private:
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_R* default_instance_ ;
        bool m_has_rsidRPr_attr ;
        ST_LongHexNumber* m_rsidRPr_attr ;
        bool m_has_rsidDel_attr ;
        ST_LongHexNumber* m_rsidDel_attr ;
        bool m_has_rsidR_attr ;
        ST_LongHexNumber* m_rsidR_attr ;
        class ChildGroup_1{
        public:
            bool has_br() const;
            CT_Br* mutable_br();
            const CT_Br& br() const;
            bool has_t() const;
            CT_Text* mutable_t();
            const CT_Text& t() const;
            bool has_contentPart() const;
            CT_Rel* mutable_contentPart();
            const CT_Rel& contentPart() const;
            bool has_delText() const;
            CT_Text* mutable_delText();
            const CT_Text& delText() const;
            bool has_instrText() const;
            CT_Text* mutable_instrText();
            const CT_Text& instrText() const;
            bool has_delInstrText() const;
            CT_Text* mutable_delInstrText();
            const CT_Text& delInstrText() const;
            bool has_noBreakHyphen() const;
            CT_Empty* mutable_noBreakHyphen();
            const CT_Empty& noBreakHyphen() const;
            bool has_softHyphen() const;
            CT_Empty* mutable_softHyphen();
            const CT_Empty& softHyphen() const;
            bool has_dayShort() const;
            CT_Empty* mutable_dayShort();
            const CT_Empty& dayShort() const;
            bool has_monthShort() const;
            CT_Empty* mutable_monthShort();
            const CT_Empty& monthShort() const;
            bool has_yearShort() const;
            CT_Empty* mutable_yearShort();
            const CT_Empty& yearShort() const;
            bool has_dayLong() const;
            CT_Empty* mutable_dayLong();
            const CT_Empty& dayLong() const;
            bool has_monthLong() const;
            CT_Empty* mutable_monthLong();
            const CT_Empty& monthLong() const;
            bool has_yearLong() const;
            CT_Empty* mutable_yearLong();
            const CT_Empty& yearLong() const;
            bool has_annotationRef() const;
            CT_Empty* mutable_annotationRef();
            const CT_Empty& annotationRef() const;
            bool has_footnoteRef() const;
            CT_Empty* mutable_footnoteRef();
            const CT_Empty& footnoteRef() const;
            bool has_endnoteRef() const;
            CT_Empty* mutable_endnoteRef();
            const CT_Empty& endnoteRef() const;
            bool has_separator() const;
            CT_Empty* mutable_separator();
            const CT_Empty& separator() const;
            bool has_continuationSeparator() const;
            CT_Empty* mutable_continuationSeparator();
            const CT_Empty& continuationSeparator() const;
            bool has_sym() const;
            CT_Sym* mutable_sym();
            const CT_Sym& sym() const;
            bool has_pgNum() const;
            CT_Empty* mutable_pgNum();
            const CT_Empty& pgNum() const;
            bool has_cr() const;
            CT_Empty* mutable_cr();
            const CT_Empty& cr() const;
            bool has_tab() const;
            CT_Empty* mutable_tab();
            const CT_Empty& tab() const;
            bool has_object() const;
            CT_Object* mutable_object();
            const CT_Object& object() const;
            bool has_pict() const;
            CT_Picture* mutable_pict();
            const CT_Picture& pict() const;
            bool has_fldChar() const;
            CT_FldChar* mutable_fldChar();
            const CT_FldChar& fldChar() const;
            bool has_ruby() const;
            CT_Ruby* mutable_ruby();
            const CT_Ruby& ruby() const;
            bool has_footnoteReference() const;
            CT_FtnEdnRef* mutable_footnoteReference();
            const CT_FtnEdnRef& footnoteReference() const;
            bool has_endnoteReference() const;
            CT_FtnEdnRef* mutable_endnoteReference();
            const CT_FtnEdnRef& endnoteReference() const;
            bool has_commentReference() const;
            CT_Markup* mutable_commentReference();
            const CT_Markup& commentReference() const;
            bool has_drawing() const;
            CT_Drawing* mutable_drawing();
            const CT_Drawing& drawing() const;
            bool has_ptab() const;
            CT_PTab* mutable_ptab();
            const CT_PTab& ptab() const;
            bool has_lastRenderedPageBreak() const;
            CT_Empty* mutable_lastRenderedPageBreak();
            const CT_Empty& lastRenderedPageBreak() const;

        private:
            bool m_has_br ;
            CT_Br* m_br ;
            bool m_has_t ;
            CT_Text* m_t ;
            bool m_has_contentPart ;
            CT_Rel* m_contentPart ;
            bool m_has_delText ;
            CT_Text* m_delText ;
            bool m_has_instrText ;
            CT_Text* m_instrText ;
            bool m_has_delInstrText ;
            CT_Text* m_delInstrText ;
            bool m_has_noBreakHyphen ;
            CT_Empty* m_noBreakHyphen ;
            bool m_has_softHyphen ;
            CT_Empty* m_softHyphen ;
            bool m_has_dayShort ;
            CT_Empty* m_dayShort ;
            bool m_has_monthShort ;
            CT_Empty* m_monthShort ;
            bool m_has_yearShort ;
            CT_Empty* m_yearShort ;
            bool m_has_dayLong ;
            CT_Empty* m_dayLong ;
            bool m_has_monthLong ;
            CT_Empty* m_monthLong ;
            bool m_has_yearLong ;
            CT_Empty* m_yearLong ;
            bool m_has_annotationRef ;
            CT_Empty* m_annotationRef ;
            bool m_has_footnoteRef ;
            CT_Empty* m_footnoteRef ;
            bool m_has_endnoteRef ;
            CT_Empty* m_endnoteRef ;
            bool m_has_separator ;
            CT_Empty* m_separator ;
            bool m_has_continuationSeparator ;
            CT_Empty* m_continuationSeparator ;
            bool m_has_sym ;
            CT_Sym* m_sym ;
            bool m_has_pgNum ;
            CT_Empty* m_pgNum ;
            bool m_has_cr ;
            CT_Empty* m_cr ;
            bool m_has_tab ;
            CT_Empty* m_tab ;
            bool m_has_object ;
            CT_Object* m_object ;
            bool m_has_pict ;
            CT_Picture* m_pict ;
            bool m_has_fldChar ;
            CT_FldChar* m_fldChar ;
            bool m_has_ruby ;
            CT_Ruby* m_ruby ;
            bool m_has_footnoteReference ;
            CT_FtnEdnRef* m_footnoteReference ;
            bool m_has_endnoteReference ;
            CT_FtnEdnRef* m_endnoteReference ;
            bool m_has_commentReference ;
            CT_Markup* m_commentReference ;
            bool m_has_drawing ;
            CT_Drawing* m_drawing ;
            bool m_has_ptab ;
            CT_PTab* m_ptab ;
            bool m_has_lastRenderedPageBreak ;
            CT_Empty* m_lastRenderedPageBreak ;

        }


    }

    class CT_Fonts : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Fonts& default_instance() const;
        bool has_hint_attr() const;
        void set_hint_attr(const ST_Hint& _hint_attr );
        const ST_Hint& hint_attr() const;
        bool has_ascii_attr() const;
        void set_ascii_attr(const ns_s::ST_String& _ascii_attr );
        const ns_s::ST_String& ascii_attr() const;
        bool has_hAnsi_attr() const;
        void set_hAnsi_attr(const ns_s::ST_String& _hAnsi_attr );
        const ns_s::ST_String& hAnsi_attr() const;
        bool has_eastAsia_attr() const;
        void set_eastAsia_attr(const ns_s::ST_String& _eastAsia_attr );
        const ns_s::ST_String& eastAsia_attr() const;
        bool has_cs_attr() const;
        void set_cs_attr(const ns_s::ST_String& _cs_attr );
        const ns_s::ST_String& cs_attr() const;
        bool has_asciiTheme_attr() const;
        void set_asciiTheme_attr(const ST_Theme& _asciiTheme_attr );
        const ST_Theme& asciiTheme_attr() const;
        bool has_hAnsiTheme_attr() const;
        void set_hAnsiTheme_attr(const ST_Theme& _hAnsiTheme_attr );
        const ST_Theme& hAnsiTheme_attr() const;
        bool has_eastAsiaTheme_attr() const;
        void set_eastAsiaTheme_attr(const ST_Theme& _eastAsiaTheme_attr );
        const ST_Theme& eastAsiaTheme_attr() const;
        bool has_cstheme_attr() const;
        void set_cstheme_attr(const ST_Theme& _cstheme_attr );
        const ST_Theme& cstheme_attr() const;

    private:
        static CT_Fonts* default_instance_ ;
        bool m_has_hint_attr ;
        ST_Hint* m_hint_attr ;
        bool m_has_ascii_attr ;
        ns_s::ST_String* m_ascii_attr ;
        bool m_has_hAnsi_attr ;
        ns_s::ST_String* m_hAnsi_attr ;
        bool m_has_eastAsia_attr ;
        ns_s::ST_String* m_eastAsia_attr ;
        bool m_has_cs_attr ;
        ns_s::ST_String* m_cs_attr ;
        bool m_has_asciiTheme_attr ;
        ST_Theme* m_asciiTheme_attr ;
        bool m_has_hAnsiTheme_attr ;
        ST_Theme* m_hAnsiTheme_attr ;
        bool m_has_eastAsiaTheme_attr ;
        ST_Theme* m_eastAsiaTheme_attr ;
        bool m_has_cstheme_attr ;
        ST_Theme* m_cstheme_attr ;

    }

    class CT_RPr : public XSD::ComplexType{
    public:
        CT_String* add_rStyle();
        CT_Fonts* add_rFonts();
        CT_OnOff* add_b();
        CT_OnOff* add_bCs();
        CT_OnOff* add_i();
        CT_OnOff* add_iCs();
        CT_OnOff* add_caps();
        CT_OnOff* add_smallCaps();
        CT_OnOff* add_strike();
        CT_OnOff* add_dstrike();
        CT_OnOff* add_outline();
        CT_OnOff* add_shadow();
        CT_OnOff* add_emboss();
        CT_OnOff* add_imprint();
        CT_OnOff* add_noProof();
        CT_OnOff* add_snapToGrid();
        CT_OnOff* add_vanish();
        CT_OnOff* add_webHidden();
        CT_Color* add_color();
        CT_SignedTwipsMeasure* add_spacing();
        CT_TextScale* add_w();
        CT_HpsMeasure* add_kern();
        CT_SignedHpsMeasure* add_position();
        CT_HpsMeasure* add_sz();
        CT_HpsMeasure* add_szCs();
        CT_Highlight* add_highlight();
        CT_Underline* add_u();
        CT_TextEffect* add_effect();
        CT_Border* add_bdr();
        CT_Shd* add_shd();
        CT_FitText* add_fitText();
        CT_VerticalAlignRun* add_vertAlign();
        CT_OnOff* add_rtl();
        CT_OnOff* add_cs();
        CT_Em* add_em();
        CT_Language* add_lang();
        CT_EastAsianLayout* add_eastAsianLayout();
        CT_OnOff* add_specVanish();
        CT_OnOff* add_oMath();
        bool has_rPrChange() const;
        CT_RPrChange* mutable_rPrChange();
        const CT_RPrChange& rPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RPr& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_rPrChange ;
        CT_RPrChange* m_rPrChange ;
        static CT_RPr* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_rStyle() const;
            CT_String* mutable_rStyle();
            const CT_String& rStyle() const;
            bool has_rFonts() const;
            CT_Fonts* mutable_rFonts();
            const CT_Fonts& rFonts() const;
            bool has_b() const;
            CT_OnOff* mutable_b();
            const CT_OnOff& b() const;
            bool has_bCs() const;
            CT_OnOff* mutable_bCs();
            const CT_OnOff& bCs() const;
            bool has_i() const;
            CT_OnOff* mutable_i();
            const CT_OnOff& i() const;
            bool has_iCs() const;
            CT_OnOff* mutable_iCs();
            const CT_OnOff& iCs() const;
            bool has_caps() const;
            CT_OnOff* mutable_caps();
            const CT_OnOff& caps() const;
            bool has_smallCaps() const;
            CT_OnOff* mutable_smallCaps();
            const CT_OnOff& smallCaps() const;
            bool has_strike() const;
            CT_OnOff* mutable_strike();
            const CT_OnOff& strike() const;
            bool has_dstrike() const;
            CT_OnOff* mutable_dstrike();
            const CT_OnOff& dstrike() const;
            bool has_outline() const;
            CT_OnOff* mutable_outline();
            const CT_OnOff& outline() const;
            bool has_shadow() const;
            CT_OnOff* mutable_shadow();
            const CT_OnOff& shadow() const;
            bool has_emboss() const;
            CT_OnOff* mutable_emboss();
            const CT_OnOff& emboss() const;
            bool has_imprint() const;
            CT_OnOff* mutable_imprint();
            const CT_OnOff& imprint() const;
            bool has_noProof() const;
            CT_OnOff* mutable_noProof();
            const CT_OnOff& noProof() const;
            bool has_snapToGrid() const;
            CT_OnOff* mutable_snapToGrid();
            const CT_OnOff& snapToGrid() const;
            bool has_vanish() const;
            CT_OnOff* mutable_vanish();
            const CT_OnOff& vanish() const;
            bool has_webHidden() const;
            CT_OnOff* mutable_webHidden();
            const CT_OnOff& webHidden() const;
            bool has_color() const;
            CT_Color* mutable_color();
            const CT_Color& color() const;
            bool has_spacing() const;
            CT_SignedTwipsMeasure* mutable_spacing();
            const CT_SignedTwipsMeasure& spacing() const;
            bool has_w() const;
            CT_TextScale* mutable_w();
            const CT_TextScale& w() const;
            bool has_kern() const;
            CT_HpsMeasure* mutable_kern();
            const CT_HpsMeasure& kern() const;
            bool has_position() const;
            CT_SignedHpsMeasure* mutable_position();
            const CT_SignedHpsMeasure& position() const;
            bool has_sz() const;
            CT_HpsMeasure* mutable_sz();
            const CT_HpsMeasure& sz() const;
            bool has_szCs() const;
            CT_HpsMeasure* mutable_szCs();
            const CT_HpsMeasure& szCs() const;
            bool has_highlight() const;
            CT_Highlight* mutable_highlight();
            const CT_Highlight& highlight() const;
            bool has_u() const;
            CT_Underline* mutable_u();
            const CT_Underline& u() const;
            bool has_effect() const;
            CT_TextEffect* mutable_effect();
            const CT_TextEffect& effect() const;
            bool has_bdr() const;
            CT_Border* mutable_bdr();
            const CT_Border& bdr() const;
            bool has_shd() const;
            CT_Shd* mutable_shd();
            const CT_Shd& shd() const;
            bool has_fitText() const;
            CT_FitText* mutable_fitText();
            const CT_FitText& fitText() const;
            bool has_vertAlign() const;
            CT_VerticalAlignRun* mutable_vertAlign();
            const CT_VerticalAlignRun& vertAlign() const;
            bool has_rtl() const;
            CT_OnOff* mutable_rtl();
            const CT_OnOff& rtl() const;
            bool has_cs() const;
            CT_OnOff* mutable_cs();
            const CT_OnOff& cs() const;
            bool has_em() const;
            CT_Em* mutable_em();
            const CT_Em& em() const;
            bool has_lang() const;
            CT_Language* mutable_lang();
            const CT_Language& lang() const;
            bool has_eastAsianLayout() const;
            CT_EastAsianLayout* mutable_eastAsianLayout();
            const CT_EastAsianLayout& eastAsianLayout() const;
            bool has_specVanish() const;
            CT_OnOff* mutable_specVanish();
            const CT_OnOff& specVanish() const;
            bool has_oMath() const;
            CT_OnOff* mutable_oMath();
            const CT_OnOff& oMath() const;

        private:
            bool m_has_rStyle ;
            CT_String* m_rStyle ;
            bool m_has_rFonts ;
            CT_Fonts* m_rFonts ;
            bool m_has_b ;
            CT_OnOff* m_b ;
            bool m_has_bCs ;
            CT_OnOff* m_bCs ;
            bool m_has_i ;
            CT_OnOff* m_i ;
            bool m_has_iCs ;
            CT_OnOff* m_iCs ;
            bool m_has_caps ;
            CT_OnOff* m_caps ;
            bool m_has_smallCaps ;
            CT_OnOff* m_smallCaps ;
            bool m_has_strike ;
            CT_OnOff* m_strike ;
            bool m_has_dstrike ;
            CT_OnOff* m_dstrike ;
            bool m_has_outline ;
            CT_OnOff* m_outline ;
            bool m_has_shadow ;
            CT_OnOff* m_shadow ;
            bool m_has_emboss ;
            CT_OnOff* m_emboss ;
            bool m_has_imprint ;
            CT_OnOff* m_imprint ;
            bool m_has_noProof ;
            CT_OnOff* m_noProof ;
            bool m_has_snapToGrid ;
            CT_OnOff* m_snapToGrid ;
            bool m_has_vanish ;
            CT_OnOff* m_vanish ;
            bool m_has_webHidden ;
            CT_OnOff* m_webHidden ;
            bool m_has_color ;
            CT_Color* m_color ;
            bool m_has_spacing ;
            CT_SignedTwipsMeasure* m_spacing ;
            bool m_has_w ;
            CT_TextScale* m_w ;
            bool m_has_kern ;
            CT_HpsMeasure* m_kern ;
            bool m_has_position ;
            CT_SignedHpsMeasure* m_position ;
            bool m_has_sz ;
            CT_HpsMeasure* m_sz ;
            bool m_has_szCs ;
            CT_HpsMeasure* m_szCs ;
            bool m_has_highlight ;
            CT_Highlight* m_highlight ;
            bool m_has_u ;
            CT_Underline* m_u ;
            bool m_has_effect ;
            CT_TextEffect* m_effect ;
            bool m_has_bdr ;
            CT_Border* m_bdr ;
            bool m_has_shd ;
            CT_Shd* m_shd ;
            bool m_has_fitText ;
            CT_FitText* m_fitText ;
            bool m_has_vertAlign ;
            CT_VerticalAlignRun* m_vertAlign ;
            bool m_has_rtl ;
            CT_OnOff* m_rtl ;
            bool m_has_cs ;
            CT_OnOff* m_cs ;
            bool m_has_em ;
            CT_Em* m_em ;
            bool m_has_lang ;
            CT_Language* m_lang ;
            bool m_has_eastAsianLayout ;
            CT_EastAsianLayout* m_eastAsianLayout ;
            bool m_has_specVanish ;
            CT_OnOff* m_specVanish ;
            bool m_has_oMath ;
            CT_OnOff* m_oMath ;

        }


    }

    class CT_MathCtrlIns : public XSD::ComplexType{
    public:
        bool has_del() const;
        CT_RPrChange* mutable_del();
        const CT_RPrChange& del() const;
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MathCtrlIns& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_del ;
        CT_RPrChange* m_del ;
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        static CT_MathCtrlIns* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_MathCtrlDel : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MathCtrlDel& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;
        bool has_author_attr() const;
        void set_author_attr(const ns_s::ST_String& _author_attr );
        const ns_s::ST_String& author_attr() const;
        bool has_date_attr() const;
        void set_date_attr(const ST_DateTime& _date_attr );
        const ST_DateTime& date_attr() const;

    private:
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        static CT_MathCtrlDel* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        bool m_has_author_attr ;
        ns_s::ST_String* m_author_attr ;
        bool m_has_date_attr ;
        ST_DateTime* m_date_attr ;

    }

    class CT_RPrOriginal : public XSD::ComplexType{
    public:
        CT_String* add_rStyle();
        CT_Fonts* add_rFonts();
        CT_OnOff* add_b();
        CT_OnOff* add_bCs();
        CT_OnOff* add_i();
        CT_OnOff* add_iCs();
        CT_OnOff* add_caps();
        CT_OnOff* add_smallCaps();
        CT_OnOff* add_strike();
        CT_OnOff* add_dstrike();
        CT_OnOff* add_outline();
        CT_OnOff* add_shadow();
        CT_OnOff* add_emboss();
        CT_OnOff* add_imprint();
        CT_OnOff* add_noProof();
        CT_OnOff* add_snapToGrid();
        CT_OnOff* add_vanish();
        CT_OnOff* add_webHidden();
        CT_Color* add_color();
        CT_SignedTwipsMeasure* add_spacing();
        CT_TextScale* add_w();
        CT_HpsMeasure* add_kern();
        CT_SignedHpsMeasure* add_position();
        CT_HpsMeasure* add_sz();
        CT_HpsMeasure* add_szCs();
        CT_Highlight* add_highlight();
        CT_Underline* add_u();
        CT_TextEffect* add_effect();
        CT_Border* add_bdr();
        CT_Shd* add_shd();
        CT_FitText* add_fitText();
        CT_VerticalAlignRun* add_vertAlign();
        CT_OnOff* add_rtl();
        CT_OnOff* add_cs();
        CT_Em* add_em();
        CT_Language* add_lang();
        CT_EastAsianLayout* add_eastAsianLayout();
        CT_OnOff* add_specVanish();
        CT_OnOff* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RPrOriginal& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_RPrOriginal* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_rStyle() const;
            CT_String* mutable_rStyle();
            const CT_String& rStyle() const;
            bool has_rFonts() const;
            CT_Fonts* mutable_rFonts();
            const CT_Fonts& rFonts() const;
            bool has_b() const;
            CT_OnOff* mutable_b();
            const CT_OnOff& b() const;
            bool has_bCs() const;
            CT_OnOff* mutable_bCs();
            const CT_OnOff& bCs() const;
            bool has_i() const;
            CT_OnOff* mutable_i();
            const CT_OnOff& i() const;
            bool has_iCs() const;
            CT_OnOff* mutable_iCs();
            const CT_OnOff& iCs() const;
            bool has_caps() const;
            CT_OnOff* mutable_caps();
            const CT_OnOff& caps() const;
            bool has_smallCaps() const;
            CT_OnOff* mutable_smallCaps();
            const CT_OnOff& smallCaps() const;
            bool has_strike() const;
            CT_OnOff* mutable_strike();
            const CT_OnOff& strike() const;
            bool has_dstrike() const;
            CT_OnOff* mutable_dstrike();
            const CT_OnOff& dstrike() const;
            bool has_outline() const;
            CT_OnOff* mutable_outline();
            const CT_OnOff& outline() const;
            bool has_shadow() const;
            CT_OnOff* mutable_shadow();
            const CT_OnOff& shadow() const;
            bool has_emboss() const;
            CT_OnOff* mutable_emboss();
            const CT_OnOff& emboss() const;
            bool has_imprint() const;
            CT_OnOff* mutable_imprint();
            const CT_OnOff& imprint() const;
            bool has_noProof() const;
            CT_OnOff* mutable_noProof();
            const CT_OnOff& noProof() const;
            bool has_snapToGrid() const;
            CT_OnOff* mutable_snapToGrid();
            const CT_OnOff& snapToGrid() const;
            bool has_vanish() const;
            CT_OnOff* mutable_vanish();
            const CT_OnOff& vanish() const;
            bool has_webHidden() const;
            CT_OnOff* mutable_webHidden();
            const CT_OnOff& webHidden() const;
            bool has_color() const;
            CT_Color* mutable_color();
            const CT_Color& color() const;
            bool has_spacing() const;
            CT_SignedTwipsMeasure* mutable_spacing();
            const CT_SignedTwipsMeasure& spacing() const;
            bool has_w() const;
            CT_TextScale* mutable_w();
            const CT_TextScale& w() const;
            bool has_kern() const;
            CT_HpsMeasure* mutable_kern();
            const CT_HpsMeasure& kern() const;
            bool has_position() const;
            CT_SignedHpsMeasure* mutable_position();
            const CT_SignedHpsMeasure& position() const;
            bool has_sz() const;
            CT_HpsMeasure* mutable_sz();
            const CT_HpsMeasure& sz() const;
            bool has_szCs() const;
            CT_HpsMeasure* mutable_szCs();
            const CT_HpsMeasure& szCs() const;
            bool has_highlight() const;
            CT_Highlight* mutable_highlight();
            const CT_Highlight& highlight() const;
            bool has_u() const;
            CT_Underline* mutable_u();
            const CT_Underline& u() const;
            bool has_effect() const;
            CT_TextEffect* mutable_effect();
            const CT_TextEffect& effect() const;
            bool has_bdr() const;
            CT_Border* mutable_bdr();
            const CT_Border& bdr() const;
            bool has_shd() const;
            CT_Shd* mutable_shd();
            const CT_Shd& shd() const;
            bool has_fitText() const;
            CT_FitText* mutable_fitText();
            const CT_FitText& fitText() const;
            bool has_vertAlign() const;
            CT_VerticalAlignRun* mutable_vertAlign();
            const CT_VerticalAlignRun& vertAlign() const;
            bool has_rtl() const;
            CT_OnOff* mutable_rtl();
            const CT_OnOff& rtl() const;
            bool has_cs() const;
            CT_OnOff* mutable_cs();
            const CT_OnOff& cs() const;
            bool has_em() const;
            CT_Em* mutable_em();
            const CT_Em& em() const;
            bool has_lang() const;
            CT_Language* mutable_lang();
            const CT_Language& lang() const;
            bool has_eastAsianLayout() const;
            CT_EastAsianLayout* mutable_eastAsianLayout();
            const CT_EastAsianLayout& eastAsianLayout() const;
            bool has_specVanish() const;
            CT_OnOff* mutable_specVanish();
            const CT_OnOff& specVanish() const;
            bool has_oMath() const;
            CT_OnOff* mutable_oMath();
            const CT_OnOff& oMath() const;

        private:
            bool m_has_rStyle ;
            CT_String* m_rStyle ;
            bool m_has_rFonts ;
            CT_Fonts* m_rFonts ;
            bool m_has_b ;
            CT_OnOff* m_b ;
            bool m_has_bCs ;
            CT_OnOff* m_bCs ;
            bool m_has_i ;
            CT_OnOff* m_i ;
            bool m_has_iCs ;
            CT_OnOff* m_iCs ;
            bool m_has_caps ;
            CT_OnOff* m_caps ;
            bool m_has_smallCaps ;
            CT_OnOff* m_smallCaps ;
            bool m_has_strike ;
            CT_OnOff* m_strike ;
            bool m_has_dstrike ;
            CT_OnOff* m_dstrike ;
            bool m_has_outline ;
            CT_OnOff* m_outline ;
            bool m_has_shadow ;
            CT_OnOff* m_shadow ;
            bool m_has_emboss ;
            CT_OnOff* m_emboss ;
            bool m_has_imprint ;
            CT_OnOff* m_imprint ;
            bool m_has_noProof ;
            CT_OnOff* m_noProof ;
            bool m_has_snapToGrid ;
            CT_OnOff* m_snapToGrid ;
            bool m_has_vanish ;
            CT_OnOff* m_vanish ;
            bool m_has_webHidden ;
            CT_OnOff* m_webHidden ;
            bool m_has_color ;
            CT_Color* m_color ;
            bool m_has_spacing ;
            CT_SignedTwipsMeasure* m_spacing ;
            bool m_has_w ;
            CT_TextScale* m_w ;
            bool m_has_kern ;
            CT_HpsMeasure* m_kern ;
            bool m_has_position ;
            CT_SignedHpsMeasure* m_position ;
            bool m_has_sz ;
            CT_HpsMeasure* m_sz ;
            bool m_has_szCs ;
            CT_HpsMeasure* m_szCs ;
            bool m_has_highlight ;
            CT_Highlight* m_highlight ;
            bool m_has_u ;
            CT_Underline* m_u ;
            bool m_has_effect ;
            CT_TextEffect* m_effect ;
            bool m_has_bdr ;
            CT_Border* m_bdr ;
            bool m_has_shd ;
            CT_Shd* m_shd ;
            bool m_has_fitText ;
            CT_FitText* m_fitText ;
            bool m_has_vertAlign ;
            CT_VerticalAlignRun* m_vertAlign ;
            bool m_has_rtl ;
            CT_OnOff* m_rtl ;
            bool m_has_cs ;
            CT_OnOff* m_cs ;
            bool m_has_em ;
            CT_Em* m_em ;
            bool m_has_lang ;
            CT_Language* m_lang ;
            bool m_has_eastAsianLayout ;
            CT_EastAsianLayout* m_eastAsianLayout ;
            bool m_has_specVanish ;
            CT_OnOff* m_specVanish ;
            bool m_has_oMath ;
            CT_OnOff* m_oMath ;

        }


    }

    class CT_ParaRPrOriginal : public XSD::ComplexType{
    public:
        bool has_ins() const;
        CT_TrackChange* mutable_ins();
        const CT_TrackChange& ins() const;
        bool has_del() const;
        CT_TrackChange* mutable_del();
        const CT_TrackChange& del() const;
        bool has_moveFrom() const;
        CT_TrackChange* mutable_moveFrom();
        const CT_TrackChange& moveFrom() const;
        bool has_moveTo() const;
        CT_TrackChange* mutable_moveTo();
        const CT_TrackChange& moveTo() const;
        CT_String* add_rStyle();
        CT_Fonts* add_rFonts();
        CT_OnOff* add_b();
        CT_OnOff* add_bCs();
        CT_OnOff* add_i();
        CT_OnOff* add_iCs();
        CT_OnOff* add_caps();
        CT_OnOff* add_smallCaps();
        CT_OnOff* add_strike();
        CT_OnOff* add_dstrike();
        CT_OnOff* add_outline();
        CT_OnOff* add_shadow();
        CT_OnOff* add_emboss();
        CT_OnOff* add_imprint();
        CT_OnOff* add_noProof();
        CT_OnOff* add_snapToGrid();
        CT_OnOff* add_vanish();
        CT_OnOff* add_webHidden();
        CT_Color* add_color();
        CT_SignedTwipsMeasure* add_spacing();
        CT_TextScale* add_w();
        CT_HpsMeasure* add_kern();
        CT_SignedHpsMeasure* add_position();
        CT_HpsMeasure* add_sz();
        CT_HpsMeasure* add_szCs();
        CT_Highlight* add_highlight();
        CT_Underline* add_u();
        CT_TextEffect* add_effect();
        CT_Border* add_bdr();
        CT_Shd* add_shd();
        CT_FitText* add_fitText();
        CT_VerticalAlignRun* add_vertAlign();
        CT_OnOff* add_rtl();
        CT_OnOff* add_cs();
        CT_Em* add_em();
        CT_Language* add_lang();
        CT_EastAsianLayout* add_eastAsianLayout();
        CT_OnOff* add_specVanish();
        CT_OnOff* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ParaRPrOriginal& default_instance() const;

    private:
        bool m_has_ins ;
        CT_TrackChange* m_ins ;
        bool m_has_del ;
        CT_TrackChange* m_del ;
        bool m_has_moveFrom ;
        CT_TrackChange* m_moveFrom ;
        bool m_has_moveTo ;
        CT_TrackChange* m_moveTo ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ParaRPrOriginal* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_rStyle() const;
            CT_String* mutable_rStyle();
            const CT_String& rStyle() const;
            bool has_rFonts() const;
            CT_Fonts* mutable_rFonts();
            const CT_Fonts& rFonts() const;
            bool has_b() const;
            CT_OnOff* mutable_b();
            const CT_OnOff& b() const;
            bool has_bCs() const;
            CT_OnOff* mutable_bCs();
            const CT_OnOff& bCs() const;
            bool has_i() const;
            CT_OnOff* mutable_i();
            const CT_OnOff& i() const;
            bool has_iCs() const;
            CT_OnOff* mutable_iCs();
            const CT_OnOff& iCs() const;
            bool has_caps() const;
            CT_OnOff* mutable_caps();
            const CT_OnOff& caps() const;
            bool has_smallCaps() const;
            CT_OnOff* mutable_smallCaps();
            const CT_OnOff& smallCaps() const;
            bool has_strike() const;
            CT_OnOff* mutable_strike();
            const CT_OnOff& strike() const;
            bool has_dstrike() const;
            CT_OnOff* mutable_dstrike();
            const CT_OnOff& dstrike() const;
            bool has_outline() const;
            CT_OnOff* mutable_outline();
            const CT_OnOff& outline() const;
            bool has_shadow() const;
            CT_OnOff* mutable_shadow();
            const CT_OnOff& shadow() const;
            bool has_emboss() const;
            CT_OnOff* mutable_emboss();
            const CT_OnOff& emboss() const;
            bool has_imprint() const;
            CT_OnOff* mutable_imprint();
            const CT_OnOff& imprint() const;
            bool has_noProof() const;
            CT_OnOff* mutable_noProof();
            const CT_OnOff& noProof() const;
            bool has_snapToGrid() const;
            CT_OnOff* mutable_snapToGrid();
            const CT_OnOff& snapToGrid() const;
            bool has_vanish() const;
            CT_OnOff* mutable_vanish();
            const CT_OnOff& vanish() const;
            bool has_webHidden() const;
            CT_OnOff* mutable_webHidden();
            const CT_OnOff& webHidden() const;
            bool has_color() const;
            CT_Color* mutable_color();
            const CT_Color& color() const;
            bool has_spacing() const;
            CT_SignedTwipsMeasure* mutable_spacing();
            const CT_SignedTwipsMeasure& spacing() const;
            bool has_w() const;
            CT_TextScale* mutable_w();
            const CT_TextScale& w() const;
            bool has_kern() const;
            CT_HpsMeasure* mutable_kern();
            const CT_HpsMeasure& kern() const;
            bool has_position() const;
            CT_SignedHpsMeasure* mutable_position();
            const CT_SignedHpsMeasure& position() const;
            bool has_sz() const;
            CT_HpsMeasure* mutable_sz();
            const CT_HpsMeasure& sz() const;
            bool has_szCs() const;
            CT_HpsMeasure* mutable_szCs();
            const CT_HpsMeasure& szCs() const;
            bool has_highlight() const;
            CT_Highlight* mutable_highlight();
            const CT_Highlight& highlight() const;
            bool has_u() const;
            CT_Underline* mutable_u();
            const CT_Underline& u() const;
            bool has_effect() const;
            CT_TextEffect* mutable_effect();
            const CT_TextEffect& effect() const;
            bool has_bdr() const;
            CT_Border* mutable_bdr();
            const CT_Border& bdr() const;
            bool has_shd() const;
            CT_Shd* mutable_shd();
            const CT_Shd& shd() const;
            bool has_fitText() const;
            CT_FitText* mutable_fitText();
            const CT_FitText& fitText() const;
            bool has_vertAlign() const;
            CT_VerticalAlignRun* mutable_vertAlign();
            const CT_VerticalAlignRun& vertAlign() const;
            bool has_rtl() const;
            CT_OnOff* mutable_rtl();
            const CT_OnOff& rtl() const;
            bool has_cs() const;
            CT_OnOff* mutable_cs();
            const CT_OnOff& cs() const;
            bool has_em() const;
            CT_Em* mutable_em();
            const CT_Em& em() const;
            bool has_lang() const;
            CT_Language* mutable_lang();
            const CT_Language& lang() const;
            bool has_eastAsianLayout() const;
            CT_EastAsianLayout* mutable_eastAsianLayout();
            const CT_EastAsianLayout& eastAsianLayout() const;
            bool has_specVanish() const;
            CT_OnOff* mutable_specVanish();
            const CT_OnOff& specVanish() const;
            bool has_oMath() const;
            CT_OnOff* mutable_oMath();
            const CT_OnOff& oMath() const;

        private:
            bool m_has_rStyle ;
            CT_String* m_rStyle ;
            bool m_has_rFonts ;
            CT_Fonts* m_rFonts ;
            bool m_has_b ;
            CT_OnOff* m_b ;
            bool m_has_bCs ;
            CT_OnOff* m_bCs ;
            bool m_has_i ;
            CT_OnOff* m_i ;
            bool m_has_iCs ;
            CT_OnOff* m_iCs ;
            bool m_has_caps ;
            CT_OnOff* m_caps ;
            bool m_has_smallCaps ;
            CT_OnOff* m_smallCaps ;
            bool m_has_strike ;
            CT_OnOff* m_strike ;
            bool m_has_dstrike ;
            CT_OnOff* m_dstrike ;
            bool m_has_outline ;
            CT_OnOff* m_outline ;
            bool m_has_shadow ;
            CT_OnOff* m_shadow ;
            bool m_has_emboss ;
            CT_OnOff* m_emboss ;
            bool m_has_imprint ;
            CT_OnOff* m_imprint ;
            bool m_has_noProof ;
            CT_OnOff* m_noProof ;
            bool m_has_snapToGrid ;
            CT_OnOff* m_snapToGrid ;
            bool m_has_vanish ;
            CT_OnOff* m_vanish ;
            bool m_has_webHidden ;
            CT_OnOff* m_webHidden ;
            bool m_has_color ;
            CT_Color* m_color ;
            bool m_has_spacing ;
            CT_SignedTwipsMeasure* m_spacing ;
            bool m_has_w ;
            CT_TextScale* m_w ;
            bool m_has_kern ;
            CT_HpsMeasure* m_kern ;
            bool m_has_position ;
            CT_SignedHpsMeasure* m_position ;
            bool m_has_sz ;
            CT_HpsMeasure* m_sz ;
            bool m_has_szCs ;
            CT_HpsMeasure* m_szCs ;
            bool m_has_highlight ;
            CT_Highlight* m_highlight ;
            bool m_has_u ;
            CT_Underline* m_u ;
            bool m_has_effect ;
            CT_TextEffect* m_effect ;
            bool m_has_bdr ;
            CT_Border* m_bdr ;
            bool m_has_shd ;
            CT_Shd* m_shd ;
            bool m_has_fitText ;
            CT_FitText* m_fitText ;
            bool m_has_vertAlign ;
            CT_VerticalAlignRun* m_vertAlign ;
            bool m_has_rtl ;
            CT_OnOff* m_rtl ;
            bool m_has_cs ;
            CT_OnOff* m_cs ;
            bool m_has_em ;
            CT_Em* m_em ;
            bool m_has_lang ;
            CT_Language* m_lang ;
            bool m_has_eastAsianLayout ;
            CT_EastAsianLayout* m_eastAsianLayout ;
            bool m_has_specVanish ;
            CT_OnOff* m_specVanish ;
            bool m_has_oMath ;
            CT_OnOff* m_oMath ;

        }


    }

    class CT_ParaRPr : public XSD::ComplexType{
    public:
        bool has_ins() const;
        CT_TrackChange* mutable_ins();
        const CT_TrackChange& ins() const;
        bool has_del() const;
        CT_TrackChange* mutable_del();
        const CT_TrackChange& del() const;
        bool has_moveFrom() const;
        CT_TrackChange* mutable_moveFrom();
        const CT_TrackChange& moveFrom() const;
        bool has_moveTo() const;
        CT_TrackChange* mutable_moveTo();
        const CT_TrackChange& moveTo() const;
        CT_String* add_rStyle();
        CT_Fonts* add_rFonts();
        CT_OnOff* add_b();
        CT_OnOff* add_bCs();
        CT_OnOff* add_i();
        CT_OnOff* add_iCs();
        CT_OnOff* add_caps();
        CT_OnOff* add_smallCaps();
        CT_OnOff* add_strike();
        CT_OnOff* add_dstrike();
        CT_OnOff* add_outline();
        CT_OnOff* add_shadow();
        CT_OnOff* add_emboss();
        CT_OnOff* add_imprint();
        CT_OnOff* add_noProof();
        CT_OnOff* add_snapToGrid();
        CT_OnOff* add_vanish();
        CT_OnOff* add_webHidden();
        CT_Color* add_color();
        CT_SignedTwipsMeasure* add_spacing();
        CT_TextScale* add_w();
        CT_HpsMeasure* add_kern();
        CT_SignedHpsMeasure* add_position();
        CT_HpsMeasure* add_sz();
        CT_HpsMeasure* add_szCs();
        CT_Highlight* add_highlight();
        CT_Underline* add_u();
        CT_TextEffect* add_effect();
        CT_Border* add_bdr();
        CT_Shd* add_shd();
        CT_FitText* add_fitText();
        CT_VerticalAlignRun* add_vertAlign();
        CT_OnOff* add_rtl();
        CT_OnOff* add_cs();
        CT_Em* add_em();
        CT_Language* add_lang();
        CT_EastAsianLayout* add_eastAsianLayout();
        CT_OnOff* add_specVanish();
        CT_OnOff* add_oMath();
        bool has_rPrChange() const;
        CT_ParaRPrChange* mutable_rPrChange();
        const CT_ParaRPrChange& rPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ParaRPr& default_instance() const;

    private:
        bool m_has_ins ;
        CT_TrackChange* m_ins ;
        bool m_has_del ;
        CT_TrackChange* m_del ;
        bool m_has_moveFrom ;
        CT_TrackChange* m_moveFrom ;
        bool m_has_moveTo ;
        CT_TrackChange* m_moveTo ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_rPrChange ;
        CT_ParaRPrChange* m_rPrChange ;
        static CT_ParaRPr* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_rStyle() const;
            CT_String* mutable_rStyle();
            const CT_String& rStyle() const;
            bool has_rFonts() const;
            CT_Fonts* mutable_rFonts();
            const CT_Fonts& rFonts() const;
            bool has_b() const;
            CT_OnOff* mutable_b();
            const CT_OnOff& b() const;
            bool has_bCs() const;
            CT_OnOff* mutable_bCs();
            const CT_OnOff& bCs() const;
            bool has_i() const;
            CT_OnOff* mutable_i();
            const CT_OnOff& i() const;
            bool has_iCs() const;
            CT_OnOff* mutable_iCs();
            const CT_OnOff& iCs() const;
            bool has_caps() const;
            CT_OnOff* mutable_caps();
            const CT_OnOff& caps() const;
            bool has_smallCaps() const;
            CT_OnOff* mutable_smallCaps();
            const CT_OnOff& smallCaps() const;
            bool has_strike() const;
            CT_OnOff* mutable_strike();
            const CT_OnOff& strike() const;
            bool has_dstrike() const;
            CT_OnOff* mutable_dstrike();
            const CT_OnOff& dstrike() const;
            bool has_outline() const;
            CT_OnOff* mutable_outline();
            const CT_OnOff& outline() const;
            bool has_shadow() const;
            CT_OnOff* mutable_shadow();
            const CT_OnOff& shadow() const;
            bool has_emboss() const;
            CT_OnOff* mutable_emboss();
            const CT_OnOff& emboss() const;
            bool has_imprint() const;
            CT_OnOff* mutable_imprint();
            const CT_OnOff& imprint() const;
            bool has_noProof() const;
            CT_OnOff* mutable_noProof();
            const CT_OnOff& noProof() const;
            bool has_snapToGrid() const;
            CT_OnOff* mutable_snapToGrid();
            const CT_OnOff& snapToGrid() const;
            bool has_vanish() const;
            CT_OnOff* mutable_vanish();
            const CT_OnOff& vanish() const;
            bool has_webHidden() const;
            CT_OnOff* mutable_webHidden();
            const CT_OnOff& webHidden() const;
            bool has_color() const;
            CT_Color* mutable_color();
            const CT_Color& color() const;
            bool has_spacing() const;
            CT_SignedTwipsMeasure* mutable_spacing();
            const CT_SignedTwipsMeasure& spacing() const;
            bool has_w() const;
            CT_TextScale* mutable_w();
            const CT_TextScale& w() const;
            bool has_kern() const;
            CT_HpsMeasure* mutable_kern();
            const CT_HpsMeasure& kern() const;
            bool has_position() const;
            CT_SignedHpsMeasure* mutable_position();
            const CT_SignedHpsMeasure& position() const;
            bool has_sz() const;
            CT_HpsMeasure* mutable_sz();
            const CT_HpsMeasure& sz() const;
            bool has_szCs() const;
            CT_HpsMeasure* mutable_szCs();
            const CT_HpsMeasure& szCs() const;
            bool has_highlight() const;
            CT_Highlight* mutable_highlight();
            const CT_Highlight& highlight() const;
            bool has_u() const;
            CT_Underline* mutable_u();
            const CT_Underline& u() const;
            bool has_effect() const;
            CT_TextEffect* mutable_effect();
            const CT_TextEffect& effect() const;
            bool has_bdr() const;
            CT_Border* mutable_bdr();
            const CT_Border& bdr() const;
            bool has_shd() const;
            CT_Shd* mutable_shd();
            const CT_Shd& shd() const;
            bool has_fitText() const;
            CT_FitText* mutable_fitText();
            const CT_FitText& fitText() const;
            bool has_vertAlign() const;
            CT_VerticalAlignRun* mutable_vertAlign();
            const CT_VerticalAlignRun& vertAlign() const;
            bool has_rtl() const;
            CT_OnOff* mutable_rtl();
            const CT_OnOff& rtl() const;
            bool has_cs() const;
            CT_OnOff* mutable_cs();
            const CT_OnOff& cs() const;
            bool has_em() const;
            CT_Em* mutable_em();
            const CT_Em& em() const;
            bool has_lang() const;
            CT_Language* mutable_lang();
            const CT_Language& lang() const;
            bool has_eastAsianLayout() const;
            CT_EastAsianLayout* mutable_eastAsianLayout();
            const CT_EastAsianLayout& eastAsianLayout() const;
            bool has_specVanish() const;
            CT_OnOff* mutable_specVanish();
            const CT_OnOff& specVanish() const;
            bool has_oMath() const;
            CT_OnOff* mutable_oMath();
            const CT_OnOff& oMath() const;

        private:
            bool m_has_rStyle ;
            CT_String* m_rStyle ;
            bool m_has_rFonts ;
            CT_Fonts* m_rFonts ;
            bool m_has_b ;
            CT_OnOff* m_b ;
            bool m_has_bCs ;
            CT_OnOff* m_bCs ;
            bool m_has_i ;
            CT_OnOff* m_i ;
            bool m_has_iCs ;
            CT_OnOff* m_iCs ;
            bool m_has_caps ;
            CT_OnOff* m_caps ;
            bool m_has_smallCaps ;
            CT_OnOff* m_smallCaps ;
            bool m_has_strike ;
            CT_OnOff* m_strike ;
            bool m_has_dstrike ;
            CT_OnOff* m_dstrike ;
            bool m_has_outline ;
            CT_OnOff* m_outline ;
            bool m_has_shadow ;
            CT_OnOff* m_shadow ;
            bool m_has_emboss ;
            CT_OnOff* m_emboss ;
            bool m_has_imprint ;
            CT_OnOff* m_imprint ;
            bool m_has_noProof ;
            CT_OnOff* m_noProof ;
            bool m_has_snapToGrid ;
            CT_OnOff* m_snapToGrid ;
            bool m_has_vanish ;
            CT_OnOff* m_vanish ;
            bool m_has_webHidden ;
            CT_OnOff* m_webHidden ;
            bool m_has_color ;
            CT_Color* m_color ;
            bool m_has_spacing ;
            CT_SignedTwipsMeasure* m_spacing ;
            bool m_has_w ;
            CT_TextScale* m_w ;
            bool m_has_kern ;
            CT_HpsMeasure* m_kern ;
            bool m_has_position ;
            CT_SignedHpsMeasure* m_position ;
            bool m_has_sz ;
            CT_HpsMeasure* m_sz ;
            bool m_has_szCs ;
            CT_HpsMeasure* m_szCs ;
            bool m_has_highlight ;
            CT_Highlight* m_highlight ;
            bool m_has_u ;
            CT_Underline* m_u ;
            bool m_has_effect ;
            CT_TextEffect* m_effect ;
            bool m_has_bdr ;
            CT_Border* m_bdr ;
            bool m_has_shd ;
            CT_Shd* m_shd ;
            bool m_has_fitText ;
            CT_FitText* m_fitText ;
            bool m_has_vertAlign ;
            CT_VerticalAlignRun* m_vertAlign ;
            bool m_has_rtl ;
            CT_OnOff* m_rtl ;
            bool m_has_cs ;
            CT_OnOff* m_cs ;
            bool m_has_em ;
            CT_Em* m_em ;
            bool m_has_lang ;
            CT_Language* m_lang ;
            bool m_has_eastAsianLayout ;
            CT_EastAsianLayout* m_eastAsianLayout ;
            bool m_has_specVanish ;
            CT_OnOff* m_specVanish ;
            bool m_has_oMath ;
            CT_OnOff* m_oMath ;

        }


    }

    class CT_AltChunk : public XSD::ComplexType{
    public:
        bool has_altChunkPr() const;
        CT_AltChunkPr* mutable_altChunkPr();
        const CT_AltChunkPr& altChunkPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AltChunk& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_altChunkPr ;
        CT_AltChunkPr* m_altChunkPr ;
        static CT_AltChunk* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_AltChunkPr : public XSD::ComplexType{
    public:
        bool has_matchSrc() const;
        CT_OnOff* mutable_matchSrc();
        const CT_OnOff& matchSrc() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AltChunkPr& default_instance() const;

    private:
        bool m_has_matchSrc ;
        CT_OnOff* m_matchSrc ;
        static CT_AltChunkPr* default_instance_ ;

    }

    class CT_RubyAlign : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RubyAlign& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_RubyAlign& _val_attr );
        const ST_RubyAlign& val_attr() const;

    private:
        static CT_RubyAlign* default_instance_ ;
        bool m_has_val_attr ;
        ST_RubyAlign* m_val_attr ;

    }

    class CT_RubyPr : public XSD::ComplexType{
    public:
        bool has_rubyAlign() const;
        CT_RubyAlign* mutable_rubyAlign();
        const CT_RubyAlign& rubyAlign() const;
        bool has_hps() const;
        CT_HpsMeasure* mutable_hps();
        const CT_HpsMeasure& hps() const;
        bool has_hpsRaise() const;
        CT_HpsMeasure* mutable_hpsRaise();
        const CT_HpsMeasure& hpsRaise() const;
        bool has_hpsBaseText() const;
        CT_HpsMeasure* mutable_hpsBaseText();
        const CT_HpsMeasure& hpsBaseText() const;
        bool has_lid() const;
        CT_Lang* mutable_lid();
        const CT_Lang& lid() const;
        bool has_dirty() const;
        CT_OnOff* mutable_dirty();
        const CT_OnOff& dirty() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RubyPr& default_instance() const;

    private:
        bool m_has_rubyAlign ;
        CT_RubyAlign* m_rubyAlign ;
        bool m_has_hps ;
        CT_HpsMeasure* m_hps ;
        bool m_has_hpsRaise ;
        CT_HpsMeasure* m_hpsRaise ;
        bool m_has_hpsBaseText ;
        CT_HpsMeasure* m_hpsBaseText ;
        bool m_has_lid ;
        CT_Lang* m_lid ;
        bool m_has_dirty ;
        CT_OnOff* m_dirty ;
        static CT_RubyPr* default_instance_ ;

    }

    class CT_RubyContent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RubyContent& default_instance() const;

    private:
        static CT_RubyContent* default_instance_ ;

    }

    class CT_Ruby : public XSD::ComplexType{
    public:
        bool has_rubyPr() const;
        CT_RubyPr* mutable_rubyPr();
        const CT_RubyPr& rubyPr() const;
        bool has_rt() const;
        CT_RubyContent* mutable_rt();
        const CT_RubyContent& rt() const;
        bool has_rubyBase() const;
        CT_RubyContent* mutable_rubyBase();
        const CT_RubyContent& rubyBase() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Ruby& default_instance() const;

    private:
        bool m_has_rubyPr ;
        CT_RubyPr* m_rubyPr ;
        bool m_has_rt ;
        CT_RubyContent* m_rt ;
        bool m_has_rubyBase ;
        CT_RubyContent* m_rubyBase ;
        static CT_Ruby* default_instance_ ;

    }

    class CT_Lock : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Lock& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Lock& _val_attr );
        const ST_Lock& val_attr() const;

    private:
        static CT_Lock* default_instance_ ;
        bool m_has_val_attr ;
        ST_Lock* m_val_attr ;

    }

    class CT_SdtListItem : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtListItem& default_instance() const;
        bool has_displayText_attr() const;
        void set_displayText_attr(const ns_s::ST_String& _displayText_attr );
        const ns_s::ST_String& displayText_attr() const;
        bool has_value_attr() const;
        void set_value_attr(const ns_s::ST_String& _value_attr );
        const ns_s::ST_String& value_attr() const;

    private:
        static CT_SdtListItem* default_instance_ ;
        bool m_has_displayText_attr ;
        ns_s::ST_String* m_displayText_attr ;
        bool m_has_value_attr ;
        ns_s::ST_String* m_value_attr ;

    }

    class CT_SdtDateMappingType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtDateMappingType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SdtDateMappingType& _val_attr );
        const ST_SdtDateMappingType& val_attr() const;

    private:
        static CT_SdtDateMappingType* default_instance_ ;
        bool m_has_val_attr ;
        ST_SdtDateMappingType* m_val_attr ;

    }

    class CT_CalendarType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CalendarType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_CalendarType& _val_attr );
        const ns_s::ST_CalendarType& val_attr() const;

    private:
        static CT_CalendarType* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_CalendarType* m_val_attr ;

    }

    class CT_SdtDate : public XSD::ComplexType{
    public:
        bool has_dateFormat() const;
        CT_String* mutable_dateFormat();
        const CT_String& dateFormat() const;
        bool has_lid() const;
        CT_Lang* mutable_lid();
        const CT_Lang& lid() const;
        bool has_storeMappedDataAs() const;
        CT_SdtDateMappingType* mutable_storeMappedDataAs();
        const CT_SdtDateMappingType& storeMappedDataAs() const;
        bool has_calendar() const;
        CT_CalendarType* mutable_calendar();
        const CT_CalendarType& calendar() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtDate& default_instance() const;
        bool has_fullDate_attr() const;
        void set_fullDate_attr(const ST_DateTime& _fullDate_attr );
        const ST_DateTime& fullDate_attr() const;

    private:
        bool m_has_dateFormat ;
        CT_String* m_dateFormat ;
        bool m_has_lid ;
        CT_Lang* m_lid ;
        bool m_has_storeMappedDataAs ;
        CT_SdtDateMappingType* m_storeMappedDataAs ;
        bool m_has_calendar ;
        CT_CalendarType* m_calendar ;
        static CT_SdtDate* default_instance_ ;
        bool m_has_fullDate_attr ;
        ST_DateTime* m_fullDate_attr ;

    }

    class CT_SdtComboBox : public XSD::ComplexType{
    public:
        bool has_listItem() const;
        CT_SdtListItem* mutable_listItem();
        const CT_SdtListItem& listItem() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtComboBox& default_instance() const;
        bool has_lastValue_attr() const;
        void set_lastValue_attr(const ns_s::ST_String& _lastValue_attr );
        const ns_s::ST_String& lastValue_attr() const;

    private:
        bool m_has_listItem ;
        CT_SdtListItem* m_listItem ;
        static CT_SdtComboBox* default_instance_ ;
        bool m_has_lastValue_attr ;
        ns_s::ST_String* m_lastValue_attr ;

    }

    class CT_SdtDocPart : public XSD::ComplexType{
    public:
        bool has_docPartGallery() const;
        CT_String* mutable_docPartGallery();
        const CT_String& docPartGallery() const;
        bool has_docPartCategory() const;
        CT_String* mutable_docPartCategory();
        const CT_String& docPartCategory() const;
        bool has_docPartUnique() const;
        CT_OnOff* mutable_docPartUnique();
        const CT_OnOff& docPartUnique() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtDocPart& default_instance() const;

    private:
        bool m_has_docPartGallery ;
        CT_String* m_docPartGallery ;
        bool m_has_docPartCategory ;
        CT_String* m_docPartCategory ;
        bool m_has_docPartUnique ;
        CT_OnOff* m_docPartUnique ;
        static CT_SdtDocPart* default_instance_ ;

    }

    class CT_SdtDropDownList : public XSD::ComplexType{
    public:
        bool has_listItem() const;
        CT_SdtListItem* mutable_listItem();
        const CT_SdtListItem& listItem() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtDropDownList& default_instance() const;
        bool has_lastValue_attr() const;
        void set_lastValue_attr(const ns_s::ST_String& _lastValue_attr );
        const ns_s::ST_String& lastValue_attr() const;

    private:
        bool m_has_listItem ;
        CT_SdtListItem* m_listItem ;
        static CT_SdtDropDownList* default_instance_ ;
        bool m_has_lastValue_attr ;
        ns_s::ST_String* m_lastValue_attr ;

    }

    class CT_Placeholder : public XSD::ComplexType{
    public:
        bool has_docPart() const;
        CT_String* mutable_docPart();
        const CT_String& docPart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Placeholder& default_instance() const;

    private:
        bool m_has_docPart ;
        CT_String* m_docPart ;
        static CT_Placeholder* default_instance_ ;

    }

    class CT_SdtText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtText& default_instance() const;
        bool has_multiLine_attr() const;
        void set_multiLine_attr(const ns_s::ST_OnOff& _multiLine_attr );
        const ns_s::ST_OnOff& multiLine_attr() const;

    private:
        static CT_SdtText* default_instance_ ;
        bool m_has_multiLine_attr ;
        ns_s::ST_OnOff* m_multiLine_attr ;

    }

    class CT_DataBinding : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DataBinding& default_instance() const;
        bool has_prefixMappings_attr() const;
        void set_prefixMappings_attr(const ns_s::ST_String& _prefixMappings_attr );
        const ns_s::ST_String& prefixMappings_attr() const;
        bool has_xpath_attr() const;
        void set_xpath_attr(const ns_s::ST_String& _xpath_attr );
        const ns_s::ST_String& xpath_attr() const;
        bool has_storeItemID_attr() const;
        void set_storeItemID_attr(const ns_s::ST_String& _storeItemID_attr );
        const ns_s::ST_String& storeItemID_attr() const;

    private:
        static CT_DataBinding* default_instance_ ;
        bool m_has_prefixMappings_attr ;
        ns_s::ST_String* m_prefixMappings_attr ;
        bool m_has_xpath_attr ;
        ns_s::ST_String* m_xpath_attr ;
        bool m_has_storeItemID_attr ;
        ns_s::ST_String* m_storeItemID_attr ;

    }

    class CT_SdtPr : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        bool has_alias() const;
        CT_String* mutable_alias();
        const CT_String& alias() const;
        bool has_tag() const;
        CT_String* mutable_tag();
        const CT_String& tag() const;
        bool has_id() const;
        CT_DecimalNumber* mutable_id();
        const CT_DecimalNumber& id() const;
        bool has_lock() const;
        CT_Lock* mutable_lock();
        const CT_Lock& lock() const;
        bool has_placeholder() const;
        CT_Placeholder* mutable_placeholder();
        const CT_Placeholder& placeholder() const;
        bool has_temporary() const;
        CT_OnOff* mutable_temporary();
        const CT_OnOff& temporary() const;
        bool has_showingPlcHdr() const;
        CT_OnOff* mutable_showingPlcHdr();
        const CT_OnOff& showingPlcHdr() const;
        bool has_dataBinding() const;
        CT_DataBinding* mutable_dataBinding();
        const CT_DataBinding& dataBinding() const;
        bool has_label() const;
        CT_DecimalNumber* mutable_label();
        const CT_DecimalNumber& label() const;
        bool has_tabIndex() const;
        CT_UnsignedDecimalNumber* mutable_tabIndex();
        const CT_UnsignedDecimalNumber& tabIndex() const;
        bool has_equation() const;
        CT_Empty* mutable_equation();
        const CT_Empty& equation() const;
        bool has_comboBox() const;
        CT_SdtComboBox* mutable_comboBox();
        const CT_SdtComboBox& comboBox() const;
        bool has_date() const;
        CT_SdtDate* mutable_date();
        const CT_SdtDate& date() const;
        bool has_docPartObj() const;
        CT_SdtDocPart* mutable_docPartObj();
        const CT_SdtDocPart& docPartObj() const;
        bool has_docPartList() const;
        CT_SdtDocPart* mutable_docPartList();
        const CT_SdtDocPart& docPartList() const;
        bool has_dropDownList() const;
        CT_SdtDropDownList* mutable_dropDownList();
        const CT_SdtDropDownList& dropDownList() const;
        bool has_picture() const;
        CT_Empty* mutable_picture();
        const CT_Empty& picture() const;
        bool has_richText() const;
        CT_Empty* mutable_richText();
        const CT_Empty& richText() const;
        bool has_text() const;
        CT_SdtText* mutable_text();
        const CT_SdtText& text() const;
        bool has_citation() const;
        CT_Empty* mutable_citation();
        const CT_Empty& citation() const;
        bool has_group() const;
        CT_Empty* mutable_group();
        const CT_Empty& group() const;
        bool has_bibliography() const;
        CT_Empty* mutable_bibliography();
        const CT_Empty& bibliography() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtPr& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        bool m_has_alias ;
        CT_String* m_alias ;
        bool m_has_tag ;
        CT_String* m_tag ;
        bool m_has_id ;
        CT_DecimalNumber* m_id ;
        bool m_has_lock ;
        CT_Lock* m_lock ;
        bool m_has_placeholder ;
        CT_Placeholder* m_placeholder ;
        bool m_has_temporary ;
        CT_OnOff* m_temporary ;
        bool m_has_showingPlcHdr ;
        CT_OnOff* m_showingPlcHdr ;
        bool m_has_dataBinding ;
        CT_DataBinding* m_dataBinding ;
        bool m_has_label ;
        CT_DecimalNumber* m_label ;
        bool m_has_tabIndex ;
        CT_UnsignedDecimalNumber* m_tabIndex ;
        bool m_has_equation ;
        CT_Empty* m_equation ;
        bool m_has_comboBox ;
        CT_SdtComboBox* m_comboBox ;
        bool m_has_date ;
        CT_SdtDate* m_date ;
        bool m_has_docPartObj ;
        CT_SdtDocPart* m_docPartObj ;
        bool m_has_docPartList ;
        CT_SdtDocPart* m_docPartList ;
        bool m_has_dropDownList ;
        CT_SdtDropDownList* m_dropDownList ;
        bool m_has_picture ;
        CT_Empty* m_picture ;
        bool m_has_richText ;
        CT_Empty* m_richText ;
        bool m_has_text ;
        CT_SdtText* m_text ;
        bool m_has_citation ;
        CT_Empty* m_citation ;
        bool m_has_group ;
        CT_Empty* m_group ;
        bool m_has_bibliography ;
        CT_Empty* m_bibliography ;
        static CT_SdtPr* default_instance_ ;

    }

    class CT_SdtEndPr : public XSD::ComplexType{
    public:
        CT_RPr* add_rPr();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtEndPr& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SdtEndPr* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_rPr() const;
            CT_RPr* mutable_rPr();
            const CT_RPr& rPr() const;

        private:
            bool m_has_rPr ;
            CT_RPr* m_rPr ;

        }


    }

    class CT_DirContentRun : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DirContentRun& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Direction& _val_attr );
        const ST_Direction& val_attr() const;

    private:
        static CT_DirContentRun* default_instance_ ;
        bool m_has_val_attr ;
        ST_Direction* m_val_attr ;

    }

    class CT_BdoContentRun : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BdoContentRun& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Direction& _val_attr );
        const ST_Direction& val_attr() const;

    private:
        static CT_BdoContentRun* default_instance_ ;
        bool m_has_val_attr ;
        ST_Direction* m_val_attr ;

    }

    class CT_SdtContentRun : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtContentRun& default_instance() const;

    private:
        static CT_SdtContentRun* default_instance_ ;

    }

    class CT_SdtContentBlock : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtContentBlock& default_instance() const;

    private:
        static CT_SdtContentBlock* default_instance_ ;

    }

    class CT_SdtContentRow : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtContentRow& default_instance() const;

    private:
        static CT_SdtContentRow* default_instance_ ;

    }

    class CT_SdtContentCell : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtContentCell& default_instance() const;

    private:
        static CT_SdtContentCell* default_instance_ ;

    }

    class CT_SdtBlock : public XSD::ComplexType{
    public:
        bool has_sdtPr() const;
        CT_SdtPr* mutable_sdtPr();
        const CT_SdtPr& sdtPr() const;
        bool has_sdtEndPr() const;
        CT_SdtEndPr* mutable_sdtEndPr();
        const CT_SdtEndPr& sdtEndPr() const;
        bool has_sdtContent() const;
        CT_SdtContentBlock* mutable_sdtContent();
        const CT_SdtContentBlock& sdtContent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtBlock& default_instance() const;

    private:
        bool m_has_sdtPr ;
        CT_SdtPr* m_sdtPr ;
        bool m_has_sdtEndPr ;
        CT_SdtEndPr* m_sdtEndPr ;
        bool m_has_sdtContent ;
        CT_SdtContentBlock* m_sdtContent ;
        static CT_SdtBlock* default_instance_ ;

    }

    class CT_SdtRun : public XSD::ComplexType{
    public:
        bool has_sdtPr() const;
        CT_SdtPr* mutable_sdtPr();
        const CT_SdtPr& sdtPr() const;
        bool has_sdtEndPr() const;
        CT_SdtEndPr* mutable_sdtEndPr();
        const CT_SdtEndPr& sdtEndPr() const;
        bool has_sdtContent() const;
        CT_SdtContentRun* mutable_sdtContent();
        const CT_SdtContentRun& sdtContent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtRun& default_instance() const;

    private:
        bool m_has_sdtPr ;
        CT_SdtPr* m_sdtPr ;
        bool m_has_sdtEndPr ;
        CT_SdtEndPr* m_sdtEndPr ;
        bool m_has_sdtContent ;
        CT_SdtContentRun* m_sdtContent ;
        static CT_SdtRun* default_instance_ ;

    }

    class CT_SdtCell : public XSD::ComplexType{
    public:
        bool has_sdtPr() const;
        CT_SdtPr* mutable_sdtPr();
        const CT_SdtPr& sdtPr() const;
        bool has_sdtEndPr() const;
        CT_SdtEndPr* mutable_sdtEndPr();
        const CT_SdtEndPr& sdtEndPr() const;
        bool has_sdtContent() const;
        CT_SdtContentCell* mutable_sdtContent();
        const CT_SdtContentCell& sdtContent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtCell& default_instance() const;

    private:
        bool m_has_sdtPr ;
        CT_SdtPr* m_sdtPr ;
        bool m_has_sdtEndPr ;
        CT_SdtEndPr* m_sdtEndPr ;
        bool m_has_sdtContent ;
        CT_SdtContentCell* m_sdtContent ;
        static CT_SdtCell* default_instance_ ;

    }

    class CT_SdtRow : public XSD::ComplexType{
    public:
        bool has_sdtPr() const;
        CT_SdtPr* mutable_sdtPr();
        const CT_SdtPr& sdtPr() const;
        bool has_sdtEndPr() const;
        CT_SdtEndPr* mutable_sdtEndPr();
        const CT_SdtEndPr& sdtEndPr() const;
        bool has_sdtContent() const;
        CT_SdtContentRow* mutable_sdtContent();
        const CT_SdtContentRow& sdtContent() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SdtRow& default_instance() const;

    private:
        bool m_has_sdtPr ;
        CT_SdtPr* m_sdtPr ;
        bool m_has_sdtEndPr ;
        CT_SdtEndPr* m_sdtEndPr ;
        bool m_has_sdtContent ;
        CT_SdtContentRow* m_sdtContent ;
        static CT_SdtRow* default_instance_ ;

    }

    class CT_Attr : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Attr& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_Attr* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_CustomXmlRun : public XSD::ComplexType{
    public:
        bool has_customXmlPr() const;
        CT_CustomXmlPr* mutable_customXmlPr();
        const CT_CustomXmlPr& customXmlPr() const;
        CT_CustomXmlRun* add_customXml();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
        CT_DirContentRun* add_dir();
        CT_BdoContentRun* add_bdo();
        CT_R* add_r();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_Rel* add_subDoc();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomXmlRun& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_element_attr() const;
        void set_element_attr(const ns_s::ST_XmlName& _element_attr );
        const ns_s::ST_XmlName& element_attr() const;

    private:
        bool m_has_customXmlPr ;
        CT_CustomXmlPr* m_customXmlPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CustomXmlRun* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_element_attr ;
        ns_s::ST_XmlName* m_element_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_dir() const;
            CT_DirContentRun* mutable_dir();
            const CT_DirContentRun& dir() const;
            bool has_bdo() const;
            CT_BdoContentRun* mutable_bdo();
            const CT_BdoContentRun& bdo() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_subDoc() const;
            CT_Rel* mutable_subDoc();
            const CT_Rel& subDoc() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_dir ;
            CT_DirContentRun* m_dir ;
            bool m_has_bdo ;
            CT_BdoContentRun* m_bdo ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_subDoc ;
            CT_Rel* m_subDoc ;

        }


    }

    class CT_SmartTagRun : public XSD::ComplexType{
    public:
        bool has_smartTagPr() const;
        CT_SmartTagPr* mutable_smartTagPr();
        const CT_SmartTagPr& smartTagPr() const;
        CT_CustomXmlRun* add_customXml();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
        CT_DirContentRun* add_dir();
        CT_BdoContentRun* add_bdo();
        CT_R* add_r();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_Rel* add_subDoc();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SmartTagRun& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_element_attr() const;
        void set_element_attr(const ns_s::ST_XmlName& _element_attr );
        const ns_s::ST_XmlName& element_attr() const;

    private:
        bool m_has_smartTagPr ;
        CT_SmartTagPr* m_smartTagPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SmartTagRun* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_element_attr ;
        ns_s::ST_XmlName* m_element_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_dir() const;
            CT_DirContentRun* mutable_dir();
            const CT_DirContentRun& dir() const;
            bool has_bdo() const;
            CT_BdoContentRun* mutable_bdo();
            const CT_BdoContentRun& bdo() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_subDoc() const;
            CT_Rel* mutable_subDoc();
            const CT_Rel& subDoc() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_dir ;
            CT_DirContentRun* m_dir ;
            bool m_has_bdo ;
            CT_BdoContentRun* m_bdo ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_subDoc ;
            CT_Rel* m_subDoc ;

        }


    }

    class CT_CustomXmlBlock : public XSD::ComplexType{
    public:
        bool has_customXmlPr() const;
        CT_CustomXmlPr* mutable_customXmlPr();
        const CT_CustomXmlPr& customXmlPr() const;
        CT_CustomXmlBlock* add_customXml();
        CT_SdtBlock* add_sdt();
        CT_P* add_p();
        CT_Tbl* add_tbl();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomXmlBlock& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_element_attr() const;
        void set_element_attr(const ns_s::ST_XmlName& _element_attr );
        const ns_s::ST_XmlName& element_attr() const;

    private:
        bool m_has_customXmlPr ;
        CT_CustomXmlPr* m_customXmlPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CustomXmlBlock* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_element_attr ;
        ns_s::ST_XmlName* m_element_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlBlock* mutable_customXml();
            const CT_CustomXmlBlock& customXml() const;
            bool has_sdt() const;
            CT_SdtBlock* mutable_sdt();
            const CT_SdtBlock& sdt() const;
            bool has_p() const;
            CT_P* mutable_p();
            const CT_P& p() const;
            bool has_tbl() const;
            CT_Tbl* mutable_tbl();
            const CT_Tbl& tbl() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlBlock* m_customXml ;
            bool m_has_sdt ;
            CT_SdtBlock* m_sdt ;
            bool m_has_p ;
            CT_P* m_p ;
            bool m_has_tbl ;
            CT_Tbl* m_tbl ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_CustomXmlPr : public XSD::ComplexType{
    public:
        bool has_placeholder() const;
        CT_String* mutable_placeholder();
        const CT_String& placeholder() const;
        bool has_attr() const;
        CT_Attr* mutable_attr();
        const CT_Attr& attr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomXmlPr& default_instance() const;

    private:
        bool m_has_placeholder ;
        CT_String* m_placeholder ;
        bool m_has_attr ;
        CT_Attr* m_attr ;
        static CT_CustomXmlPr* default_instance_ ;

    }

    class CT_CustomXmlRow : public XSD::ComplexType{
    public:
        bool has_customXmlPr() const;
        CT_CustomXmlPr* mutable_customXmlPr();
        const CT_CustomXmlPr& customXmlPr() const;
        CT_Row* add_tr();
        CT_CustomXmlRow* add_customXml();
        CT_SdtRow* add_sdt();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomXmlRow& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_element_attr() const;
        void set_element_attr(const ns_s::ST_XmlName& _element_attr );
        const ns_s::ST_XmlName& element_attr() const;

    private:
        bool m_has_customXmlPr ;
        CT_CustomXmlPr* m_customXmlPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CustomXmlRow* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_element_attr ;
        ns_s::ST_XmlName* m_element_attr ;
        class ChildGroup_1{
        public:
            bool has_tr() const;
            CT_Row* mutable_tr();
            const CT_Row& tr() const;
            bool has_customXml() const;
            CT_CustomXmlRow* mutable_customXml();
            const CT_CustomXmlRow& customXml() const;
            bool has_sdt() const;
            CT_SdtRow* mutable_sdt();
            const CT_SdtRow& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_tr ;
            CT_Row* m_tr ;
            bool m_has_customXml ;
            CT_CustomXmlRow* m_customXml ;
            bool m_has_sdt ;
            CT_SdtRow* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_CustomXmlCell : public XSD::ComplexType{
    public:
        bool has_customXmlPr() const;
        CT_CustomXmlPr* mutable_customXmlPr();
        const CT_CustomXmlPr& customXmlPr() const;
        CT_Tc* add_tc();
        CT_CustomXmlCell* add_customXml();
        CT_SdtCell* add_sdt();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomXmlCell& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_element_attr() const;
        void set_element_attr(const ns_s::ST_XmlName& _element_attr );
        const ns_s::ST_XmlName& element_attr() const;

    private:
        bool m_has_customXmlPr ;
        CT_CustomXmlPr* m_customXmlPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_CustomXmlCell* default_instance_ ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_element_attr ;
        ns_s::ST_XmlName* m_element_attr ;
        class ChildGroup_1{
        public:
            bool has_tc() const;
            CT_Tc* mutable_tc();
            const CT_Tc& tc() const;
            bool has_customXml() const;
            CT_CustomXmlCell* mutable_customXml();
            const CT_CustomXmlCell& customXml() const;
            bool has_sdt() const;
            CT_SdtCell* mutable_sdt();
            const CT_SdtCell& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_tc ;
            CT_Tc* m_tc ;
            bool m_has_customXml ;
            CT_CustomXmlCell* m_customXml ;
            bool m_has_sdt ;
            CT_SdtCell* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_SmartTagPr : public XSD::ComplexType{
    public:
        bool has_attr() const;
        CT_Attr* mutable_attr();
        const CT_Attr& attr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SmartTagPr& default_instance() const;

    private:
        bool m_has_attr ;
        CT_Attr* m_attr ;
        static CT_SmartTagPr* default_instance_ ;

    }

    class CT_P : public XSD::ComplexType{
    public:
        bool has_pPr() const;
        CT_PPr* mutable_pPr();
        const CT_PPr& pPr() const;
        CT_CustomXmlRun* add_customXml();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
        CT_DirContentRun* add_dir();
        CT_BdoContentRun* add_bdo();
        CT_R* add_r();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_Rel* add_subDoc();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_P& default_instance() const;
        bool has_rsidRPr_attr() const;
        void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr );
        const ST_LongHexNumber& rsidRPr_attr() const;
        bool has_rsidR_attr() const;
        void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr );
        const ST_LongHexNumber& rsidR_attr() const;
        bool has_rsidDel_attr() const;
        void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr );
        const ST_LongHexNumber& rsidDel_attr() const;
        bool has_rsidP_attr() const;
        void set_rsidP_attr(const ST_LongHexNumber& _rsidP_attr );
        const ST_LongHexNumber& rsidP_attr() const;
        bool has_rsidRDefault_attr() const;
        void set_rsidRDefault_attr(const ST_LongHexNumber& _rsidRDefault_attr );
        const ST_LongHexNumber& rsidRDefault_attr() const;

    private:
        bool m_has_pPr ;
        CT_PPr* m_pPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_P* default_instance_ ;
        bool m_has_rsidRPr_attr ;
        ST_LongHexNumber* m_rsidRPr_attr ;
        bool m_has_rsidR_attr ;
        ST_LongHexNumber* m_rsidR_attr ;
        bool m_has_rsidDel_attr ;
        ST_LongHexNumber* m_rsidDel_attr ;
        bool m_has_rsidP_attr ;
        ST_LongHexNumber* m_rsidP_attr ;
        bool m_has_rsidRDefault_attr ;
        ST_LongHexNumber* m_rsidRDefault_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_dir() const;
            CT_DirContentRun* mutable_dir();
            const CT_DirContentRun& dir() const;
            bool has_bdo() const;
            CT_BdoContentRun* mutable_bdo();
            const CT_BdoContentRun& bdo() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_subDoc() const;
            CT_Rel* mutable_subDoc();
            const CT_Rel& subDoc() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_dir ;
            CT_DirContentRun* m_dir ;
            bool m_has_bdo ;
            CT_BdoContentRun* m_bdo ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_subDoc ;
            CT_Rel* m_subDoc ;

        }


    }

    class CT_Height : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Height& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr );
        const ns_s::ST_TwipsMeasure& val_attr() const;
        bool has_hRule_attr() const;
        void set_hRule_attr(const ST_HeightRule& _hRule_attr );
        const ST_HeightRule& hRule_attr() const;

    private:
        static CT_Height* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_TwipsMeasure* m_val_attr ;
        bool m_has_hRule_attr ;
        ST_HeightRule* m_hRule_attr ;

    }

    class CT_TblWidth : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblWidth& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_MeasurementOrPercent& _w_attr );
        const ST_MeasurementOrPercent& w_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TblWidth& _type_attr );
        const ST_TblWidth& type_attr() const;

    private:
        static CT_TblWidth* default_instance_ ;
        bool m_has_w_attr ;
        ST_MeasurementOrPercent* m_w_attr ;
        bool m_has_type_attr ;
        ST_TblWidth* m_type_attr ;

    }

    class CT_TblGridCol : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblGridCol& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr );
        const ns_s::ST_TwipsMeasure& w_attr() const;

    private:
        static CT_TblGridCol* default_instance_ ;
        bool m_has_w_attr ;
        ns_s::ST_TwipsMeasure* m_w_attr ;

    }

    class CT_TblGridBase : public XSD::ComplexType{
    public:
        bool has_gridCol() const;
        CT_TblGridCol* mutable_gridCol();
        const CT_TblGridCol& gridCol() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblGridBase& default_instance() const;

    private:
        bool m_has_gridCol ;
        CT_TblGridCol* m_gridCol ;
        static CT_TblGridBase* default_instance_ ;

    }

    class CT_TblGrid : public XSD::ComplexType{
    public:
        bool has_gridCol() const;
        CT_TblGridCol* mutable_gridCol();
        const CT_TblGridCol& gridCol() const;
        bool has_tblGridChange() const;
        CT_TblGridChange* mutable_tblGridChange();
        const CT_TblGridChange& tblGridChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblGrid& default_instance() const;

    private:
        bool m_has_gridCol ;
        CT_TblGridCol* m_gridCol ;
        bool m_has_tblGridChange ;
        CT_TblGridChange* m_tblGridChange ;
        static CT_TblGrid* default_instance_ ;

    }

    class CT_TcBorders : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_Border* mutable_top();
        const CT_Border& top() const;
        bool has_start() const;
        CT_Border* mutable_start();
        const CT_Border& start() const;
        bool has_left() const;
        CT_Border* mutable_left();
        const CT_Border& left() const;
        bool has_bottom() const;
        CT_Border* mutable_bottom();
        const CT_Border& bottom() const;
        bool has_end() const;
        CT_Border* mutable_end();
        const CT_Border& end() const;
        bool has_right() const;
        CT_Border* mutable_right();
        const CT_Border& right() const;
        bool has_insideH() const;
        CT_Border* mutable_insideH();
        const CT_Border& insideH() const;
        bool has_insideV() const;
        CT_Border* mutable_insideV();
        const CT_Border& insideV() const;
        bool has_tl2br() const;
        CT_Border* mutable_tl2br();
        const CT_Border& tl2br() const;
        bool has_tr2bl() const;
        CT_Border* mutable_tr2bl();
        const CT_Border& tr2bl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcBorders& default_instance() const;

    private:
        bool m_has_top ;
        CT_Border* m_top ;
        bool m_has_start ;
        CT_Border* m_start ;
        bool m_has_left ;
        CT_Border* m_left ;
        bool m_has_bottom ;
        CT_Border* m_bottom ;
        bool m_has_end ;
        CT_Border* m_end ;
        bool m_has_right ;
        CT_Border* m_right ;
        bool m_has_insideH ;
        CT_Border* m_insideH ;
        bool m_has_insideV ;
        CT_Border* m_insideV ;
        bool m_has_tl2br ;
        CT_Border* m_tl2br ;
        bool m_has_tr2bl ;
        CT_Border* m_tr2bl ;
        static CT_TcBorders* default_instance_ ;

    }

    class CT_TcMar : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_TblWidth* mutable_top();
        const CT_TblWidth& top() const;
        bool has_start() const;
        CT_TblWidth* mutable_start();
        const CT_TblWidth& start() const;
        bool has_left() const;
        CT_TblWidth* mutable_left();
        const CT_TblWidth& left() const;
        bool has_bottom() const;
        CT_TblWidth* mutable_bottom();
        const CT_TblWidth& bottom() const;
        bool has_end() const;
        CT_TblWidth* mutable_end();
        const CT_TblWidth& end() const;
        bool has_right() const;
        CT_TblWidth* mutable_right();
        const CT_TblWidth& right() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcMar& default_instance() const;

    private:
        bool m_has_top ;
        CT_TblWidth* m_top ;
        bool m_has_start ;
        CT_TblWidth* m_start ;
        bool m_has_left ;
        CT_TblWidth* m_left ;
        bool m_has_bottom ;
        CT_TblWidth* m_bottom ;
        bool m_has_end ;
        CT_TblWidth* m_end ;
        bool m_has_right ;
        CT_TblWidth* m_right ;
        static CT_TcMar* default_instance_ ;

    }

    class CT_VMerge : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VMerge& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Merge& _val_attr );
        const ST_Merge& val_attr() const;

    private:
        static CT_VMerge* default_instance_ ;
        bool m_has_val_attr ;
        ST_Merge* m_val_attr ;

    }

    class CT_HMerge : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HMerge& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Merge& _val_attr );
        const ST_Merge& val_attr() const;

    private:
        static CT_HMerge* default_instance_ ;
        bool m_has_val_attr ;
        ST_Merge* m_val_attr ;

    }

    class CT_TcPrBase : public XSD::ComplexType{
    public:
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        bool has_tcW() const;
        CT_TblWidth* mutable_tcW();
        const CT_TblWidth& tcW() const;
        bool has_gridSpan() const;
        CT_DecimalNumber* mutable_gridSpan();
        const CT_DecimalNumber& gridSpan() const;
        bool has_hMerge() const;
        CT_HMerge* mutable_hMerge();
        const CT_HMerge& hMerge() const;
        bool has_vMerge() const;
        CT_VMerge* mutable_vMerge();
        const CT_VMerge& vMerge() const;
        bool has_tcBorders() const;
        CT_TcBorders* mutable_tcBorders();
        const CT_TcBorders& tcBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_noWrap() const;
        CT_OnOff* mutable_noWrap();
        const CT_OnOff& noWrap() const;
        bool has_tcMar() const;
        CT_TcMar* mutable_tcMar();
        const CT_TcMar& tcMar() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_tcFitText() const;
        CT_OnOff* mutable_tcFitText();
        const CT_OnOff& tcFitText() const;
        bool has_vAlign() const;
        CT_VerticalJc* mutable_vAlign();
        const CT_VerticalJc& vAlign() const;
        bool has_hideMark() const;
        CT_OnOff* mutable_hideMark();
        const CT_OnOff& hideMark() const;
        bool has_headers() const;
        CT_Headers* mutable_headers();
        const CT_Headers& headers() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcPrBase& default_instance() const;

    private:
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        bool m_has_tcW ;
        CT_TblWidth* m_tcW ;
        bool m_has_gridSpan ;
        CT_DecimalNumber* m_gridSpan ;
        bool m_has_hMerge ;
        CT_HMerge* m_hMerge ;
        bool m_has_vMerge ;
        CT_VMerge* m_vMerge ;
        bool m_has_tcBorders ;
        CT_TcBorders* m_tcBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_noWrap ;
        CT_OnOff* m_noWrap ;
        bool m_has_tcMar ;
        CT_TcMar* m_tcMar ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_tcFitText ;
        CT_OnOff* m_tcFitText ;
        bool m_has_vAlign ;
        CT_VerticalJc* m_vAlign ;
        bool m_has_hideMark ;
        CT_OnOff* m_hideMark ;
        bool m_has_headers ;
        CT_Headers* m_headers ;
        static CT_TcPrBase* default_instance_ ;

    }

    class CT_TcPr : public XSD::ComplexType{
    public:
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        bool has_tcW() const;
        CT_TblWidth* mutable_tcW();
        const CT_TblWidth& tcW() const;
        bool has_gridSpan() const;
        CT_DecimalNumber* mutable_gridSpan();
        const CT_DecimalNumber& gridSpan() const;
        bool has_hMerge() const;
        CT_HMerge* mutable_hMerge();
        const CT_HMerge& hMerge() const;
        bool has_vMerge() const;
        CT_VMerge* mutable_vMerge();
        const CT_VMerge& vMerge() const;
        bool has_tcBorders() const;
        CT_TcBorders* mutable_tcBorders();
        const CT_TcBorders& tcBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_noWrap() const;
        CT_OnOff* mutable_noWrap();
        const CT_OnOff& noWrap() const;
        bool has_tcMar() const;
        CT_TcMar* mutable_tcMar();
        const CT_TcMar& tcMar() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_tcFitText() const;
        CT_OnOff* mutable_tcFitText();
        const CT_OnOff& tcFitText() const;
        bool has_vAlign() const;
        CT_VerticalJc* mutable_vAlign();
        const CT_VerticalJc& vAlign() const;
        bool has_hideMark() const;
        CT_OnOff* mutable_hideMark();
        const CT_OnOff& hideMark() const;
        bool has_headers() const;
        CT_Headers* mutable_headers();
        const CT_Headers& headers() const;
        bool has_cellIns() const;
        CT_TrackChange* mutable_cellIns();
        const CT_TrackChange& cellIns() const;
        bool has_cellDel() const;
        CT_TrackChange* mutable_cellDel();
        const CT_TrackChange& cellDel() const;
        bool has_cellMerge() const;
        CT_CellMergeTrackChange* mutable_cellMerge();
        const CT_CellMergeTrackChange& cellMerge() const;
        bool has_tcPrChange() const;
        CT_TcPrChange* mutable_tcPrChange();
        const CT_TcPrChange& tcPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcPr& default_instance() const;

    private:
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        bool m_has_tcW ;
        CT_TblWidth* m_tcW ;
        bool m_has_gridSpan ;
        CT_DecimalNumber* m_gridSpan ;
        bool m_has_hMerge ;
        CT_HMerge* m_hMerge ;
        bool m_has_vMerge ;
        CT_VMerge* m_vMerge ;
        bool m_has_tcBorders ;
        CT_TcBorders* m_tcBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_noWrap ;
        CT_OnOff* m_noWrap ;
        bool m_has_tcMar ;
        CT_TcMar* m_tcMar ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_tcFitText ;
        CT_OnOff* m_tcFitText ;
        bool m_has_vAlign ;
        CT_VerticalJc* m_vAlign ;
        bool m_has_hideMark ;
        CT_OnOff* m_hideMark ;
        bool m_has_headers ;
        CT_Headers* m_headers ;
        bool m_has_cellIns ;
        CT_TrackChange* m_cellIns ;
        bool m_has_cellDel ;
        CT_TrackChange* m_cellDel ;
        bool m_has_cellMerge ;
        CT_CellMergeTrackChange* m_cellMerge ;
        bool m_has_tcPrChange ;
        CT_TcPrChange* m_tcPrChange ;
        static CT_TcPr* default_instance_ ;

    }

    class CT_TcPrInner : public XSD::ComplexType{
    public:
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& cnfStyle() const;
        bool has_tcW() const;
        CT_TblWidth* mutable_tcW();
        const CT_TblWidth& tcW() const;
        bool has_gridSpan() const;
        CT_DecimalNumber* mutable_gridSpan();
        const CT_DecimalNumber& gridSpan() const;
        bool has_hMerge() const;
        CT_HMerge* mutable_hMerge();
        const CT_HMerge& hMerge() const;
        bool has_vMerge() const;
        CT_VMerge* mutable_vMerge();
        const CT_VMerge& vMerge() const;
        bool has_tcBorders() const;
        CT_TcBorders* mutable_tcBorders();
        const CT_TcBorders& tcBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_noWrap() const;
        CT_OnOff* mutable_noWrap();
        const CT_OnOff& noWrap() const;
        bool has_tcMar() const;
        CT_TcMar* mutable_tcMar();
        const CT_TcMar& tcMar() const;
        bool has_textDirection() const;
        CT_TextDirection* mutable_textDirection();
        const CT_TextDirection& textDirection() const;
        bool has_tcFitText() const;
        CT_OnOff* mutable_tcFitText();
        const CT_OnOff& tcFitText() const;
        bool has_vAlign() const;
        CT_VerticalJc* mutable_vAlign();
        const CT_VerticalJc& vAlign() const;
        bool has_hideMark() const;
        CT_OnOff* mutable_hideMark();
        const CT_OnOff& hideMark() const;
        bool has_headers() const;
        CT_Headers* mutable_headers();
        const CT_Headers& headers() const;
        bool has_cellIns() const;
        CT_TrackChange* mutable_cellIns();
        const CT_TrackChange& cellIns() const;
        bool has_cellDel() const;
        CT_TrackChange* mutable_cellDel();
        const CT_TrackChange& cellDel() const;
        bool has_cellMerge() const;
        CT_CellMergeTrackChange* mutable_cellMerge();
        const CT_CellMergeTrackChange& cellMerge() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TcPrInner& default_instance() const;

    private:
        bool m_has_cnfStyle ;
        CT_Cnf* m_cnfStyle ;
        bool m_has_tcW ;
        CT_TblWidth* m_tcW ;
        bool m_has_gridSpan ;
        CT_DecimalNumber* m_gridSpan ;
        bool m_has_hMerge ;
        CT_HMerge* m_hMerge ;
        bool m_has_vMerge ;
        CT_VMerge* m_vMerge ;
        bool m_has_tcBorders ;
        CT_TcBorders* m_tcBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_noWrap ;
        CT_OnOff* m_noWrap ;
        bool m_has_tcMar ;
        CT_TcMar* m_tcMar ;
        bool m_has_textDirection ;
        CT_TextDirection* m_textDirection ;
        bool m_has_tcFitText ;
        CT_OnOff* m_tcFitText ;
        bool m_has_vAlign ;
        CT_VerticalJc* m_vAlign ;
        bool m_has_hideMark ;
        CT_OnOff* m_hideMark ;
        bool m_has_headers ;
        CT_Headers* m_headers ;
        bool m_has_cellIns ;
        CT_TrackChange* m_cellIns ;
        bool m_has_cellDel ;
        CT_TrackChange* m_cellDel ;
        bool m_has_cellMerge ;
        CT_CellMergeTrackChange* m_cellMerge ;
        static CT_TcPrInner* default_instance_ ;

    }

    class CT_Tc : public XSD::ComplexType{
    public:
        bool has_tcPr() const;
        CT_TcPr* mutable_tcPr();
        const CT_TcPr& tcPr() const;
        CT_CustomXmlBlock* add_customXml();
        CT_SdtBlock* add_sdt();
        CT_P* add_p();
        CT_Tbl* add_tbl();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_AltChunk* add_altChunk();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Tc& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_String& _id_attr );
        const ns_s::ST_String& id_attr() const;

    private:
        bool m_has_tcPr ;
        CT_TcPr* m_tcPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Tc* default_instance_ ;
        bool m_has_id_attr ;
        ns_s::ST_String* m_id_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlBlock* mutable_customXml();
            const CT_CustomXmlBlock& customXml() const;
            bool has_sdt() const;
            CT_SdtBlock* mutable_sdt();
            const CT_SdtBlock& sdt() const;
            bool has_p() const;
            CT_P* mutable_p();
            const CT_P& p() const;
            bool has_tbl() const;
            CT_Tbl* mutable_tbl();
            const CT_Tbl& tbl() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_altChunk() const;
            CT_AltChunk* mutable_altChunk();
            const CT_AltChunk& altChunk() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlBlock* m_customXml ;
            bool m_has_sdt ;
            CT_SdtBlock* m_sdt ;
            bool m_has_p ;
            CT_P* m_p ;
            bool m_has_tbl ;
            CT_Tbl* m_tbl ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_altChunk ;
            CT_AltChunk* m_altChunk ;

        }


    }

    class CT_Cnf : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Cnf& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Cnf& _val_attr );
        const ST_Cnf& val_attr() const;
        bool has_firstRow_attr() const;
        void set_firstRow_attr(const ns_s::ST_OnOff& _firstRow_attr );
        const ns_s::ST_OnOff& firstRow_attr() const;
        bool has_lastRow_attr() const;
        void set_lastRow_attr(const ns_s::ST_OnOff& _lastRow_attr );
        const ns_s::ST_OnOff& lastRow_attr() const;
        bool has_firstColumn_attr() const;
        void set_firstColumn_attr(const ns_s::ST_OnOff& _firstColumn_attr );
        const ns_s::ST_OnOff& firstColumn_attr() const;
        bool has_lastColumn_attr() const;
        void set_lastColumn_attr(const ns_s::ST_OnOff& _lastColumn_attr );
        const ns_s::ST_OnOff& lastColumn_attr() const;
        bool has_oddVBand_attr() const;
        void set_oddVBand_attr(const ns_s::ST_OnOff& _oddVBand_attr );
        const ns_s::ST_OnOff& oddVBand_attr() const;
        bool has_evenVBand_attr() const;
        void set_evenVBand_attr(const ns_s::ST_OnOff& _evenVBand_attr );
        const ns_s::ST_OnOff& evenVBand_attr() const;
        bool has_oddHBand_attr() const;
        void set_oddHBand_attr(const ns_s::ST_OnOff& _oddHBand_attr );
        const ns_s::ST_OnOff& oddHBand_attr() const;
        bool has_evenHBand_attr() const;
        void set_evenHBand_attr(const ns_s::ST_OnOff& _evenHBand_attr );
        const ns_s::ST_OnOff& evenHBand_attr() const;
        bool has_firstRowFirstColumn_attr() const;
        void set_firstRowFirstColumn_attr(const ns_s::ST_OnOff& _firstRowFirstColumn_attr );
        const ns_s::ST_OnOff& firstRowFirstColumn_attr() const;
        bool has_firstRowLastColumn_attr() const;
        void set_firstRowLastColumn_attr(const ns_s::ST_OnOff& _firstRowLastColumn_attr );
        const ns_s::ST_OnOff& firstRowLastColumn_attr() const;
        bool has_lastRowFirstColumn_attr() const;
        void set_lastRowFirstColumn_attr(const ns_s::ST_OnOff& _lastRowFirstColumn_attr );
        const ns_s::ST_OnOff& lastRowFirstColumn_attr() const;
        bool has_lastRowLastColumn_attr() const;
        void set_lastRowLastColumn_attr(const ns_s::ST_OnOff& _lastRowLastColumn_attr );
        const ns_s::ST_OnOff& lastRowLastColumn_attr() const;

    private:
        static CT_Cnf* default_instance_ ;
        bool m_has_val_attr ;
        ST_Cnf* m_val_attr ;
        bool m_has_firstRow_attr ;
        ns_s::ST_OnOff* m_firstRow_attr ;
        bool m_has_lastRow_attr ;
        ns_s::ST_OnOff* m_lastRow_attr ;
        bool m_has_firstColumn_attr ;
        ns_s::ST_OnOff* m_firstColumn_attr ;
        bool m_has_lastColumn_attr ;
        ns_s::ST_OnOff* m_lastColumn_attr ;
        bool m_has_oddVBand_attr ;
        ns_s::ST_OnOff* m_oddVBand_attr ;
        bool m_has_evenVBand_attr ;
        ns_s::ST_OnOff* m_evenVBand_attr ;
        bool m_has_oddHBand_attr ;
        ns_s::ST_OnOff* m_oddHBand_attr ;
        bool m_has_evenHBand_attr ;
        ns_s::ST_OnOff* m_evenHBand_attr ;
        bool m_has_firstRowFirstColumn_attr ;
        ns_s::ST_OnOff* m_firstRowFirstColumn_attr ;
        bool m_has_firstRowLastColumn_attr ;
        ns_s::ST_OnOff* m_firstRowLastColumn_attr ;
        bool m_has_lastRowFirstColumn_attr ;
        ns_s::ST_OnOff* m_lastRowFirstColumn_attr ;
        bool m_has_lastRowLastColumn_attr ;
        ns_s::ST_OnOff* m_lastRowLastColumn_attr ;

    }

    class CT_Headers : public XSD::ComplexType{
    public:
        CT_String* add_header();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Headers& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Headers* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_header() const;
            CT_String* mutable_header();
            const CT_String& header() const;

        private:
            bool m_has_header ;
            CT_String* m_header ;

        }


    }

    class CT_TrPrBase : public XSD::ComplexType{
    public:
        CT_Cnf* add_cnfStyle();
        CT_DecimalNumber* add_divId();
        CT_DecimalNumber* add_gridBefore();
        CT_DecimalNumber* add_gridAfter();
        CT_TblWidth* add_wBefore();
        CT_TblWidth* add_wAfter();
        CT_OnOff* add_cantSplit();
        CT_Height* add_trHeight();
        CT_OnOff* add_tblHeader();
        CT_TblWidth* add_tblCellSpacing();
        CT_JcTable* add_jc();
        CT_OnOff* add_hidden();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrPrBase& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_TrPrBase* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cnfStyle() const;
            CT_Cnf* mutable_cnfStyle();
            const CT_Cnf& cnfStyle() const;
            bool has_divId() const;
            CT_DecimalNumber* mutable_divId();
            const CT_DecimalNumber& divId() const;
            bool has_gridBefore() const;
            CT_DecimalNumber* mutable_gridBefore();
            const CT_DecimalNumber& gridBefore() const;
            bool has_gridAfter() const;
            CT_DecimalNumber* mutable_gridAfter();
            const CT_DecimalNumber& gridAfter() const;
            bool has_wBefore() const;
            CT_TblWidth* mutable_wBefore();
            const CT_TblWidth& wBefore() const;
            bool has_wAfter() const;
            CT_TblWidth* mutable_wAfter();
            const CT_TblWidth& wAfter() const;
            bool has_cantSplit() const;
            CT_OnOff* mutable_cantSplit();
            const CT_OnOff& cantSplit() const;
            bool has_trHeight() const;
            CT_Height* mutable_trHeight();
            const CT_Height& trHeight() const;
            bool has_tblHeader() const;
            CT_OnOff* mutable_tblHeader();
            const CT_OnOff& tblHeader() const;
            bool has_tblCellSpacing() const;
            CT_TblWidth* mutable_tblCellSpacing();
            const CT_TblWidth& tblCellSpacing() const;
            bool has_jc() const;
            CT_JcTable* mutable_jc();
            const CT_JcTable& jc() const;
            bool has_hidden() const;
            CT_OnOff* mutable_hidden();
            const CT_OnOff& hidden() const;

        private:
            bool m_has_cnfStyle ;
            CT_Cnf* m_cnfStyle ;
            bool m_has_divId ;
            CT_DecimalNumber* m_divId ;
            bool m_has_gridBefore ;
            CT_DecimalNumber* m_gridBefore ;
            bool m_has_gridAfter ;
            CT_DecimalNumber* m_gridAfter ;
            bool m_has_wBefore ;
            CT_TblWidth* m_wBefore ;
            bool m_has_wAfter ;
            CT_TblWidth* m_wAfter ;
            bool m_has_cantSplit ;
            CT_OnOff* m_cantSplit ;
            bool m_has_trHeight ;
            CT_Height* m_trHeight ;
            bool m_has_tblHeader ;
            CT_OnOff* m_tblHeader ;
            bool m_has_tblCellSpacing ;
            CT_TblWidth* m_tblCellSpacing ;
            bool m_has_jc ;
            CT_JcTable* m_jc ;
            bool m_has_hidden ;
            CT_OnOff* m_hidden ;

        }


    }

    class CT_TrPr : public XSD::ComplexType{
    public:
        CT_Cnf* add_cnfStyle();
        CT_DecimalNumber* add_divId();
        CT_DecimalNumber* add_gridBefore();
        CT_DecimalNumber* add_gridAfter();
        CT_TblWidth* add_wBefore();
        CT_TblWidth* add_wAfter();
        CT_OnOff* add_cantSplit();
        CT_Height* add_trHeight();
        CT_OnOff* add_tblHeader();
        CT_TblWidth* add_tblCellSpacing();
        CT_JcTable* add_jc();
        CT_OnOff* add_hidden();
        bool has_ins() const;
        CT_TrackChange* mutable_ins();
        const CT_TrackChange& ins() const;
        bool has_del() const;
        CT_TrackChange* mutable_del();
        const CT_TrackChange& del() const;
        bool has_trPrChange() const;
        CT_TrPrChange* mutable_trPrChange();
        const CT_TrPrChange& trPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TrPr& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_ins ;
        CT_TrackChange* m_ins ;
        bool m_has_del ;
        CT_TrackChange* m_del ;
        bool m_has_trPrChange ;
        CT_TrPrChange* m_trPrChange ;
        static CT_TrPr* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_cnfStyle() const;
            CT_Cnf* mutable_cnfStyle();
            const CT_Cnf& cnfStyle() const;
            bool has_divId() const;
            CT_DecimalNumber* mutable_divId();
            const CT_DecimalNumber& divId() const;
            bool has_gridBefore() const;
            CT_DecimalNumber* mutable_gridBefore();
            const CT_DecimalNumber& gridBefore() const;
            bool has_gridAfter() const;
            CT_DecimalNumber* mutable_gridAfter();
            const CT_DecimalNumber& gridAfter() const;
            bool has_wBefore() const;
            CT_TblWidth* mutable_wBefore();
            const CT_TblWidth& wBefore() const;
            bool has_wAfter() const;
            CT_TblWidth* mutable_wAfter();
            const CT_TblWidth& wAfter() const;
            bool has_cantSplit() const;
            CT_OnOff* mutable_cantSplit();
            const CT_OnOff& cantSplit() const;
            bool has_trHeight() const;
            CT_Height* mutable_trHeight();
            const CT_Height& trHeight() const;
            bool has_tblHeader() const;
            CT_OnOff* mutable_tblHeader();
            const CT_OnOff& tblHeader() const;
            bool has_tblCellSpacing() const;
            CT_TblWidth* mutable_tblCellSpacing();
            const CT_TblWidth& tblCellSpacing() const;
            bool has_jc() const;
            CT_JcTable* mutable_jc();
            const CT_JcTable& jc() const;
            bool has_hidden() const;
            CT_OnOff* mutable_hidden();
            const CT_OnOff& hidden() const;

        private:
            bool m_has_cnfStyle ;
            CT_Cnf* m_cnfStyle ;
            bool m_has_divId ;
            CT_DecimalNumber* m_divId ;
            bool m_has_gridBefore ;
            CT_DecimalNumber* m_gridBefore ;
            bool m_has_gridAfter ;
            CT_DecimalNumber* m_gridAfter ;
            bool m_has_wBefore ;
            CT_TblWidth* m_wBefore ;
            bool m_has_wAfter ;
            CT_TblWidth* m_wAfter ;
            bool m_has_cantSplit ;
            CT_OnOff* m_cantSplit ;
            bool m_has_trHeight ;
            CT_Height* m_trHeight ;
            bool m_has_tblHeader ;
            CT_OnOff* m_tblHeader ;
            bool m_has_tblCellSpacing ;
            CT_TblWidth* m_tblCellSpacing ;
            bool m_has_jc ;
            CT_JcTable* m_jc ;
            bool m_has_hidden ;
            CT_OnOff* m_hidden ;

        }


    }

    class CT_Row : public XSD::ComplexType{
    public:
        bool has_tblPrEx() const;
        CT_TblPrEx* mutable_tblPrEx();
        const CT_TblPrEx& tblPrEx() const;
        bool has_trPr() const;
        CT_TrPr* mutable_trPr();
        const CT_TrPr& trPr() const;
        CT_Tc* add_tc();
        CT_CustomXmlCell* add_customXml();
        CT_SdtCell* add_sdt();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Row& default_instance() const;
        bool has_rsidRPr_attr() const;
        void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr );
        const ST_LongHexNumber& rsidRPr_attr() const;
        bool has_rsidR_attr() const;
        void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr );
        const ST_LongHexNumber& rsidR_attr() const;
        bool has_rsidDel_attr() const;
        void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr );
        const ST_LongHexNumber& rsidDel_attr() const;
        bool has_rsidTr_attr() const;
        void set_rsidTr_attr(const ST_LongHexNumber& _rsidTr_attr );
        const ST_LongHexNumber& rsidTr_attr() const;

    private:
        bool m_has_tblPrEx ;
        CT_TblPrEx* m_tblPrEx ;
        bool m_has_trPr ;
        CT_TrPr* m_trPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Row* default_instance_ ;
        bool m_has_rsidRPr_attr ;
        ST_LongHexNumber* m_rsidRPr_attr ;
        bool m_has_rsidR_attr ;
        ST_LongHexNumber* m_rsidR_attr ;
        bool m_has_rsidDel_attr ;
        ST_LongHexNumber* m_rsidDel_attr ;
        bool m_has_rsidTr_attr ;
        ST_LongHexNumber* m_rsidTr_attr ;
        class ChildGroup_1{
        public:
            bool has_tc() const;
            CT_Tc* mutable_tc();
            const CT_Tc& tc() const;
            bool has_customXml() const;
            CT_CustomXmlCell* mutable_customXml();
            const CT_CustomXmlCell& customXml() const;
            bool has_sdt() const;
            CT_SdtCell* mutable_sdt();
            const CT_SdtCell& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_tc ;
            CT_Tc* m_tc ;
            bool m_has_customXml ;
            CT_CustomXmlCell* m_customXml ;
            bool m_has_sdt ;
            CT_SdtCell* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_TblLayoutType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblLayoutType& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TblLayoutType& _type_attr );
        const ST_TblLayoutType& type_attr() const;

    private:
        static CT_TblLayoutType* default_instance_ ;
        bool m_has_type_attr ;
        ST_TblLayoutType* m_type_attr ;

    }

    class CT_TblOverlap : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblOverlap& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TblOverlap& _val_attr );
        const ST_TblOverlap& val_attr() const;

    private:
        static CT_TblOverlap* default_instance_ ;
        bool m_has_val_attr ;
        ST_TblOverlap* m_val_attr ;

    }

    class CT_TblPPr : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPPr& default_instance() const;
        bool has_leftFromText_attr() const;
        void set_leftFromText_attr(const ns_s::ST_TwipsMeasure& _leftFromText_attr );
        const ns_s::ST_TwipsMeasure& leftFromText_attr() const;
        bool has_rightFromText_attr() const;
        void set_rightFromText_attr(const ns_s::ST_TwipsMeasure& _rightFromText_attr );
        const ns_s::ST_TwipsMeasure& rightFromText_attr() const;
        bool has_topFromText_attr() const;
        void set_topFromText_attr(const ns_s::ST_TwipsMeasure& _topFromText_attr );
        const ns_s::ST_TwipsMeasure& topFromText_attr() const;
        bool has_bottomFromText_attr() const;
        void set_bottomFromText_attr(const ns_s::ST_TwipsMeasure& _bottomFromText_attr );
        const ns_s::ST_TwipsMeasure& bottomFromText_attr() const;
        bool has_vertAnchor_attr() const;
        void set_vertAnchor_attr(const ST_VAnchor& _vertAnchor_attr );
        const ST_VAnchor& vertAnchor_attr() const;
        bool has_horzAnchor_attr() const;
        void set_horzAnchor_attr(const ST_HAnchor& _horzAnchor_attr );
        const ST_HAnchor& horzAnchor_attr() const;
        bool has_tblpXSpec_attr() const;
        void set_tblpXSpec_attr(const ns_s::ST_XAlign& _tblpXSpec_attr );
        const ns_s::ST_XAlign& tblpXSpec_attr() const;
        bool has_tblpX_attr() const;
        void set_tblpX_attr(const ST_SignedTwipsMeasure& _tblpX_attr );
        const ST_SignedTwipsMeasure& tblpX_attr() const;
        bool has_tblpYSpec_attr() const;
        void set_tblpYSpec_attr(const ns_s::ST_YAlign& _tblpYSpec_attr );
        const ns_s::ST_YAlign& tblpYSpec_attr() const;
        bool has_tblpY_attr() const;
        void set_tblpY_attr(const ST_SignedTwipsMeasure& _tblpY_attr );
        const ST_SignedTwipsMeasure& tblpY_attr() const;

    private:
        static CT_TblPPr* default_instance_ ;
        bool m_has_leftFromText_attr ;
        ns_s::ST_TwipsMeasure* m_leftFromText_attr ;
        bool m_has_rightFromText_attr ;
        ns_s::ST_TwipsMeasure* m_rightFromText_attr ;
        bool m_has_topFromText_attr ;
        ns_s::ST_TwipsMeasure* m_topFromText_attr ;
        bool m_has_bottomFromText_attr ;
        ns_s::ST_TwipsMeasure* m_bottomFromText_attr ;
        bool m_has_vertAnchor_attr ;
        ST_VAnchor* m_vertAnchor_attr ;
        bool m_has_horzAnchor_attr ;
        ST_HAnchor* m_horzAnchor_attr ;
        bool m_has_tblpXSpec_attr ;
        ns_s::ST_XAlign* m_tblpXSpec_attr ;
        bool m_has_tblpX_attr ;
        ST_SignedTwipsMeasure* m_tblpX_attr ;
        bool m_has_tblpYSpec_attr ;
        ns_s::ST_YAlign* m_tblpYSpec_attr ;
        bool m_has_tblpY_attr ;
        ST_SignedTwipsMeasure* m_tblpY_attr ;

    }

    class CT_TblCellMar : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_TblWidth* mutable_top();
        const CT_TblWidth& top() const;
        bool has_start() const;
        CT_TblWidth* mutable_start();
        const CT_TblWidth& start() const;
        bool has_left() const;
        CT_TblWidth* mutable_left();
        const CT_TblWidth& left() const;
        bool has_bottom() const;
        CT_TblWidth* mutable_bottom();
        const CT_TblWidth& bottom() const;
        bool has_end() const;
        CT_TblWidth* mutable_end();
        const CT_TblWidth& end() const;
        bool has_right() const;
        CT_TblWidth* mutable_right();
        const CT_TblWidth& right() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblCellMar& default_instance() const;

    private:
        bool m_has_top ;
        CT_TblWidth* m_top ;
        bool m_has_start ;
        CT_TblWidth* m_start ;
        bool m_has_left ;
        CT_TblWidth* m_left ;
        bool m_has_bottom ;
        CT_TblWidth* m_bottom ;
        bool m_has_end ;
        CT_TblWidth* m_end ;
        bool m_has_right ;
        CT_TblWidth* m_right ;
        static CT_TblCellMar* default_instance_ ;

    }

    class CT_TblBorders : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_Border* mutable_top();
        const CT_Border& top() const;
        bool has_start() const;
        CT_Border* mutable_start();
        const CT_Border& start() const;
        bool has_left() const;
        CT_Border* mutable_left();
        const CT_Border& left() const;
        bool has_bottom() const;
        CT_Border* mutable_bottom();
        const CT_Border& bottom() const;
        bool has_end() const;
        CT_Border* mutable_end();
        const CT_Border& end() const;
        bool has_right() const;
        CT_Border* mutable_right();
        const CT_Border& right() const;
        bool has_insideH() const;
        CT_Border* mutable_insideH();
        const CT_Border& insideH() const;
        bool has_insideV() const;
        CT_Border* mutable_insideV();
        const CT_Border& insideV() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblBorders& default_instance() const;

    private:
        bool m_has_top ;
        CT_Border* m_top ;
        bool m_has_start ;
        CT_Border* m_start ;
        bool m_has_left ;
        CT_Border* m_left ;
        bool m_has_bottom ;
        CT_Border* m_bottom ;
        bool m_has_end ;
        CT_Border* m_end ;
        bool m_has_right ;
        CT_Border* m_right ;
        bool m_has_insideH ;
        CT_Border* m_insideH ;
        bool m_has_insideV ;
        CT_Border* m_insideV ;
        static CT_TblBorders* default_instance_ ;

    }

    class CT_TblPrBase : public XSD::ComplexType{
    public:
        bool has_tblStyle() const;
        CT_String* mutable_tblStyle();
        const CT_String& tblStyle() const;
        bool has_tblpPr() const;
        CT_TblPPr* mutable_tblpPr();
        const CT_TblPPr& tblpPr() const;
        bool has_tblOverlap() const;
        CT_TblOverlap* mutable_tblOverlap();
        const CT_TblOverlap& tblOverlap() const;
        bool has_bidiVisual() const;
        CT_OnOff* mutable_bidiVisual();
        const CT_OnOff& bidiVisual() const;
        bool has_tblStyleRowBandSize() const;
        CT_DecimalNumber* mutable_tblStyleRowBandSize();
        const CT_DecimalNumber& tblStyleRowBandSize() const;
        bool has_tblStyleColBandSize() const;
        CT_DecimalNumber* mutable_tblStyleColBandSize();
        const CT_DecimalNumber& tblStyleColBandSize() const;
        bool has_tblW() const;
        CT_TblWidth* mutable_tblW();
        const CT_TblWidth& tblW() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& jc() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& tblCellSpacing() const;
        bool has_tblInd() const;
        CT_TblWidth* mutable_tblInd();
        const CT_TblWidth& tblInd() const;
        bool has_tblBorders() const;
        CT_TblBorders* mutable_tblBorders();
        const CT_TblBorders& tblBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tblLayout() const;
        CT_TblLayoutType* mutable_tblLayout();
        const CT_TblLayoutType& tblLayout() const;
        bool has_tblCellMar() const;
        CT_TblCellMar* mutable_tblCellMar();
        const CT_TblCellMar& tblCellMar() const;
        bool has_tblLook() const;
        CT_TblLook* mutable_tblLook();
        const CT_TblLook& tblLook() const;
        bool has_tblCaption() const;
        CT_String* mutable_tblCaption();
        const CT_String& tblCaption() const;
        bool has_tblDescription() const;
        CT_String* mutable_tblDescription();
        const CT_String& tblDescription() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPrBase& default_instance() const;

    private:
        bool m_has_tblStyle ;
        CT_String* m_tblStyle ;
        bool m_has_tblpPr ;
        CT_TblPPr* m_tblpPr ;
        bool m_has_tblOverlap ;
        CT_TblOverlap* m_tblOverlap ;
        bool m_has_bidiVisual ;
        CT_OnOff* m_bidiVisual ;
        bool m_has_tblStyleRowBandSize ;
        CT_DecimalNumber* m_tblStyleRowBandSize ;
        bool m_has_tblStyleColBandSize ;
        CT_DecimalNumber* m_tblStyleColBandSize ;
        bool m_has_tblW ;
        CT_TblWidth* m_tblW ;
        bool m_has_jc ;
        CT_JcTable* m_jc ;
        bool m_has_tblCellSpacing ;
        CT_TblWidth* m_tblCellSpacing ;
        bool m_has_tblInd ;
        CT_TblWidth* m_tblInd ;
        bool m_has_tblBorders ;
        CT_TblBorders* m_tblBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tblLayout ;
        CT_TblLayoutType* m_tblLayout ;
        bool m_has_tblCellMar ;
        CT_TblCellMar* m_tblCellMar ;
        bool m_has_tblLook ;
        CT_TblLook* m_tblLook ;
        bool m_has_tblCaption ;
        CT_String* m_tblCaption ;
        bool m_has_tblDescription ;
        CT_String* m_tblDescription ;
        static CT_TblPrBase* default_instance_ ;

    }

    class CT_TblPr : public XSD::ComplexType{
    public:
        bool has_tblStyle() const;
        CT_String* mutable_tblStyle();
        const CT_String& tblStyle() const;
        bool has_tblpPr() const;
        CT_TblPPr* mutable_tblpPr();
        const CT_TblPPr& tblpPr() const;
        bool has_tblOverlap() const;
        CT_TblOverlap* mutable_tblOverlap();
        const CT_TblOverlap& tblOverlap() const;
        bool has_bidiVisual() const;
        CT_OnOff* mutable_bidiVisual();
        const CT_OnOff& bidiVisual() const;
        bool has_tblStyleRowBandSize() const;
        CT_DecimalNumber* mutable_tblStyleRowBandSize();
        const CT_DecimalNumber& tblStyleRowBandSize() const;
        bool has_tblStyleColBandSize() const;
        CT_DecimalNumber* mutable_tblStyleColBandSize();
        const CT_DecimalNumber& tblStyleColBandSize() const;
        bool has_tblW() const;
        CT_TblWidth* mutable_tblW();
        const CT_TblWidth& tblW() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& jc() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& tblCellSpacing() const;
        bool has_tblInd() const;
        CT_TblWidth* mutable_tblInd();
        const CT_TblWidth& tblInd() const;
        bool has_tblBorders() const;
        CT_TblBorders* mutable_tblBorders();
        const CT_TblBorders& tblBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tblLayout() const;
        CT_TblLayoutType* mutable_tblLayout();
        const CT_TblLayoutType& tblLayout() const;
        bool has_tblCellMar() const;
        CT_TblCellMar* mutable_tblCellMar();
        const CT_TblCellMar& tblCellMar() const;
        bool has_tblLook() const;
        CT_TblLook* mutable_tblLook();
        const CT_TblLook& tblLook() const;
        bool has_tblCaption() const;
        CT_String* mutable_tblCaption();
        const CT_String& tblCaption() const;
        bool has_tblDescription() const;
        CT_String* mutable_tblDescription();
        const CT_String& tblDescription() const;
        bool has_tblPrChange() const;
        CT_TblPrChange* mutable_tblPrChange();
        const CT_TblPrChange& tblPrChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPr& default_instance() const;

    private:
        bool m_has_tblStyle ;
        CT_String* m_tblStyle ;
        bool m_has_tblpPr ;
        CT_TblPPr* m_tblpPr ;
        bool m_has_tblOverlap ;
        CT_TblOverlap* m_tblOverlap ;
        bool m_has_bidiVisual ;
        CT_OnOff* m_bidiVisual ;
        bool m_has_tblStyleRowBandSize ;
        CT_DecimalNumber* m_tblStyleRowBandSize ;
        bool m_has_tblStyleColBandSize ;
        CT_DecimalNumber* m_tblStyleColBandSize ;
        bool m_has_tblW ;
        CT_TblWidth* m_tblW ;
        bool m_has_jc ;
        CT_JcTable* m_jc ;
        bool m_has_tblCellSpacing ;
        CT_TblWidth* m_tblCellSpacing ;
        bool m_has_tblInd ;
        CT_TblWidth* m_tblInd ;
        bool m_has_tblBorders ;
        CT_TblBorders* m_tblBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tblLayout ;
        CT_TblLayoutType* m_tblLayout ;
        bool m_has_tblCellMar ;
        CT_TblCellMar* m_tblCellMar ;
        bool m_has_tblLook ;
        CT_TblLook* m_tblLook ;
        bool m_has_tblCaption ;
        CT_String* m_tblCaption ;
        bool m_has_tblDescription ;
        CT_String* m_tblDescription ;
        bool m_has_tblPrChange ;
        CT_TblPrChange* m_tblPrChange ;
        static CT_TblPr* default_instance_ ;

    }

    class CT_TblPrExBase : public XSD::ComplexType{
    public:
        bool has_tblW() const;
        CT_TblWidth* mutable_tblW();
        const CT_TblWidth& tblW() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& jc() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& tblCellSpacing() const;
        bool has_tblInd() const;
        CT_TblWidth* mutable_tblInd();
        const CT_TblWidth& tblInd() const;
        bool has_tblBorders() const;
        CT_TblBorders* mutable_tblBorders();
        const CT_TblBorders& tblBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tblLayout() const;
        CT_TblLayoutType* mutable_tblLayout();
        const CT_TblLayoutType& tblLayout() const;
        bool has_tblCellMar() const;
        CT_TblCellMar* mutable_tblCellMar();
        const CT_TblCellMar& tblCellMar() const;
        bool has_tblLook() const;
        CT_TblLook* mutable_tblLook();
        const CT_TblLook& tblLook() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPrExBase& default_instance() const;

    private:
        bool m_has_tblW ;
        CT_TblWidth* m_tblW ;
        bool m_has_jc ;
        CT_JcTable* m_jc ;
        bool m_has_tblCellSpacing ;
        CT_TblWidth* m_tblCellSpacing ;
        bool m_has_tblInd ;
        CT_TblWidth* m_tblInd ;
        bool m_has_tblBorders ;
        CT_TblBorders* m_tblBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tblLayout ;
        CT_TblLayoutType* m_tblLayout ;
        bool m_has_tblCellMar ;
        CT_TblCellMar* m_tblCellMar ;
        bool m_has_tblLook ;
        CT_TblLook* m_tblLook ;
        static CT_TblPrExBase* default_instance_ ;

    }

    class CT_TblPrEx : public XSD::ComplexType{
    public:
        bool has_tblW() const;
        CT_TblWidth* mutable_tblW();
        const CT_TblWidth& tblW() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& jc() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& tblCellSpacing() const;
        bool has_tblInd() const;
        CT_TblWidth* mutable_tblInd();
        const CT_TblWidth& tblInd() const;
        bool has_tblBorders() const;
        CT_TblBorders* mutable_tblBorders();
        const CT_TblBorders& tblBorders() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& shd() const;
        bool has_tblLayout() const;
        CT_TblLayoutType* mutable_tblLayout();
        const CT_TblLayoutType& tblLayout() const;
        bool has_tblCellMar() const;
        CT_TblCellMar* mutable_tblCellMar();
        const CT_TblCellMar& tblCellMar() const;
        bool has_tblLook() const;
        CT_TblLook* mutable_tblLook();
        const CT_TblLook& tblLook() const;
        bool has_tblPrExChange() const;
        CT_TblPrExChange* mutable_tblPrExChange();
        const CT_TblPrExChange& tblPrExChange() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblPrEx& default_instance() const;

    private:
        bool m_has_tblW ;
        CT_TblWidth* m_tblW ;
        bool m_has_jc ;
        CT_JcTable* m_jc ;
        bool m_has_tblCellSpacing ;
        CT_TblWidth* m_tblCellSpacing ;
        bool m_has_tblInd ;
        CT_TblWidth* m_tblInd ;
        bool m_has_tblBorders ;
        CT_TblBorders* m_tblBorders ;
        bool m_has_shd ;
        CT_Shd* m_shd ;
        bool m_has_tblLayout ;
        CT_TblLayoutType* m_tblLayout ;
        bool m_has_tblCellMar ;
        CT_TblCellMar* m_tblCellMar ;
        bool m_has_tblLook ;
        CT_TblLook* m_tblLook ;
        bool m_has_tblPrExChange ;
        CT_TblPrExChange* m_tblPrExChange ;
        static CT_TblPrEx* default_instance_ ;

    }

    class CT_Tbl : public XSD::ComplexType{
    public:
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        bool has_tblPr() const;
        CT_TblPr* mutable_tblPr();
        const CT_TblPr& tblPr() const;
        bool has_tblGrid() const;
        CT_TblGrid* mutable_tblGrid();
        const CT_TblGrid& tblGrid() const;
        CT_Row* add_tr();
        CT_CustomXmlRow* add_customXml();
        CT_SdtRow* add_sdt();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Tbl& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_tblPr ;
        CT_TblPr* m_tblPr ;
        bool m_has_tblGrid ;
        CT_TblGrid* m_tblGrid ;
        vector<ChildGroup_2*> m_childGroupList_2 ;
        static CT_Tbl* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;

        private:
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;

        }

        class ChildGroup_2{
        public:
            bool has_tr() const;
            CT_Row* mutable_tr();
            const CT_Row& tr() const;
            bool has_customXml() const;
            CT_CustomXmlRow* mutable_customXml();
            const CT_CustomXmlRow& customXml() const;
            bool has_sdt() const;
            CT_SdtRow* mutable_sdt();
            const CT_SdtRow& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_tr ;
            CT_Row* m_tr ;
            bool m_has_customXml ;
            CT_CustomXmlRow* m_customXml ;
            bool m_has_sdt ;
            CT_SdtRow* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_TblLook : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblLook& default_instance() const;
        bool has_firstRow_attr() const;
        void set_firstRow_attr(const ns_s::ST_OnOff& _firstRow_attr );
        const ns_s::ST_OnOff& firstRow_attr() const;
        bool has_lastRow_attr() const;
        void set_lastRow_attr(const ns_s::ST_OnOff& _lastRow_attr );
        const ns_s::ST_OnOff& lastRow_attr() const;
        bool has_firstColumn_attr() const;
        void set_firstColumn_attr(const ns_s::ST_OnOff& _firstColumn_attr );
        const ns_s::ST_OnOff& firstColumn_attr() const;
        bool has_lastColumn_attr() const;
        void set_lastColumn_attr(const ns_s::ST_OnOff& _lastColumn_attr );
        const ns_s::ST_OnOff& lastColumn_attr() const;
        bool has_noHBand_attr() const;
        void set_noHBand_attr(const ns_s::ST_OnOff& _noHBand_attr );
        const ns_s::ST_OnOff& noHBand_attr() const;
        bool has_noVBand_attr() const;
        void set_noVBand_attr(const ns_s::ST_OnOff& _noVBand_attr );
        const ns_s::ST_OnOff& noVBand_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ShortHexNumber& _val_attr );
        const ST_ShortHexNumber& val_attr() const;

    private:
        static CT_TblLook* default_instance_ ;
        bool m_has_firstRow_attr ;
        ns_s::ST_OnOff* m_firstRow_attr ;
        bool m_has_lastRow_attr ;
        ns_s::ST_OnOff* m_lastRow_attr ;
        bool m_has_firstColumn_attr ;
        ns_s::ST_OnOff* m_firstColumn_attr ;
        bool m_has_lastColumn_attr ;
        ns_s::ST_OnOff* m_lastColumn_attr ;
        bool m_has_noHBand_attr ;
        ns_s::ST_OnOff* m_noHBand_attr ;
        bool m_has_noVBand_attr ;
        ns_s::ST_OnOff* m_noVBand_attr ;
        bool m_has_val_attr ;
        ST_ShortHexNumber* m_val_attr ;

    }

    class CT_FtnPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FtnPos& _val_attr );
        const ST_FtnPos& val_attr() const;

    private:
        static CT_FtnPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_FtnPos* m_val_attr ;

    }

    class CT_EdnPos : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EdnPos& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_EdnPos& _val_attr );
        const ST_EdnPos& val_attr() const;

    private:
        static CT_EdnPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_EdnPos* m_val_attr ;

    }

    class CT_NumFmt : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumFmt& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_NumberFormat& _val_attr );
        const ST_NumberFormat& val_attr() const;
        bool has_format_attr() const;
        void set_format_attr(const ns_s::ST_String& _format_attr );
        const ns_s::ST_String& format_attr() const;

    private:
        static CT_NumFmt* default_instance_ ;
        bool m_has_val_attr ;
        ST_NumberFormat* m_val_attr ;
        bool m_has_format_attr ;
        ns_s::ST_String* m_format_attr ;

    }

    class CT_NumRestart : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumRestart& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_RestartNumber& _val_attr );
        const ST_RestartNumber& val_attr() const;

    private:
        static CT_NumRestart* default_instance_ ;
        bool m_has_val_attr ;
        ST_RestartNumber* m_val_attr ;

    }

    class CT_FtnEdnRef : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnEdnRef& default_instance() const;
        bool has_customMarkFollows_attr() const;
        void set_customMarkFollows_attr(const ns_s::ST_OnOff& _customMarkFollows_attr );
        const ns_s::ST_OnOff& customMarkFollows_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        static CT_FtnEdnRef* default_instance_ ;
        bool m_has_customMarkFollows_attr ;
        ns_s::ST_OnOff* m_customMarkFollows_attr ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_FtnEdnSepRef : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnEdnSepRef& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        static CT_FtnEdnSepRef* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_FtnEdn : public XSD::ComplexType{
    public:
        CT_CustomXmlBlock* add_customXml();
        CT_SdtBlock* add_sdt();
        CT_P* add_p();
        CT_Tbl* add_tbl();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_AltChunk* add_altChunk();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnEdn& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_FtnEdn& _type_attr );
        const ST_FtnEdn& type_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_FtnEdn* default_instance_ ;
        bool m_has_type_attr ;
        ST_FtnEdn* m_type_attr ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlBlock* mutable_customXml();
            const CT_CustomXmlBlock& customXml() const;
            bool has_sdt() const;
            CT_SdtBlock* mutable_sdt();
            const CT_SdtBlock& sdt() const;
            bool has_p() const;
            CT_P* mutable_p();
            const CT_P& p() const;
            bool has_tbl() const;
            CT_Tbl* mutable_tbl();
            const CT_Tbl& tbl() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_altChunk() const;
            CT_AltChunk* mutable_altChunk();
            const CT_AltChunk& altChunk() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlBlock* m_customXml ;
            bool m_has_sdt ;
            CT_SdtBlock* m_sdt ;
            bool m_has_p ;
            CT_P* m_p ;
            bool m_has_tbl ;
            CT_Tbl* m_tbl ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_altChunk ;
            CT_AltChunk* m_altChunk ;

        }


    }

    class CT_FtnProps : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_FtnPos* mutable_pos();
        const CT_FtnPos& pos() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_numStart() const;
        CT_DecimalNumber* mutable_numStart();
        const CT_DecimalNumber& numStart() const;
        bool has_numRestart() const;
        CT_NumRestart* mutable_numRestart();
        const CT_NumRestart& numRestart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnProps& default_instance() const;

    private:
        bool m_has_pos ;
        CT_FtnPos* m_pos ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_numStart ;
        CT_DecimalNumber* m_numStart ;
        bool m_has_numRestart ;
        CT_NumRestart* m_numRestart ;
        static CT_FtnProps* default_instance_ ;

    }

    class CT_EdnProps : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_EdnPos* mutable_pos();
        const CT_EdnPos& pos() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_numStart() const;
        CT_DecimalNumber* mutable_numStart();
        const CT_DecimalNumber& numStart() const;
        bool has_numRestart() const;
        CT_NumRestart* mutable_numRestart();
        const CT_NumRestart& numRestart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EdnProps& default_instance() const;

    private:
        bool m_has_pos ;
        CT_EdnPos* m_pos ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_numStart ;
        CT_DecimalNumber* m_numStart ;
        bool m_has_numRestart ;
        CT_NumRestart* m_numRestart ;
        static CT_EdnProps* default_instance_ ;

    }

    class CT_FtnDocProps : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_FtnPos* mutable_pos();
        const CT_FtnPos& pos() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_numStart() const;
        CT_DecimalNumber* mutable_numStart();
        const CT_DecimalNumber& numStart() const;
        bool has_numRestart() const;
        CT_NumRestart* mutable_numRestart();
        const CT_NumRestart& numRestart() const;
        bool has_footnote() const;
        CT_FtnEdnSepRef* mutable_footnote();
        const CT_FtnEdnSepRef& footnote() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FtnDocProps& default_instance() const;

    private:
        bool m_has_pos ;
        CT_FtnPos* m_pos ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_numStart ;
        CT_DecimalNumber* m_numStart ;
        bool m_has_numRestart ;
        CT_NumRestart* m_numRestart ;
        bool m_has_footnote ;
        CT_FtnEdnSepRef* m_footnote ;
        static CT_FtnDocProps* default_instance_ ;

    }

    class CT_EdnDocProps : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_EdnPos* mutable_pos();
        const CT_EdnPos& pos() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_numStart() const;
        CT_DecimalNumber* mutable_numStart();
        const CT_DecimalNumber& numStart() const;
        bool has_numRestart() const;
        CT_NumRestart* mutable_numRestart();
        const CT_NumRestart& numRestart() const;
        bool has_endnote() const;
        CT_FtnEdnSepRef* mutable_endnote();
        const CT_FtnEdnSepRef& endnote() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EdnDocProps& default_instance() const;

    private:
        bool m_has_pos ;
        CT_EdnPos* m_pos ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_numStart ;
        CT_DecimalNumber* m_numStart ;
        bool m_has_numRestart ;
        CT_NumRestart* m_numRestart ;
        bool m_has_endnote ;
        CT_FtnEdnSepRef* m_endnote ;
        static CT_EdnDocProps* default_instance_ ;

    }

    class CT_RecipientData : public XSD::ComplexType{
    public:
        bool has_active() const;
        CT_OnOff* mutable_active();
        const CT_OnOff& active() const;
        bool has_column() const;
        CT_DecimalNumber* mutable_column();
        const CT_DecimalNumber& column() const;
        bool has_uniqueTag() const;
        CT_Base64Binary* mutable_uniqueTag();
        const CT_Base64Binary& uniqueTag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RecipientData& default_instance() const;

    private:
        bool m_has_active ;
        CT_OnOff* m_active ;
        bool m_has_column ;
        CT_DecimalNumber* m_column ;
        bool m_has_uniqueTag ;
        CT_Base64Binary* m_uniqueTag ;
        static CT_RecipientData* default_instance_ ;

    }

    class CT_Base64Binary : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Base64Binary& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const base64Binary& _val_attr );
        const base64Binary& val_attr() const;

    private:
        static CT_Base64Binary* default_instance_ ;
        bool m_has_val_attr ;
        base64Binary m_val_attr ;

    }

    class CT_Recipients : public XSD::ComplexType{
    public:
        bool has_recipientData() const;
        CT_RecipientData* mutable_recipientData();
        const CT_RecipientData& recipientData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Recipients& default_instance() const;

    private:
        bool m_has_recipientData ;
        CT_RecipientData* m_recipientData ;
        static CT_Recipients* default_instance_ ;

    }

    class CT_OdsoFieldMapData : public XSD::ComplexType{
    public:
        bool has_type() const;
        CT_MailMergeOdsoFMDFieldType* mutable_type();
        const CT_MailMergeOdsoFMDFieldType& type() const;
        bool has_name() const;
        CT_String* mutable_name();
        const CT_String& name() const;
        bool has_mappedName() const;
        CT_String* mutable_mappedName();
        const CT_String& mappedName() const;
        bool has_column() const;
        CT_DecimalNumber* mutable_column();
        const CT_DecimalNumber& column() const;
        bool has_lid() const;
        CT_Lang* mutable_lid();
        const CT_Lang& lid() const;
        bool has_dynamicAddress() const;
        CT_OnOff* mutable_dynamicAddress();
        const CT_OnOff& dynamicAddress() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OdsoFieldMapData& default_instance() const;

    private:
        bool m_has_type ;
        CT_MailMergeOdsoFMDFieldType* m_type ;
        bool m_has_name ;
        CT_String* m_name ;
        bool m_has_mappedName ;
        CT_String* m_mappedName ;
        bool m_has_column ;
        CT_DecimalNumber* m_column ;
        bool m_has_lid ;
        CT_Lang* m_lid ;
        bool m_has_dynamicAddress ;
        CT_OnOff* m_dynamicAddress ;
        static CT_OdsoFieldMapData* default_instance_ ;

    }

    class CT_MailMergeSourceType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMergeSourceType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MailMergeSourceType& _val_attr );
        const ST_MailMergeSourceType& val_attr() const;

    private:
        static CT_MailMergeSourceType* default_instance_ ;
        bool m_has_val_attr ;
        ST_MailMergeSourceType* m_val_attr ;

    }

    class CT_Odso : public XSD::ComplexType{
    public:
        bool has_udl() const;
        CT_String* mutable_udl();
        const CT_String& udl() const;
        bool has_table() const;
        CT_String* mutable_table();
        const CT_String& table() const;
        bool has_src() const;
        CT_Rel* mutable_src();
        const CT_Rel& src() const;
        bool has_colDelim() const;
        CT_DecimalNumber* mutable_colDelim();
        const CT_DecimalNumber& colDelim() const;
        bool has_type() const;
        CT_MailMergeSourceType* mutable_type();
        const CT_MailMergeSourceType& type() const;
        bool has_fHdr() const;
        CT_OnOff* mutable_fHdr();
        const CT_OnOff& fHdr() const;
        bool has_fieldMapData() const;
        CT_OdsoFieldMapData* mutable_fieldMapData();
        const CT_OdsoFieldMapData& fieldMapData() const;
        bool has_recipientData() const;
        CT_Rel* mutable_recipientData();
        const CT_Rel& recipientData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Odso& default_instance() const;

    private:
        bool m_has_udl ;
        CT_String* m_udl ;
        bool m_has_table ;
        CT_String* m_table ;
        bool m_has_src ;
        CT_Rel* m_src ;
        bool m_has_colDelim ;
        CT_DecimalNumber* m_colDelim ;
        bool m_has_type ;
        CT_MailMergeSourceType* m_type ;
        bool m_has_fHdr ;
        CT_OnOff* m_fHdr ;
        bool m_has_fieldMapData ;
        CT_OdsoFieldMapData* m_fieldMapData ;
        bool m_has_recipientData ;
        CT_Rel* m_recipientData ;
        static CT_Odso* default_instance_ ;

    }

    class CT_MailMerge : public XSD::ComplexType{
    public:
        bool has_mainDocumentType() const;
        CT_MailMergeDocType* mutable_mainDocumentType();
        const CT_MailMergeDocType& mainDocumentType() const;
        bool has_linkToQuery() const;
        CT_OnOff* mutable_linkToQuery();
        const CT_OnOff& linkToQuery() const;
        bool has_dataType() const;
        CT_MailMergeDataType* mutable_dataType();
        const CT_MailMergeDataType& dataType() const;
        bool has_connectString() const;
        CT_String* mutable_connectString();
        const CT_String& connectString() const;
        bool has_query() const;
        CT_String* mutable_query();
        const CT_String& query() const;
        bool has_dataSource() const;
        CT_Rel* mutable_dataSource();
        const CT_Rel& dataSource() const;
        bool has_headerSource() const;
        CT_Rel* mutable_headerSource();
        const CT_Rel& headerSource() const;
        bool has_doNotSuppressBlankLines() const;
        CT_OnOff* mutable_doNotSuppressBlankLines();
        const CT_OnOff& doNotSuppressBlankLines() const;
        bool has_destination() const;
        CT_MailMergeDest* mutable_destination();
        const CT_MailMergeDest& destination() const;
        bool has_addressFieldName() const;
        CT_String* mutable_addressFieldName();
        const CT_String& addressFieldName() const;
        bool has_mailSubject() const;
        CT_String* mutable_mailSubject();
        const CT_String& mailSubject() const;
        bool has_mailAsAttachment() const;
        CT_OnOff* mutable_mailAsAttachment();
        const CT_OnOff& mailAsAttachment() const;
        bool has_viewMergedData() const;
        CT_OnOff* mutable_viewMergedData();
        const CT_OnOff& viewMergedData() const;
        bool has_activeRecord() const;
        CT_DecimalNumber* mutable_activeRecord();
        const CT_DecimalNumber& activeRecord() const;
        bool has_checkErrors() const;
        CT_DecimalNumber* mutable_checkErrors();
        const CT_DecimalNumber& checkErrors() const;
        bool has_odso() const;
        CT_Odso* mutable_odso();
        const CT_Odso& odso() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MailMerge& default_instance() const;

    private:
        bool m_has_mainDocumentType ;
        CT_MailMergeDocType* m_mainDocumentType ;
        bool m_has_linkToQuery ;
        CT_OnOff* m_linkToQuery ;
        bool m_has_dataType ;
        CT_MailMergeDataType* m_dataType ;
        bool m_has_connectString ;
        CT_String* m_connectString ;
        bool m_has_query ;
        CT_String* m_query ;
        bool m_has_dataSource ;
        CT_Rel* m_dataSource ;
        bool m_has_headerSource ;
        CT_Rel* m_headerSource ;
        bool m_has_doNotSuppressBlankLines ;
        CT_OnOff* m_doNotSuppressBlankLines ;
        bool m_has_destination ;
        CT_MailMergeDest* m_destination ;
        bool m_has_addressFieldName ;
        CT_String* m_addressFieldName ;
        bool m_has_mailSubject ;
        CT_String* m_mailSubject ;
        bool m_has_mailAsAttachment ;
        CT_OnOff* m_mailAsAttachment ;
        bool m_has_viewMergedData ;
        CT_OnOff* m_viewMergedData ;
        bool m_has_activeRecord ;
        CT_DecimalNumber* m_activeRecord ;
        bool m_has_checkErrors ;
        CT_DecimalNumber* m_checkErrors ;
        bool m_has_odso ;
        CT_Odso* m_odso ;
        static CT_MailMerge* default_instance_ ;

    }

    class CT_TargetScreenSz : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TargetScreenSz& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TargetScreenSz& _val_attr );
        const ST_TargetScreenSz& val_attr() const;

    private:
        static CT_TargetScreenSz* default_instance_ ;
        bool m_has_val_attr ;
        ST_TargetScreenSz* m_val_attr ;

    }

    class CT_Compat : public XSD::ComplexType{
    public:
        bool has_useSingleBorderforContiguousCells() const;
        CT_OnOff* mutable_useSingleBorderforContiguousCells();
        const CT_OnOff& useSingleBorderforContiguousCells() const;
        bool has_wpJustification() const;
        CT_OnOff* mutable_wpJustification();
        const CT_OnOff& wpJustification() const;
        bool has_noTabHangInd() const;
        CT_OnOff* mutable_noTabHangInd();
        const CT_OnOff& noTabHangInd() const;
        bool has_noLeading() const;
        CT_OnOff* mutable_noLeading();
        const CT_OnOff& noLeading() const;
        bool has_spaceForUL() const;
        CT_OnOff* mutable_spaceForUL();
        const CT_OnOff& spaceForUL() const;
        bool has_noColumnBalance() const;
        CT_OnOff* mutable_noColumnBalance();
        const CT_OnOff& noColumnBalance() const;
        bool has_balanceSingleByteDoubleByteWidth() const;
        CT_OnOff* mutable_balanceSingleByteDoubleByteWidth();
        const CT_OnOff& balanceSingleByteDoubleByteWidth() const;
        bool has_noExtraLineSpacing() const;
        CT_OnOff* mutable_noExtraLineSpacing();
        const CT_OnOff& noExtraLineSpacing() const;
        bool has_doNotLeaveBackslashAlone() const;
        CT_OnOff* mutable_doNotLeaveBackslashAlone();
        const CT_OnOff& doNotLeaveBackslashAlone() const;
        bool has_ulTrailSpace() const;
        CT_OnOff* mutable_ulTrailSpace();
        const CT_OnOff& ulTrailSpace() const;
        bool has_doNotExpandShiftReturn() const;
        CT_OnOff* mutable_doNotExpandShiftReturn();
        const CT_OnOff& doNotExpandShiftReturn() const;
        bool has_spacingInWholePoints() const;
        CT_OnOff* mutable_spacingInWholePoints();
        const CT_OnOff& spacingInWholePoints() const;
        bool has_lineWrapLikeWord6() const;
        CT_OnOff* mutable_lineWrapLikeWord6();
        const CT_OnOff& lineWrapLikeWord6() const;
        bool has_printBodyTextBeforeHeader() const;
        CT_OnOff* mutable_printBodyTextBeforeHeader();
        const CT_OnOff& printBodyTextBeforeHeader() const;
        bool has_printColBlack() const;
        CT_OnOff* mutable_printColBlack();
        const CT_OnOff& printColBlack() const;
        bool has_wpSpaceWidth() const;
        CT_OnOff* mutable_wpSpaceWidth();
        const CT_OnOff& wpSpaceWidth() const;
        bool has_showBreaksInFrames() const;
        CT_OnOff* mutable_showBreaksInFrames();
        const CT_OnOff& showBreaksInFrames() const;
        bool has_subFontBySize() const;
        CT_OnOff* mutable_subFontBySize();
        const CT_OnOff& subFontBySize() const;
        bool has_suppressBottomSpacing() const;
        CT_OnOff* mutable_suppressBottomSpacing();
        const CT_OnOff& suppressBottomSpacing() const;
        bool has_suppressTopSpacing() const;
        CT_OnOff* mutable_suppressTopSpacing();
        const CT_OnOff& suppressTopSpacing() const;
        bool has_suppressSpacingAtTopOfPage() const;
        CT_OnOff* mutable_suppressSpacingAtTopOfPage();
        const CT_OnOff& suppressSpacingAtTopOfPage() const;
        bool has_suppressTopSpacingWP() const;
        CT_OnOff* mutable_suppressTopSpacingWP();
        const CT_OnOff& suppressTopSpacingWP() const;
        bool has_suppressSpBfAfterPgBrk() const;
        CT_OnOff* mutable_suppressSpBfAfterPgBrk();
        const CT_OnOff& suppressSpBfAfterPgBrk() const;
        bool has_swapBordersFacingPages() const;
        CT_OnOff* mutable_swapBordersFacingPages();
        const CT_OnOff& swapBordersFacingPages() const;
        bool has_convMailMergeEsc() const;
        CT_OnOff* mutable_convMailMergeEsc();
        const CT_OnOff& convMailMergeEsc() const;
        bool has_truncateFontHeightsLikeWP6() const;
        CT_OnOff* mutable_truncateFontHeightsLikeWP6();
        const CT_OnOff& truncateFontHeightsLikeWP6() const;
        bool has_mwSmallCaps() const;
        CT_OnOff* mutable_mwSmallCaps();
        const CT_OnOff& mwSmallCaps() const;
        bool has_usePrinterMetrics() const;
        CT_OnOff* mutable_usePrinterMetrics();
        const CT_OnOff& usePrinterMetrics() const;
        bool has_doNotSuppressParagraphBorders() const;
        CT_OnOff* mutable_doNotSuppressParagraphBorders();
        const CT_OnOff& doNotSuppressParagraphBorders() const;
        bool has_wrapTrailSpaces() const;
        CT_OnOff* mutable_wrapTrailSpaces();
        const CT_OnOff& wrapTrailSpaces() const;
        bool has_footnoteLayoutLikeWW8() const;
        CT_OnOff* mutable_footnoteLayoutLikeWW8();
        const CT_OnOff& footnoteLayoutLikeWW8() const;
        bool has_shapeLayoutLikeWW8() const;
        CT_OnOff* mutable_shapeLayoutLikeWW8();
        const CT_OnOff& shapeLayoutLikeWW8() const;
        bool has_alignTablesRowByRow() const;
        CT_OnOff* mutable_alignTablesRowByRow();
        const CT_OnOff& alignTablesRowByRow() const;
        bool has_forgetLastTabAlignment() const;
        CT_OnOff* mutable_forgetLastTabAlignment();
        const CT_OnOff& forgetLastTabAlignment() const;
        bool has_adjustLineHeightInTable() const;
        CT_OnOff* mutable_adjustLineHeightInTable();
        const CT_OnOff& adjustLineHeightInTable() const;
        bool has_autoSpaceLikeWord95() const;
        CT_OnOff* mutable_autoSpaceLikeWord95();
        const CT_OnOff& autoSpaceLikeWord95() const;
        bool has_noSpaceRaiseLower() const;
        CT_OnOff* mutable_noSpaceRaiseLower();
        const CT_OnOff& noSpaceRaiseLower() const;
        bool has_doNotUseHTMLParagraphAutoSpacing() const;
        CT_OnOff* mutable_doNotUseHTMLParagraphAutoSpacing();
        const CT_OnOff& doNotUseHTMLParagraphAutoSpacing() const;
        bool has_layoutRawTableWidth() const;
        CT_OnOff* mutable_layoutRawTableWidth();
        const CT_OnOff& layoutRawTableWidth() const;
        bool has_layoutTableRowsApart() const;
        CT_OnOff* mutable_layoutTableRowsApart();
        const CT_OnOff& layoutTableRowsApart() const;
        bool has_useWord97LineBreakRules() const;
        CT_OnOff* mutable_useWord97LineBreakRules();
        const CT_OnOff& useWord97LineBreakRules() const;
        bool has_doNotBreakWrappedTables() const;
        CT_OnOff* mutable_doNotBreakWrappedTables();
        const CT_OnOff& doNotBreakWrappedTables() const;
        bool has_doNotSnapToGridInCell() const;
        CT_OnOff* mutable_doNotSnapToGridInCell();
        const CT_OnOff& doNotSnapToGridInCell() const;
        bool has_selectFldWithFirstOrLastChar() const;
        CT_OnOff* mutable_selectFldWithFirstOrLastChar();
        const CT_OnOff& selectFldWithFirstOrLastChar() const;
        bool has_applyBreakingRules() const;
        CT_OnOff* mutable_applyBreakingRules();
        const CT_OnOff& applyBreakingRules() const;
        bool has_doNotWrapTextWithPunct() const;
        CT_OnOff* mutable_doNotWrapTextWithPunct();
        const CT_OnOff& doNotWrapTextWithPunct() const;
        bool has_doNotUseEastAsianBreakRules() const;
        CT_OnOff* mutable_doNotUseEastAsianBreakRules();
        const CT_OnOff& doNotUseEastAsianBreakRules() const;
        bool has_useWord2002TableStyleRules() const;
        CT_OnOff* mutable_useWord2002TableStyleRules();
        const CT_OnOff& useWord2002TableStyleRules() const;
        bool has_growAutofit() const;
        CT_OnOff* mutable_growAutofit();
        const CT_OnOff& growAutofit() const;
        bool has_useFELayout() const;
        CT_OnOff* mutable_useFELayout();
        const CT_OnOff& useFELayout() const;
        bool has_useNormalStyleForList() const;
        CT_OnOff* mutable_useNormalStyleForList();
        const CT_OnOff& useNormalStyleForList() const;
        bool has_doNotUseIndentAsNumberingTabStop() const;
        CT_OnOff* mutable_doNotUseIndentAsNumberingTabStop();
        const CT_OnOff& doNotUseIndentAsNumberingTabStop() const;
        bool has_useAltKinsokuLineBreakRules() const;
        CT_OnOff* mutable_useAltKinsokuLineBreakRules();
        const CT_OnOff& useAltKinsokuLineBreakRules() const;
        bool has_allowSpaceOfSameStyleInTable() const;
        CT_OnOff* mutable_allowSpaceOfSameStyleInTable();
        const CT_OnOff& allowSpaceOfSameStyleInTable() const;
        bool has_doNotSuppressIndentation() const;
        CT_OnOff* mutable_doNotSuppressIndentation();
        const CT_OnOff& doNotSuppressIndentation() const;
        bool has_doNotAutofitConstrainedTables() const;
        CT_OnOff* mutable_doNotAutofitConstrainedTables();
        const CT_OnOff& doNotAutofitConstrainedTables() const;
        bool has_autofitToFirstFixedWidthCell() const;
        CT_OnOff* mutable_autofitToFirstFixedWidthCell();
        const CT_OnOff& autofitToFirstFixedWidthCell() const;
        bool has_underlineTabInNumList() const;
        CT_OnOff* mutable_underlineTabInNumList();
        const CT_OnOff& underlineTabInNumList() const;
        bool has_displayHangulFixedWidth() const;
        CT_OnOff* mutable_displayHangulFixedWidth();
        const CT_OnOff& displayHangulFixedWidth() const;
        bool has_splitPgBreakAndParaMark() const;
        CT_OnOff* mutable_splitPgBreakAndParaMark();
        const CT_OnOff& splitPgBreakAndParaMark() const;
        bool has_doNotVertAlignCellWithSp() const;
        CT_OnOff* mutable_doNotVertAlignCellWithSp();
        const CT_OnOff& doNotVertAlignCellWithSp() const;
        bool has_doNotBreakConstrainedForcedTable() const;
        CT_OnOff* mutable_doNotBreakConstrainedForcedTable();
        const CT_OnOff& doNotBreakConstrainedForcedTable() const;
        bool has_doNotVertAlignInTxbx() const;
        CT_OnOff* mutable_doNotVertAlignInTxbx();
        const CT_OnOff& doNotVertAlignInTxbx() const;
        bool has_useAnsiKerningPairs() const;
        CT_OnOff* mutable_useAnsiKerningPairs();
        const CT_OnOff& useAnsiKerningPairs() const;
        bool has_cachedColBalance() const;
        CT_OnOff* mutable_cachedColBalance();
        const CT_OnOff& cachedColBalance() const;
        bool has_compatSetting() const;
        CT_CompatSetting* mutable_compatSetting();
        const CT_CompatSetting& compatSetting() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Compat& default_instance() const;

    private:
        bool m_has_useSingleBorderforContiguousCells ;
        CT_OnOff* m_useSingleBorderforContiguousCells ;
        bool m_has_wpJustification ;
        CT_OnOff* m_wpJustification ;
        bool m_has_noTabHangInd ;
        CT_OnOff* m_noTabHangInd ;
        bool m_has_noLeading ;
        CT_OnOff* m_noLeading ;
        bool m_has_spaceForUL ;
        CT_OnOff* m_spaceForUL ;
        bool m_has_noColumnBalance ;
        CT_OnOff* m_noColumnBalance ;
        bool m_has_balanceSingleByteDoubleByteWidth ;
        CT_OnOff* m_balanceSingleByteDoubleByteWidth ;
        bool m_has_noExtraLineSpacing ;
        CT_OnOff* m_noExtraLineSpacing ;
        bool m_has_doNotLeaveBackslashAlone ;
        CT_OnOff* m_doNotLeaveBackslashAlone ;
        bool m_has_ulTrailSpace ;
        CT_OnOff* m_ulTrailSpace ;
        bool m_has_doNotExpandShiftReturn ;
        CT_OnOff* m_doNotExpandShiftReturn ;
        bool m_has_spacingInWholePoints ;
        CT_OnOff* m_spacingInWholePoints ;
        bool m_has_lineWrapLikeWord6 ;
        CT_OnOff* m_lineWrapLikeWord6 ;
        bool m_has_printBodyTextBeforeHeader ;
        CT_OnOff* m_printBodyTextBeforeHeader ;
        bool m_has_printColBlack ;
        CT_OnOff* m_printColBlack ;
        bool m_has_wpSpaceWidth ;
        CT_OnOff* m_wpSpaceWidth ;
        bool m_has_showBreaksInFrames ;
        CT_OnOff* m_showBreaksInFrames ;
        bool m_has_subFontBySize ;
        CT_OnOff* m_subFontBySize ;
        bool m_has_suppressBottomSpacing ;
        CT_OnOff* m_suppressBottomSpacing ;
        bool m_has_suppressTopSpacing ;
        CT_OnOff* m_suppressTopSpacing ;
        bool m_has_suppressSpacingAtTopOfPage ;
        CT_OnOff* m_suppressSpacingAtTopOfPage ;
        bool m_has_suppressTopSpacingWP ;
        CT_OnOff* m_suppressTopSpacingWP ;
        bool m_has_suppressSpBfAfterPgBrk ;
        CT_OnOff* m_suppressSpBfAfterPgBrk ;
        bool m_has_swapBordersFacingPages ;
        CT_OnOff* m_swapBordersFacingPages ;
        bool m_has_convMailMergeEsc ;
        CT_OnOff* m_convMailMergeEsc ;
        bool m_has_truncateFontHeightsLikeWP6 ;
        CT_OnOff* m_truncateFontHeightsLikeWP6 ;
        bool m_has_mwSmallCaps ;
        CT_OnOff* m_mwSmallCaps ;
        bool m_has_usePrinterMetrics ;
        CT_OnOff* m_usePrinterMetrics ;
        bool m_has_doNotSuppressParagraphBorders ;
        CT_OnOff* m_doNotSuppressParagraphBorders ;
        bool m_has_wrapTrailSpaces ;
        CT_OnOff* m_wrapTrailSpaces ;
        bool m_has_footnoteLayoutLikeWW8 ;
        CT_OnOff* m_footnoteLayoutLikeWW8 ;
        bool m_has_shapeLayoutLikeWW8 ;
        CT_OnOff* m_shapeLayoutLikeWW8 ;
        bool m_has_alignTablesRowByRow ;
        CT_OnOff* m_alignTablesRowByRow ;
        bool m_has_forgetLastTabAlignment ;
        CT_OnOff* m_forgetLastTabAlignment ;
        bool m_has_adjustLineHeightInTable ;
        CT_OnOff* m_adjustLineHeightInTable ;
        bool m_has_autoSpaceLikeWord95 ;
        CT_OnOff* m_autoSpaceLikeWord95 ;
        bool m_has_noSpaceRaiseLower ;
        CT_OnOff* m_noSpaceRaiseLower ;
        bool m_has_doNotUseHTMLParagraphAutoSpacing ;
        CT_OnOff* m_doNotUseHTMLParagraphAutoSpacing ;
        bool m_has_layoutRawTableWidth ;
        CT_OnOff* m_layoutRawTableWidth ;
        bool m_has_layoutTableRowsApart ;
        CT_OnOff* m_layoutTableRowsApart ;
        bool m_has_useWord97LineBreakRules ;
        CT_OnOff* m_useWord97LineBreakRules ;
        bool m_has_doNotBreakWrappedTables ;
        CT_OnOff* m_doNotBreakWrappedTables ;
        bool m_has_doNotSnapToGridInCell ;
        CT_OnOff* m_doNotSnapToGridInCell ;
        bool m_has_selectFldWithFirstOrLastChar ;
        CT_OnOff* m_selectFldWithFirstOrLastChar ;
        bool m_has_applyBreakingRules ;
        CT_OnOff* m_applyBreakingRules ;
        bool m_has_doNotWrapTextWithPunct ;
        CT_OnOff* m_doNotWrapTextWithPunct ;
        bool m_has_doNotUseEastAsianBreakRules ;
        CT_OnOff* m_doNotUseEastAsianBreakRules ;
        bool m_has_useWord2002TableStyleRules ;
        CT_OnOff* m_useWord2002TableStyleRules ;
        bool m_has_growAutofit ;
        CT_OnOff* m_growAutofit ;
        bool m_has_useFELayout ;
        CT_OnOff* m_useFELayout ;
        bool m_has_useNormalStyleForList ;
        CT_OnOff* m_useNormalStyleForList ;
        bool m_has_doNotUseIndentAsNumberingTabStop ;
        CT_OnOff* m_doNotUseIndentAsNumberingTabStop ;
        bool m_has_useAltKinsokuLineBreakRules ;
        CT_OnOff* m_useAltKinsokuLineBreakRules ;
        bool m_has_allowSpaceOfSameStyleInTable ;
        CT_OnOff* m_allowSpaceOfSameStyleInTable ;
        bool m_has_doNotSuppressIndentation ;
        CT_OnOff* m_doNotSuppressIndentation ;
        bool m_has_doNotAutofitConstrainedTables ;
        CT_OnOff* m_doNotAutofitConstrainedTables ;
        bool m_has_autofitToFirstFixedWidthCell ;
        CT_OnOff* m_autofitToFirstFixedWidthCell ;
        bool m_has_underlineTabInNumList ;
        CT_OnOff* m_underlineTabInNumList ;
        bool m_has_displayHangulFixedWidth ;
        CT_OnOff* m_displayHangulFixedWidth ;
        bool m_has_splitPgBreakAndParaMark ;
        CT_OnOff* m_splitPgBreakAndParaMark ;
        bool m_has_doNotVertAlignCellWithSp ;
        CT_OnOff* m_doNotVertAlignCellWithSp ;
        bool m_has_doNotBreakConstrainedForcedTable ;
        CT_OnOff* m_doNotBreakConstrainedForcedTable ;
        bool m_has_doNotVertAlignInTxbx ;
        CT_OnOff* m_doNotVertAlignInTxbx ;
        bool m_has_useAnsiKerningPairs ;
        CT_OnOff* m_useAnsiKerningPairs ;
        bool m_has_cachedColBalance ;
        CT_OnOff* m_cachedColBalance ;
        bool m_has_compatSetting ;
        CT_CompatSetting* m_compatSetting ;
        static CT_Compat* default_instance_ ;

    }

    class CT_CompatSetting : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CompatSetting& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_uri_attr() const;
        void set_uri_attr(const ns_s::ST_String& _uri_attr );
        const ns_s::ST_String& uri_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_CompatSetting* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_uri_attr ;
        ns_s::ST_String* m_uri_attr ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_DocVar : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocVar& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_DocVar* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_DocVars : public XSD::ComplexType{
    public:
        bool has_docVar() const;
        CT_DocVar* mutable_docVar();
        const CT_DocVar& docVar() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocVars& default_instance() const;

    private:
        bool m_has_docVar ;
        CT_DocVar* m_docVar ;
        static CT_DocVars* default_instance_ ;

    }

    class CT_DocRsids : public XSD::ComplexType{
    public:
        bool has_rsidRoot() const;
        CT_LongHexNumber* mutable_rsidRoot();
        const CT_LongHexNumber& rsidRoot() const;
        bool has_rsid() const;
        CT_LongHexNumber* mutable_rsid();
        const CT_LongHexNumber& rsid() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocRsids& default_instance() const;

    private:
        bool m_has_rsidRoot ;
        CT_LongHexNumber* m_rsidRoot ;
        bool m_has_rsid ;
        CT_LongHexNumber* m_rsid ;
        static CT_DocRsids* default_instance_ ;

    }

    class CT_CharacterSpacing : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CharacterSpacing& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_CharacterSpacing& _val_attr );
        const ST_CharacterSpacing& val_attr() const;

    private:
        static CT_CharacterSpacing* default_instance_ ;
        bool m_has_val_attr ;
        ST_CharacterSpacing* m_val_attr ;

    }

    class CT_SaveThroughXslt : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SaveThroughXslt& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_solutionID_attr() const;
        void set_solutionID_attr(const ns_s::ST_String& _solutionID_attr );
        const ns_s::ST_String& solutionID_attr() const;

    private:
        static CT_SaveThroughXslt* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_solutionID_attr ;
        ns_s::ST_String* m_solutionID_attr ;

    }

    class CT_RPrDefault : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RPrDefault& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        static CT_RPrDefault* default_instance_ ;

    }

    class CT_PPrDefault : public XSD::ComplexType{
    public:
        bool has_pPr() const;
        CT_PPrGeneral* mutable_pPr();
        const CT_PPrGeneral& pPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PPrDefault& default_instance() const;

    private:
        bool m_has_pPr ;
        CT_PPrGeneral* m_pPr ;
        static CT_PPrDefault* default_instance_ ;

    }

    class CT_DocDefaults : public XSD::ComplexType{
    public:
        bool has_rPrDefault() const;
        CT_RPrDefault* mutable_rPrDefault();
        const CT_RPrDefault& rPrDefault() const;
        bool has_pPrDefault() const;
        CT_PPrDefault* mutable_pPrDefault();
        const CT_PPrDefault& pPrDefault() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocDefaults& default_instance() const;

    private:
        bool m_has_rPrDefault ;
        CT_RPrDefault* m_rPrDefault ;
        bool m_has_pPrDefault ;
        CT_PPrDefault* m_pPrDefault ;
        static CT_DocDefaults* default_instance_ ;

    }

    class CT_ColorSchemeMapping : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorSchemeMapping& default_instance() const;
        bool has_bg1_attr() const;
        void set_bg1_attr(const ST_WmlColorSchemeIndex& _bg1_attr );
        const ST_WmlColorSchemeIndex& bg1_attr() const;
        bool has_t1_attr() const;
        void set_t1_attr(const ST_WmlColorSchemeIndex& _t1_attr );
        const ST_WmlColorSchemeIndex& t1_attr() const;
        bool has_bg2_attr() const;
        void set_bg2_attr(const ST_WmlColorSchemeIndex& _bg2_attr );
        const ST_WmlColorSchemeIndex& bg2_attr() const;
        bool has_t2_attr() const;
        void set_t2_attr(const ST_WmlColorSchemeIndex& _t2_attr );
        const ST_WmlColorSchemeIndex& t2_attr() const;
        bool has_accent1_attr() const;
        void set_accent1_attr(const ST_WmlColorSchemeIndex& _accent1_attr );
        const ST_WmlColorSchemeIndex& accent1_attr() const;
        bool has_accent2_attr() const;
        void set_accent2_attr(const ST_WmlColorSchemeIndex& _accent2_attr );
        const ST_WmlColorSchemeIndex& accent2_attr() const;
        bool has_accent3_attr() const;
        void set_accent3_attr(const ST_WmlColorSchemeIndex& _accent3_attr );
        const ST_WmlColorSchemeIndex& accent3_attr() const;
        bool has_accent4_attr() const;
        void set_accent4_attr(const ST_WmlColorSchemeIndex& _accent4_attr );
        const ST_WmlColorSchemeIndex& accent4_attr() const;
        bool has_accent5_attr() const;
        void set_accent5_attr(const ST_WmlColorSchemeIndex& _accent5_attr );
        const ST_WmlColorSchemeIndex& accent5_attr() const;
        bool has_accent6_attr() const;
        void set_accent6_attr(const ST_WmlColorSchemeIndex& _accent6_attr );
        const ST_WmlColorSchemeIndex& accent6_attr() const;
        bool has_hyperlink_attr() const;
        void set_hyperlink_attr(const ST_WmlColorSchemeIndex& _hyperlink_attr );
        const ST_WmlColorSchemeIndex& hyperlink_attr() const;
        bool has_followedHyperlink_attr() const;
        void set_followedHyperlink_attr(const ST_WmlColorSchemeIndex& _followedHyperlink_attr );
        const ST_WmlColorSchemeIndex& followedHyperlink_attr() const;

    private:
        static CT_ColorSchemeMapping* default_instance_ ;
        bool m_has_bg1_attr ;
        ST_WmlColorSchemeIndex* m_bg1_attr ;
        bool m_has_t1_attr ;
        ST_WmlColorSchemeIndex* m_t1_attr ;
        bool m_has_bg2_attr ;
        ST_WmlColorSchemeIndex* m_bg2_attr ;
        bool m_has_t2_attr ;
        ST_WmlColorSchemeIndex* m_t2_attr ;
        bool m_has_accent1_attr ;
        ST_WmlColorSchemeIndex* m_accent1_attr ;
        bool m_has_accent2_attr ;
        ST_WmlColorSchemeIndex* m_accent2_attr ;
        bool m_has_accent3_attr ;
        ST_WmlColorSchemeIndex* m_accent3_attr ;
        bool m_has_accent4_attr ;
        ST_WmlColorSchemeIndex* m_accent4_attr ;
        bool m_has_accent5_attr ;
        ST_WmlColorSchemeIndex* m_accent5_attr ;
        bool m_has_accent6_attr ;
        ST_WmlColorSchemeIndex* m_accent6_attr ;
        bool m_has_hyperlink_attr ;
        ST_WmlColorSchemeIndex* m_hyperlink_attr ;
        bool m_has_followedHyperlink_attr ;
        ST_WmlColorSchemeIndex* m_followedHyperlink_attr ;

    }

    class CT_ReadingModeInkLockDown : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ReadingModeInkLockDown& default_instance() const;
        bool has_actualPg_attr() const;
        void set_actualPg_attr(const ns_s::ST_OnOff& _actualPg_attr );
        const ns_s::ST_OnOff& actualPg_attr() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_PixelsMeasure& _w_attr );
        const ST_PixelsMeasure& w_attr() const;
        bool has_h_attr() const;
        void set_h_attr(const ST_PixelsMeasure& _h_attr );
        const ST_PixelsMeasure& h_attr() const;
        bool has_fontSz_attr() const;
        void set_fontSz_attr(const ST_DecimalNumberOrPercent& _fontSz_attr );
        const ST_DecimalNumberOrPercent& fontSz_attr() const;

    private:
        static CT_ReadingModeInkLockDown* default_instance_ ;
        bool m_has_actualPg_attr ;
        ns_s::ST_OnOff* m_actualPg_attr ;
        bool m_has_w_attr ;
        ST_PixelsMeasure* m_w_attr ;
        bool m_has_h_attr ;
        ST_PixelsMeasure* m_h_attr ;
        bool m_has_fontSz_attr ;
        ST_DecimalNumberOrPercent* m_fontSz_attr ;

    }

    class CT_WriteProtection : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WriteProtection& default_instance() const;
        bool has_recommended_attr() const;
        void set_recommended_attr(const ns_s::ST_OnOff& _recommended_attr );
        const ns_s::ST_OnOff& recommended_attr() const;
        bool has_algorithmName_attr() const;
        void set_algorithmName_attr(const ns_s::ST_String& _algorithmName_attr );
        const ns_s::ST_String& algorithmName_attr() const;
        bool has_hashValue_attr() const;
        void set_hashValue_attr(const base64Binary& _hashValue_attr );
        const base64Binary& hashValue_attr() const;
        bool has_saltValue_attr() const;
        void set_saltValue_attr(const base64Binary& _saltValue_attr );
        const base64Binary& saltValue_attr() const;
        bool has_spinCount_attr() const;
        void set_spinCount_attr(const ST_DecimalNumber& _spinCount_attr );
        const ST_DecimalNumber& spinCount_attr() const;
        bool has_cryptProviderType_attr() const;
        void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr );
        const ns_s::ST_CryptProv& cryptProviderType_attr() const;
        bool has_cryptAlgorithmClass_attr() const;
        void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr );
        const ns_s::ST_AlgClass& cryptAlgorithmClass_attr() const;
        bool has_cryptAlgorithmType_attr() const;
        void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr );
        const ns_s::ST_AlgType& cryptAlgorithmType_attr() const;
        bool has_cryptAlgorithmSid_attr() const;
        void set_cryptAlgorithmSid_attr(const ST_DecimalNumber& _cryptAlgorithmSid_attr );
        const ST_DecimalNumber& cryptAlgorithmSid_attr() const;
        bool has_cryptSpinCount_attr() const;
        void set_cryptSpinCount_attr(const ST_DecimalNumber& _cryptSpinCount_attr );
        const ST_DecimalNumber& cryptSpinCount_attr() const;
        bool has_cryptProvider_attr() const;
        void set_cryptProvider_attr(const ns_s::ST_String& _cryptProvider_attr );
        const ns_s::ST_String& cryptProvider_attr() const;
        bool has_algIdExt_attr() const;
        void set_algIdExt_attr(const ST_LongHexNumber& _algIdExt_attr );
        const ST_LongHexNumber& algIdExt_attr() const;
        bool has_algIdExtSource_attr() const;
        void set_algIdExtSource_attr(const ns_s::ST_String& _algIdExtSource_attr );
        const ns_s::ST_String& algIdExtSource_attr() const;
        bool has_cryptProviderTypeExt_attr() const;
        void set_cryptProviderTypeExt_attr(const ST_LongHexNumber& _cryptProviderTypeExt_attr );
        const ST_LongHexNumber& cryptProviderTypeExt_attr() const;
        bool has_cryptProviderTypeExtSource_attr() const;
        void set_cryptProviderTypeExtSource_attr(const ns_s::ST_String& _cryptProviderTypeExtSource_attr );
        const ns_s::ST_String& cryptProviderTypeExtSource_attr() const;
        bool has_hash_attr() const;
        void set_hash_attr(const base64Binary& _hash_attr );
        const base64Binary& hash_attr() const;
        bool has_salt_attr() const;
        void set_salt_attr(const base64Binary& _salt_attr );
        const base64Binary& salt_attr() const;

    private:
        static CT_WriteProtection* default_instance_ ;
        bool m_has_recommended_attr ;
        ns_s::ST_OnOff* m_recommended_attr ;
        bool m_has_algorithmName_attr ;
        ns_s::ST_String* m_algorithmName_attr ;
        bool m_has_hashValue_attr ;
        base64Binary m_hashValue_attr ;
        bool m_has_saltValue_attr ;
        base64Binary m_saltValue_attr ;
        bool m_has_spinCount_attr ;
        ST_DecimalNumber* m_spinCount_attr ;
        bool m_has_cryptProviderType_attr ;
        ns_s::ST_CryptProv* m_cryptProviderType_attr ;
        bool m_has_cryptAlgorithmClass_attr ;
        ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr ;
        bool m_has_cryptAlgorithmType_attr ;
        ns_s::ST_AlgType* m_cryptAlgorithmType_attr ;
        bool m_has_cryptAlgorithmSid_attr ;
        ST_DecimalNumber* m_cryptAlgorithmSid_attr ;
        bool m_has_cryptSpinCount_attr ;
        ST_DecimalNumber* m_cryptSpinCount_attr ;
        bool m_has_cryptProvider_attr ;
        ns_s::ST_String* m_cryptProvider_attr ;
        bool m_has_algIdExt_attr ;
        ST_LongHexNumber* m_algIdExt_attr ;
        bool m_has_algIdExtSource_attr ;
        ns_s::ST_String* m_algIdExtSource_attr ;
        bool m_has_cryptProviderTypeExt_attr ;
        ST_LongHexNumber* m_cryptProviderTypeExt_attr ;
        bool m_has_cryptProviderTypeExtSource_attr ;
        ns_s::ST_String* m_cryptProviderTypeExtSource_attr ;
        bool m_has_hash_attr ;
        base64Binary m_hash_attr ;
        bool m_has_salt_attr ;
        base64Binary m_salt_attr ;

    }

    class CT_Settings : public XSD::ComplexType{
    public:
        bool has_writeProtection() const;
        CT_WriteProtection* mutable_writeProtection();
        const CT_WriteProtection& writeProtection() const;
        bool has_view() const;
        CT_View* mutable_view();
        const CT_View& view() const;
        bool has_zoom() const;
        CT_Zoom* mutable_zoom();
        const CT_Zoom& zoom() const;
        bool has_removePersonalInformation() const;
        CT_OnOff* mutable_removePersonalInformation();
        const CT_OnOff& removePersonalInformation() const;
        bool has_removeDateAndTime() const;
        CT_OnOff* mutable_removeDateAndTime();
        const CT_OnOff& removeDateAndTime() const;
        bool has_doNotDisplayPageBoundaries() const;
        CT_OnOff* mutable_doNotDisplayPageBoundaries();
        const CT_OnOff& doNotDisplayPageBoundaries() const;
        bool has_displayBackgroundShape() const;
        CT_OnOff* mutable_displayBackgroundShape();
        const CT_OnOff& displayBackgroundShape() const;
        bool has_printPostScriptOverText() const;
        CT_OnOff* mutable_printPostScriptOverText();
        const CT_OnOff& printPostScriptOverText() const;
        bool has_printFractionalCharacterWidth() const;
        CT_OnOff* mutable_printFractionalCharacterWidth();
        const CT_OnOff& printFractionalCharacterWidth() const;
        bool has_printFormsData() const;
        CT_OnOff* mutable_printFormsData();
        const CT_OnOff& printFormsData() const;
        bool has_embedTrueTypeFonts() const;
        CT_OnOff* mutable_embedTrueTypeFonts();
        const CT_OnOff& embedTrueTypeFonts() const;
        bool has_embedSystemFonts() const;
        CT_OnOff* mutable_embedSystemFonts();
        const CT_OnOff& embedSystemFonts() const;
        bool has_saveSubsetFonts() const;
        CT_OnOff* mutable_saveSubsetFonts();
        const CT_OnOff& saveSubsetFonts() const;
        bool has_saveFormsData() const;
        CT_OnOff* mutable_saveFormsData();
        const CT_OnOff& saveFormsData() const;
        bool has_mirrorMargins() const;
        CT_OnOff* mutable_mirrorMargins();
        const CT_OnOff& mirrorMargins() const;
        bool has_alignBordersAndEdges() const;
        CT_OnOff* mutable_alignBordersAndEdges();
        const CT_OnOff& alignBordersAndEdges() const;
        bool has_bordersDoNotSurroundHeader() const;
        CT_OnOff* mutable_bordersDoNotSurroundHeader();
        const CT_OnOff& bordersDoNotSurroundHeader() const;
        bool has_bordersDoNotSurroundFooter() const;
        CT_OnOff* mutable_bordersDoNotSurroundFooter();
        const CT_OnOff& bordersDoNotSurroundFooter() const;
        bool has_gutterAtTop() const;
        CT_OnOff* mutable_gutterAtTop();
        const CT_OnOff& gutterAtTop() const;
        bool has_hideSpellingErrors() const;
        CT_OnOff* mutable_hideSpellingErrors();
        const CT_OnOff& hideSpellingErrors() const;
        bool has_hideGrammaticalErrors() const;
        CT_OnOff* mutable_hideGrammaticalErrors();
        const CT_OnOff& hideGrammaticalErrors() const;
        bool has_activeWritingStyle() const;
        CT_WritingStyle* mutable_activeWritingStyle();
        const CT_WritingStyle& activeWritingStyle() const;
        bool has_proofState() const;
        CT_Proof* mutable_proofState();
        const CT_Proof& proofState() const;
        bool has_formsDesign() const;
        CT_OnOff* mutable_formsDesign();
        const CT_OnOff& formsDesign() const;
        bool has_attachedTemplate() const;
        CT_Rel* mutable_attachedTemplate();
        const CT_Rel& attachedTemplate() const;
        bool has_linkStyles() const;
        CT_OnOff* mutable_linkStyles();
        const CT_OnOff& linkStyles() const;
        bool has_stylePaneFormatFilter() const;
        CT_StylePaneFilter* mutable_stylePaneFormatFilter();
        const CT_StylePaneFilter& stylePaneFormatFilter() const;
        bool has_stylePaneSortMethod() const;
        CT_StyleSort* mutable_stylePaneSortMethod();
        const CT_StyleSort& stylePaneSortMethod() const;
        bool has_documentType() const;
        CT_DocType* mutable_documentType();
        const CT_DocType& documentType() const;
        bool has_mailMerge() const;
        CT_MailMerge* mutable_mailMerge();
        const CT_MailMerge& mailMerge() const;
        bool has_revisionView() const;
        CT_TrackChangesView* mutable_revisionView();
        const CT_TrackChangesView& revisionView() const;
        bool has_trackRevisions() const;
        CT_OnOff* mutable_trackRevisions();
        const CT_OnOff& trackRevisions() const;
        bool has_doNotTrackMoves() const;
        CT_OnOff* mutable_doNotTrackMoves();
        const CT_OnOff& doNotTrackMoves() const;
        bool has_doNotTrackFormatting() const;
        CT_OnOff* mutable_doNotTrackFormatting();
        const CT_OnOff& doNotTrackFormatting() const;
        bool has_documentProtection() const;
        CT_DocProtect* mutable_documentProtection();
        const CT_DocProtect& documentProtection() const;
        bool has_autoFormatOverride() const;
        CT_OnOff* mutable_autoFormatOverride();
        const CT_OnOff& autoFormatOverride() const;
        bool has_styleLockTheme() const;
        CT_OnOff* mutable_styleLockTheme();
        const CT_OnOff& styleLockTheme() const;
        bool has_styleLockQFSet() const;
        CT_OnOff* mutable_styleLockQFSet();
        const CT_OnOff& styleLockQFSet() const;
        bool has_defaultTabStop() const;
        CT_TwipsMeasure* mutable_defaultTabStop();
        const CT_TwipsMeasure& defaultTabStop() const;
        bool has_autoHyphenation() const;
        CT_OnOff* mutable_autoHyphenation();
        const CT_OnOff& autoHyphenation() const;
        bool has_consecutiveHyphenLimit() const;
        CT_DecimalNumber* mutable_consecutiveHyphenLimit();
        const CT_DecimalNumber& consecutiveHyphenLimit() const;
        bool has_hyphenationZone() const;
        CT_TwipsMeasure* mutable_hyphenationZone();
        const CT_TwipsMeasure& hyphenationZone() const;
        bool has_doNotHyphenateCaps() const;
        CT_OnOff* mutable_doNotHyphenateCaps();
        const CT_OnOff& doNotHyphenateCaps() const;
        bool has_showEnvelope() const;
        CT_OnOff* mutable_showEnvelope();
        const CT_OnOff& showEnvelope() const;
        bool has_summaryLength() const;
        CT_DecimalNumberOrPrecent* mutable_summaryLength();
        const CT_DecimalNumberOrPrecent& summaryLength() const;
        bool has_clickAndTypeStyle() const;
        CT_String* mutable_clickAndTypeStyle();
        const CT_String& clickAndTypeStyle() const;
        bool has_defaultTableStyle() const;
        CT_String* mutable_defaultTableStyle();
        const CT_String& defaultTableStyle() const;
        bool has_evenAndOddHeaders() const;
        CT_OnOff* mutable_evenAndOddHeaders();
        const CT_OnOff& evenAndOddHeaders() const;
        bool has_bookFoldRevPrinting() const;
        CT_OnOff* mutable_bookFoldRevPrinting();
        const CT_OnOff& bookFoldRevPrinting() const;
        bool has_bookFoldPrinting() const;
        CT_OnOff* mutable_bookFoldPrinting();
        const CT_OnOff& bookFoldPrinting() const;
        bool has_bookFoldPrintingSheets() const;
        CT_DecimalNumber* mutable_bookFoldPrintingSheets();
        const CT_DecimalNumber& bookFoldPrintingSheets() const;
        bool has_drawingGridHorizontalSpacing() const;
        CT_TwipsMeasure* mutable_drawingGridHorizontalSpacing();
        const CT_TwipsMeasure& drawingGridHorizontalSpacing() const;
        bool has_drawingGridVerticalSpacing() const;
        CT_TwipsMeasure* mutable_drawingGridVerticalSpacing();
        const CT_TwipsMeasure& drawingGridVerticalSpacing() const;
        bool has_displayHorizontalDrawingGridEvery() const;
        CT_DecimalNumber* mutable_displayHorizontalDrawingGridEvery();
        const CT_DecimalNumber& displayHorizontalDrawingGridEvery() const;
        bool has_displayVerticalDrawingGridEvery() const;
        CT_DecimalNumber* mutable_displayVerticalDrawingGridEvery();
        const CT_DecimalNumber& displayVerticalDrawingGridEvery() const;
        bool has_doNotUseMarginsForDrawingGridOrigin() const;
        CT_OnOff* mutable_doNotUseMarginsForDrawingGridOrigin();
        const CT_OnOff& doNotUseMarginsForDrawingGridOrigin() const;
        bool has_drawingGridHorizontalOrigin() const;
        CT_TwipsMeasure* mutable_drawingGridHorizontalOrigin();
        const CT_TwipsMeasure& drawingGridHorizontalOrigin() const;
        bool has_drawingGridVerticalOrigin() const;
        CT_TwipsMeasure* mutable_drawingGridVerticalOrigin();
        const CT_TwipsMeasure& drawingGridVerticalOrigin() const;
        bool has_doNotShadeFormData() const;
        CT_OnOff* mutable_doNotShadeFormData();
        const CT_OnOff& doNotShadeFormData() const;
        bool has_noPunctuationKerning() const;
        CT_OnOff* mutable_noPunctuationKerning();
        const CT_OnOff& noPunctuationKerning() const;
        bool has_characterSpacingControl() const;
        CT_CharacterSpacing* mutable_characterSpacingControl();
        const CT_CharacterSpacing& characterSpacingControl() const;
        bool has_printTwoOnOne() const;
        CT_OnOff* mutable_printTwoOnOne();
        const CT_OnOff& printTwoOnOne() const;
        bool has_strictFirstAndLastChars() const;
        CT_OnOff* mutable_strictFirstAndLastChars();
        const CT_OnOff& strictFirstAndLastChars() const;
        bool has_noLineBreaksAfter() const;
        CT_Kinsoku* mutable_noLineBreaksAfter();
        const CT_Kinsoku& noLineBreaksAfter() const;
        bool has_noLineBreaksBefore() const;
        CT_Kinsoku* mutable_noLineBreaksBefore();
        const CT_Kinsoku& noLineBreaksBefore() const;
        bool has_savePreviewPicture() const;
        CT_OnOff* mutable_savePreviewPicture();
        const CT_OnOff& savePreviewPicture() const;
        bool has_doNotValidateAgainstSchema() const;
        CT_OnOff* mutable_doNotValidateAgainstSchema();
        const CT_OnOff& doNotValidateAgainstSchema() const;
        bool has_saveInvalidXml() const;
        CT_OnOff* mutable_saveInvalidXml();
        const CT_OnOff& saveInvalidXml() const;
        bool has_ignoreMixedContent() const;
        CT_OnOff* mutable_ignoreMixedContent();
        const CT_OnOff& ignoreMixedContent() const;
        bool has_alwaysShowPlaceholderText() const;
        CT_OnOff* mutable_alwaysShowPlaceholderText();
        const CT_OnOff& alwaysShowPlaceholderText() const;
        bool has_doNotDemarcateInvalidXml() const;
        CT_OnOff* mutable_doNotDemarcateInvalidXml();
        const CT_OnOff& doNotDemarcateInvalidXml() const;
        bool has_saveXmlDataOnly() const;
        CT_OnOff* mutable_saveXmlDataOnly();
        const CT_OnOff& saveXmlDataOnly() const;
        bool has_useXSLTWhenSaving() const;
        CT_OnOff* mutable_useXSLTWhenSaving();
        const CT_OnOff& useXSLTWhenSaving() const;
        bool has_saveThroughXslt() const;
        CT_SaveThroughXslt* mutable_saveThroughXslt();
        const CT_SaveThroughXslt& saveThroughXslt() const;
        bool has_showXMLTags() const;
        CT_OnOff* mutable_showXMLTags();
        const CT_OnOff& showXMLTags() const;
        bool has_alwaysMergeEmptyNamespace() const;
        CT_OnOff* mutable_alwaysMergeEmptyNamespace();
        const CT_OnOff& alwaysMergeEmptyNamespace() const;
        bool has_updateFields() const;
        CT_OnOff* mutable_updateFields();
        const CT_OnOff& updateFields() const;
        bool has_hdrShapeDefaults() const;
        CT_ShapeDefaults* mutable_hdrShapeDefaults();
        const CT_ShapeDefaults& hdrShapeDefaults() const;
        bool has_footnotePr() const;
        CT_FtnDocProps* mutable_footnotePr();
        const CT_FtnDocProps& footnotePr() const;
        bool has_endnotePr() const;
        CT_EdnDocProps* mutable_endnotePr();
        const CT_EdnDocProps& endnotePr() const;
        bool has_compat() const;
        CT_Compat* mutable_compat();
        const CT_Compat& compat() const;
        bool has_docVars() const;
        CT_DocVars* mutable_docVars();
        const CT_DocVars& docVars() const;
        bool has_rsids() const;
        CT_DocRsids* mutable_rsids();
        const CT_DocRsids& rsids() const;
        bool has_mathPr() const;
        CT_MathPr* mutable_mathPr();
        const CT_MathPr& mathPr() const;
        bool has_attachedSchema() const;
        CT_String* mutable_attachedSchema();
        const CT_String& attachedSchema() const;
        bool has_themeFontLang() const;
        CT_Language* mutable_themeFontLang();
        const CT_Language& themeFontLang() const;
        bool has_clrSchemeMapping() const;
        CT_ColorSchemeMapping* mutable_clrSchemeMapping();
        const CT_ColorSchemeMapping& clrSchemeMapping() const;
        bool has_doNotIncludeSubdocsInStats() const;
        CT_OnOff* mutable_doNotIncludeSubdocsInStats();
        const CT_OnOff& doNotIncludeSubdocsInStats() const;
        bool has_doNotAutoCompressPictures() const;
        CT_OnOff* mutable_doNotAutoCompressPictures();
        const CT_OnOff& doNotAutoCompressPictures() const;
        bool has_forceUpgrade() const;
        CT_Empty* mutable_forceUpgrade();
        const CT_Empty& forceUpgrade() const;
        bool has_captions() const;
        CT_Captions* mutable_captions();
        const CT_Captions& captions() const;
        bool has_readModeInkLockDown() const;
        CT_ReadingModeInkLockDown* mutable_readModeInkLockDown();
        const CT_ReadingModeInkLockDown& readModeInkLockDown() const;
        bool has_smartTagType() const;
        CT_SmartTagType* mutable_smartTagType();
        const CT_SmartTagType& smartTagType() const;
        bool has_schemaLibrary() const;
        CT_SchemaLibrary* mutable_schemaLibrary();
        const CT_SchemaLibrary& schemaLibrary() const;
        bool has_shapeDefaults() const;
        CT_ShapeDefaults* mutable_shapeDefaults();
        const CT_ShapeDefaults& shapeDefaults() const;
        bool has_doNotEmbedSmartTags() const;
        CT_OnOff* mutable_doNotEmbedSmartTags();
        const CT_OnOff& doNotEmbedSmartTags() const;
        bool has_decimalSymbol() const;
        CT_String* mutable_decimalSymbol();
        const CT_String& decimalSymbol() const;
        bool has_listSeparator() const;
        CT_String* mutable_listSeparator();
        const CT_String& listSeparator() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Settings& default_instance() const;

    private:
        bool m_has_writeProtection ;
        CT_WriteProtection* m_writeProtection ;
        bool m_has_view ;
        CT_View* m_view ;
        bool m_has_zoom ;
        CT_Zoom* m_zoom ;
        bool m_has_removePersonalInformation ;
        CT_OnOff* m_removePersonalInformation ;
        bool m_has_removeDateAndTime ;
        CT_OnOff* m_removeDateAndTime ;
        bool m_has_doNotDisplayPageBoundaries ;
        CT_OnOff* m_doNotDisplayPageBoundaries ;
        bool m_has_displayBackgroundShape ;
        CT_OnOff* m_displayBackgroundShape ;
        bool m_has_printPostScriptOverText ;
        CT_OnOff* m_printPostScriptOverText ;
        bool m_has_printFractionalCharacterWidth ;
        CT_OnOff* m_printFractionalCharacterWidth ;
        bool m_has_printFormsData ;
        CT_OnOff* m_printFormsData ;
        bool m_has_embedTrueTypeFonts ;
        CT_OnOff* m_embedTrueTypeFonts ;
        bool m_has_embedSystemFonts ;
        CT_OnOff* m_embedSystemFonts ;
        bool m_has_saveSubsetFonts ;
        CT_OnOff* m_saveSubsetFonts ;
        bool m_has_saveFormsData ;
        CT_OnOff* m_saveFormsData ;
        bool m_has_mirrorMargins ;
        CT_OnOff* m_mirrorMargins ;
        bool m_has_alignBordersAndEdges ;
        CT_OnOff* m_alignBordersAndEdges ;
        bool m_has_bordersDoNotSurroundHeader ;
        CT_OnOff* m_bordersDoNotSurroundHeader ;
        bool m_has_bordersDoNotSurroundFooter ;
        CT_OnOff* m_bordersDoNotSurroundFooter ;
        bool m_has_gutterAtTop ;
        CT_OnOff* m_gutterAtTop ;
        bool m_has_hideSpellingErrors ;
        CT_OnOff* m_hideSpellingErrors ;
        bool m_has_hideGrammaticalErrors ;
        CT_OnOff* m_hideGrammaticalErrors ;
        bool m_has_activeWritingStyle ;
        CT_WritingStyle* m_activeWritingStyle ;
        bool m_has_proofState ;
        CT_Proof* m_proofState ;
        bool m_has_formsDesign ;
        CT_OnOff* m_formsDesign ;
        bool m_has_attachedTemplate ;
        CT_Rel* m_attachedTemplate ;
        bool m_has_linkStyles ;
        CT_OnOff* m_linkStyles ;
        bool m_has_stylePaneFormatFilter ;
        CT_StylePaneFilter* m_stylePaneFormatFilter ;
        bool m_has_stylePaneSortMethod ;
        CT_StyleSort* m_stylePaneSortMethod ;
        bool m_has_documentType ;
        CT_DocType* m_documentType ;
        bool m_has_mailMerge ;
        CT_MailMerge* m_mailMerge ;
        bool m_has_revisionView ;
        CT_TrackChangesView* m_revisionView ;
        bool m_has_trackRevisions ;
        CT_OnOff* m_trackRevisions ;
        bool m_has_doNotTrackMoves ;
        CT_OnOff* m_doNotTrackMoves ;
        bool m_has_doNotTrackFormatting ;
        CT_OnOff* m_doNotTrackFormatting ;
        bool m_has_documentProtection ;
        CT_DocProtect* m_documentProtection ;
        bool m_has_autoFormatOverride ;
        CT_OnOff* m_autoFormatOverride ;
        bool m_has_styleLockTheme ;
        CT_OnOff* m_styleLockTheme ;
        bool m_has_styleLockQFSet ;
        CT_OnOff* m_styleLockQFSet ;
        bool m_has_defaultTabStop ;
        CT_TwipsMeasure* m_defaultTabStop ;
        bool m_has_autoHyphenation ;
        CT_OnOff* m_autoHyphenation ;
        bool m_has_consecutiveHyphenLimit ;
        CT_DecimalNumber* m_consecutiveHyphenLimit ;
        bool m_has_hyphenationZone ;
        CT_TwipsMeasure* m_hyphenationZone ;
        bool m_has_doNotHyphenateCaps ;
        CT_OnOff* m_doNotHyphenateCaps ;
        bool m_has_showEnvelope ;
        CT_OnOff* m_showEnvelope ;
        bool m_has_summaryLength ;
        CT_DecimalNumberOrPrecent* m_summaryLength ;
        bool m_has_clickAndTypeStyle ;
        CT_String* m_clickAndTypeStyle ;
        bool m_has_defaultTableStyle ;
        CT_String* m_defaultTableStyle ;
        bool m_has_evenAndOddHeaders ;
        CT_OnOff* m_evenAndOddHeaders ;
        bool m_has_bookFoldRevPrinting ;
        CT_OnOff* m_bookFoldRevPrinting ;
        bool m_has_bookFoldPrinting ;
        CT_OnOff* m_bookFoldPrinting ;
        bool m_has_bookFoldPrintingSheets ;
        CT_DecimalNumber* m_bookFoldPrintingSheets ;
        bool m_has_drawingGridHorizontalSpacing ;
        CT_TwipsMeasure* m_drawingGridHorizontalSpacing ;
        bool m_has_drawingGridVerticalSpacing ;
        CT_TwipsMeasure* m_drawingGridVerticalSpacing ;
        bool m_has_displayHorizontalDrawingGridEvery ;
        CT_DecimalNumber* m_displayHorizontalDrawingGridEvery ;
        bool m_has_displayVerticalDrawingGridEvery ;
        CT_DecimalNumber* m_displayVerticalDrawingGridEvery ;
        bool m_has_doNotUseMarginsForDrawingGridOrigin ;
        CT_OnOff* m_doNotUseMarginsForDrawingGridOrigin ;
        bool m_has_drawingGridHorizontalOrigin ;
        CT_TwipsMeasure* m_drawingGridHorizontalOrigin ;
        bool m_has_drawingGridVerticalOrigin ;
        CT_TwipsMeasure* m_drawingGridVerticalOrigin ;
        bool m_has_doNotShadeFormData ;
        CT_OnOff* m_doNotShadeFormData ;
        bool m_has_noPunctuationKerning ;
        CT_OnOff* m_noPunctuationKerning ;
        bool m_has_characterSpacingControl ;
        CT_CharacterSpacing* m_characterSpacingControl ;
        bool m_has_printTwoOnOne ;
        CT_OnOff* m_printTwoOnOne ;
        bool m_has_strictFirstAndLastChars ;
        CT_OnOff* m_strictFirstAndLastChars ;
        bool m_has_noLineBreaksAfter ;
        CT_Kinsoku* m_noLineBreaksAfter ;
        bool m_has_noLineBreaksBefore ;
        CT_Kinsoku* m_noLineBreaksBefore ;
        bool m_has_savePreviewPicture ;
        CT_OnOff* m_savePreviewPicture ;
        bool m_has_doNotValidateAgainstSchema ;
        CT_OnOff* m_doNotValidateAgainstSchema ;
        bool m_has_saveInvalidXml ;
        CT_OnOff* m_saveInvalidXml ;
        bool m_has_ignoreMixedContent ;
        CT_OnOff* m_ignoreMixedContent ;
        bool m_has_alwaysShowPlaceholderText ;
        CT_OnOff* m_alwaysShowPlaceholderText ;
        bool m_has_doNotDemarcateInvalidXml ;
        CT_OnOff* m_doNotDemarcateInvalidXml ;
        bool m_has_saveXmlDataOnly ;
        CT_OnOff* m_saveXmlDataOnly ;
        bool m_has_useXSLTWhenSaving ;
        CT_OnOff* m_useXSLTWhenSaving ;
        bool m_has_saveThroughXslt ;
        CT_SaveThroughXslt* m_saveThroughXslt ;
        bool m_has_showXMLTags ;
        CT_OnOff* m_showXMLTags ;
        bool m_has_alwaysMergeEmptyNamespace ;
        CT_OnOff* m_alwaysMergeEmptyNamespace ;
        bool m_has_updateFields ;
        CT_OnOff* m_updateFields ;
        bool m_has_hdrShapeDefaults ;
        CT_ShapeDefaults* m_hdrShapeDefaults ;
        bool m_has_footnotePr ;
        CT_FtnDocProps* m_footnotePr ;
        bool m_has_endnotePr ;
        CT_EdnDocProps* m_endnotePr ;
        bool m_has_compat ;
        CT_Compat* m_compat ;
        bool m_has_docVars ;
        CT_DocVars* m_docVars ;
        bool m_has_rsids ;
        CT_DocRsids* m_rsids ;
        bool m_has_mathPr ;
        CT_MathPr* m_mathPr ;
        bool m_has_attachedSchema ;
        CT_String* m_attachedSchema ;
        bool m_has_themeFontLang ;
        CT_Language* m_themeFontLang ;
        bool m_has_clrSchemeMapping ;
        CT_ColorSchemeMapping* m_clrSchemeMapping ;
        bool m_has_doNotIncludeSubdocsInStats ;
        CT_OnOff* m_doNotIncludeSubdocsInStats ;
        bool m_has_doNotAutoCompressPictures ;
        CT_OnOff* m_doNotAutoCompressPictures ;
        bool m_has_forceUpgrade ;
        CT_Empty* m_forceUpgrade ;
        bool m_has_captions ;
        CT_Captions* m_captions ;
        bool m_has_readModeInkLockDown ;
        CT_ReadingModeInkLockDown* m_readModeInkLockDown ;
        bool m_has_smartTagType ;
        CT_SmartTagType* m_smartTagType ;
        bool m_has_schemaLibrary ;
        CT_SchemaLibrary* m_schemaLibrary ;
        bool m_has_shapeDefaults ;
        CT_ShapeDefaults* m_shapeDefaults ;
        bool m_has_doNotEmbedSmartTags ;
        CT_OnOff* m_doNotEmbedSmartTags ;
        bool m_has_decimalSymbol ;
        CT_String* m_decimalSymbol ;
        bool m_has_listSeparator ;
        CT_String* m_listSeparator ;
        static CT_Settings* default_instance_ ;

    }

    class CT_StyleSort : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleSort& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_StyleSort& _val_attr );
        const ST_StyleSort& val_attr() const;

    private:
        static CT_StyleSort* default_instance_ ;
        bool m_has_val_attr ;
        ST_StyleSort* m_val_attr ;

    }

    class CT_StylePaneFilter : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StylePaneFilter& default_instance() const;
        bool has_allStyles_attr() const;
        void set_allStyles_attr(const ns_s::ST_OnOff& _allStyles_attr );
        const ns_s::ST_OnOff& allStyles_attr() const;
        bool has_customStyles_attr() const;
        void set_customStyles_attr(const ns_s::ST_OnOff& _customStyles_attr );
        const ns_s::ST_OnOff& customStyles_attr() const;
        bool has_latentStyles_attr() const;
        void set_latentStyles_attr(const ns_s::ST_OnOff& _latentStyles_attr );
        const ns_s::ST_OnOff& latentStyles_attr() const;
        bool has_stylesInUse_attr() const;
        void set_stylesInUse_attr(const ns_s::ST_OnOff& _stylesInUse_attr );
        const ns_s::ST_OnOff& stylesInUse_attr() const;
        bool has_headingStyles_attr() const;
        void set_headingStyles_attr(const ns_s::ST_OnOff& _headingStyles_attr );
        const ns_s::ST_OnOff& headingStyles_attr() const;
        bool has_numberingStyles_attr() const;
        void set_numberingStyles_attr(const ns_s::ST_OnOff& _numberingStyles_attr );
        const ns_s::ST_OnOff& numberingStyles_attr() const;
        bool has_tableStyles_attr() const;
        void set_tableStyles_attr(const ns_s::ST_OnOff& _tableStyles_attr );
        const ns_s::ST_OnOff& tableStyles_attr() const;
        bool has_directFormattingOnRuns_attr() const;
        void set_directFormattingOnRuns_attr(const ns_s::ST_OnOff& _directFormattingOnRuns_attr );
        const ns_s::ST_OnOff& directFormattingOnRuns_attr() const;
        bool has_directFormattingOnParagraphs_attr() const;
        void set_directFormattingOnParagraphs_attr(const ns_s::ST_OnOff& _directFormattingOnParagraphs_attr );
        const ns_s::ST_OnOff& directFormattingOnParagraphs_attr() const;
        bool has_directFormattingOnNumbering_attr() const;
        void set_directFormattingOnNumbering_attr(const ns_s::ST_OnOff& _directFormattingOnNumbering_attr );
        const ns_s::ST_OnOff& directFormattingOnNumbering_attr() const;
        bool has_directFormattingOnTables_attr() const;
        void set_directFormattingOnTables_attr(const ns_s::ST_OnOff& _directFormattingOnTables_attr );
        const ns_s::ST_OnOff& directFormattingOnTables_attr() const;
        bool has_clearFormatting_attr() const;
        void set_clearFormatting_attr(const ns_s::ST_OnOff& _clearFormatting_attr );
        const ns_s::ST_OnOff& clearFormatting_attr() const;
        bool has_top3HeadingStyles_attr() const;
        void set_top3HeadingStyles_attr(const ns_s::ST_OnOff& _top3HeadingStyles_attr );
        const ns_s::ST_OnOff& top3HeadingStyles_attr() const;
        bool has_visibleStyles_attr() const;
        void set_visibleStyles_attr(const ns_s::ST_OnOff& _visibleStyles_attr );
        const ns_s::ST_OnOff& visibleStyles_attr() const;
        bool has_alternateStyleNames_attr() const;
        void set_alternateStyleNames_attr(const ns_s::ST_OnOff& _alternateStyleNames_attr );
        const ns_s::ST_OnOff& alternateStyleNames_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_ShortHexNumber& _val_attr );
        const ST_ShortHexNumber& val_attr() const;

    private:
        static CT_StylePaneFilter* default_instance_ ;
        bool m_has_allStyles_attr ;
        ns_s::ST_OnOff* m_allStyles_attr ;
        bool m_has_customStyles_attr ;
        ns_s::ST_OnOff* m_customStyles_attr ;
        bool m_has_latentStyles_attr ;
        ns_s::ST_OnOff* m_latentStyles_attr ;
        bool m_has_stylesInUse_attr ;
        ns_s::ST_OnOff* m_stylesInUse_attr ;
        bool m_has_headingStyles_attr ;
        ns_s::ST_OnOff* m_headingStyles_attr ;
        bool m_has_numberingStyles_attr ;
        ns_s::ST_OnOff* m_numberingStyles_attr ;
        bool m_has_tableStyles_attr ;
        ns_s::ST_OnOff* m_tableStyles_attr ;
        bool m_has_directFormattingOnRuns_attr ;
        ns_s::ST_OnOff* m_directFormattingOnRuns_attr ;
        bool m_has_directFormattingOnParagraphs_attr ;
        ns_s::ST_OnOff* m_directFormattingOnParagraphs_attr ;
        bool m_has_directFormattingOnNumbering_attr ;
        ns_s::ST_OnOff* m_directFormattingOnNumbering_attr ;
        bool m_has_directFormattingOnTables_attr ;
        ns_s::ST_OnOff* m_directFormattingOnTables_attr ;
        bool m_has_clearFormatting_attr ;
        ns_s::ST_OnOff* m_clearFormatting_attr ;
        bool m_has_top3HeadingStyles_attr ;
        ns_s::ST_OnOff* m_top3HeadingStyles_attr ;
        bool m_has_visibleStyles_attr ;
        ns_s::ST_OnOff* m_visibleStyles_attr ;
        bool m_has_alternateStyleNames_attr ;
        ns_s::ST_OnOff* m_alternateStyleNames_attr ;
        bool m_has_val_attr ;
        ST_ShortHexNumber* m_val_attr ;

    }

    class CT_WebSettings : public XSD::ComplexType{
    public:
        bool has_frameset() const;
        CT_Frameset* mutable_frameset();
        const CT_Frameset& frameset() const;
        bool has_divs() const;
        CT_Divs* mutable_divs();
        const CT_Divs& divs() const;
        bool has_encoding() const;
        CT_String* mutable_encoding();
        const CT_String& encoding() const;
        bool has_optimizeForBrowser() const;
        CT_OptimizeForBrowser* mutable_optimizeForBrowser();
        const CT_OptimizeForBrowser& optimizeForBrowser() const;
        bool has_relyOnVML() const;
        CT_OnOff* mutable_relyOnVML();
        const CT_OnOff& relyOnVML() const;
        bool has_allowPNG() const;
        CT_OnOff* mutable_allowPNG();
        const CT_OnOff& allowPNG() const;
        bool has_doNotRelyOnCSS() const;
        CT_OnOff* mutable_doNotRelyOnCSS();
        const CT_OnOff& doNotRelyOnCSS() const;
        bool has_doNotSaveAsSingleFile() const;
        CT_OnOff* mutable_doNotSaveAsSingleFile();
        const CT_OnOff& doNotSaveAsSingleFile() const;
        bool has_doNotOrganizeInFolder() const;
        CT_OnOff* mutable_doNotOrganizeInFolder();
        const CT_OnOff& doNotOrganizeInFolder() const;
        bool has_doNotUseLongFileNames() const;
        CT_OnOff* mutable_doNotUseLongFileNames();
        const CT_OnOff& doNotUseLongFileNames() const;
        bool has_pixelsPerInch() const;
        CT_DecimalNumber* mutable_pixelsPerInch();
        const CT_DecimalNumber& pixelsPerInch() const;
        bool has_targetScreenSz() const;
        CT_TargetScreenSz* mutable_targetScreenSz();
        const CT_TargetScreenSz& targetScreenSz() const;
        bool has_saveSmartTagsAsXml() const;
        CT_OnOff* mutable_saveSmartTagsAsXml();
        const CT_OnOff& saveSmartTagsAsXml() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WebSettings& default_instance() const;

    private:
        bool m_has_frameset ;
        CT_Frameset* m_frameset ;
        bool m_has_divs ;
        CT_Divs* m_divs ;
        bool m_has_encoding ;
        CT_String* m_encoding ;
        bool m_has_optimizeForBrowser ;
        CT_OptimizeForBrowser* m_optimizeForBrowser ;
        bool m_has_relyOnVML ;
        CT_OnOff* m_relyOnVML ;
        bool m_has_allowPNG ;
        CT_OnOff* m_allowPNG ;
        bool m_has_doNotRelyOnCSS ;
        CT_OnOff* m_doNotRelyOnCSS ;
        bool m_has_doNotSaveAsSingleFile ;
        CT_OnOff* m_doNotSaveAsSingleFile ;
        bool m_has_doNotOrganizeInFolder ;
        CT_OnOff* m_doNotOrganizeInFolder ;
        bool m_has_doNotUseLongFileNames ;
        CT_OnOff* m_doNotUseLongFileNames ;
        bool m_has_pixelsPerInch ;
        CT_DecimalNumber* m_pixelsPerInch ;
        bool m_has_targetScreenSz ;
        CT_TargetScreenSz* m_targetScreenSz ;
        bool m_has_saveSmartTagsAsXml ;
        CT_OnOff* m_saveSmartTagsAsXml ;
        static CT_WebSettings* default_instance_ ;

    }

    class CT_FrameScrollbar : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FrameScrollbar& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FrameScrollbar& _val_attr );
        const ST_FrameScrollbar& val_attr() const;

    private:
        static CT_FrameScrollbar* default_instance_ ;
        bool m_has_val_attr ;
        ST_FrameScrollbar* m_val_attr ;

    }

    class CT_OptimizeForBrowser : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OptimizeForBrowser& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_OnOff& _val_attr );
        const ns_s::ST_OnOff& val_attr() const;
        bool has_target_attr() const;
        void set_target_attr(const ns_s::ST_String& _target_attr );
        const ns_s::ST_String& target_attr() const;

    private:
        static CT_OptimizeForBrowser* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_OnOff* m_val_attr ;
        bool m_has_target_attr ;
        ns_s::ST_String* m_target_attr ;

    }

    class CT_Frame : public XSD::ComplexType{
    public:
        bool has_sz() const;
        CT_String* mutable_sz();
        const CT_String& sz() const;
        bool has_name() const;
        CT_String* mutable_name();
        const CT_String& name() const;
        bool has_title() const;
        CT_String* mutable_title();
        const CT_String& title() const;
        bool has_longDesc() const;
        CT_Rel* mutable_longDesc();
        const CT_Rel& longDesc() const;
        bool has_sourceFileName() const;
        CT_Rel* mutable_sourceFileName();
        const CT_Rel& sourceFileName() const;
        bool has_marW() const;
        CT_PixelsMeasure* mutable_marW();
        const CT_PixelsMeasure& marW() const;
        bool has_marH() const;
        CT_PixelsMeasure* mutable_marH();
        const CT_PixelsMeasure& marH() const;
        bool has_scrollbar() const;
        CT_FrameScrollbar* mutable_scrollbar();
        const CT_FrameScrollbar& scrollbar() const;
        bool has_noResizeAllowed() const;
        CT_OnOff* mutable_noResizeAllowed();
        const CT_OnOff& noResizeAllowed() const;
        bool has_linkedToFile() const;
        CT_OnOff* mutable_linkedToFile();
        const CT_OnOff& linkedToFile() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Frame& default_instance() const;

    private:
        bool m_has_sz ;
        CT_String* m_sz ;
        bool m_has_name ;
        CT_String* m_name ;
        bool m_has_title ;
        CT_String* m_title ;
        bool m_has_longDesc ;
        CT_Rel* m_longDesc ;
        bool m_has_sourceFileName ;
        CT_Rel* m_sourceFileName ;
        bool m_has_marW ;
        CT_PixelsMeasure* m_marW ;
        bool m_has_marH ;
        CT_PixelsMeasure* m_marH ;
        bool m_has_scrollbar ;
        CT_FrameScrollbar* m_scrollbar ;
        bool m_has_noResizeAllowed ;
        CT_OnOff* m_noResizeAllowed ;
        bool m_has_linkedToFile ;
        CT_OnOff* m_linkedToFile ;
        static CT_Frame* default_instance_ ;

    }

    class CT_FrameLayout : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FrameLayout& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FrameLayout& _val_attr );
        const ST_FrameLayout& val_attr() const;

    private:
        static CT_FrameLayout* default_instance_ ;
        bool m_has_val_attr ;
        ST_FrameLayout* m_val_attr ;

    }

    class CT_FramesetSplitbar : public XSD::ComplexType{
    public:
        bool has_w() const;
        CT_TwipsMeasure* mutable_w();
        const CT_TwipsMeasure& w() const;
        bool has_color() const;
        CT_Color* mutable_color();
        const CT_Color& color() const;
        bool has_noBorder() const;
        CT_OnOff* mutable_noBorder();
        const CT_OnOff& noBorder() const;
        bool has_flatBorders() const;
        CT_OnOff* mutable_flatBorders();
        const CT_OnOff& flatBorders() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FramesetSplitbar& default_instance() const;

    private:
        bool m_has_w ;
        CT_TwipsMeasure* m_w ;
        bool m_has_color ;
        CT_Color* m_color ;
        bool m_has_noBorder ;
        CT_OnOff* m_noBorder ;
        bool m_has_flatBorders ;
        CT_OnOff* m_flatBorders ;
        static CT_FramesetSplitbar* default_instance_ ;

    }

    class CT_Frameset : public XSD::ComplexType{
    public:
        bool has_sz() const;
        CT_String* mutable_sz();
        const CT_String& sz() const;
        bool has_framesetSplitbar() const;
        CT_FramesetSplitbar* mutable_framesetSplitbar();
        const CT_FramesetSplitbar& framesetSplitbar() const;
        bool has_frameLayout() const;
        CT_FrameLayout* mutable_frameLayout();
        const CT_FrameLayout& frameLayout() const;
        bool has_title() const;
        CT_String* mutable_title();
        const CT_String& title() const;
        CT_Frameset* add_frameset();
        CT_Frame* add_frame();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Frameset& default_instance() const;

    private:
        bool m_has_sz ;
        CT_String* m_sz ;
        bool m_has_framesetSplitbar ;
        CT_FramesetSplitbar* m_framesetSplitbar ;
        bool m_has_frameLayout ;
        CT_FrameLayout* m_frameLayout ;
        bool m_has_title ;
        CT_String* m_title ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Frameset* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_frameset() const;
            CT_Frameset* mutable_frameset();
            const CT_Frameset& frameset() const;
            bool has_frame() const;
            CT_Frame* mutable_frame();
            const CT_Frame& frame() const;

        private:
            bool m_has_frameset ;
            CT_Frameset* m_frameset ;
            bool m_has_frame ;
            CT_Frame* m_frame ;

        }


    }

    class CT_NumPicBullet : public XSD::ComplexType{
    public:
        bool has_pict() const;
        CT_Picture* mutable_pict();
        const CT_Picture& pict() const;
        bool has_drawing() const;
        CT_Drawing* mutable_drawing();
        const CT_Drawing& drawing() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumPicBullet& default_instance() const;
        bool has_numPicBulletId_attr() const;
        void set_numPicBulletId_attr(const ST_DecimalNumber& _numPicBulletId_attr );
        const ST_DecimalNumber& numPicBulletId_attr() const;

    private:
        bool m_has_pict ;
        CT_Picture* m_pict ;
        bool m_has_drawing ;
        CT_Drawing* m_drawing ;
        static CT_NumPicBullet* default_instance_ ;
        bool m_has_numPicBulletId_attr ;
        ST_DecimalNumber* m_numPicBulletId_attr ;

    }

    class CT_LevelSuffix : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LevelSuffix& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LevelSuffix& _val_attr );
        const ST_LevelSuffix& val_attr() const;

    private:
        static CT_LevelSuffix* default_instance_ ;
        bool m_has_val_attr ;
        ST_LevelSuffix* m_val_attr ;

    }

    class CT_LevelText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LevelText& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;
        bool has_null_attr() const;
        void set_null_attr(const ns_s::ST_OnOff& _null_attr );
        const ns_s::ST_OnOff& null_attr() const;

    private:
        static CT_LevelText* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;
        bool m_has_null_attr ;
        ns_s::ST_OnOff* m_null_attr ;

    }

    class CT_LvlLegacy : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LvlLegacy& default_instance() const;
        bool has_legacy_attr() const;
        void set_legacy_attr(const ns_s::ST_OnOff& _legacy_attr );
        const ns_s::ST_OnOff& legacy_attr() const;
        bool has_legacySpace_attr() const;
        void set_legacySpace_attr(const ns_s::ST_TwipsMeasure& _legacySpace_attr );
        const ns_s::ST_TwipsMeasure& legacySpace_attr() const;
        bool has_legacyIndent_attr() const;
        void set_legacyIndent_attr(const ST_SignedTwipsMeasure& _legacyIndent_attr );
        const ST_SignedTwipsMeasure& legacyIndent_attr() const;

    private:
        static CT_LvlLegacy* default_instance_ ;
        bool m_has_legacy_attr ;
        ns_s::ST_OnOff* m_legacy_attr ;
        bool m_has_legacySpace_attr ;
        ns_s::ST_TwipsMeasure* m_legacySpace_attr ;
        bool m_has_legacyIndent_attr ;
        ST_SignedTwipsMeasure* m_legacyIndent_attr ;

    }

    class CT_Lvl : public XSD::ComplexType{
    public:
        bool has_start() const;
        CT_DecimalNumber* mutable_start();
        const CT_DecimalNumber& start() const;
        bool has_numFmt() const;
        CT_NumFmt* mutable_numFmt();
        const CT_NumFmt& numFmt() const;
        bool has_lvlRestart() const;
        CT_DecimalNumber* mutable_lvlRestart();
        const CT_DecimalNumber& lvlRestart() const;
        bool has_pStyle() const;
        CT_String* mutable_pStyle();
        const CT_String& pStyle() const;
        bool has_isLgl() const;
        CT_OnOff* mutable_isLgl();
        const CT_OnOff& isLgl() const;
        bool has_suff() const;
        CT_LevelSuffix* mutable_suff();
        const CT_LevelSuffix& suff() const;
        bool has_lvlText() const;
        CT_LevelText* mutable_lvlText();
        const CT_LevelText& lvlText() const;
        bool has_lvlPicBulletId() const;
        CT_DecimalNumber* mutable_lvlPicBulletId();
        const CT_DecimalNumber& lvlPicBulletId() const;
        bool has_legacy() const;
        CT_LvlLegacy* mutable_legacy();
        const CT_LvlLegacy& legacy() const;
        bool has_lvlJc() const;
        CT_Jc* mutable_lvlJc();
        const CT_Jc& lvlJc() const;
        bool has_pPr() const;
        CT_PPrGeneral* mutable_pPr();
        const CT_PPrGeneral& pPr() const;
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Lvl& default_instance() const;
        bool has_ilvl_attr() const;
        void set_ilvl_attr(const ST_DecimalNumber& _ilvl_attr );
        const ST_DecimalNumber& ilvl_attr() const;
        bool has_tplc_attr() const;
        void set_tplc_attr(const ST_LongHexNumber& _tplc_attr );
        const ST_LongHexNumber& tplc_attr() const;
        bool has_tentative_attr() const;
        void set_tentative_attr(const ns_s::ST_OnOff& _tentative_attr );
        const ns_s::ST_OnOff& tentative_attr() const;

    private:
        bool m_has_start ;
        CT_DecimalNumber* m_start ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_lvlRestart ;
        CT_DecimalNumber* m_lvlRestart ;
        bool m_has_pStyle ;
        CT_String* m_pStyle ;
        bool m_has_isLgl ;
        CT_OnOff* m_isLgl ;
        bool m_has_suff ;
        CT_LevelSuffix* m_suff ;
        bool m_has_lvlText ;
        CT_LevelText* m_lvlText ;
        bool m_has_lvlPicBulletId ;
        CT_DecimalNumber* m_lvlPicBulletId ;
        bool m_has_legacy ;
        CT_LvlLegacy* m_legacy ;
        bool m_has_lvlJc ;
        CT_Jc* m_lvlJc ;
        bool m_has_pPr ;
        CT_PPrGeneral* m_pPr ;
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        static CT_Lvl* default_instance_ ;
        bool m_has_ilvl_attr ;
        ST_DecimalNumber* m_ilvl_attr ;
        bool m_has_tplc_attr ;
        ST_LongHexNumber* m_tplc_attr ;
        bool m_has_tentative_attr ;
        ns_s::ST_OnOff* m_tentative_attr ;

    }

    class CT_MultiLevelType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MultiLevelType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_MultiLevelType& _val_attr );
        const ST_MultiLevelType& val_attr() const;

    private:
        static CT_MultiLevelType* default_instance_ ;
        bool m_has_val_attr ;
        ST_MultiLevelType* m_val_attr ;

    }

    class CT_AbstractNum : public XSD::ComplexType{
    public:
        bool has_nsid() const;
        CT_LongHexNumber* mutable_nsid();
        const CT_LongHexNumber& nsid() const;
        bool has_multiLevelType() const;
        CT_MultiLevelType* mutable_multiLevelType();
        const CT_MultiLevelType& multiLevelType() const;
        bool has_tmpl() const;
        CT_LongHexNumber* mutable_tmpl();
        const CT_LongHexNumber& tmpl() const;
        bool has_name() const;
        CT_String* mutable_name();
        const CT_String& name() const;
        bool has_styleLink() const;
        CT_String* mutable_styleLink();
        const CT_String& styleLink() const;
        bool has_numStyleLink() const;
        CT_String* mutable_numStyleLink();
        const CT_String& numStyleLink() const;
        bool has_lvl() const;
        CT_Lvl* mutable_lvl();
        const CT_Lvl& lvl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AbstractNum& default_instance() const;
        bool has_abstractNumId_attr() const;
        void set_abstractNumId_attr(const ST_DecimalNumber& _abstractNumId_attr );
        const ST_DecimalNumber& abstractNumId_attr() const;

    private:
        bool m_has_nsid ;
        CT_LongHexNumber* m_nsid ;
        bool m_has_multiLevelType ;
        CT_MultiLevelType* m_multiLevelType ;
        bool m_has_tmpl ;
        CT_LongHexNumber* m_tmpl ;
        bool m_has_name ;
        CT_String* m_name ;
        bool m_has_styleLink ;
        CT_String* m_styleLink ;
        bool m_has_numStyleLink ;
        CT_String* m_numStyleLink ;
        bool m_has_lvl ;
        CT_Lvl* m_lvl ;
        static CT_AbstractNum* default_instance_ ;
        bool m_has_abstractNumId_attr ;
        ST_DecimalNumber* m_abstractNumId_attr ;

    }

    class CT_NumLvl : public XSD::ComplexType{
    public:
        bool has_startOverride() const;
        CT_DecimalNumber* mutable_startOverride();
        const CT_DecimalNumber& startOverride() const;
        bool has_lvl() const;
        CT_Lvl* mutable_lvl();
        const CT_Lvl& lvl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NumLvl& default_instance() const;
        bool has_ilvl_attr() const;
        void set_ilvl_attr(const ST_DecimalNumber& _ilvl_attr );
        const ST_DecimalNumber& ilvl_attr() const;

    private:
        bool m_has_startOverride ;
        CT_DecimalNumber* m_startOverride ;
        bool m_has_lvl ;
        CT_Lvl* m_lvl ;
        static CT_NumLvl* default_instance_ ;
        bool m_has_ilvl_attr ;
        ST_DecimalNumber* m_ilvl_attr ;

    }

    class CT_Num : public XSD::ComplexType{
    public:
        bool has_abstractNumId() const;
        CT_DecimalNumber* mutable_abstractNumId();
        const CT_DecimalNumber& abstractNumId() const;
        bool has_lvlOverride() const;
        CT_NumLvl* mutable_lvlOverride();
        const CT_NumLvl& lvlOverride() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Num& default_instance() const;
        bool has_numId_attr() const;
        void set_numId_attr(const ST_DecimalNumber& _numId_attr );
        const ST_DecimalNumber& numId_attr() const;

    private:
        bool m_has_abstractNumId ;
        CT_DecimalNumber* m_abstractNumId ;
        bool m_has_lvlOverride ;
        CT_NumLvl* m_lvlOverride ;
        static CT_Num* default_instance_ ;
        bool m_has_numId_attr ;
        ST_DecimalNumber* m_numId_attr ;

    }

    class CT_Numbering : public XSD::ComplexType{
    public:
        bool has_numPicBullet() const;
        CT_NumPicBullet* mutable_numPicBullet();
        const CT_NumPicBullet& numPicBullet() const;
        bool has_abstractNum() const;
        CT_AbstractNum* mutable_abstractNum();
        const CT_AbstractNum& abstractNum() const;
        bool has_num() const;
        CT_Num* mutable_num();
        const CT_Num& num() const;
        bool has_numIdMacAtCleanup() const;
        CT_DecimalNumber* mutable_numIdMacAtCleanup();
        const CT_DecimalNumber& numIdMacAtCleanup() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Numbering& default_instance() const;

    private:
        bool m_has_numPicBullet ;
        CT_NumPicBullet* m_numPicBullet ;
        bool m_has_abstractNum ;
        CT_AbstractNum* m_abstractNum ;
        bool m_has_num ;
        CT_Num* m_num ;
        bool m_has_numIdMacAtCleanup ;
        CT_DecimalNumber* m_numIdMacAtCleanup ;
        static CT_Numbering* default_instance_ ;

    }

    class CT_TblStylePr : public XSD::ComplexType{
    public:
        bool has_pPr() const;
        CT_PPrGeneral* mutable_pPr();
        const CT_PPrGeneral& pPr() const;
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        bool has_tblPr() const;
        CT_TblPrBase* mutable_tblPr();
        const CT_TblPrBase& tblPr() const;
        bool has_trPr() const;
        CT_TrPr* mutable_trPr();
        const CT_TrPr& trPr() const;
        bool has_tcPr() const;
        CT_TcPr* mutable_tcPr();
        const CT_TcPr& tcPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TblStylePr& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TblStyleOverrideType& _type_attr );
        const ST_TblStyleOverrideType& type_attr() const;

    private:
        bool m_has_pPr ;
        CT_PPrGeneral* m_pPr ;
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        bool m_has_tblPr ;
        CT_TblPrBase* m_tblPr ;
        bool m_has_trPr ;
        CT_TrPr* m_trPr ;
        bool m_has_tcPr ;
        CT_TcPr* m_tcPr ;
        static CT_TblStylePr* default_instance_ ;
        bool m_has_type_attr ;
        ST_TblStyleOverrideType* m_type_attr ;

    }

    class CT_Style : public XSD::ComplexType{
    public:
        bool has_name() const;
        CT_String* mutable_name();
        const CT_String& name() const;
        bool has_aliases() const;
        CT_String* mutable_aliases();
        const CT_String& aliases() const;
        bool has_basedOn() const;
        CT_String* mutable_basedOn();
        const CT_String& basedOn() const;
        bool has_next() const;
        CT_String* mutable_next();
        const CT_String& next() const;
        bool has_link() const;
        CT_String* mutable_link();
        const CT_String& link() const;
        bool has_autoRedefine() const;
        CT_OnOff* mutable_autoRedefine();
        const CT_OnOff& autoRedefine() const;
        bool has_hidden() const;
        CT_OnOff* mutable_hidden();
        const CT_OnOff& hidden() const;
        bool has_uiPriority() const;
        CT_DecimalNumber* mutable_uiPriority();
        const CT_DecimalNumber& uiPriority() const;
        bool has_semiHidden() const;
        CT_OnOff* mutable_semiHidden();
        const CT_OnOff& semiHidden() const;
        bool has_unhideWhenUsed() const;
        CT_OnOff* mutable_unhideWhenUsed();
        const CT_OnOff& unhideWhenUsed() const;
        bool has_qFormat() const;
        CT_OnOff* mutable_qFormat();
        const CT_OnOff& qFormat() const;
        bool has_locked() const;
        CT_OnOff* mutable_locked();
        const CT_OnOff& locked() const;
        bool has_personal() const;
        CT_OnOff* mutable_personal();
        const CT_OnOff& personal() const;
        bool has_personalCompose() const;
        CT_OnOff* mutable_personalCompose();
        const CT_OnOff& personalCompose() const;
        bool has_personalReply() const;
        CT_OnOff* mutable_personalReply();
        const CT_OnOff& personalReply() const;
        bool has_rsid() const;
        CT_LongHexNumber* mutable_rsid();
        const CT_LongHexNumber& rsid() const;
        bool has_pPr() const;
        CT_PPrGeneral* mutable_pPr();
        const CT_PPrGeneral& pPr() const;
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        bool has_tblPr() const;
        CT_TblPrBase* mutable_tblPr();
        const CT_TblPrBase& tblPr() const;
        bool has_trPr() const;
        CT_TrPr* mutable_trPr();
        const CT_TrPr& trPr() const;
        bool has_tcPr() const;
        CT_TcPr* mutable_tcPr();
        const CT_TcPr& tcPr() const;
        bool has_tblStylePr() const;
        CT_TblStylePr* mutable_tblStylePr();
        const CT_TblStylePr& tblStylePr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Style& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_StyleType& _type_attr );
        const ST_StyleType& type_attr() const;
        bool has_styleId_attr() const;
        void set_styleId_attr(const ns_s::ST_String& _styleId_attr );
        const ns_s::ST_String& styleId_attr() const;
        bool has_default_attr() const;
        void set_default_attr(const ns_s::ST_OnOff& _default_attr );
        const ns_s::ST_OnOff& default_attr() const;
        bool has_customStyle_attr() const;
        void set_customStyle_attr(const ns_s::ST_OnOff& _customStyle_attr );
        const ns_s::ST_OnOff& customStyle_attr() const;

    private:
        bool m_has_name ;
        CT_String* m_name ;
        bool m_has_aliases ;
        CT_String* m_aliases ;
        bool m_has_basedOn ;
        CT_String* m_basedOn ;
        bool m_has_next ;
        CT_String* m_next ;
        bool m_has_link ;
        CT_String* m_link ;
        bool m_has_autoRedefine ;
        CT_OnOff* m_autoRedefine ;
        bool m_has_hidden ;
        CT_OnOff* m_hidden ;
        bool m_has_uiPriority ;
        CT_DecimalNumber* m_uiPriority ;
        bool m_has_semiHidden ;
        CT_OnOff* m_semiHidden ;
        bool m_has_unhideWhenUsed ;
        CT_OnOff* m_unhideWhenUsed ;
        bool m_has_qFormat ;
        CT_OnOff* m_qFormat ;
        bool m_has_locked ;
        CT_OnOff* m_locked ;
        bool m_has_personal ;
        CT_OnOff* m_personal ;
        bool m_has_personalCompose ;
        CT_OnOff* m_personalCompose ;
        bool m_has_personalReply ;
        CT_OnOff* m_personalReply ;
        bool m_has_rsid ;
        CT_LongHexNumber* m_rsid ;
        bool m_has_pPr ;
        CT_PPrGeneral* m_pPr ;
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        bool m_has_tblPr ;
        CT_TblPrBase* m_tblPr ;
        bool m_has_trPr ;
        CT_TrPr* m_trPr ;
        bool m_has_tcPr ;
        CT_TcPr* m_tcPr ;
        bool m_has_tblStylePr ;
        CT_TblStylePr* m_tblStylePr ;
        static CT_Style* default_instance_ ;
        bool m_has_type_attr ;
        ST_StyleType* m_type_attr ;
        bool m_has_styleId_attr ;
        ns_s::ST_String* m_styleId_attr ;
        bool m_has_default_attr ;
        ns_s::ST_OnOff* m_default_attr ;
        bool m_has_customStyle_attr ;
        ns_s::ST_OnOff* m_customStyle_attr ;

    }

    class CT_LsdException : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LsdException& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_locked_attr() const;
        void set_locked_attr(const ns_s::ST_OnOff& _locked_attr );
        const ns_s::ST_OnOff& locked_attr() const;
        bool has_uiPriority_attr() const;
        void set_uiPriority_attr(const ST_DecimalNumber& _uiPriority_attr );
        const ST_DecimalNumber& uiPriority_attr() const;
        bool has_semiHidden_attr() const;
        void set_semiHidden_attr(const ns_s::ST_OnOff& _semiHidden_attr );
        const ns_s::ST_OnOff& semiHidden_attr() const;
        bool has_unhideWhenUsed_attr() const;
        void set_unhideWhenUsed_attr(const ns_s::ST_OnOff& _unhideWhenUsed_attr );
        const ns_s::ST_OnOff& unhideWhenUsed_attr() const;
        bool has_qFormat_attr() const;
        void set_qFormat_attr(const ns_s::ST_OnOff& _qFormat_attr );
        const ns_s::ST_OnOff& qFormat_attr() const;

    private:
        static CT_LsdException* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_locked_attr ;
        ns_s::ST_OnOff* m_locked_attr ;
        bool m_has_uiPriority_attr ;
        ST_DecimalNumber* m_uiPriority_attr ;
        bool m_has_semiHidden_attr ;
        ns_s::ST_OnOff* m_semiHidden_attr ;
        bool m_has_unhideWhenUsed_attr ;
        ns_s::ST_OnOff* m_unhideWhenUsed_attr ;
        bool m_has_qFormat_attr ;
        ns_s::ST_OnOff* m_qFormat_attr ;

    }

    class CT_LatentStyles : public XSD::ComplexType{
    public:
        bool has_lsdException() const;
        CT_LsdException* mutable_lsdException();
        const CT_LsdException& lsdException() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LatentStyles& default_instance() const;
        bool has_defLockedState_attr() const;
        void set_defLockedState_attr(const ns_s::ST_OnOff& _defLockedState_attr );
        const ns_s::ST_OnOff& defLockedState_attr() const;
        bool has_defUIPriority_attr() const;
        void set_defUIPriority_attr(const ST_DecimalNumber& _defUIPriority_attr );
        const ST_DecimalNumber& defUIPriority_attr() const;
        bool has_defSemiHidden_attr() const;
        void set_defSemiHidden_attr(const ns_s::ST_OnOff& _defSemiHidden_attr );
        const ns_s::ST_OnOff& defSemiHidden_attr() const;
        bool has_defUnhideWhenUsed_attr() const;
        void set_defUnhideWhenUsed_attr(const ns_s::ST_OnOff& _defUnhideWhenUsed_attr );
        const ns_s::ST_OnOff& defUnhideWhenUsed_attr() const;
        bool has_defQFormat_attr() const;
        void set_defQFormat_attr(const ns_s::ST_OnOff& _defQFormat_attr );
        const ns_s::ST_OnOff& defQFormat_attr() const;
        bool has_count_attr() const;
        void set_count_attr(const ST_DecimalNumber& _count_attr );
        const ST_DecimalNumber& count_attr() const;

    private:
        bool m_has_lsdException ;
        CT_LsdException* m_lsdException ;
        static CT_LatentStyles* default_instance_ ;
        bool m_has_defLockedState_attr ;
        ns_s::ST_OnOff* m_defLockedState_attr ;
        bool m_has_defUIPriority_attr ;
        ST_DecimalNumber* m_defUIPriority_attr ;
        bool m_has_defSemiHidden_attr ;
        ns_s::ST_OnOff* m_defSemiHidden_attr ;
        bool m_has_defUnhideWhenUsed_attr ;
        ns_s::ST_OnOff* m_defUnhideWhenUsed_attr ;
        bool m_has_defQFormat_attr ;
        ns_s::ST_OnOff* m_defQFormat_attr ;
        bool m_has_count_attr ;
        ST_DecimalNumber* m_count_attr ;

    }

    class CT_Styles : public XSD::ComplexType{
    public:
        bool has_docDefaults() const;
        CT_DocDefaults* mutable_docDefaults();
        const CT_DocDefaults& docDefaults() const;
        bool has_latentStyles() const;
        CT_LatentStyles* mutable_latentStyles();
        const CT_LatentStyles& latentStyles() const;
        bool has_style() const;
        CT_Style* mutable_style();
        const CT_Style& style() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Styles& default_instance() const;

    private:
        bool m_has_docDefaults ;
        CT_DocDefaults* m_docDefaults ;
        bool m_has_latentStyles ;
        CT_LatentStyles* m_latentStyles ;
        bool m_has_style ;
        CT_Style* m_style ;
        static CT_Styles* default_instance_ ;

    }

    class CT_Panose : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Panose& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_Panose& _val_attr );
        const ns_s::ST_Panose& val_attr() const;

    private:
        static CT_Panose* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Panose* m_val_attr ;

    }

    class CT_FontFamily : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontFamily& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FontFamily& _val_attr );
        const ST_FontFamily& val_attr() const;

    private:
        static CT_FontFamily* default_instance_ ;
        bool m_has_val_attr ;
        ST_FontFamily* m_val_attr ;

    }

    class CT_Pitch : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Pitch& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Pitch& _val_attr );
        const ST_Pitch& val_attr() const;

    private:
        static CT_Pitch* default_instance_ ;
        bool m_has_val_attr ;
        ST_Pitch* m_val_attr ;

    }

    class CT_FontSig : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontSig& default_instance() const;
        bool has_usb0_attr() const;
        void set_usb0_attr(const ST_LongHexNumber& _usb0_attr );
        const ST_LongHexNumber& usb0_attr() const;
        bool has_usb1_attr() const;
        void set_usb1_attr(const ST_LongHexNumber& _usb1_attr );
        const ST_LongHexNumber& usb1_attr() const;
        bool has_usb2_attr() const;
        void set_usb2_attr(const ST_LongHexNumber& _usb2_attr );
        const ST_LongHexNumber& usb2_attr() const;
        bool has_usb3_attr() const;
        void set_usb3_attr(const ST_LongHexNumber& _usb3_attr );
        const ST_LongHexNumber& usb3_attr() const;
        bool has_csb0_attr() const;
        void set_csb0_attr(const ST_LongHexNumber& _csb0_attr );
        const ST_LongHexNumber& csb0_attr() const;
        bool has_csb1_attr() const;
        void set_csb1_attr(const ST_LongHexNumber& _csb1_attr );
        const ST_LongHexNumber& csb1_attr() const;

    private:
        static CT_FontSig* default_instance_ ;
        bool m_has_usb0_attr ;
        ST_LongHexNumber* m_usb0_attr ;
        bool m_has_usb1_attr ;
        ST_LongHexNumber* m_usb1_attr ;
        bool m_has_usb2_attr ;
        ST_LongHexNumber* m_usb2_attr ;
        bool m_has_usb3_attr ;
        ST_LongHexNumber* m_usb3_attr ;
        bool m_has_csb0_attr ;
        ST_LongHexNumber* m_csb0_attr ;
        bool m_has_csb1_attr ;
        ST_LongHexNumber* m_csb1_attr ;

    }

    class CT_FontRel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontRel& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_fontKey_attr() const;
        void set_fontKey_attr(const ns_s::ST_Guid& _fontKey_attr );
        const ns_s::ST_Guid& fontKey_attr() const;
        bool has_subsetted_attr() const;
        void set_subsetted_attr(const ns_s::ST_OnOff& _subsetted_attr );
        const ns_s::ST_OnOff& subsetted_attr() const;

    private:
        static CT_FontRel* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_fontKey_attr ;
        ns_s::ST_Guid* m_fontKey_attr ;
        bool m_has_subsetted_attr ;
        ns_s::ST_OnOff* m_subsetted_attr ;

    }

    class CT_Font : public XSD::ComplexType{
    public:
        bool has_altName() const;
        CT_String* mutable_altName();
        const CT_String& altName() const;
        bool has_panose1() const;
        CT_Panose* mutable_panose1();
        const CT_Panose& panose1() const;
        bool has_charset() const;
        CT_Charset* mutable_charset();
        const CT_Charset& charset() const;
        bool has_family() const;
        CT_FontFamily* mutable_family();
        const CT_FontFamily& family() const;
        bool has_notTrueType() const;
        CT_OnOff* mutable_notTrueType();
        const CT_OnOff& notTrueType() const;
        bool has_pitch() const;
        CT_Pitch* mutable_pitch();
        const CT_Pitch& pitch() const;
        bool has_sig() const;
        CT_FontSig* mutable_sig();
        const CT_FontSig& sig() const;
        bool has_embedRegular() const;
        CT_FontRel* mutable_embedRegular();
        const CT_FontRel& embedRegular() const;
        bool has_embedBold() const;
        CT_FontRel* mutable_embedBold();
        const CT_FontRel& embedBold() const;
        bool has_embedItalic() const;
        CT_FontRel* mutable_embedItalic();
        const CT_FontRel& embedItalic() const;
        bool has_embedBoldItalic() const;
        CT_FontRel* mutable_embedBoldItalic();
        const CT_FontRel& embedBoldItalic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Font& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;

    private:
        bool m_has_altName ;
        CT_String* m_altName ;
        bool m_has_panose1 ;
        CT_Panose* m_panose1 ;
        bool m_has_charset ;
        CT_Charset* m_charset ;
        bool m_has_family ;
        CT_FontFamily* m_family ;
        bool m_has_notTrueType ;
        CT_OnOff* m_notTrueType ;
        bool m_has_pitch ;
        CT_Pitch* m_pitch ;
        bool m_has_sig ;
        CT_FontSig* m_sig ;
        bool m_has_embedRegular ;
        CT_FontRel* m_embedRegular ;
        bool m_has_embedBold ;
        CT_FontRel* m_embedBold ;
        bool m_has_embedItalic ;
        CT_FontRel* m_embedItalic ;
        bool m_has_embedBoldItalic ;
        CT_FontRel* m_embedBoldItalic ;
        static CT_Font* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;

    }

    class CT_FontsList : public XSD::ComplexType{
    public:
        bool has_font() const;
        CT_Font* mutable_font();
        const CT_Font& font() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontsList& default_instance() const;

    private:
        bool m_has_font ;
        CT_Font* m_font ;
        static CT_FontsList* default_instance_ ;

    }

    class CT_DivBdr : public XSD::ComplexType{
    public:
        bool has_top() const;
        CT_Border* mutable_top();
        const CT_Border& top() const;
        bool has_left() const;
        CT_Border* mutable_left();
        const CT_Border& left() const;
        bool has_bottom() const;
        CT_Border* mutable_bottom();
        const CT_Border& bottom() const;
        bool has_right() const;
        CT_Border* mutable_right();
        const CT_Border& right() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DivBdr& default_instance() const;

    private:
        bool m_has_top ;
        CT_Border* m_top ;
        bool m_has_left ;
        CT_Border* m_left ;
        bool m_has_bottom ;
        CT_Border* m_bottom ;
        bool m_has_right ;
        CT_Border* m_right ;
        static CT_DivBdr* default_instance_ ;

    }

    class CT_Div : public XSD::ComplexType{
    public:
        bool has_blockQuote() const;
        CT_OnOff* mutable_blockQuote();
        const CT_OnOff& blockQuote() const;
        bool has_bodyDiv() const;
        CT_OnOff* mutable_bodyDiv();
        const CT_OnOff& bodyDiv() const;
        bool has_marLeft() const;
        CT_SignedTwipsMeasure* mutable_marLeft();
        const CT_SignedTwipsMeasure& marLeft() const;
        bool has_marRight() const;
        CT_SignedTwipsMeasure* mutable_marRight();
        const CT_SignedTwipsMeasure& marRight() const;
        bool has_marTop() const;
        CT_SignedTwipsMeasure* mutable_marTop();
        const CT_SignedTwipsMeasure& marTop() const;
        bool has_marBottom() const;
        CT_SignedTwipsMeasure* mutable_marBottom();
        const CT_SignedTwipsMeasure& marBottom() const;
        bool has_divBdr() const;
        CT_DivBdr* mutable_divBdr();
        const CT_DivBdr& divBdr() const;
        bool has_divsChild() const;
        CT_Divs* mutable_divsChild();
        const CT_Divs& divsChild() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Div& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DecimalNumber& _id_attr );
        const ST_DecimalNumber& id_attr() const;

    private:
        bool m_has_blockQuote ;
        CT_OnOff* m_blockQuote ;
        bool m_has_bodyDiv ;
        CT_OnOff* m_bodyDiv ;
        bool m_has_marLeft ;
        CT_SignedTwipsMeasure* m_marLeft ;
        bool m_has_marRight ;
        CT_SignedTwipsMeasure* m_marRight ;
        bool m_has_marTop ;
        CT_SignedTwipsMeasure* m_marTop ;
        bool m_has_marBottom ;
        CT_SignedTwipsMeasure* m_marBottom ;
        bool m_has_divBdr ;
        CT_DivBdr* m_divBdr ;
        bool m_has_divsChild ;
        CT_Divs* m_divsChild ;
        static CT_Div* default_instance_ ;
        bool m_has_id_attr ;
        ST_DecimalNumber* m_id_attr ;

    }

    class CT_Divs : public XSD::ComplexType{
    public:
        CT_Div* add_div();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Divs& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Divs* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_div() const;
            CT_Div* mutable_div();
            const CT_Div& div() const;

        private:
            bool m_has_div ;
            CT_Div* m_div ;

        }


    }

    class CT_TxbxContent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TxbxContent& default_instance() const;

    private:
        static CT_TxbxContent* default_instance_ ;

    }

    class CT_Body : public XSD::ComplexType{
    public:
        CT_CustomXmlBlock* add_customXml();
        CT_SdtBlock* add_sdt();
        CT_P* add_p();
        CT_Tbl* add_tbl();
        CT_ProofErr* add_proofErr();
        CT_PermStart* add_permStart();
        CT_Perm* add_permEnd();
        CT_Bookmark* add_bookmarkStart();
        CT_MarkupRange* add_bookmarkEnd();
        CT_MoveBookmark* add_moveFromRangeStart();
        CT_MarkupRange* add_moveFromRangeEnd();
        CT_MoveBookmark* add_moveToRangeStart();
        CT_MarkupRange* add_moveToRangeEnd();
        CT_MarkupRange* add_commentRangeStart();
        CT_MarkupRange* add_commentRangeEnd();
        CT_TrackChange* add_customXmlInsRangeStart();
        CT_Markup* add_customXmlInsRangeEnd();
        CT_TrackChange* add_customXmlDelRangeStart();
        CT_Markup* add_customXmlDelRangeEnd();
        CT_TrackChange* add_customXmlMoveFromRangeStart();
        CT_Markup* add_customXmlMoveFromRangeEnd();
        CT_TrackChange* add_customXmlMoveToRangeStart();
        CT_Markup* add_customXmlMoveToRangeEnd();
        CT_RunTrackChange* add_ins();
        CT_RunTrackChange* add_del();
        CT_RunTrackChange* add_moveFrom();
        CT_RunTrackChange* add_moveTo();
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        CT_AltChunk* add_altChunk();
        bool has_sectPr() const;
        CT_SectPr* mutable_sectPr();
        const CT_SectPr& sectPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Body& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_sectPr ;
        CT_SectPr* m_sectPr ;
        static CT_Body* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_customXml() const;
            CT_CustomXmlBlock* mutable_customXml();
            const CT_CustomXmlBlock& customXml() const;
            bool has_sdt() const;
            CT_SdtBlock* mutable_sdt();
            const CT_SdtBlock& sdt() const;
            bool has_p() const;
            CT_P* mutable_p();
            const CT_P& p() const;
            bool has_tbl() const;
            CT_Tbl* mutable_tbl();
            const CT_Tbl& tbl() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;
            bool has_altChunk() const;
            CT_AltChunk* mutable_altChunk();
            const CT_AltChunk& altChunk() const;

        private:
            bool m_has_customXml ;
            CT_CustomXmlBlock* m_customXml ;
            bool m_has_sdt ;
            CT_SdtBlock* m_sdt ;
            bool m_has_p ;
            CT_P* m_p ;
            bool m_has_tbl ;
            CT_Tbl* m_tbl ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;
            bool m_has_altChunk ;
            CT_AltChunk* m_altChunk ;

        }


    }

    class CT_ShapeDefaults : public XSD::ComplexType{
    public:
        ns_::Element* add_any();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeDefaults& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ShapeDefaults* default_instance_ ;
        class ChildGroup_1{
        public:

        private:

        }


    }

    class CT_Comments : public XSD::ComplexType{
    public:
        bool has_comment() const;
        CT_Comment* mutable_comment();
        const CT_Comment& comment() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Comments& default_instance() const;

    private:
        bool m_has_comment ;
        CT_Comment* m_comment ;
        static CT_Comments* default_instance_ ;

    }

    class CT_Footnotes : public XSD::ComplexType{
    public:
        CT_FtnEdn* add_footnote();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Footnotes& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Footnotes* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_footnote() const;
            CT_FtnEdn* mutable_footnote();
            const CT_FtnEdn& footnote() const;

        private:
            bool m_has_footnote ;
            CT_FtnEdn* m_footnote ;

        }


    }

    class CT_Endnotes : public XSD::ComplexType{
    public:
        CT_FtnEdn* add_endnote();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Endnotes& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Endnotes* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_endnote() const;
            CT_FtnEdn* mutable_endnote();
            const CT_FtnEdn& endnote() const;

        private:
            bool m_has_endnote ;
            CT_FtnEdn* m_endnote ;

        }


    }

    class CT_SmartTagType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SmartTagType& default_instance() const;
        bool has_namespaceuri_attr() const;
        void set_namespaceuri_attr(const ns_s::ST_String& _namespaceuri_attr );
        const ns_s::ST_String& namespaceuri_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_url_attr() const;
        void set_url_attr(const ns_s::ST_String& _url_attr );
        const ns_s::ST_String& url_attr() const;

    private:
        static CT_SmartTagType* default_instance_ ;
        bool m_has_namespaceuri_attr ;
        ns_s::ST_String* m_namespaceuri_attr ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_url_attr ;
        ns_s::ST_String* m_url_attr ;

    }

    class CT_DocPartBehavior : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartBehavior& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DocPartBehavior& _val_attr );
        const ST_DocPartBehavior& val_attr() const;

    private:
        static CT_DocPartBehavior* default_instance_ ;
        bool m_has_val_attr ;
        ST_DocPartBehavior* m_val_attr ;

    }

    class CT_DocPartBehaviors : public XSD::ComplexType{
    public:
        bool has_behavior() const;
        CT_DocPartBehavior* mutable_behavior();
        const CT_DocPartBehavior& behavior() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartBehaviors& default_instance() const;

    private:
        bool m_has_behavior ;
        CT_DocPartBehavior* m_behavior ;
        static CT_DocPartBehaviors* default_instance_ ;

    }

    class CT_DocPartType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DocPartType& _val_attr );
        const ST_DocPartType& val_attr() const;

    private:
        static CT_DocPartType* default_instance_ ;
        bool m_has_val_attr ;
        ST_DocPartType* m_val_attr ;

    }

    class CT_DocPartTypes : public XSD::ComplexType{
    public:
        bool has_type() const;
        CT_DocPartType* mutable_type();
        const CT_DocPartType& type() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartTypes& default_instance() const;
        bool has_all_attr() const;
        void set_all_attr(const ns_s::ST_OnOff& _all_attr );
        const ns_s::ST_OnOff& all_attr() const;

    private:
        bool m_has_type ;
        CT_DocPartType* m_type ;
        static CT_DocPartTypes* default_instance_ ;
        bool m_has_all_attr ;
        ns_s::ST_OnOff* m_all_attr ;

    }

    class CT_DocPartGallery : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartGallery& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_DocPartGallery& _val_attr );
        const ST_DocPartGallery& val_attr() const;

    private:
        static CT_DocPartGallery* default_instance_ ;
        bool m_has_val_attr ;
        ST_DocPartGallery* m_val_attr ;

    }

    class CT_DocPartCategory : public XSD::ComplexType{
    public:
        bool has_name() const;
        CT_String* mutable_name();
        const CT_String& name() const;
        bool has_gallery() const;
        CT_DocPartGallery* mutable_gallery();
        const CT_DocPartGallery& gallery() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartCategory& default_instance() const;

    private:
        bool m_has_name ;
        CT_String* m_name ;
        bool m_has_gallery ;
        CT_DocPartGallery* m_gallery ;
        static CT_DocPartCategory* default_instance_ ;

    }

    class CT_DocPartName : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartName& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;
        bool has_decorated_attr() const;
        void set_decorated_attr(const ns_s::ST_OnOff& _decorated_attr );
        const ns_s::ST_OnOff& decorated_attr() const;

    private:
        static CT_DocPartName* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;
        bool m_has_decorated_attr ;
        ns_s::ST_OnOff* m_decorated_attr ;

    }

    class CT_DocPartPr : public XSD::ComplexType{
    public:
        bool has_name() const;
        CT_DocPartName* mutable_name();
        const CT_DocPartName& name() const;
        bool has_style() const;
        CT_String* mutable_style();
        const CT_String& style() const;
        bool has_category() const;
        CT_DocPartCategory* mutable_category();
        const CT_DocPartCategory& category() const;
        bool has_types() const;
        CT_DocPartTypes* mutable_types();
        const CT_DocPartTypes& types() const;
        bool has_behaviors() const;
        CT_DocPartBehaviors* mutable_behaviors();
        const CT_DocPartBehaviors& behaviors() const;
        bool has_description() const;
        CT_String* mutable_description();
        const CT_String& description() const;
        bool has_guid() const;
        CT_Guid* mutable_guid();
        const CT_Guid& guid() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPartPr& default_instance() const;

    private:
        bool m_has_name ;
        CT_DocPartName* m_name ;
        bool m_has_style ;
        CT_String* m_style ;
        bool m_has_category ;
        CT_DocPartCategory* m_category ;
        bool m_has_types ;
        CT_DocPartTypes* m_types ;
        bool m_has_behaviors ;
        CT_DocPartBehaviors* m_behaviors ;
        bool m_has_description ;
        CT_String* m_description ;
        bool m_has_guid ;
        CT_Guid* m_guid ;
        static CT_DocPartPr* default_instance_ ;

    }

    class CT_DocPart : public XSD::ComplexType{
    public:
        bool has_docPartPr() const;
        CT_DocPartPr* mutable_docPartPr();
        const CT_DocPartPr& docPartPr() const;
        bool has_docPartBody() const;
        CT_Body* mutable_docPartBody();
        const CT_Body& docPartBody() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocPart& default_instance() const;

    private:
        bool m_has_docPartPr ;
        CT_DocPartPr* m_docPartPr ;
        bool m_has_docPartBody ;
        CT_Body* m_docPartBody ;
        static CT_DocPart* default_instance_ ;

    }

    class CT_DocParts : public XSD::ComplexType{
    public:
        bool has_docPart() const;
        CT_DocPart* mutable_docPart();
        const CT_DocPart& docPart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocParts& default_instance() const;

    private:
        bool m_has_docPart ;
        CT_DocPart* m_docPart ;
        static CT_DocParts* default_instance_ ;

    }

    class CT_Caption : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Caption& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ST_CaptionPos& _pos_attr );
        const ST_CaptionPos& pos_attr() const;
        bool has_chapNum_attr() const;
        void set_chapNum_attr(const ns_s::ST_OnOff& _chapNum_attr );
        const ns_s::ST_OnOff& chapNum_attr() const;
        bool has_heading_attr() const;
        void set_heading_attr(const ST_DecimalNumber& _heading_attr );
        const ST_DecimalNumber& heading_attr() const;
        bool has_noLabel_attr() const;
        void set_noLabel_attr(const ns_s::ST_OnOff& _noLabel_attr );
        const ns_s::ST_OnOff& noLabel_attr() const;
        bool has_numFmt_attr() const;
        void set_numFmt_attr(const ST_NumberFormat& _numFmt_attr );
        const ST_NumberFormat& numFmt_attr() const;
        bool has_sep_attr() const;
        void set_sep_attr(const ST_ChapterSep& _sep_attr );
        const ST_ChapterSep& sep_attr() const;

    private:
        static CT_Caption* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_pos_attr ;
        ST_CaptionPos* m_pos_attr ;
        bool m_has_chapNum_attr ;
        ns_s::ST_OnOff* m_chapNum_attr ;
        bool m_has_heading_attr ;
        ST_DecimalNumber* m_heading_attr ;
        bool m_has_noLabel_attr ;
        ns_s::ST_OnOff* m_noLabel_attr ;
        bool m_has_numFmt_attr ;
        ST_NumberFormat* m_numFmt_attr ;
        bool m_has_sep_attr ;
        ST_ChapterSep* m_sep_attr ;

    }

    class CT_AutoCaption : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AutoCaption& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ns_s::ST_String& _name_attr );
        const ns_s::ST_String& name_attr() const;
        bool has_caption_attr() const;
        void set_caption_attr(const ns_s::ST_String& _caption_attr );
        const ns_s::ST_String& caption_attr() const;

    private:
        static CT_AutoCaption* default_instance_ ;
        bool m_has_name_attr ;
        ns_s::ST_String* m_name_attr ;
        bool m_has_caption_attr ;
        ns_s::ST_String* m_caption_attr ;

    }

    class CT_AutoCaptions : public XSD::ComplexType{
    public:
        bool has_autoCaption() const;
        CT_AutoCaption* mutable_autoCaption();
        const CT_AutoCaption& autoCaption() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AutoCaptions& default_instance() const;

    private:
        bool m_has_autoCaption ;
        CT_AutoCaption* m_autoCaption ;
        static CT_AutoCaptions* default_instance_ ;

    }

    class CT_Captions : public XSD::ComplexType{
    public:
        bool has_caption() const;
        CT_Caption* mutable_caption();
        const CT_Caption& caption() const;
        bool has_autoCaptions() const;
        CT_AutoCaptions* mutable_autoCaptions();
        const CT_AutoCaptions& autoCaptions() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Captions& default_instance() const;

    private:
        bool m_has_caption ;
        CT_Caption* m_caption ;
        bool m_has_autoCaptions ;
        CT_AutoCaptions* m_autoCaptions ;
        static CT_Captions* default_instance_ ;

    }

    class CT_DocumentBase : public XSD::ComplexType{
    public:
        bool has_background() const;
        CT_Background* mutable_background();
        const CT_Background& background() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DocumentBase& default_instance() const;

    private:
        bool m_has_background ;
        CT_Background* m_background ;
        static CT_DocumentBase* default_instance_ ;

    }

    class CT_Document : public XSD::ComplexType{
    public:
        bool has_background() const;
        CT_Background* mutable_background();
        const CT_Background& background() const;
        bool has_body() const;
        CT_Body* mutable_body();
        const CT_Body& body() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Document& default_instance() const;
        bool has_conformance_attr() const;
        void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr );
        const ns_s::ST_ConformanceClass& conformance_attr() const;

    private:
        bool m_has_background ;
        CT_Background* m_background ;
        bool m_has_body ;
        CT_Body* m_body ;
        static CT_Document* default_instance_ ;
        bool m_has_conformance_attr ;
        ns_s::ST_ConformanceClass* m_conformance_attr ;

    }

    class CT_GlossaryDocument : public XSD::ComplexType{
    public:
        bool has_background() const;
        CT_Background* mutable_background();
        const CT_Background& background() const;
        bool has_docParts() const;
        CT_DocParts* mutable_docParts();
        const CT_DocParts& docParts() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GlossaryDocument& default_instance() const;

    private:
        bool m_has_background ;
        CT_Background* m_background ;
        bool m_has_docParts ;
        CT_DocParts* m_docParts ;
        static CT_GlossaryDocument* default_instance_ ;

    }

    class recipients : public CT_Recipients : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class txbxContent : public CT_TxbxContent : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class comments : public CT_Comments : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class footnotes : public CT_Footnotes : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class endnotes : public CT_Endnotes : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class hdr : public CT_HdrFtr : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ftr : public CT_HdrFtr : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class settings : public CT_Settings : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class webSettings : public CT_WebSettings : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class fonts : public CT_FontsList : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class numbering : public CT_Numbering : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class styles : public CT_Styles : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class document : public CT_Document : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class glossaryDocument : public CT_GlossaryDocument : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}