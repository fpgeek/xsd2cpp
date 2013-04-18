#ifndef dml-main_xsd 
#define dml-main_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
namespace ns_a{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_StyleMatrixColumnIndex : public XSD::SimpleType{
    public:
        ST_StyleMatrixColumnIndex();
        ST_StyleMatrixColumnIndex(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_StyleMatrixColumnIndex& default_instance() const;

    private:
        static ST_StyleMatrixColumnIndex* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_FontCollectionIndex : public XSD::SimpleType{
    public:
        ST_FontCollectionIndex();
        ST_FontCollectionIndex(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FontCollectionIndex& default_instance() const;
        enum Type{
            _major_ = 1,
            _minor_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_FontCollectionIndex* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ColorSchemeIndex : public XSD::SimpleType{
    public:
        ST_ColorSchemeIndex();
        ST_ColorSchemeIndex(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ColorSchemeIndex& default_instance() const;
        enum Type{
            _dk1_ = 1,
            _lt1_,
            _dk2_,
            _lt2_,
            _accent1_,
            _accent2_,
            _accent3_,
            _accent4_,
            _accent5_,
            _accent6_,
            _hlink_,
            _folHlink_
        }

    private:
        static const string TypeStrList [];
        static ST_ColorSchemeIndex* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Coordinate : public XSD::SimpleType{
    public:
        bool has_ST_CoordinateUnqualified() const;
        ST_CoordinateUnqualified* mutable_ST_CoordinateUnqualified();
        const ST_CoordinateUnqualified& ST_CoordinateUnqualified() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Coordinate& default_instance() const;

    private:
        void clear_ST_CoordinateUnqualified();
        void clear_ST_UniversalMeasure();
        bool m_has_ST_CoordinateUnqualified ;
        ST_CoordinateUnqualified* m_ST_CoordinateUnqualified ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_Coordinate* default_instance_ ;

    }

    class ST_CoordinateUnqualified : public XSD::SimpleType{
    public:
        ST_CoordinateUnqualified();
        ST_CoordinateUnqualified(const XSD::long& _long );
        bool has_long() const;
        void set_long(const long& _long );
        const long& long() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CoordinateUnqualified& default_instance() const;

    private:
        static ST_CoordinateUnqualified* default_instance_ ;
        bool m_has_long ;
        long m_long ;

    }

    class ST_Coordinate32 : public XSD::SimpleType{
    public:
        bool has_ST_Coordinate32Unqualified() const;
        ST_Coordinate32Unqualified* mutable_ST_Coordinate32Unqualified();
        const ST_Coordinate32Unqualified& ST_Coordinate32Unqualified() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Coordinate32& default_instance() const;

    private:
        void clear_ST_Coordinate32Unqualified();
        void clear_ST_UniversalMeasure();
        bool m_has_ST_Coordinate32Unqualified ;
        ST_Coordinate32Unqualified* m_ST_Coordinate32Unqualified ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_Coordinate32* default_instance_ ;

    }

    class ST_Coordinate32Unqualified : public XSD::SimpleType{
    public:
        ST_Coordinate32Unqualified();
        ST_Coordinate32Unqualified(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Coordinate32Unqualified& default_instance() const;

    private:
        static ST_Coordinate32Unqualified* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_PositiveCoordinate : public XSD::SimpleType{
    public:
        ST_PositiveCoordinate();
        ST_PositiveCoordinate(const XSD::long& _long );
        bool has_long() const;
        void set_long(const long& _long );
        const long& long() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PositiveCoordinate& default_instance() const;

    private:
        static ST_PositiveCoordinate* default_instance_ ;
        bool m_has_long ;
        long m_long ;

    }

    class ST_PositiveCoordinate32 : public ST_Coordinate32Unqualified{
    public:
        ST_PositiveCoordinate32(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified );

    private:

    }

    class ST_Angle : public XSD::SimpleType{
    public:
        ST_Angle();
        ST_Angle(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Angle& default_instance() const;

    private:
        static ST_Angle* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_FixedAngle : public ST_Angle{
    public:
        ST_FixedAngle(const ST_Angle& _ST_Angle );

    private:

    }

    class ST_PositiveFixedAngle : public ST_Angle{
    public:
        ST_PositiveFixedAngle(const ST_Angle& _ST_Angle );

    private:

    }

    class ST_Percentage : public XSD::SimpleType{
    public:
        bool has_ST_PercentageDecimal() const;
        ST_PercentageDecimal* mutable_ST_PercentageDecimal();
        const ST_PercentageDecimal& ST_PercentageDecimal() const;
        bool has_ST_Percentage() const;
        ns_s::ST_Percentage* mutable_ST_Percentage();
        const ns_s::ST_Percentage& ST_Percentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Percentage& default_instance() const;

    private:
        void clear_ST_PercentageDecimal();
        void clear_ST_Percentage();
        bool m_has_ST_PercentageDecimal ;
        ST_PercentageDecimal* m_ST_PercentageDecimal ;
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        static ST_Percentage* default_instance_ ;

    }

    class ST_PercentageDecimal : public XSD::SimpleType{
    public:
        ST_PercentageDecimal();
        ST_PercentageDecimal(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PercentageDecimal& default_instance() const;

    private:
        static ST_PercentageDecimal* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_PositivePercentage : public XSD::SimpleType{
    public:
        bool has_ST_PositivePercentageDecimal() const;
        ST_PositivePercentageDecimal* mutable_ST_PositivePercentageDecimal();
        const ST_PositivePercentageDecimal& ST_PositivePercentageDecimal() const;
        bool has_ST_PositivePercentage() const;
        ns_s::ST_PositivePercentage* mutable_ST_PositivePercentage();
        const ns_s::ST_PositivePercentage& ST_PositivePercentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PositivePercentage& default_instance() const;

    private:
        void clear_ST_PositivePercentageDecimal();
        void clear_ST_PositivePercentage();
        bool m_has_ST_PositivePercentageDecimal ;
        ST_PositivePercentageDecimal* m_ST_PositivePercentageDecimal ;
        bool m_has_ST_PositivePercentage ;
        ns_s::ST_PositivePercentage* m_ST_PositivePercentage ;
        static ST_PositivePercentage* default_instance_ ;

    }

    class ST_PositivePercentageDecimal : public ST_PercentageDecimal{
    public:
        ST_PositivePercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_FixedPercentage : public XSD::SimpleType{
    public:
        bool has_ST_FixedPercentageDecimal() const;
        ST_FixedPercentageDecimal* mutable_ST_FixedPercentageDecimal();
        const ST_FixedPercentageDecimal& ST_FixedPercentageDecimal() const;
        bool has_ST_FixedPercentage() const;
        ns_s::ST_FixedPercentage* mutable_ST_FixedPercentage();
        const ns_s::ST_FixedPercentage& ST_FixedPercentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FixedPercentage& default_instance() const;

    private:
        void clear_ST_FixedPercentageDecimal();
        void clear_ST_FixedPercentage();
        bool m_has_ST_FixedPercentageDecimal ;
        ST_FixedPercentageDecimal* m_ST_FixedPercentageDecimal ;
        bool m_has_ST_FixedPercentage ;
        ns_s::ST_FixedPercentage* m_ST_FixedPercentage ;
        static ST_FixedPercentage* default_instance_ ;

    }

    class ST_FixedPercentageDecimal : public ST_PercentageDecimal{
    public:
        ST_FixedPercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_PositiveFixedPercentage : public XSD::SimpleType{
    public:
        bool has_ST_PositiveFixedPercentageDecimal() const;
        ST_PositiveFixedPercentageDecimal* mutable_ST_PositiveFixedPercentageDecimal();
        const ST_PositiveFixedPercentageDecimal& ST_PositiveFixedPercentageDecimal() const;
        bool has_ST_PositiveFixedPercentage() const;
        ns_s::ST_PositiveFixedPercentage* mutable_ST_PositiveFixedPercentage();
        const ns_s::ST_PositiveFixedPercentage& ST_PositiveFixedPercentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PositiveFixedPercentage& default_instance() const;

    private:
        void clear_ST_PositiveFixedPercentageDecimal();
        void clear_ST_PositiveFixedPercentage();
        bool m_has_ST_PositiveFixedPercentageDecimal ;
        ST_PositiveFixedPercentageDecimal* m_ST_PositiveFixedPercentageDecimal ;
        bool m_has_ST_PositiveFixedPercentage ;
        ns_s::ST_PositiveFixedPercentage* m_ST_PositiveFixedPercentage ;
        static ST_PositiveFixedPercentage* default_instance_ ;

    }

    class ST_PositiveFixedPercentageDecimal : public ST_PercentageDecimal{
    public:
        ST_PositiveFixedPercentageDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_SystemColorVal : public XSD::SimpleType{
    public:
        ST_SystemColorVal();
        ST_SystemColorVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SystemColorVal& default_instance() const;
        enum Type{
            _scrollBar_ = 1,
            _background_,
            _activeCaption_,
            _inactiveCaption_,
            _menu_,
            _window_,
            _windowFrame_,
            _menuText_,
            _windowText_,
            _captionText_,
            _activeBorder_,
            _inactiveBorder_,
            _appWorkspace_,
            _highlight_,
            _highlightText_,
            _btnFace_,
            _btnShadow_,
            _grayText_,
            _btnText_,
            _inactiveCaptionText_,
            _btnHighlight_,
            _3dDkShadow_,
            _3dLight_,
            _infoText_,
            _infoBk_,
            _hotLight_,
            _gradientActiveCaption_,
            _gradientInactiveCaption_,
            _menuHighlight_,
            _menuBar_
        }

    private:
        static const string TypeStrList [];
        static ST_SystemColorVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SchemeColorVal : public XSD::SimpleType{
    public:
        ST_SchemeColorVal();
        ST_SchemeColorVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SchemeColorVal& default_instance() const;
        enum Type{
            _bg1_ = 1,
            _tx1_,
            _bg2_,
            _tx2_,
            _accent1_,
            _accent2_,
            _accent3_,
            _accent4_,
            _accent5_,
            _accent6_,
            _hlink_,
            _folHlink_,
            _phClr_,
            _dk1_,
            _lt1_,
            _dk2_,
            _lt2_
        }

    private:
        static const string TypeStrList [];
        static ST_SchemeColorVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PresetColorVal : public XSD::SimpleType{
    public:
        ST_PresetColorVal();
        ST_PresetColorVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetColorVal& default_instance() const;
        enum Type{
            _aliceBlue_ = 1,
            _antiqueWhite_,
            _aqua_,
            _aquamarine_,
            _azure_,
            _beige_,
            _bisque_,
            _black_,
            _blanchedAlmond_,
            _blue_,
            _blueViolet_,
            _brown_,
            _burlyWood_,
            _cadetBlue_,
            _chartreuse_,
            _chocolate_,
            _coral_,
            _cornflowerBlue_,
            _cornsilk_,
            _crimson_,
            _cyan_,
            _darkBlue_,
            _darkCyan_,
            _darkGoldenrod_,
            _darkGray_,
            _darkGrey_,
            _darkGreen_,
            _darkKhaki_,
            _darkMagenta_,
            _darkOliveGreen_,
            _darkOrange_,
            _darkOrchid_,
            _darkRed_,
            _darkSalmon_,
            _darkSeaGreen_,
            _darkSlateBlue_,
            _darkSlateGray_,
            _darkSlateGrey_,
            _darkTurquoise_,
            _darkViolet_,
            _dkBlue_,
            _dkCyan_,
            _dkGoldenrod_,
            _dkGray_,
            _dkGrey_,
            _dkGreen_,
            _dkKhaki_,
            _dkMagenta_,
            _dkOliveGreen_,
            _dkOrange_,
            _dkOrchid_,
            _dkRed_,
            _dkSalmon_,
            _dkSeaGreen_,
            _dkSlateBlue_,
            _dkSlateGray_,
            _dkSlateGrey_,
            _dkTurquoise_,
            _dkViolet_,
            _deepPink_,
            _deepSkyBlue_,
            _dimGray_,
            _dimGrey_,
            _dodgerBlue_,
            _firebrick_,
            _floralWhite_,
            _forestGreen_,
            _fuchsia_,
            _gainsboro_,
            _ghostWhite_,
            _gold_,
            _goldenrod_,
            _gray_,
            _grey_,
            _green_,
            _greenYellow_,
            _honeydew_,
            _hotPink_,
            _indianRed_,
            _indigo_,
            _ivory_,
            _khaki_,
            _lavender_,
            _lavenderBlush_,
            _lawnGreen_,
            _lemonChiffon_,
            _lightBlue_,
            _lightCoral_,
            _lightCyan_,
            _lightGoldenrodYellow_,
            _lightGray_,
            _lightGrey_,
            _lightGreen_,
            _lightPink_,
            _lightSalmon_,
            _lightSeaGreen_,
            _lightSkyBlue_,
            _lightSlateGray_,
            _lightSlateGrey_,
            _lightSteelBlue_,
            _lightYellow_,
            _ltBlue_,
            _ltCoral_,
            _ltCyan_,
            _ltGoldenrodYellow_,
            _ltGray_,
            _ltGrey_,
            _ltGreen_,
            _ltPink_,
            _ltSalmon_,
            _ltSeaGreen_,
            _ltSkyBlue_,
            _ltSlateGray_,
            _ltSlateGrey_,
            _ltSteelBlue_,
            _ltYellow_,
            _lime_,
            _limeGreen_,
            _linen_,
            _magenta_,
            _maroon_,
            _medAquamarine_,
            _medBlue_,
            _medOrchid_,
            _medPurple_,
            _medSeaGreen_,
            _medSlateBlue_,
            _medSpringGreen_,
            _medTurquoise_,
            _medVioletRed_,
            _mediumAquamarine_,
            _mediumBlue_,
            _mediumOrchid_,
            _mediumPurple_,
            _mediumSeaGreen_,
            _mediumSlateBlue_,
            _mediumSpringGreen_,
            _mediumTurquoise_,
            _mediumVioletRed_,
            _midnightBlue_,
            _mintCream_,
            _mistyRose_,
            _moccasin_,
            _navajoWhite_,
            _navy_,
            _oldLace_,
            _olive_,
            _oliveDrab_,
            _orange_,
            _orangeRed_,
            _orchid_,
            _paleGoldenrod_,
            _paleGreen_,
            _paleTurquoise_,
            _paleVioletRed_,
            _papayaWhip_,
            _peachPuff_,
            _peru_,
            _pink_,
            _plum_,
            _powderBlue_,
            _purple_,
            _red_,
            _rosyBrown_,
            _royalBlue_,
            _saddleBrown_,
            _salmon_,
            _sandyBrown_,
            _seaGreen_,
            _seaShell_,
            _sienna_,
            _silver_,
            _skyBlue_,
            _slateBlue_,
            _slateGray_,
            _slateGrey_,
            _snow_,
            _springGreen_,
            _steelBlue_,
            _tan_,
            _teal_,
            _thistle_,
            _tomato_,
            _turquoise_,
            _violet_,
            _wheat_,
            _white_,
            _whiteSmoke_,
            _yellow_,
            _yellowGreen_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetColorVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RectAlignment : public XSD::SimpleType{
    public:
        ST_RectAlignment();
        ST_RectAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RectAlignment& default_instance() const;
        enum Type{
            _tl_ = 1,
            _t_,
            _tr_,
            _l_,
            _ctr_,
            _r_,
            _bl_,
            _b_,
            _br_
        }

    private:
        static const string TypeStrList [];
        static ST_RectAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BlackWhiteMode : public XSD::SimpleType{
    public:
        ST_BlackWhiteMode();
        ST_BlackWhiteMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BlackWhiteMode& default_instance() const;
        enum Type{
            _clr_ = 1,
            _auto_,
            _gray_,
            _ltGray_,
            _invGray_,
            _grayWhite_,
            _blackGray_,
            _blackWhite_,
            _black_,
            _white_,
            _hidden_
        }

    private:
        static const string TypeStrList [];
        static ST_BlackWhiteMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DrawingElementId : public XSD::SimpleType{
    public:
        ST_DrawingElementId();
        ST_DrawingElementId(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DrawingElementId& default_instance() const;

    private:
        static ST_DrawingElementId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_ChartBuildStep : public XSD::SimpleType{
    public:
        ST_ChartBuildStep();
        ST_ChartBuildStep(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ChartBuildStep& default_instance() const;
        enum Type{
            _category_ = 1,
            _ptInCategory_,
            _series_,
            _ptInSeries_,
            _allPts_,
            _gridLegend_
        }

    private:
        static const string TypeStrList [];
        static ST_ChartBuildStep* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DgmBuildStep : public XSD::SimpleType{
    public:
        ST_DgmBuildStep();
        ST_DgmBuildStep(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_DgmBuildStep& default_instance() const;
        enum Type{
            _sp_ = 1,
            _bg_
        }

    private:
        static const string TypeStrList [];
        static ST_DgmBuildStep* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimationBuildType : public XSD::SimpleType{
    public:
        ST_AnimationBuildType();
        ST_AnimationBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimationBuildType& default_instance() const;
        enum Type{
            _allAtOnce_ = 1
        }

    private:
        static const string TypeStrList [];
        static ST_AnimationBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimationDgmOnlyBuildType : public XSD::SimpleType{
    public:
        ST_AnimationDgmOnlyBuildType();
        ST_AnimationDgmOnlyBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimationDgmOnlyBuildType& default_instance() const;
        enum Type{
            _one_ = 1,
            _lvlOne_,
            _lvlAtOnce_
        }

    private:
        static const string TypeStrList [];
        static ST_AnimationDgmOnlyBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimationDgmBuildType : public XSD::SimpleType{
    public:
        bool has_ST_AnimationBuildType() const;
        ST_AnimationBuildType* mutable_ST_AnimationBuildType();
        const ST_AnimationBuildType& ST_AnimationBuildType() const;
        bool has_ST_AnimationDgmOnlyBuildType() const;
        ST_AnimationDgmOnlyBuildType* mutable_ST_AnimationDgmOnlyBuildType();
        const ST_AnimationDgmOnlyBuildType& ST_AnimationDgmOnlyBuildType() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimationDgmBuildType& default_instance() const;

    private:
        void clear_ST_AnimationBuildType();
        void clear_ST_AnimationDgmOnlyBuildType();
        bool m_has_ST_AnimationBuildType ;
        ST_AnimationBuildType* m_ST_AnimationBuildType ;
        bool m_has_ST_AnimationDgmOnlyBuildType ;
        ST_AnimationDgmOnlyBuildType* m_ST_AnimationDgmOnlyBuildType ;
        static ST_AnimationDgmBuildType* default_instance_ ;

    }

    class ST_AnimationChartOnlyBuildType : public XSD::SimpleType{
    public:
        ST_AnimationChartOnlyBuildType();
        ST_AnimationChartOnlyBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimationChartOnlyBuildType& default_instance() const;
        enum Type{
            _series_ = 1,
            _category_,
            _seriesEl_,
            _categoryEl_
        }

    private:
        static const string TypeStrList [];
        static ST_AnimationChartOnlyBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AnimationChartBuildType : public XSD::SimpleType{
    public:
        bool has_ST_AnimationBuildType() const;
        ST_AnimationBuildType* mutable_ST_AnimationBuildType();
        const ST_AnimationBuildType& ST_AnimationBuildType() const;
        bool has_ST_AnimationChartOnlyBuildType() const;
        ST_AnimationChartOnlyBuildType* mutable_ST_AnimationChartOnlyBuildType();
        const ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AnimationChartBuildType& default_instance() const;

    private:
        void clear_ST_AnimationBuildType();
        void clear_ST_AnimationChartOnlyBuildType();
        bool m_has_ST_AnimationBuildType ;
        ST_AnimationBuildType* m_ST_AnimationBuildType ;
        bool m_has_ST_AnimationChartOnlyBuildType ;
        ST_AnimationChartOnlyBuildType* m_ST_AnimationChartOnlyBuildType ;
        static ST_AnimationChartBuildType* default_instance_ ;

    }

    class ST_PresetCameraType : public XSD::SimpleType{
    public:
        ST_PresetCameraType();
        ST_PresetCameraType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetCameraType& default_instance() const;
        enum Type{
            _legacyObliqueTopLeft_ = 1,
            _legacyObliqueTop_,
            _legacyObliqueTopRight_,
            _legacyObliqueLeft_,
            _legacyObliqueFront_,
            _legacyObliqueRight_,
            _legacyObliqueBottomLeft_,
            _legacyObliqueBottom_,
            _legacyObliqueBottomRight_,
            _legacyPerspectiveTopLeft_,
            _legacyPerspectiveTop_,
            _legacyPerspectiveTopRight_,
            _legacyPerspectiveLeft_,
            _legacyPerspectiveFront_,
            _legacyPerspectiveRight_,
            _legacyPerspectiveBottomLeft_,
            _legacyPerspectiveBottom_,
            _legacyPerspectiveBottomRight_,
            _orthographicFront_,
            _isometricTopUp_,
            _isometricTopDown_,
            _isometricBottomUp_,
            _isometricBottomDown_,
            _isometricLeftUp_,
            _isometricLeftDown_,
            _isometricRightUp_,
            _isometricRightDown_,
            _isometricOffAxis1Left_,
            _isometricOffAxis1Right_,
            _isometricOffAxis1Top_,
            _isometricOffAxis2Left_,
            _isometricOffAxis2Right_,
            _isometricOffAxis2Top_,
            _isometricOffAxis3Left_,
            _isometricOffAxis3Right_,
            _isometricOffAxis3Bottom_,
            _isometricOffAxis4Left_,
            _isometricOffAxis4Right_,
            _isometricOffAxis4Bottom_,
            _obliqueTopLeft_,
            _obliqueTop_,
            _obliqueTopRight_,
            _obliqueLeft_,
            _obliqueRight_,
            _obliqueBottomLeft_,
            _obliqueBottom_,
            _obliqueBottomRight_,
            _perspectiveFront_,
            _perspectiveLeft_,
            _perspectiveRight_,
            _perspectiveAbove_,
            _perspectiveBelow_,
            _perspectiveAboveLeftFacing_,
            _perspectiveAboveRightFacing_,
            _perspectiveContrastingLeftFacing_,
            _perspectiveContrastingRightFacing_,
            _perspectiveHeroicLeftFacing_,
            _perspectiveHeroicRightFacing_,
            _perspectiveHeroicExtremeLeftFacing_,
            _perspectiveHeroicExtremeRightFacing_,
            _perspectiveRelaxed_,
            _perspectiveRelaxedModerately_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetCameraType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FOVAngle : public ST_Angle{
    public:
        ST_FOVAngle(const ST_Angle& _ST_Angle );

    private:

    }

    class ST_LightRigDirection : public XSD::SimpleType{
    public:
        ST_LightRigDirection();
        ST_LightRigDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LightRigDirection& default_instance() const;
        enum Type{
            _tl_ = 1,
            _t_,
            _tr_,
            _l_,
            _r_,
            _bl_,
            _b_,
            _br_
        }

    private:
        static const string TypeStrList [];
        static ST_LightRigDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LightRigType : public XSD::SimpleType{
    public:
        ST_LightRigType();
        ST_LightRigType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LightRigType& default_instance() const;
        enum Type{
            _legacyFlat1_ = 1,
            _legacyFlat2_,
            _legacyFlat3_,
            _legacyFlat4_,
            _legacyNormal1_,
            _legacyNormal2_,
            _legacyNormal3_,
            _legacyNormal4_,
            _legacyHarsh1_,
            _legacyHarsh2_,
            _legacyHarsh3_,
            _legacyHarsh4_,
            _threePt_,
            _balanced_,
            _soft_,
            _harsh_,
            _flood_,
            _contrasting_,
            _morning_,
            _sunrise_,
            _sunset_,
            _chilly_,
            _freezing_,
            _flat_,
            _twoPt_,
            _glow_,
            _brightRoom_
        }

    private:
        static const string TypeStrList [];
        static ST_LightRigType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BevelPresetType : public XSD::SimpleType{
    public:
        ST_BevelPresetType();
        ST_BevelPresetType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BevelPresetType& default_instance() const;
        enum Type{
            _relaxedInset_ = 1,
            _circle_,
            _slope_,
            _cross_,
            _angle_,
            _softRound_,
            _convex_,
            _coolSlant_,
            _divot_,
            _riblet_,
            _hardEdge_,
            _artDeco_
        }

    private:
        static const string TypeStrList [];
        static ST_BevelPresetType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PresetMaterialType : public XSD::SimpleType{
    public:
        ST_PresetMaterialType();
        ST_PresetMaterialType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetMaterialType& default_instance() const;
        enum Type{
            _legacyMatte_ = 1,
            _legacyPlastic_,
            _legacyMetal_,
            _legacyWireframe_,
            _matte_,
            _plastic_,
            _metal_,
            _warmMatte_,
            _translucentPowder_,
            _powder_,
            _dkEdge_,
            _softEdge_,
            _clear_,
            _flat_,
            _softmetal_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetMaterialType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PresetShadowVal : public XSD::SimpleType{
    public:
        ST_PresetShadowVal();
        ST_PresetShadowVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetShadowVal& default_instance() const;
        enum Type{
            _shdw1_ = 1,
            _shdw2_,
            _shdw3_,
            _shdw4_,
            _shdw5_,
            _shdw6_,
            _shdw7_,
            _shdw8_,
            _shdw9_,
            _shdw10_,
            _shdw11_,
            _shdw12_,
            _shdw13_,
            _shdw14_,
            _shdw15_,
            _shdw16_,
            _shdw17_,
            _shdw18_,
            _shdw19_,
            _shdw20_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetShadowVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PathShadeType : public XSD::SimpleType{
    public:
        ST_PathShadeType();
        ST_PathShadeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PathShadeType& default_instance() const;
        enum Type{
            _shape_ = 1,
            _circle_,
            _rect_
        }

    private:
        static const string TypeStrList [];
        static ST_PathShadeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TileFlipMode : public XSD::SimpleType{
    public:
        ST_TileFlipMode();
        ST_TileFlipMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TileFlipMode& default_instance() const;
        enum Type{
            _none_ = 1,
            _x_,
            _y_,
            _xy_
        }

    private:
        static const string TypeStrList [];
        static ST_TileFlipMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BlipCompression : public XSD::SimpleType{
    public:
        ST_BlipCompression();
        ST_BlipCompression(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BlipCompression& default_instance() const;
        enum Type{
            _email_ = 1,
            _screen_,
            _print_,
            _hqprint_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_BlipCompression* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PresetPatternVal : public XSD::SimpleType{
    public:
        ST_PresetPatternVal();
        ST_PresetPatternVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetPatternVal& default_instance() const;
        enum Type{
            _pct5_ = 1,
            _pct10_,
            _pct20_,
            _pct25_,
            _pct30_,
            _pct40_,
            _pct50_,
            _pct60_,
            _pct70_,
            _pct75_,
            _pct80_,
            _pct90_,
            _horz_,
            _vert_,
            _ltHorz_,
            _ltVert_,
            _dkHorz_,
            _dkVert_,
            _narHorz_,
            _narVert_,
            _dashHorz_,
            _dashVert_,
            _cross_,
            _dnDiag_,
            _upDiag_,
            _ltDnDiag_,
            _ltUpDiag_,
            _dkDnDiag_,
            _dkUpDiag_,
            _wdDnDiag_,
            _wdUpDiag_,
            _dashDnDiag_,
            _dashUpDiag_,
            _diagCross_,
            _smCheck_,
            _lgCheck_,
            _smGrid_,
            _lgGrid_,
            _dotGrid_,
            _smConfetti_,
            _lgConfetti_,
            _horzBrick_,
            _diagBrick_,
            _solidDmnd_,
            _openDmnd_,
            _dotDmnd_,
            _plaid_,
            _sphere_,
            _weave_,
            _divot_,
            _shingle_,
            _wave_,
            _trellis_,
            _zigZag_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetPatternVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BlendMode : public XSD::SimpleType{
    public:
        ST_BlendMode();
        ST_BlendMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BlendMode& default_instance() const;
        enum Type{
            _over_ = 1,
            _mult_,
            _screen_,
            _darken_,
            _lighten_
        }

    private:
        static const string TypeStrList [];
        static ST_BlendMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_EffectContainerType : public XSD::SimpleType{
    public:
        ST_EffectContainerType();
        ST_EffectContainerType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_EffectContainerType& default_instance() const;
        enum Type{
            _sib_ = 1,
            _tree_
        }

    private:
        static const string TypeStrList [];
        static ST_EffectContainerType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ShapeType : public XSD::SimpleType{
    public:
        ST_ShapeType();
        ST_ShapeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ShapeType& default_instance() const;
        enum Type{
            _line_ = 1,
            _lineInv_,
            _triangle_,
            _rtTriangle_,
            _rect_,
            _diamond_,
            _parallelogram_,
            _trapezoid_,
            _nonIsoscelesTrapezoid_,
            _pentagon_,
            _hexagon_,
            _heptagon_,
            _octagon_,
            _decagon_,
            _dodecagon_,
            _star4_,
            _star5_,
            _star6_,
            _star7_,
            _star8_,
            _star10_,
            _star12_,
            _star16_,
            _star24_,
            _star32_,
            _roundRect_,
            _round1Rect_,
            _round2SameRect_,
            _round2DiagRect_,
            _snipRoundRect_,
            _snip1Rect_,
            _snip2SameRect_,
            _snip2DiagRect_,
            _plaque_,
            _ellipse_,
            _teardrop_,
            _homePlate_,
            _chevron_,
            _pieWedge_,
            _pie_,
            _blockArc_,
            _donut_,
            _noSmoking_,
            _rightArrow_,
            _leftArrow_,
            _upArrow_,
            _downArrow_,
            _stripedRightArrow_,
            _notchedRightArrow_,
            _bentUpArrow_,
            _leftRightArrow_,
            _upDownArrow_,
            _leftUpArrow_,
            _leftRightUpArrow_,
            _quadArrow_,
            _leftArrowCallout_,
            _rightArrowCallout_,
            _upArrowCallout_,
            _downArrowCallout_,
            _leftRightArrowCallout_,
            _upDownArrowCallout_,
            _quadArrowCallout_,
            _bentArrow_,
            _uturnArrow_,
            _circularArrow_,
            _leftCircularArrow_,
            _leftRightCircularArrow_,
            _curvedRightArrow_,
            _curvedLeftArrow_,
            _curvedUpArrow_,
            _curvedDownArrow_,
            _swooshArrow_,
            _cube_,
            _can_,
            _lightningBolt_,
            _heart_,
            _sun_,
            _moon_,
            _smileyFace_,
            _irregularSeal1_,
            _irregularSeal2_,
            _foldedCorner_,
            _bevel_,
            _frame_,
            _halfFrame_,
            _corner_,
            _diagStripe_,
            _chord_,
            _arc_,
            _leftBracket_,
            _rightBracket_,
            _leftBrace_,
            _rightBrace_,
            _bracketPair_,
            _bracePair_,
            _straightConnector1_,
            _bentConnector2_,
            _bentConnector3_,
            _bentConnector4_,
            _bentConnector5_,
            _curvedConnector2_,
            _curvedConnector3_,
            _curvedConnector4_,
            _curvedConnector5_,
            _callout1_,
            _callout2_,
            _callout3_,
            _accentCallout1_,
            _accentCallout2_,
            _accentCallout3_,
            _borderCallout1_,
            _borderCallout2_,
            _borderCallout3_,
            _accentBorderCallout1_,
            _accentBorderCallout2_,
            _accentBorderCallout3_,
            _wedgeRectCallout_,
            _wedgeRoundRectCallout_,
            _wedgeEllipseCallout_,
            _cloudCallout_,
            _cloud_,
            _ribbon_,
            _ribbon2_,
            _ellipseRibbon_,
            _ellipseRibbon2_,
            _leftRightRibbon_,
            _verticalScroll_,
            _horizontalScroll_,
            _wave_,
            _doubleWave_,
            _plus_,
            _flowChartProcess_,
            _flowChartDecision_,
            _flowChartInputOutput_,
            _flowChartPredefinedProcess_,
            _flowChartInternalStorage_,
            _flowChartDocument_,
            _flowChartMultidocument_,
            _flowChartTerminator_,
            _flowChartPreparation_,
            _flowChartManualInput_,
            _flowChartManualOperation_,
            _flowChartConnector_,
            _flowChartPunchedCard_,
            _flowChartPunchedTape_,
            _flowChartSummingJunction_,
            _flowChartOr_,
            _flowChartCollate_,
            _flowChartSort_,
            _flowChartExtract_,
            _flowChartMerge_,
            _flowChartOfflineStorage_,
            _flowChartOnlineStorage_,
            _flowChartMagneticTape_,
            _flowChartMagneticDisk_,
            _flowChartMagneticDrum_,
            _flowChartDisplay_,
            _flowChartDelay_,
            _flowChartAlternateProcess_,
            _flowChartOffpageConnector_,
            _actionButtonBlank_,
            _actionButtonHome_,
            _actionButtonHelp_,
            _actionButtonInformation_,
            _actionButtonForwardNext_,
            _actionButtonBackPrevious_,
            _actionButtonEnd_,
            _actionButtonBeginning_,
            _actionButtonReturn_,
            _actionButtonDocument_,
            _actionButtonSound_,
            _actionButtonMovie_,
            _gear6_,
            _gear9_,
            _funnel_,
            _mathPlus_,
            _mathMinus_,
            _mathMultiply_,
            _mathDivide_,
            _mathEqual_,
            _mathNotEqual_,
            _cornerTabs_,
            _squareTabs_,
            _plaqueTabs_,
            _chartX_,
            _chartStar_,
            _chartPlus_
        }

    private:
        static const string TypeStrList [];
        static ST_ShapeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextShapeType : public XSD::SimpleType{
    public:
        ST_TextShapeType();
        ST_TextShapeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextShapeType& default_instance() const;
        enum Type{
            _textNoShape_ = 1,
            _textPlain_,
            _textStop_,
            _textTriangle_,
            _textTriangleInverted_,
            _textChevron_,
            _textChevronInverted_,
            _textRingInside_,
            _textRingOutside_,
            _textArchUp_,
            _textArchDown_,
            _textCircle_,
            _textButton_,
            _textArchUpPour_,
            _textArchDownPour_,
            _textCirclePour_,
            _textButtonPour_,
            _textCurveUp_,
            _textCurveDown_,
            _textCanUp_,
            _textCanDown_,
            _textWave1_,
            _textWave2_,
            _textDoubleWave1_,
            _textWave4_,
            _textInflate_,
            _textDeflate_,
            _textInflateBottom_,
            _textDeflateBottom_,
            _textInflateTop_,
            _textDeflateTop_,
            _textDeflateInflate_,
            _textDeflateInflateDeflate_,
            _textFadeRight_,
            _textFadeLeft_,
            _textFadeUp_,
            _textFadeDown_,
            _textSlantUp_,
            _textSlantDown_,
            _textCascadeUp_,
            _textCascadeDown_
        }

    private:
        static const string TypeStrList [];
        static ST_TextShapeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_GeomGuideName : public XSD::SimpleType{
    public:
        ST_GeomGuideName();
        ST_GeomGuideName(const XSD::token& _token );
        bool has_token() const;
        void set_token(const token& _token );
        const token& token() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GeomGuideName& default_instance() const;

    private:
        static ST_GeomGuideName* default_instance_ ;
        bool m_has_token ;
        token m_token ;

    }

    class ST_GeomGuideFormula : public XSD::SimpleType{
    public:
        ST_GeomGuideFormula();
        ST_GeomGuideFormula(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_GeomGuideFormula& default_instance() const;

    private:
        static ST_GeomGuideFormula* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_AdjCoordinate : public XSD::SimpleType{
    public:
        bool has_ST_Coordinate() const;
        ST_Coordinate* mutable_ST_Coordinate();
        const ST_Coordinate& ST_Coordinate() const;
        bool has_ST_GeomGuideName() const;
        ST_GeomGuideName* mutable_ST_GeomGuideName();
        const ST_GeomGuideName& ST_GeomGuideName() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AdjCoordinate& default_instance() const;

    private:
        void clear_ST_Coordinate();
        void clear_ST_GeomGuideName();
        bool m_has_ST_Coordinate ;
        ST_Coordinate* m_ST_Coordinate ;
        bool m_has_ST_GeomGuideName ;
        ST_GeomGuideName* m_ST_GeomGuideName ;
        static ST_AdjCoordinate* default_instance_ ;

    }

    class ST_AdjAngle : public XSD::SimpleType{
    public:
        bool has_ST_Angle() const;
        ST_Angle* mutable_ST_Angle();
        const ST_Angle& ST_Angle() const;
        bool has_ST_GeomGuideName() const;
        ST_GeomGuideName* mutable_ST_GeomGuideName();
        const ST_GeomGuideName& ST_GeomGuideName() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AdjAngle& default_instance() const;

    private:
        void clear_ST_Angle();
        void clear_ST_GeomGuideName();
        bool m_has_ST_Angle ;
        ST_Angle* m_ST_Angle ;
        bool m_has_ST_GeomGuideName ;
        ST_GeomGuideName* m_ST_GeomGuideName ;
        static ST_AdjAngle* default_instance_ ;

    }

    class ST_PathFillMode : public XSD::SimpleType{
    public:
        ST_PathFillMode();
        ST_PathFillMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PathFillMode& default_instance() const;
        enum Type{
            _none_ = 1,
            _norm_,
            _lighten_,
            _lightenLess_,
            _darken_,
            _darkenLess_
        }

    private:
        static const string TypeStrList [];
        static ST_PathFillMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineEndType : public XSD::SimpleType{
    public:
        ST_LineEndType();
        ST_LineEndType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineEndType& default_instance() const;
        enum Type{
            _none_ = 1,
            _triangle_,
            _stealth_,
            _diamond_,
            _oval_,
            _arrow_
        }

    private:
        static const string TypeStrList [];
        static ST_LineEndType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineEndWidth : public XSD::SimpleType{
    public:
        ST_LineEndWidth();
        ST_LineEndWidth(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineEndWidth& default_instance() const;
        enum Type{
            _sm_ = 1,
            _med_,
            _lg_
        }

    private:
        static const string TypeStrList [];
        static ST_LineEndWidth* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineEndLength : public XSD::SimpleType{
    public:
        ST_LineEndLength();
        ST_LineEndLength(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineEndLength& default_instance() const;
        enum Type{
            _sm_ = 1,
            _med_,
            _lg_
        }

    private:
        static const string TypeStrList [];
        static ST_LineEndLength* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PresetLineDashVal : public XSD::SimpleType{
    public:
        ST_PresetLineDashVal();
        ST_PresetLineDashVal(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PresetLineDashVal& default_instance() const;
        enum Type{
            _solid_ = 1,
            _dot_,
            _dash_,
            _lgDash_,
            _dashDot_,
            _lgDashDot_,
            _lgDashDotDot_,
            _sysDash_,
            _sysDot_,
            _sysDashDot_,
            _sysDashDotDot_
        }

    private:
        static const string TypeStrList [];
        static ST_PresetLineDashVal* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineCap : public XSD::SimpleType{
    public:
        ST_LineCap();
        ST_LineCap(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LineCap& default_instance() const;
        enum Type{
            _rnd_ = 1,
            _sq_,
            _flat_
        }

    private:
        static const string TypeStrList [];
        static ST_LineCap* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LineWidth : public ST_Coordinate32Unqualified{
    public:
        ST_LineWidth(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified );

    private:

    }

    class ST_PenAlignment : public XSD::SimpleType{
    public:
        ST_PenAlignment();
        ST_PenAlignment(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PenAlignment& default_instance() const;
        enum Type{
            _ctr_ = 1,
            _in_
        }

    private:
        static const string TypeStrList [];
        static ST_PenAlignment* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CompoundLine : public XSD::SimpleType{
    public:
        ST_CompoundLine();
        ST_CompoundLine(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CompoundLine& default_instance() const;
        enum Type{
            _sng_ = 1,
            _dbl_,
            _thickThin_,
            _thinThick_,
            _tri_
        }

    private:
        static const string TypeStrList [];
        static ST_CompoundLine* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ShapeID : public XSD::SimpleType{
    public:
        ST_ShapeID();
        ST_ShapeID(const XSD::token& _token );
        bool has_token() const;
        void set_token(const token& _token );
        const token& token() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ShapeID& default_instance() const;

    private:
        static ST_ShapeID* default_instance_ ;
        bool m_has_token ;
        token m_token ;

    }

    class ST_OnOffStyleType : public XSD::SimpleType{
    public:
        ST_OnOffStyleType();
        ST_OnOffStyleType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OnOffStyleType& default_instance() const;
        enum Type{
            _on_ = 1,
            _off_,
            _def_
        }

    private:
        static const string TypeStrList [];
        static ST_OnOffStyleType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextAnchoringType : public XSD::SimpleType{
    public:
        ST_TextAnchoringType();
        ST_TextAnchoringType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAnchoringType& default_instance() const;
        enum Type{
            _t_ = 1,
            _ctr_,
            _b_,
            _just_,
            _dist_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAnchoringType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextVertOverflowType : public XSD::SimpleType{
    public:
        ST_TextVertOverflowType();
        ST_TextVertOverflowType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextVertOverflowType& default_instance() const;
        enum Type{
            _overflow_ = 1,
            _ellipsis_,
            _clip_
        }

    private:
        static const string TypeStrList [];
        static ST_TextVertOverflowType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextHorzOverflowType : public XSD::SimpleType{
    public:
        ST_TextHorzOverflowType();
        ST_TextHorzOverflowType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextHorzOverflowType& default_instance() const;
        enum Type{
            _overflow_ = 1,
            _clip_
        }

    private:
        static const string TypeStrList [];
        static ST_TextHorzOverflowType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextVerticalType : public XSD::SimpleType{
    public:
        ST_TextVerticalType();
        ST_TextVerticalType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextVerticalType& default_instance() const;
        enum Type{
            _horz_ = 1,
            _vert_,
            _vert270_,
            _wordArtVert_,
            _eaVert_,
            _mongolianVert_,
            _wordArtVertRtl_
        }

    private:
        static const string TypeStrList [];
        static ST_TextVerticalType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextWrappingType : public XSD::SimpleType{
    public:
        ST_TextWrappingType();
        ST_TextWrappingType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextWrappingType& default_instance() const;
        enum Type{
            _none_ = 1,
            _square_
        }

    private:
        static const string TypeStrList [];
        static ST_TextWrappingType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextColumnCount : public XSD::SimpleType{
    public:
        ST_TextColumnCount();
        ST_TextColumnCount(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextColumnCount& default_instance() const;

    private:
        static ST_TextColumnCount* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextFontScalePercentOrPercentString : public XSD::SimpleType{
    public:
        bool has_ST_TextFontScalePercent() const;
        ST_TextFontScalePercent* mutable_ST_TextFontScalePercent();
        const ST_TextFontScalePercent& ST_TextFontScalePercent() const;
        bool has_ST_Percentage() const;
        ns_s::ST_Percentage* mutable_ST_Percentage();
        const ns_s::ST_Percentage& ST_Percentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextFontScalePercentOrPercentString& default_instance() const;

    private:
        void clear_ST_TextFontScalePercent();
        void clear_ST_Percentage();
        bool m_has_ST_TextFontScalePercent ;
        ST_TextFontScalePercent* m_ST_TextFontScalePercent ;
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        static ST_TextFontScalePercentOrPercentString* default_instance_ ;

    }

    class ST_TextFontScalePercent : public ST_PercentageDecimal{
    public:
        ST_TextFontScalePercent(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_TextBulletStartAtNum : public XSD::SimpleType{
    public:
        ST_TextBulletStartAtNum();
        ST_TextBulletStartAtNum(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextBulletStartAtNum& default_instance() const;

    private:
        static ST_TextBulletStartAtNum* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextAutonumberScheme : public XSD::SimpleType{
    public:
        ST_TextAutonumberScheme();
        ST_TextAutonumberScheme(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAutonumberScheme& default_instance() const;
        enum Type{
            _alphaLcParenBoth_ = 1,
            _alphaUcParenBoth_,
            _alphaLcParenR_,
            _alphaUcParenR_,
            _alphaLcPeriod_,
            _alphaUcPeriod_,
            _arabicParenBoth_,
            _arabicParenR_,
            _arabicPeriod_,
            _arabicPlain_,
            _romanLcParenBoth_,
            _romanUcParenBoth_,
            _romanLcParenR_,
            _romanUcParenR_,
            _romanLcPeriod_,
            _romanUcPeriod_,
            _circleNumDbPlain_,
            _circleNumWdBlackPlain_,
            _circleNumWdWhitePlain_,
            _arabicDbPeriod_,
            _arabicDbPlain_,
            _ea1ChsPeriod_,
            _ea1ChsPlain_,
            _ea1ChtPeriod_,
            _ea1ChtPlain_,
            _ea1JpnChsDbPeriod_,
            _ea1JpnKorPlain_,
            _ea1JpnKorPeriod_,
            _arabic1Minus_,
            _arabic2Minus_,
            _hebrew2Minus_,
            _thaiAlphaPeriod_,
            _thaiAlphaParenR_,
            _thaiAlphaParenBoth_,
            _thaiNumPeriod_,
            _thaiNumParenR_,
            _thaiNumParenBoth_,
            _hindiAlphaPeriod_,
            _hindiNumPeriod_,
            _hindiNumParenR_,
            _hindiAlpha1Period_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAutonumberScheme* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextBulletSize : public XSD::SimpleType{
    public:
        bool has_ST_TextBulletSizePercent() const;
        ST_TextBulletSizePercent* mutable_ST_TextBulletSizePercent();
        const ST_TextBulletSizePercent& ST_TextBulletSizePercent() const;
        bool has_ST_TextBulletSizeDecimal() const;
        ST_TextBulletSizeDecimal* mutable_ST_TextBulletSizeDecimal();
        const ST_TextBulletSizeDecimal& ST_TextBulletSizeDecimal() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextBulletSize& default_instance() const;

    private:
        void clear_ST_TextBulletSizePercent();
        void clear_ST_TextBulletSizeDecimal();
        bool m_has_ST_TextBulletSizePercent ;
        ST_TextBulletSizePercent* m_ST_TextBulletSizePercent ;
        bool m_has_ST_TextBulletSizeDecimal ;
        ST_TextBulletSizeDecimal* m_ST_TextBulletSizeDecimal ;
        static ST_TextBulletSize* default_instance_ ;

    }

    class ST_TextBulletSizePercent : public XSD::SimpleType{
    public:
        ST_TextBulletSizePercent();
        ST_TextBulletSizePercent(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextBulletSizePercent& default_instance() const;

    private:
        static ST_TextBulletSizePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_TextBulletSizeDecimal : public ST_PercentageDecimal{
    public:
        ST_TextBulletSizeDecimal(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_TextPoint : public XSD::SimpleType{
    public:
        bool has_ST_TextPointUnqualified() const;
        ST_TextPointUnqualified* mutable_ST_TextPointUnqualified();
        const ST_TextPointUnqualified& ST_TextPointUnqualified() const;
        bool has_ST_UniversalMeasure() const;
        ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
        const ns_s::ST_UniversalMeasure& ST_UniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextPoint& default_instance() const;

    private:
        void clear_ST_TextPointUnqualified();
        void clear_ST_UniversalMeasure();
        bool m_has_ST_TextPointUnqualified ;
        ST_TextPointUnqualified* m_ST_TextPointUnqualified ;
        bool m_has_ST_UniversalMeasure ;
        ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure ;
        static ST_TextPoint* default_instance_ ;

    }

    class ST_TextPointUnqualified : public XSD::SimpleType{
    public:
        ST_TextPointUnqualified();
        ST_TextPointUnqualified(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextPointUnqualified& default_instance() const;

    private:
        static ST_TextPointUnqualified* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextNonNegativePoint : public XSD::SimpleType{
    public:
        ST_TextNonNegativePoint();
        ST_TextNonNegativePoint(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextNonNegativePoint& default_instance() const;

    private:
        static ST_TextNonNegativePoint* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextFontSize : public XSD::SimpleType{
    public:
        ST_TextFontSize();
        ST_TextFontSize(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextFontSize& default_instance() const;

    private:
        static ST_TextFontSize* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextTypeface : public XSD::SimpleType{
    public:
        ST_TextTypeface();
        ST_TextTypeface(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextTypeface& default_instance() const;

    private:
        static ST_TextTypeface* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_PitchFamily : public XSD::SimpleType{
    public:
        ST_PitchFamily();
        ST_PitchFamily(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PitchFamily& default_instance() const;
        enum Type{
            _00_ = 1,
            _01_,
            _02_,
            _16_,
            _17_,
            _18_,
            _32_,
            _33_,
            _34_,
            _48_,
            _49_,
            _50_,
            _64_,
            _65_,
            _66_,
            _80_,
            _81_,
            _82_
        }

    private:
        static const string TypeStrList [];
        static ST_PitchFamily* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextUnderlineType : public XSD::SimpleType{
    public:
        ST_TextUnderlineType();
        ST_TextUnderlineType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextUnderlineType& default_instance() const;
        enum Type{
            _none_ = 1,
            _words_,
            _sng_,
            _dbl_,
            _heavy_,
            _dotted_,
            _dottedHeavy_,
            _dash_,
            _dashHeavy_,
            _dashLong_,
            _dashLongHeavy_,
            _dotDash_,
            _dotDashHeavy_,
            _dotDotDash_,
            _dotDotDashHeavy_,
            _wavy_,
            _wavyHeavy_,
            _wavyDbl_
        }

    private:
        static const string TypeStrList [];
        static ST_TextUnderlineType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextStrikeType : public XSD::SimpleType{
    public:
        ST_TextStrikeType();
        ST_TextStrikeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextStrikeType& default_instance() const;
        enum Type{
            _noStrike_ = 1,
            _sngStrike_,
            _dblStrike_
        }

    private:
        static const string TypeStrList [];
        static ST_TextStrikeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextCapsType : public XSD::SimpleType{
    public:
        ST_TextCapsType();
        ST_TextCapsType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextCapsType& default_instance() const;
        enum Type{
            _none_ = 1,
            _small_,
            _all_
        }

    private:
        static const string TypeStrList [];
        static ST_TextCapsType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextSpacingPoint : public XSD::SimpleType{
    public:
        ST_TextSpacingPoint();
        ST_TextSpacingPoint(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextSpacingPoint& default_instance() const;

    private:
        static ST_TextSpacingPoint* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_TextSpacingPercentOrPercentString : public XSD::SimpleType{
    public:
        bool has_ST_TextSpacingPercent() const;
        ST_TextSpacingPercent* mutable_ST_TextSpacingPercent();
        const ST_TextSpacingPercent& ST_TextSpacingPercent() const;
        bool has_ST_Percentage() const;
        ns_s::ST_Percentage* mutable_ST_Percentage();
        const ns_s::ST_Percentage& ST_Percentage() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextSpacingPercentOrPercentString& default_instance() const;

    private:
        void clear_ST_TextSpacingPercent();
        void clear_ST_Percentage();
        bool m_has_ST_TextSpacingPercent ;
        ST_TextSpacingPercent* m_ST_TextSpacingPercent ;
        bool m_has_ST_Percentage ;
        ns_s::ST_Percentage* m_ST_Percentage ;
        static ST_TextSpacingPercentOrPercentString* default_instance_ ;

    }

    class ST_TextSpacingPercent : public ST_PercentageDecimal{
    public:
        ST_TextSpacingPercent(const ST_PercentageDecimal& _ST_PercentageDecimal );

    private:

    }

    class ST_TextMargin : public ST_Coordinate32Unqualified{
    public:
        ST_TextMargin(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified );

    private:

    }

    class ST_TextIndent : public ST_Coordinate32Unqualified{
    public:
        ST_TextIndent(const ST_Coordinate32Unqualified& _ST_Coordinate32Unqualified );

    private:

    }

    class ST_TextTabAlignType : public XSD::SimpleType{
    public:
        ST_TextTabAlignType();
        ST_TextTabAlignType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextTabAlignType& default_instance() const;
        enum Type{
            _l_ = 1,
            _ctr_,
            _r_,
            _dec_
        }

    private:
        static const string TypeStrList [];
        static ST_TextTabAlignType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextAlignType : public XSD::SimpleType{
    public:
        ST_TextAlignType();
        ST_TextAlignType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextAlignType& default_instance() const;
        enum Type{
            _l_ = 1,
            _ctr_,
            _r_,
            _just_,
            _justLow_,
            _dist_,
            _thaiDist_
        }

    private:
        static const string TypeStrList [];
        static ST_TextAlignType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextFontAlignType : public XSD::SimpleType{
    public:
        ST_TextFontAlignType();
        ST_TextFontAlignType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextFontAlignType& default_instance() const;
        enum Type{
            _auto_ = 1,
            _t_,
            _ctr_,
            _base_,
            _b_
        }

    private:
        static const string TypeStrList [];
        static ST_TextFontAlignType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TextIndentLevelType : public XSD::SimpleType{
    public:
        ST_TextIndentLevelType();
        ST_TextIndentLevelType(const XSD::int& _int );
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TextIndentLevelType& default_instance() const;

    private:
        static ST_TextIndentLevelType* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class CT_AudioFile : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AudioFile& default_instance() const;
        bool has_link_attr() const;
        void set_link_attr(const ST_RelationshipId& _link_attr );
        const ST_RelationshipId& link_attr() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const string& _contentType_attr );
        const string& contentType_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_AudioFile* default_instance_ ;
        bool m_has_link_attr ;
        ST_RelationshipId* m_link_attr ;
        bool m_has_contentType_attr ;
        string m_contentType_attr ;

    }

    class CT_VideoFile : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VideoFile& default_instance() const;
        bool has_link_attr() const;
        void set_link_attr(const ST_RelationshipId& _link_attr );
        const ST_RelationshipId& link_attr() const;
        bool has_contentType_attr() const;
        void set_contentType_attr(const string& _contentType_attr );
        const string& contentType_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_VideoFile* default_instance_ ;
        bool m_has_link_attr ;
        ST_RelationshipId* m_link_attr ;
        bool m_has_contentType_attr ;
        string m_contentType_attr ;

    }

    class CT_QuickTimeFile : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_QuickTimeFile& default_instance() const;
        bool has_link_attr() const;
        void set_link_attr(const ST_RelationshipId& _link_attr );
        const ST_RelationshipId& link_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_QuickTimeFile* default_instance_ ;
        bool m_has_link_attr ;
        ST_RelationshipId* m_link_attr ;

    }

    class CT_AudioCDTime : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AudioCDTime& default_instance() const;
        bool has_track_attr() const;
        void set_track_attr(const unsignedByte& _track_attr );
        const unsignedByte& track_attr() const;
        bool has_time_attr() const;
        void set_time_attr(const unsignedInt& _time_attr );
        const unsignedInt& time_attr() const;

    private:
        static CT_AudioCDTime* default_instance_ ;
        bool m_has_track_attr ;
        unsignedByte m_track_attr ;
        bool m_has_time_attr ;
        unsignedInt m_time_attr ;

    }

    class CT_AudioCD : public XSD::ComplexType{
    public:
        bool has_st() const;
        CT_AudioCDTime* mutable_st();
        const CT_AudioCDTime& st() const;
        bool has_end() const;
        CT_AudioCDTime* mutable_end();
        const CT_AudioCDTime& end() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AudioCD& default_instance() const;

    private:
        bool m_has_st ;
        CT_AudioCDTime* m_st ;
        bool m_has_end ;
        CT_AudioCDTime* m_end ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_AudioCD* default_instance_ ;

    }

    class CT_ColorScheme : public XSD::ComplexType{
    public:
        bool has_dk1() const;
        CT_Color* mutable_dk1();
        const CT_Color& dk1() const;
        bool has_lt1() const;
        CT_Color* mutable_lt1();
        const CT_Color& lt1() const;
        bool has_dk2() const;
        CT_Color* mutable_dk2();
        const CT_Color& dk2() const;
        bool has_lt2() const;
        CT_Color* mutable_lt2();
        const CT_Color& lt2() const;
        bool has_accent1() const;
        CT_Color* mutable_accent1();
        const CT_Color& accent1() const;
        bool has_accent2() const;
        CT_Color* mutable_accent2();
        const CT_Color& accent2() const;
        bool has_accent3() const;
        CT_Color* mutable_accent3();
        const CT_Color& accent3() const;
        bool has_accent4() const;
        CT_Color* mutable_accent4();
        const CT_Color& accent4() const;
        bool has_accent5() const;
        CT_Color* mutable_accent5();
        const CT_Color& accent5() const;
        bool has_accent6() const;
        CT_Color* mutable_accent6();
        const CT_Color& accent6() const;
        bool has_hlink() const;
        CT_Color* mutable_hlink();
        const CT_Color& hlink() const;
        bool has_folHlink() const;
        CT_Color* mutable_folHlink();
        const CT_Color& folHlink() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorScheme& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_dk1 ;
        CT_Color* m_dk1 ;
        bool m_has_lt1 ;
        CT_Color* m_lt1 ;
        bool m_has_dk2 ;
        CT_Color* m_dk2 ;
        bool m_has_lt2 ;
        CT_Color* m_lt2 ;
        bool m_has_accent1 ;
        CT_Color* m_accent1 ;
        bool m_has_accent2 ;
        CT_Color* m_accent2 ;
        bool m_has_accent3 ;
        CT_Color* m_accent3 ;
        bool m_has_accent4 ;
        CT_Color* m_accent4 ;
        bool m_has_accent5 ;
        CT_Color* m_accent5 ;
        bool m_has_accent6 ;
        CT_Color* m_accent6 ;
        bool m_has_hlink ;
        CT_Color* m_hlink ;
        bool m_has_folHlink ;
        CT_Color* m_folHlink ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ColorScheme* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_CustomColor : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomColor& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_CustomColor* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_SupplementalFont : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SupplementalFont& default_instance() const;
        bool has_script_attr() const;
        void set_script_attr(const string& _script_attr );
        const string& script_attr() const;
        bool has_typeface_attr() const;
        void set_typeface_attr(const ST_TextTypeface& _typeface_attr );
        const ST_TextTypeface& typeface_attr() const;

    private:
        static CT_SupplementalFont* default_instance_ ;
        bool m_has_script_attr ;
        string m_script_attr ;
        bool m_has_typeface_attr ;
        ST_TextTypeface* m_typeface_attr ;

    }

    class CT_CustomColorList : public XSD::ComplexType{
    public:
        bool has_custClr() const;
        CT_CustomColor* mutable_custClr();
        const CT_CustomColor& custClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomColorList& default_instance() const;

    private:
        bool m_has_custClr ;
        CT_CustomColor* m_custClr ;
        static CT_CustomColorList* default_instance_ ;

    }

    class CT_FontCollection : public XSD::ComplexType{
    public:
        bool has_latin() const;
        CT_TextFont* mutable_latin();
        const CT_TextFont& latin() const;
        bool has_ea() const;
        CT_TextFont* mutable_ea();
        const CT_TextFont& ea() const;
        bool has_cs() const;
        CT_TextFont* mutable_cs();
        const CT_TextFont& cs() const;
        bool has_font() const;
        CT_SupplementalFont* mutable_font();
        const CT_SupplementalFont& font() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontCollection& default_instance() const;

    private:
        bool m_has_latin ;
        CT_TextFont* m_latin ;
        bool m_has_ea ;
        CT_TextFont* m_ea ;
        bool m_has_cs ;
        CT_TextFont* m_cs ;
        bool m_has_font ;
        CT_SupplementalFont* m_font ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_FontCollection* default_instance_ ;

    }

    class CT_EffectStyleItem : public XSD::ComplexType{
    public:
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        bool has_scene3d() const;
        CT_Scene3D* mutable_scene3d();
        const CT_Scene3D& scene3d() const;
        bool has_sp3d() const;
        CT_Shape3D* mutable_sp3d();
        const CT_Shape3D& sp3d() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectStyleItem& default_instance() const;

    private:
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        bool m_has_scene3d ;
        CT_Scene3D* m_scene3d ;
        bool m_has_sp3d ;
        CT_Shape3D* m_sp3d ;
        static CT_EffectStyleItem* default_instance_ ;

    }

    class CT_FontScheme : public XSD::ComplexType{
    public:
        bool has_majorFont() const;
        CT_FontCollection* mutable_majorFont();
        const CT_FontCollection& majorFont() const;
        bool has_minorFont() const;
        CT_FontCollection* mutable_minorFont();
        const CT_FontCollection& minorFont() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontScheme& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_majorFont ;
        CT_FontCollection* m_majorFont ;
        bool m_has_minorFont ;
        CT_FontCollection* m_minorFont ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_FontScheme* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_FillStyleList : public XSD::ComplexType{
    public:
        CT_NoFillProperties* add_noFill();
        CT_SolidColorFillProperties* add_solidFill();
        CT_GradientFillProperties* add_gradFill();
        CT_BlipFillProperties* add_blipFill();
        CT_PatternFillProperties* add_pattFill();
        CT_GroupFillProperties* add_grpFill();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FillStyleList& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_FillStyleList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_noFill() const;
            CT_NoFillProperties* mutable_noFill();
            const CT_NoFillProperties& noFill() const;
            bool has_solidFill() const;
            CT_SolidColorFillProperties* mutable_solidFill();
            const CT_SolidColorFillProperties& solidFill() const;
            bool has_gradFill() const;
            CT_GradientFillProperties* mutable_gradFill();
            const CT_GradientFillProperties& gradFill() const;
            bool has_blipFill() const;
            CT_BlipFillProperties* mutable_blipFill();
            const CT_BlipFillProperties& blipFill() const;
            bool has_pattFill() const;
            CT_PatternFillProperties* mutable_pattFill();
            const CT_PatternFillProperties& pattFill() const;
            bool has_grpFill() const;
            CT_GroupFillProperties* mutable_grpFill();
            const CT_GroupFillProperties& grpFill() const;

        private:
            bool m_has_noFill ;
            CT_NoFillProperties* m_noFill ;
            bool m_has_solidFill ;
            CT_SolidColorFillProperties* m_solidFill ;
            bool m_has_gradFill ;
            CT_GradientFillProperties* m_gradFill ;
            bool m_has_blipFill ;
            CT_BlipFillProperties* m_blipFill ;
            bool m_has_pattFill ;
            CT_PatternFillProperties* m_pattFill ;
            bool m_has_grpFill ;
            CT_GroupFillProperties* m_grpFill ;

        }


    }

    class CT_LineStyleList : public XSD::ComplexType{
    public:
        bool has_ln() const;
        CT_LineProperties* mutable_ln();
        const CT_LineProperties& ln() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineStyleList& default_instance() const;

    private:
        bool m_has_ln ;
        CT_LineProperties* m_ln ;
        static CT_LineStyleList* default_instance_ ;

    }

    class CT_EffectStyleList : public XSD::ComplexType{
    public:
        bool has_effectStyle() const;
        CT_EffectStyleItem* mutable_effectStyle();
        const CT_EffectStyleItem& effectStyle() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectStyleList& default_instance() const;

    private:
        bool m_has_effectStyle ;
        CT_EffectStyleItem* m_effectStyle ;
        static CT_EffectStyleList* default_instance_ ;

    }

    class CT_BackgroundFillStyleList : public XSD::ComplexType{
    public:
        CT_NoFillProperties* add_noFill();
        CT_SolidColorFillProperties* add_solidFill();
        CT_GradientFillProperties* add_gradFill();
        CT_BlipFillProperties* add_blipFill();
        CT_PatternFillProperties* add_pattFill();
        CT_GroupFillProperties* add_grpFill();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BackgroundFillStyleList& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_BackgroundFillStyleList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_noFill() const;
            CT_NoFillProperties* mutable_noFill();
            const CT_NoFillProperties& noFill() const;
            bool has_solidFill() const;
            CT_SolidColorFillProperties* mutable_solidFill();
            const CT_SolidColorFillProperties& solidFill() const;
            bool has_gradFill() const;
            CT_GradientFillProperties* mutable_gradFill();
            const CT_GradientFillProperties& gradFill() const;
            bool has_blipFill() const;
            CT_BlipFillProperties* mutable_blipFill();
            const CT_BlipFillProperties& blipFill() const;
            bool has_pattFill() const;
            CT_PatternFillProperties* mutable_pattFill();
            const CT_PatternFillProperties& pattFill() const;
            bool has_grpFill() const;
            CT_GroupFillProperties* mutable_grpFill();
            const CT_GroupFillProperties& grpFill() const;

        private:
            bool m_has_noFill ;
            CT_NoFillProperties* m_noFill ;
            bool m_has_solidFill ;
            CT_SolidColorFillProperties* m_solidFill ;
            bool m_has_gradFill ;
            CT_GradientFillProperties* m_gradFill ;
            bool m_has_blipFill ;
            CT_BlipFillProperties* m_blipFill ;
            bool m_has_pattFill ;
            CT_PatternFillProperties* m_pattFill ;
            bool m_has_grpFill ;
            CT_GroupFillProperties* m_grpFill ;

        }


    }

    class CT_StyleMatrix : public XSD::ComplexType{
    public:
        bool has_fillStyleLst() const;
        CT_FillStyleList* mutable_fillStyleLst();
        const CT_FillStyleList& fillStyleLst() const;
        bool has_lnStyleLst() const;
        CT_LineStyleList* mutable_lnStyleLst();
        const CT_LineStyleList& lnStyleLst() const;
        bool has_effectStyleLst() const;
        CT_EffectStyleList* mutable_effectStyleLst();
        const CT_EffectStyleList& effectStyleLst() const;
        bool has_bgFillStyleLst() const;
        CT_BackgroundFillStyleList* mutable_bgFillStyleLst();
        const CT_BackgroundFillStyleList& bgFillStyleLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleMatrix& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_fillStyleLst ;
        CT_FillStyleList* m_fillStyleLst ;
        bool m_has_lnStyleLst ;
        CT_LineStyleList* m_lnStyleLst ;
        bool m_has_effectStyleLst ;
        CT_EffectStyleList* m_effectStyleLst ;
        bool m_has_bgFillStyleLst ;
        CT_BackgroundFillStyleList* m_bgFillStyleLst ;
        static CT_StyleMatrix* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_BaseStyles : public XSD::ComplexType{
    public:
        bool has_clrScheme() const;
        CT_ColorScheme* mutable_clrScheme();
        const CT_ColorScheme& clrScheme() const;
        bool has_fontScheme() const;
        CT_FontScheme* mutable_fontScheme();
        const CT_FontScheme& fontScheme() const;
        bool has_fmtScheme() const;
        CT_StyleMatrix* mutable_fmtScheme();
        const CT_StyleMatrix& fmtScheme() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BaseStyles& default_instance() const;

    private:
        bool m_has_clrScheme ;
        CT_ColorScheme* m_clrScheme ;
        bool m_has_fontScheme ;
        CT_FontScheme* m_fontScheme ;
        bool m_has_fmtScheme ;
        CT_StyleMatrix* m_fmtScheme ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_BaseStyles* default_instance_ ;

    }

    class CT_OfficeArtExtension : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OfficeArtExtension& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const token& _uri_attr );
        const token& uri_attr() const;

    private:
        static CT_OfficeArtExtension* default_instance_ ;
        bool m_has_uri_attr ;
        token m_uri_attr ;

    }

    class CT_Angle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Angle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Angle& _val_attr );
        const ST_Angle& val_attr() const;

    private:
        static CT_Angle* default_instance_ ;
        bool m_has_val_attr ;
        ST_Angle* m_val_attr ;

    }

    class CT_PositiveFixedAngle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PositiveFixedAngle& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PositiveFixedAngle& _val_attr );
        const ST_PositiveFixedAngle& val_attr() const;

    private:
        static CT_PositiveFixedAngle* default_instance_ ;
        bool m_has_val_attr ;
        ST_PositiveFixedAngle* m_val_attr ;

    }

    class CT_Percentage : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Percentage& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Percentage& _val_attr );
        const ST_Percentage& val_attr() const;

    private:
        static CT_Percentage* default_instance_ ;
        bool m_has_val_attr ;
        ST_Percentage* m_val_attr ;

    }

    class CT_PositivePercentage : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PositivePercentage& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PositivePercentage& _val_attr );
        const ST_PositivePercentage& val_attr() const;

    private:
        static CT_PositivePercentage* default_instance_ ;
        bool m_has_val_attr ;
        ST_PositivePercentage* m_val_attr ;

    }

    class CT_FixedPercentage : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FixedPercentage& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FixedPercentage& _val_attr );
        const ST_FixedPercentage& val_attr() const;

    private:
        static CT_FixedPercentage* default_instance_ ;
        bool m_has_val_attr ;
        ST_FixedPercentage* m_val_attr ;

    }

    class CT_PositiveFixedPercentage : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PositiveFixedPercentage& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PositiveFixedPercentage& _val_attr );
        const ST_PositiveFixedPercentage& val_attr() const;

    private:
        static CT_PositiveFixedPercentage* default_instance_ ;
        bool m_has_val_attr ;
        ST_PositiveFixedPercentage* m_val_attr ;

    }

    class CT_Ratio : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Ratio& default_instance() const;
        bool has_n_attr() const;
        void set_n_attr(const long& _n_attr );
        const long& n_attr() const;
        bool has_d_attr() const;
        void set_d_attr(const long& _d_attr );
        const long& d_attr() const;

    private:
        static CT_Ratio* default_instance_ ;
        bool m_has_n_attr ;
        long m_n_attr ;
        bool m_has_d_attr ;
        long m_d_attr ;

    }

    class CT_Point2D : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Point2D& default_instance() const;
        bool has_x_attr() const;
        void set_x_attr(const ST_Coordinate& _x_attr );
        const ST_Coordinate& x_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ST_Coordinate& _y_attr );
        const ST_Coordinate& y_attr() const;

    private:
        static CT_Point2D* default_instance_ ;
        bool m_has_x_attr ;
        ST_Coordinate* m_x_attr ;
        bool m_has_y_attr ;
        ST_Coordinate* m_y_attr ;

    }

    class CT_PositiveSize2D : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PositiveSize2D& default_instance() const;
        bool has_cx_attr() const;
        void set_cx_attr(const ST_PositiveCoordinate& _cx_attr );
        const ST_PositiveCoordinate& cx_attr() const;
        bool has_cy_attr() const;
        void set_cy_attr(const ST_PositiveCoordinate& _cy_attr );
        const ST_PositiveCoordinate& cy_attr() const;

    private:
        static CT_PositiveSize2D* default_instance_ ;
        bool m_has_cx_attr ;
        ST_PositiveCoordinate* m_cx_attr ;
        bool m_has_cy_attr ;
        ST_PositiveCoordinate* m_cy_attr ;

    }

    class CT_ComplementTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ComplementTransform& default_instance() const;

    private:
        static CT_ComplementTransform* default_instance_ ;

    }

    class CT_InverseTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_InverseTransform& default_instance() const;

    private:
        static CT_InverseTransform* default_instance_ ;

    }

    class CT_GrayscaleTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GrayscaleTransform& default_instance() const;

    private:
        static CT_GrayscaleTransform* default_instance_ ;

    }

    class CT_GammaTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GammaTransform& default_instance() const;

    private:
        static CT_GammaTransform* default_instance_ ;

    }

    class CT_InverseGammaTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_InverseGammaTransform& default_instance() const;

    private:
        static CT_InverseGammaTransform* default_instance_ ;

    }

    class CT_ScRgbColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ScRgbColor& default_instance() const;
        bool has_r_attr() const;
        void set_r_attr(const ST_Percentage& _r_attr );
        const ST_Percentage& r_attr() const;
        bool has_g_attr() const;
        void set_g_attr(const ST_Percentage& _g_attr );
        const ST_Percentage& g_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ST_Percentage& _b_attr );
        const ST_Percentage& b_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ScRgbColor* default_instance_ ;
        bool m_has_r_attr ;
        ST_Percentage* m_r_attr ;
        bool m_has_g_attr ;
        ST_Percentage* m_g_attr ;
        bool m_has_b_attr ;
        ST_Percentage* m_b_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_SRgbColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SRgbColor& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_HexColorRGB& _val_attr );
        const ns_s::ST_HexColorRGB& val_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SRgbColor* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_HexColorRGB* m_val_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_HslColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HslColor& default_instance() const;
        bool has_hue_attr() const;
        void set_hue_attr(const ST_PositiveFixedAngle& _hue_attr );
        const ST_PositiveFixedAngle& hue_attr() const;
        bool has_sat_attr() const;
        void set_sat_attr(const ST_Percentage& _sat_attr );
        const ST_Percentage& sat_attr() const;
        bool has_lum_attr() const;
        void set_lum_attr(const ST_Percentage& _lum_attr );
        const ST_Percentage& lum_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_HslColor* default_instance_ ;
        bool m_has_hue_attr ;
        ST_PositiveFixedAngle* m_hue_attr ;
        bool m_has_sat_attr ;
        ST_Percentage* m_sat_attr ;
        bool m_has_lum_attr ;
        ST_Percentage* m_lum_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_SystemColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SystemColor& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SystemColorVal& _val_attr );
        const ST_SystemColorVal& val_attr() const;
        bool has_lastClr_attr() const;
        void set_lastClr_attr(const ns_s::ST_HexColorRGB& _lastClr_attr );
        const ns_s::ST_HexColorRGB& lastClr_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SystemColor* default_instance_ ;
        bool m_has_val_attr ;
        ST_SystemColorVal* m_val_attr ;
        bool m_has_lastClr_attr ;
        ns_s::ST_HexColorRGB* m_lastClr_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_SchemeColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SchemeColor& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SchemeColorVal& _val_attr );
        const ST_SchemeColorVal& val_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_SchemeColor* default_instance_ ;
        bool m_has_val_attr ;
        ST_SchemeColorVal* m_val_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_PresetColor : public XSD::ComplexType{
    public:
        CT_PositiveFixedPercentage* add_tint();
        CT_PositiveFixedPercentage* add_shade();
        CT_ComplementTransform* add_comp();
        CT_InverseTransform* add_inv();
        CT_GrayscaleTransform* add_gray();
        CT_PositiveFixedPercentage* add_alpha();
        CT_FixedPercentage* add_alphaOff();
        CT_PositivePercentage* add_alphaMod();
        CT_PositiveFixedAngle* add_hue();
        CT_Angle* add_hueOff();
        CT_PositivePercentage* add_hueMod();
        CT_Percentage* add_sat();
        CT_Percentage* add_satOff();
        CT_Percentage* add_satMod();
        CT_Percentage* add_lum();
        CT_Percentage* add_lumOff();
        CT_Percentage* add_lumMod();
        CT_Percentage* add_red();
        CT_Percentage* add_redOff();
        CT_Percentage* add_redMod();
        CT_Percentage* add_green();
        CT_Percentage* add_greenOff();
        CT_Percentage* add_greenMod();
        CT_Percentage* add_blue();
        CT_Percentage* add_blueOff();
        CT_Percentage* add_blueMod();
        CT_GammaTransform* add_gamma();
        CT_InverseGammaTransform* add_invGamma();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresetColor& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PresetColorVal& _val_attr );
        const ST_PresetColorVal& val_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_PresetColor* default_instance_ ;
        bool m_has_val_attr ;
        ST_PresetColorVal* m_val_attr ;
        class ChildGroup_1{
        public:
            bool has_tint() const;
            CT_PositiveFixedPercentage* mutable_tint();
            const CT_PositiveFixedPercentage& tint() const;
            bool has_shade() const;
            CT_PositiveFixedPercentage* mutable_shade();
            const CT_PositiveFixedPercentage& shade() const;
            bool has_comp() const;
            CT_ComplementTransform* mutable_comp();
            const CT_ComplementTransform& comp() const;
            bool has_inv() const;
            CT_InverseTransform* mutable_inv();
            const CT_InverseTransform& inv() const;
            bool has_gray() const;
            CT_GrayscaleTransform* mutable_gray();
            const CT_GrayscaleTransform& gray() const;
            bool has_alpha() const;
            CT_PositiveFixedPercentage* mutable_alpha();
            const CT_PositiveFixedPercentage& alpha() const;
            bool has_alphaOff() const;
            CT_FixedPercentage* mutable_alphaOff();
            const CT_FixedPercentage& alphaOff() const;
            bool has_alphaMod() const;
            CT_PositivePercentage* mutable_alphaMod();
            const CT_PositivePercentage& alphaMod() const;
            bool has_hue() const;
            CT_PositiveFixedAngle* mutable_hue();
            const CT_PositiveFixedAngle& hue() const;
            bool has_hueOff() const;
            CT_Angle* mutable_hueOff();
            const CT_Angle& hueOff() const;
            bool has_hueMod() const;
            CT_PositivePercentage* mutable_hueMod();
            const CT_PositivePercentage& hueMod() const;
            bool has_sat() const;
            CT_Percentage* mutable_sat();
            const CT_Percentage& sat() const;
            bool has_satOff() const;
            CT_Percentage* mutable_satOff();
            const CT_Percentage& satOff() const;
            bool has_satMod() const;
            CT_Percentage* mutable_satMod();
            const CT_Percentage& satMod() const;
            bool has_lum() const;
            CT_Percentage* mutable_lum();
            const CT_Percentage& lum() const;
            bool has_lumOff() const;
            CT_Percentage* mutable_lumOff();
            const CT_Percentage& lumOff() const;
            bool has_lumMod() const;
            CT_Percentage* mutable_lumMod();
            const CT_Percentage& lumMod() const;
            bool has_red() const;
            CT_Percentage* mutable_red();
            const CT_Percentage& red() const;
            bool has_redOff() const;
            CT_Percentage* mutable_redOff();
            const CT_Percentage& redOff() const;
            bool has_redMod() const;
            CT_Percentage* mutable_redMod();
            const CT_Percentage& redMod() const;
            bool has_green() const;
            CT_Percentage* mutable_green();
            const CT_Percentage& green() const;
            bool has_greenOff() const;
            CT_Percentage* mutable_greenOff();
            const CT_Percentage& greenOff() const;
            bool has_greenMod() const;
            CT_Percentage* mutable_greenMod();
            const CT_Percentage& greenMod() const;
            bool has_blue() const;
            CT_Percentage* mutable_blue();
            const CT_Percentage& blue() const;
            bool has_blueOff() const;
            CT_Percentage* mutable_blueOff();
            const CT_Percentage& blueOff() const;
            bool has_blueMod() const;
            CT_Percentage* mutable_blueMod();
            const CT_Percentage& blueMod() const;
            bool has_gamma() const;
            CT_GammaTransform* mutable_gamma();
            const CT_GammaTransform& gamma() const;
            bool has_invGamma() const;
            CT_InverseGammaTransform* mutable_invGamma();
            const CT_InverseGammaTransform& invGamma() const;

        private:
            bool m_has_tint ;
            CT_PositiveFixedPercentage* m_tint ;
            bool m_has_shade ;
            CT_PositiveFixedPercentage* m_shade ;
            bool m_has_comp ;
            CT_ComplementTransform* m_comp ;
            bool m_has_inv ;
            CT_InverseTransform* m_inv ;
            bool m_has_gray ;
            CT_GrayscaleTransform* m_gray ;
            bool m_has_alpha ;
            CT_PositiveFixedPercentage* m_alpha ;
            bool m_has_alphaOff ;
            CT_FixedPercentage* m_alphaOff ;
            bool m_has_alphaMod ;
            CT_PositivePercentage* m_alphaMod ;
            bool m_has_hue ;
            CT_PositiveFixedAngle* m_hue ;
            bool m_has_hueOff ;
            CT_Angle* m_hueOff ;
            bool m_has_hueMod ;
            CT_PositivePercentage* m_hueMod ;
            bool m_has_sat ;
            CT_Percentage* m_sat ;
            bool m_has_satOff ;
            CT_Percentage* m_satOff ;
            bool m_has_satMod ;
            CT_Percentage* m_satMod ;
            bool m_has_lum ;
            CT_Percentage* m_lum ;
            bool m_has_lumOff ;
            CT_Percentage* m_lumOff ;
            bool m_has_lumMod ;
            CT_Percentage* m_lumMod ;
            bool m_has_red ;
            CT_Percentage* m_red ;
            bool m_has_redOff ;
            CT_Percentage* m_redOff ;
            bool m_has_redMod ;
            CT_Percentage* m_redMod ;
            bool m_has_green ;
            CT_Percentage* m_green ;
            bool m_has_greenOff ;
            CT_Percentage* m_greenOff ;
            bool m_has_greenMod ;
            CT_Percentage* m_greenMod ;
            bool m_has_blue ;
            CT_Percentage* m_blue ;
            bool m_has_blueOff ;
            CT_Percentage* m_blueOff ;
            bool m_has_blueMod ;
            CT_Percentage* m_blueMod ;
            bool m_has_gamma ;
            CT_GammaTransform* m_gamma ;
            bool m_has_invGamma ;
            CT_InverseGammaTransform* m_invGamma ;

        }


    }

    class CT_OfficeArtExtensionList : public XSD::ComplexType{
    public:
        bool has_ext() const;
        CT_OfficeArtExtension* mutable_ext();
        const CT_OfficeArtExtension& ext() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OfficeArtExtensionList& default_instance() const;

    private:
        bool m_has_ext ;
        CT_OfficeArtExtension* m_ext ;
        static CT_OfficeArtExtensionList* default_instance_ ;

    }

    class CT_Scale2D : public XSD::ComplexType{
    public:
        bool has_sx() const;
        CT_Ratio* mutable_sx();
        const CT_Ratio& sx() const;
        bool has_sy() const;
        CT_Ratio* mutable_sy();
        const CT_Ratio& sy() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Scale2D& default_instance() const;

    private:
        bool m_has_sx ;
        CT_Ratio* m_sx ;
        bool m_has_sy ;
        CT_Ratio* m_sy ;
        static CT_Scale2D* default_instance_ ;

    }

    class CT_Transform2D : public XSD::ComplexType{
    public:
        bool has_off() const;
        CT_Point2D* mutable_off();
        const CT_Point2D& off() const;
        bool has_ext() const;
        CT_PositiveSize2D* mutable_ext();
        const CT_PositiveSize2D& ext() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Transform2D& default_instance() const;
        bool has_rot_attr() const;
        void set_rot_attr(const ST_Angle& _rot_attr );
        const ST_Angle& rot_attr() const;
        bool has_flipH_attr() const;
        void set_flipH_attr(const boolean& _flipH_attr );
        const boolean& flipH_attr() const;
        bool has_flipV_attr() const;
        void set_flipV_attr(const boolean& _flipV_attr );
        const boolean& flipV_attr() const;

    private:
        bool m_has_off ;
        CT_Point2D* m_off ;
        bool m_has_ext ;
        CT_PositiveSize2D* m_ext ;
        static CT_Transform2D* default_instance_ ;
        bool m_has_rot_attr ;
        ST_Angle* m_rot_attr ;
        bool m_has_flipH_attr ;
        boolean m_flipH_attr ;
        bool m_has_flipV_attr ;
        boolean m_flipV_attr ;

    }

    class CT_GroupTransform2D : public XSD::ComplexType{
    public:
        bool has_off() const;
        CT_Point2D* mutable_off();
        const CT_Point2D& off() const;
        bool has_ext() const;
        CT_PositiveSize2D* mutable_ext();
        const CT_PositiveSize2D& ext() const;
        bool has_chOff() const;
        CT_Point2D* mutable_chOff();
        const CT_Point2D& chOff() const;
        bool has_chExt() const;
        CT_PositiveSize2D* mutable_chExt();
        const CT_PositiveSize2D& chExt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupTransform2D& default_instance() const;
        bool has_rot_attr() const;
        void set_rot_attr(const ST_Angle& _rot_attr );
        const ST_Angle& rot_attr() const;
        bool has_flipH_attr() const;
        void set_flipH_attr(const boolean& _flipH_attr );
        const boolean& flipH_attr() const;
        bool has_flipV_attr() const;
        void set_flipV_attr(const boolean& _flipV_attr );
        const boolean& flipV_attr() const;

    private:
        bool m_has_off ;
        CT_Point2D* m_off ;
        bool m_has_ext ;
        CT_PositiveSize2D* m_ext ;
        bool m_has_chOff ;
        CT_Point2D* m_chOff ;
        bool m_has_chExt ;
        CT_PositiveSize2D* m_chExt ;
        static CT_GroupTransform2D* default_instance_ ;
        bool m_has_rot_attr ;
        ST_Angle* m_rot_attr ;
        bool m_has_flipH_attr ;
        boolean m_flipH_attr ;
        bool m_has_flipV_attr ;
        boolean m_flipV_attr ;

    }

    class CT_Point3D : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Point3D& default_instance() const;
        bool has_x_attr() const;
        void set_x_attr(const ST_Coordinate& _x_attr );
        const ST_Coordinate& x_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ST_Coordinate& _y_attr );
        const ST_Coordinate& y_attr() const;
        bool has_z_attr() const;
        void set_z_attr(const ST_Coordinate& _z_attr );
        const ST_Coordinate& z_attr() const;

    private:
        static CT_Point3D* default_instance_ ;
        bool m_has_x_attr ;
        ST_Coordinate* m_x_attr ;
        bool m_has_y_attr ;
        ST_Coordinate* m_y_attr ;
        bool m_has_z_attr ;
        ST_Coordinate* m_z_attr ;

    }

    class CT_Vector3D : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Vector3D& default_instance() const;
        bool has_dx_attr() const;
        void set_dx_attr(const ST_Coordinate& _dx_attr );
        const ST_Coordinate& dx_attr() const;
        bool has_dy_attr() const;
        void set_dy_attr(const ST_Coordinate& _dy_attr );
        const ST_Coordinate& dy_attr() const;
        bool has_dz_attr() const;
        void set_dz_attr(const ST_Coordinate& _dz_attr );
        const ST_Coordinate& dz_attr() const;

    private:
        static CT_Vector3D* default_instance_ ;
        bool m_has_dx_attr ;
        ST_Coordinate* m_dx_attr ;
        bool m_has_dy_attr ;
        ST_Coordinate* m_dy_attr ;
        bool m_has_dz_attr ;
        ST_Coordinate* m_dz_attr ;

    }

    class CT_SphereCoords : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SphereCoords& default_instance() const;
        bool has_lat_attr() const;
        void set_lat_attr(const ST_PositiveFixedAngle& _lat_attr );
        const ST_PositiveFixedAngle& lat_attr() const;
        bool has_lon_attr() const;
        void set_lon_attr(const ST_PositiveFixedAngle& _lon_attr );
        const ST_PositiveFixedAngle& lon_attr() const;
        bool has_rev_attr() const;
        void set_rev_attr(const ST_PositiveFixedAngle& _rev_attr );
        const ST_PositiveFixedAngle& rev_attr() const;

    private:
        static CT_SphereCoords* default_instance_ ;
        bool m_has_lat_attr ;
        ST_PositiveFixedAngle* m_lat_attr ;
        bool m_has_lon_attr ;
        ST_PositiveFixedAngle* m_lon_attr ;
        bool m_has_rev_attr ;
        ST_PositiveFixedAngle* m_rev_attr ;

    }

    class CT_RelativeRect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelativeRect& default_instance() const;
        bool has_l_attr() const;
        void set_l_attr(const ST_Percentage& _l_attr );
        const ST_Percentage& l_attr() const;
        bool has_t_attr() const;
        void set_t_attr(const ST_Percentage& _t_attr );
        const ST_Percentage& t_attr() const;
        bool has_r_attr() const;
        void set_r_attr(const ST_Percentage& _r_attr );
        const ST_Percentage& r_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ST_Percentage& _b_attr );
        const ST_Percentage& b_attr() const;

    private:
        static CT_RelativeRect* default_instance_ ;
        bool m_has_l_attr ;
        ST_Percentage* m_l_attr ;
        bool m_has_t_attr ;
        ST_Percentage* m_t_attr ;
        bool m_has_r_attr ;
        ST_Percentage* m_r_attr ;
        bool m_has_b_attr ;
        ST_Percentage* m_b_attr ;

    }

    class CT_Color : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Color& default_instance() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_Color* default_instance_ ;

    }

    class CT_ColorMRU : public XSD::ComplexType{
    public:
        CT_ScRgbColor* add_scrgbClr();
        CT_SRgbColor* add_srgbClr();
        CT_HslColor* add_hslClr();
        CT_SystemColor* add_sysClr();
        CT_SchemeColor* add_schemeClr();
        CT_PresetColor* add_prstClr();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorMRU& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ColorMRU* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_scrgbClr() const;
            CT_ScRgbColor* mutable_scrgbClr();
            const CT_ScRgbColor& scrgbClr() const;
            bool has_srgbClr() const;
            CT_SRgbColor* mutable_srgbClr();
            const CT_SRgbColor& srgbClr() const;
            bool has_hslClr() const;
            CT_HslColor* mutable_hslClr();
            const CT_HslColor& hslClr() const;
            bool has_sysClr() const;
            CT_SystemColor* mutable_sysClr();
            const CT_SystemColor& sysClr() const;
            bool has_schemeClr() const;
            CT_SchemeColor* mutable_schemeClr();
            const CT_SchemeColor& schemeClr() const;
            bool has_prstClr() const;
            CT_PresetColor* mutable_prstClr();
            const CT_PresetColor& prstClr() const;

        private:
            bool m_has_scrgbClr ;
            CT_ScRgbColor* m_scrgbClr ;
            bool m_has_srgbClr ;
            CT_SRgbColor* m_srgbClr ;
            bool m_has_hslClr ;
            CT_HslColor* m_hslClr ;
            bool m_has_sysClr ;
            CT_SystemColor* m_sysClr ;
            bool m_has_schemeClr ;
            CT_SchemeColor* m_schemeClr ;
            bool m_has_prstClr ;
            CT_PresetColor* m_prstClr ;

        }


    }

    class CT_EmbeddedWAVAudioFile : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EmbeddedWAVAudioFile& default_instance() const;
        bool has_embed_attr() const;
        void set_embed_attr(const ST_RelationshipId& _embed_attr );
        const ST_RelationshipId& embed_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        static CT_EmbeddedWAVAudioFile* default_instance_ ;
        bool m_has_embed_attr ;
        ST_RelationshipId* m_embed_attr ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_Hyperlink : public XSD::ComplexType{
    public:
        bool has_snd() const;
        CT_EmbeddedWAVAudioFile* mutable_snd();
        const CT_EmbeddedWAVAudioFile& snd() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Hyperlink& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_invalidUrl_attr() const;
        void set_invalidUrl_attr(const string& _invalidUrl_attr );
        const string& invalidUrl_attr() const;
        bool has_action_attr() const;
        void set_action_attr(const string& _action_attr );
        const string& action_attr() const;
        bool has_tgtFrame_attr() const;
        void set_tgtFrame_attr(const string& _tgtFrame_attr );
        const string& tgtFrame_attr() const;
        bool has_tooltip_attr() const;
        void set_tooltip_attr(const string& _tooltip_attr );
        const string& tooltip_attr() const;
        bool has_history_attr() const;
        void set_history_attr(const boolean& _history_attr );
        const boolean& history_attr() const;
        bool has_highlightClick_attr() const;
        void set_highlightClick_attr(const boolean& _highlightClick_attr );
        const boolean& highlightClick_attr() const;
        bool has_endSnd_attr() const;
        void set_endSnd_attr(const boolean& _endSnd_attr );
        const boolean& endSnd_attr() const;

    private:
        bool m_has_snd ;
        CT_EmbeddedWAVAudioFile* m_snd ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Hyperlink* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_invalidUrl_attr ;
        string m_invalidUrl_attr ;
        bool m_has_action_attr ;
        string m_action_attr ;
        bool m_has_tgtFrame_attr ;
        string m_tgtFrame_attr ;
        bool m_has_tooltip_attr ;
        string m_tooltip_attr ;
        bool m_has_history_attr ;
        boolean m_history_attr ;
        bool m_has_highlightClick_attr ;
        boolean m_highlightClick_attr ;
        bool m_has_endSnd_attr ;
        boolean m_endSnd_attr ;

    }

    class CT_ConnectorLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ConnectorLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noRot_attr() const;
        void set_noRot_attr(const boolean& _noRot_attr );
        const boolean& noRot_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;
        bool has_noEditPoints_attr() const;
        void set_noEditPoints_attr(const boolean& _noEditPoints_attr );
        const boolean& noEditPoints_attr() const;
        bool has_noAdjustHandles_attr() const;
        void set_noAdjustHandles_attr(const boolean& _noAdjustHandles_attr );
        const boolean& noAdjustHandles_attr() const;
        bool has_noChangeArrowheads_attr() const;
        void set_noChangeArrowheads_attr(const boolean& _noChangeArrowheads_attr );
        const boolean& noChangeArrowheads_attr() const;
        bool has_noChangeShapeType_attr() const;
        void set_noChangeShapeType_attr(const boolean& _noChangeShapeType_attr );
        const boolean& noChangeShapeType_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ConnectorLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noRot_attr ;
        boolean m_noRot_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;
        bool m_has_noEditPoints_attr ;
        boolean m_noEditPoints_attr ;
        bool m_has_noAdjustHandles_attr ;
        boolean m_noAdjustHandles_attr ;
        bool m_has_noChangeArrowheads_attr ;
        boolean m_noChangeArrowheads_attr ;
        bool m_has_noChangeShapeType_attr ;
        boolean m_noChangeShapeType_attr ;

    }

    class CT_ShapeLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noRot_attr() const;
        void set_noRot_attr(const boolean& _noRot_attr );
        const boolean& noRot_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;
        bool has_noEditPoints_attr() const;
        void set_noEditPoints_attr(const boolean& _noEditPoints_attr );
        const boolean& noEditPoints_attr() const;
        bool has_noAdjustHandles_attr() const;
        void set_noAdjustHandles_attr(const boolean& _noAdjustHandles_attr );
        const boolean& noAdjustHandles_attr() const;
        bool has_noChangeArrowheads_attr() const;
        void set_noChangeArrowheads_attr(const boolean& _noChangeArrowheads_attr );
        const boolean& noChangeArrowheads_attr() const;
        bool has_noChangeShapeType_attr() const;
        void set_noChangeShapeType_attr(const boolean& _noChangeShapeType_attr );
        const boolean& noChangeShapeType_attr() const;
        bool has_noTextEdit_attr() const;
        void set_noTextEdit_attr(const boolean& _noTextEdit_attr );
        const boolean& noTextEdit_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ShapeLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noRot_attr ;
        boolean m_noRot_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;
        bool m_has_noEditPoints_attr ;
        boolean m_noEditPoints_attr ;
        bool m_has_noAdjustHandles_attr ;
        boolean m_noAdjustHandles_attr ;
        bool m_has_noChangeArrowheads_attr ;
        boolean m_noChangeArrowheads_attr ;
        bool m_has_noChangeShapeType_attr ;
        boolean m_noChangeShapeType_attr ;
        bool m_has_noTextEdit_attr ;
        boolean m_noTextEdit_attr ;

    }

    class CT_PictureLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noRot_attr() const;
        void set_noRot_attr(const boolean& _noRot_attr );
        const boolean& noRot_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;
        bool has_noEditPoints_attr() const;
        void set_noEditPoints_attr(const boolean& _noEditPoints_attr );
        const boolean& noEditPoints_attr() const;
        bool has_noAdjustHandles_attr() const;
        void set_noAdjustHandles_attr(const boolean& _noAdjustHandles_attr );
        const boolean& noAdjustHandles_attr() const;
        bool has_noChangeArrowheads_attr() const;
        void set_noChangeArrowheads_attr(const boolean& _noChangeArrowheads_attr );
        const boolean& noChangeArrowheads_attr() const;
        bool has_noChangeShapeType_attr() const;
        void set_noChangeShapeType_attr(const boolean& _noChangeShapeType_attr );
        const boolean& noChangeShapeType_attr() const;
        bool has_noCrop_attr() const;
        void set_noCrop_attr(const boolean& _noCrop_attr );
        const boolean& noCrop_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_PictureLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noRot_attr ;
        boolean m_noRot_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;
        bool m_has_noEditPoints_attr ;
        boolean m_noEditPoints_attr ;
        bool m_has_noAdjustHandles_attr ;
        boolean m_noAdjustHandles_attr ;
        bool m_has_noChangeArrowheads_attr ;
        boolean m_noChangeArrowheads_attr ;
        bool m_has_noChangeShapeType_attr ;
        boolean m_noChangeShapeType_attr ;
        bool m_has_noCrop_attr ;
        boolean m_noCrop_attr ;

    }

    class CT_GroupLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noUngrp_attr() const;
        void set_noUngrp_attr(const boolean& _noUngrp_attr );
        const boolean& noUngrp_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noRot_attr() const;
        void set_noRot_attr(const boolean& _noRot_attr );
        const boolean& noRot_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GroupLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noUngrp_attr ;
        boolean m_noUngrp_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noRot_attr ;
        boolean m_noRot_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;

    }

    class CT_GraphicalObjectFrameLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectFrameLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noDrilldown_attr() const;
        void set_noDrilldown_attr(const boolean& _noDrilldown_attr );
        const boolean& noDrilldown_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GraphicalObjectFrameLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noDrilldown_attr ;
        boolean m_noDrilldown_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;

    }

    class CT_ContentPartLocking : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ContentPartLocking& default_instance() const;
        bool has_noGrp_attr() const;
        void set_noGrp_attr(const boolean& _noGrp_attr );
        const boolean& noGrp_attr() const;
        bool has_noSelect_attr() const;
        void set_noSelect_attr(const boolean& _noSelect_attr );
        const boolean& noSelect_attr() const;
        bool has_noRot_attr() const;
        void set_noRot_attr(const boolean& _noRot_attr );
        const boolean& noRot_attr() const;
        bool has_noChangeAspect_attr() const;
        void set_noChangeAspect_attr(const boolean& _noChangeAspect_attr );
        const boolean& noChangeAspect_attr() const;
        bool has_noMove_attr() const;
        void set_noMove_attr(const boolean& _noMove_attr );
        const boolean& noMove_attr() const;
        bool has_noResize_attr() const;
        void set_noResize_attr(const boolean& _noResize_attr );
        const boolean& noResize_attr() const;
        bool has_noEditPoints_attr() const;
        void set_noEditPoints_attr(const boolean& _noEditPoints_attr );
        const boolean& noEditPoints_attr() const;
        bool has_noAdjustHandles_attr() const;
        void set_noAdjustHandles_attr(const boolean& _noAdjustHandles_attr );
        const boolean& noAdjustHandles_attr() const;
        bool has_noChangeArrowheads_attr() const;
        void set_noChangeArrowheads_attr(const boolean& _noChangeArrowheads_attr );
        const boolean& noChangeArrowheads_attr() const;
        bool has_noChangeShapeType_attr() const;
        void set_noChangeShapeType_attr(const boolean& _noChangeShapeType_attr );
        const boolean& noChangeShapeType_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ContentPartLocking* default_instance_ ;
        bool m_has_noGrp_attr ;
        boolean m_noGrp_attr ;
        bool m_has_noSelect_attr ;
        boolean m_noSelect_attr ;
        bool m_has_noRot_attr ;
        boolean m_noRot_attr ;
        bool m_has_noChangeAspect_attr ;
        boolean m_noChangeAspect_attr ;
        bool m_has_noMove_attr ;
        boolean m_noMove_attr ;
        bool m_has_noResize_attr ;
        boolean m_noResize_attr ;
        bool m_has_noEditPoints_attr ;
        boolean m_noEditPoints_attr ;
        bool m_has_noAdjustHandles_attr ;
        boolean m_noAdjustHandles_attr ;
        bool m_has_noChangeArrowheads_attr ;
        boolean m_noChangeArrowheads_attr ;
        bool m_has_noChangeShapeType_attr ;
        boolean m_noChangeShapeType_attr ;

    }

    class CT_NonVisualDrawingProps : public XSD::ComplexType{
    public:
        bool has_hlinkClick() const;
        CT_Hyperlink* mutable_hlinkClick();
        const CT_Hyperlink& hlinkClick() const;
        bool has_hlinkHover() const;
        CT_Hyperlink* mutable_hlinkHover();
        const CT_Hyperlink& hlinkHover() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualDrawingProps& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DrawingElementId& _id_attr );
        const ST_DrawingElementId& id_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_descr_attr() const;
        void set_descr_attr(const string& _descr_attr );
        const string& descr_attr() const;
        bool has_hidden_attr() const;
        void set_hidden_attr(const boolean& _hidden_attr );
        const boolean& hidden_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const string& _title_attr );
        const string& title_attr() const;

    private:
        bool m_has_hlinkClick ;
        CT_Hyperlink* m_hlinkClick ;
        bool m_has_hlinkHover ;
        CT_Hyperlink* m_hlinkHover ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualDrawingProps* default_instance_ ;
        bool m_has_id_attr ;
        ST_DrawingElementId* m_id_attr ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_descr_attr ;
        string m_descr_attr ;
        bool m_has_hidden_attr ;
        boolean m_hidden_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;

    }

    class CT_NonVisualDrawingShapeProps : public XSD::ComplexType{
    public:
        bool has_spLocks() const;
        CT_ShapeLocking* mutable_spLocks();
        const CT_ShapeLocking& spLocks() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualDrawingShapeProps& default_instance() const;
        bool has_txBox_attr() const;
        void set_txBox_attr(const boolean& _txBox_attr );
        const boolean& txBox_attr() const;

    private:
        bool m_has_spLocks ;
        CT_ShapeLocking* m_spLocks ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualDrawingShapeProps* default_instance_ ;
        bool m_has_txBox_attr ;
        boolean m_txBox_attr ;

    }

    class CT_NonVisualConnectorProperties : public XSD::ComplexType{
    public:
        bool has_cxnSpLocks() const;
        CT_ConnectorLocking* mutable_cxnSpLocks();
        const CT_ConnectorLocking& cxnSpLocks() const;
        bool has_stCxn() const;
        CT_Connection* mutable_stCxn();
        const CT_Connection& stCxn() const;
        bool has_endCxn() const;
        CT_Connection* mutable_endCxn();
        const CT_Connection& endCxn() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualConnectorProperties& default_instance() const;

    private:
        bool m_has_cxnSpLocks ;
        CT_ConnectorLocking* m_cxnSpLocks ;
        bool m_has_stCxn ;
        CT_Connection* m_stCxn ;
        bool m_has_endCxn ;
        CT_Connection* m_endCxn ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualConnectorProperties* default_instance_ ;

    }

    class CT_NonVisualPictureProperties : public XSD::ComplexType{
    public:
        bool has_picLocks() const;
        CT_PictureLocking* mutable_picLocks();
        const CT_PictureLocking& picLocks() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualPictureProperties& default_instance() const;
        bool has_preferRelativeResize_attr() const;
        void set_preferRelativeResize_attr(const boolean& _preferRelativeResize_attr );
        const boolean& preferRelativeResize_attr() const;

    private:
        bool m_has_picLocks ;
        CT_PictureLocking* m_picLocks ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualPictureProperties* default_instance_ ;
        bool m_has_preferRelativeResize_attr ;
        boolean m_preferRelativeResize_attr ;

    }

    class CT_NonVisualGroupDrawingShapeProps : public XSD::ComplexType{
    public:
        bool has_grpSpLocks() const;
        CT_GroupLocking* mutable_grpSpLocks();
        const CT_GroupLocking& grpSpLocks() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualGroupDrawingShapeProps& default_instance() const;

    private:
        bool m_has_grpSpLocks ;
        CT_GroupLocking* m_grpSpLocks ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualGroupDrawingShapeProps* default_instance_ ;

    }

    class CT_NonVisualGraphicFrameProperties : public XSD::ComplexType{
    public:
        bool has_graphicFrameLocks() const;
        CT_GraphicalObjectFrameLocking* mutable_graphicFrameLocks();
        const CT_GraphicalObjectFrameLocking& graphicFrameLocks() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualGraphicFrameProperties& default_instance() const;

    private:
        bool m_has_graphicFrameLocks ;
        CT_GraphicalObjectFrameLocking* m_graphicFrameLocks ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualGraphicFrameProperties* default_instance_ ;

    }

    class CT_NonVisualContentPartProperties : public XSD::ComplexType{
    public:
        bool has_cpLocks() const;
        CT_ContentPartLocking* mutable_cpLocks();
        const CT_ContentPartLocking& cpLocks() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NonVisualContentPartProperties& default_instance() const;
        bool has_isComment_attr() const;
        void set_isComment_attr(const boolean& _isComment_attr );
        const boolean& isComment_attr() const;

    private:
        bool m_has_cpLocks ;
        CT_ContentPartLocking* m_cpLocks ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_NonVisualContentPartProperties* default_instance_ ;
        bool m_has_isComment_attr ;
        boolean m_isComment_attr ;

    }

    class CT_GraphicalObjectData : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectData& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const token& _uri_attr );
        const token& uri_attr() const;

    private:
        static CT_GraphicalObjectData* default_instance_ ;
        bool m_has_uri_attr ;
        token m_uri_attr ;

    }

    class CT_GraphicalObject : public XSD::ComplexType{
    public:
        bool has_graphicData() const;
        CT_GraphicalObjectData* mutable_graphicData();
        const CT_GraphicalObjectData& graphicData() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObject& default_instance() const;

    private:
        bool m_has_graphicData ;
        CT_GraphicalObjectData* m_graphicData ;
        static CT_GraphicalObject* default_instance_ ;

    }

    class CT_AnimationDgmElement : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationDgmElement& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_Guid& _id_attr );
        const ns_s::ST_Guid& id_attr() const;
        bool has_bldStep_attr() const;
        void set_bldStep_attr(const ST_DgmBuildStep& _bldStep_attr );
        const ST_DgmBuildStep& bldStep_attr() const;

    private:
        static CT_AnimationDgmElement* default_instance_ ;
        bool m_has_id_attr ;
        ns_s::ST_Guid* m_id_attr ;
        bool m_has_bldStep_attr ;
        ST_DgmBuildStep* m_bldStep_attr ;

    }

    class CT_AnimationChartElement : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationChartElement& default_instance() const;
        bool has_seriesIdx_attr() const;
        void set_seriesIdx_attr(const int& _seriesIdx_attr );
        const int& seriesIdx_attr() const;
        bool has_categoryIdx_attr() const;
        void set_categoryIdx_attr(const int& _categoryIdx_attr );
        const int& categoryIdx_attr() const;
        bool has_bldStep_attr() const;
        void set_bldStep_attr(const ST_ChartBuildStep& _bldStep_attr );
        const ST_ChartBuildStep& bldStep_attr() const;

    private:
        static CT_AnimationChartElement* default_instance_ ;
        bool m_has_seriesIdx_attr ;
        int m_seriesIdx_attr ;
        bool m_has_categoryIdx_attr ;
        int m_categoryIdx_attr ;
        bool m_has_bldStep_attr ;
        ST_ChartBuildStep* m_bldStep_attr ;

    }

    class CT_AnimationElementChoice : public XSD::ComplexType{
    public:
        bool has_dgm() const;
        CT_AnimationDgmElement* mutable_dgm();
        const CT_AnimationDgmElement& dgm() const;
        bool has_chart() const;
        CT_AnimationChartElement* mutable_chart();
        const CT_AnimationChartElement& chart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationElementChoice& default_instance() const;

    private:
        bool m_has_dgm ;
        CT_AnimationDgmElement* m_dgm ;
        bool m_has_chart ;
        CT_AnimationChartElement* m_chart ;
        static CT_AnimationElementChoice* default_instance_ ;

    }

    class CT_AnimationDgmBuildProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationDgmBuildProperties& default_instance() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_AnimationDgmBuildType& _bld_attr );
        const ST_AnimationDgmBuildType& bld_attr() const;
        bool has_rev_attr() const;
        void set_rev_attr(const boolean& _rev_attr );
        const boolean& rev_attr() const;

    private:
        static CT_AnimationDgmBuildProperties* default_instance_ ;
        bool m_has_bld_attr ;
        ST_AnimationDgmBuildType* m_bld_attr ;
        bool m_has_rev_attr ;
        boolean m_rev_attr ;

    }

    class CT_AnimationChartBuildProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationChartBuildProperties& default_instance() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_AnimationChartBuildType& _bld_attr );
        const ST_AnimationChartBuildType& bld_attr() const;
        bool has_animBg_attr() const;
        void set_animBg_attr(const boolean& _animBg_attr );
        const boolean& animBg_attr() const;

    private:
        static CT_AnimationChartBuildProperties* default_instance_ ;
        bool m_has_bld_attr ;
        ST_AnimationChartBuildType* m_bld_attr ;
        bool m_has_animBg_attr ;
        boolean m_animBg_attr ;

    }

    class CT_AnimationGraphicalObjectBuildProperties : public XSD::ComplexType{
    public:
        bool has_bldDgm() const;
        CT_AnimationDgmBuildProperties* mutable_bldDgm();
        const CT_AnimationDgmBuildProperties& bldDgm() const;
        bool has_bldChart() const;
        CT_AnimationChartBuildProperties* mutable_bldChart();
        const CT_AnimationChartBuildProperties& bldChart() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AnimationGraphicalObjectBuildProperties& default_instance() const;

    private:
        bool m_has_bldDgm ;
        CT_AnimationDgmBuildProperties* m_bldDgm ;
        bool m_has_bldChart ;
        CT_AnimationChartBuildProperties* m_bldChart ;
        static CT_AnimationGraphicalObjectBuildProperties* default_instance_ ;

    }

    class CT_BackgrCT_TextEffectoundFormatting : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BackgrCT_TextEffectoundFormatting& default_instance() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        static CT_BackgrCT_TextEffectoundFormatting* default_instance_ ;

    }

    class CT_WholeE2oFormatting : public XSD::ComplexType{
    public:
        bool has_ln() const;
        CT_LineProperties* mutable_ln();
        const CT_LineProperties& ln() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WholeE2oFormatting& default_instance() const;

    private:
        bool m_has_ln ;
        CT_LineProperties* m_ln ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        static CT_WholeE2oFormatting* default_instance_ ;

    }

    class CT_GvmlUseShapeRectangle : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlUseShapeRectangle& default_instance() const;

    private:
        static CT_GvmlUseShapeRectangle* default_instance_ ;

    }

    class CT_GvmlTextShape : public XSD::ComplexType{
    public:
        bool has_txBody() const;
        CT_TextBody* mutable_txBody();
        const CT_TextBody& txBody() const;
        bool has_useSpRect() const;
        CT_GvmlUseShapeRectangle* mutable_useSpRect();
        const CT_GvmlUseShapeRectangle& useSpRect() const;
        bool has_xfrm() const;
        CT_Transform2D* mutable_xfrm();
        const CT_Transform2D& xfrm() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlTextShape& default_instance() const;

    private:
        bool m_has_txBody ;
        CT_TextBody* m_txBody ;
        bool m_has_useSpRect ;
        CT_GvmlUseShapeRectangle* m_useSpRect ;
        bool m_has_xfrm ;
        CT_Transform2D* m_xfrm ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlTextShape* default_instance_ ;

    }

    class CT_GvmlShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        CT_NonVisualDrawingProps* mutable_cNvPr();
        const CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvSpPr() const;
        CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const CT_NonVisualDrawingShapeProps& cNvSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        static CT_GvmlShapeNonVisual* default_instance_ ;

    }

    class CT_GvmlShape : public XSD::ComplexType{
    public:
        bool has_nvSpPr() const;
        CT_GvmlShapeNonVisual* mutable_nvSpPr();
        const CT_GvmlShapeNonVisual& nvSpPr() const;
        bool has_spPr() const;
        CT_ShapeProperties* mutable_spPr();
        const CT_ShapeProperties& spPr() const;
        bool has_txSp() const;
        CT_GvmlTextShape* mutable_txSp();
        const CT_GvmlTextShape& txSp() const;
        bool has_style() const;
        CT_ShapeStyle* mutable_style();
        const CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlShape& default_instance() const;

    private:
        bool m_has_nvSpPr ;
        CT_GvmlShapeNonVisual* m_nvSpPr ;
        bool m_has_spPr ;
        CT_ShapeProperties* m_spPr ;
        bool m_has_txSp ;
        CT_GvmlTextShape* m_txSp ;
        bool m_has_style ;
        CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlShape* default_instance_ ;

    }

    class CT_GvmlConnectorNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        CT_NonVisualDrawingProps* mutable_cNvPr();
        const CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvCxnSpPr() const;
        CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr();
        const CT_NonVisualConnectorProperties& cNvCxnSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlConnectorNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvCxnSpPr ;
        CT_NonVisualConnectorProperties* m_cNvCxnSpPr ;
        static CT_GvmlConnectorNonVisual* default_instance_ ;

    }

    class CT_GvmlConnector : public XSD::ComplexType{
    public:
        bool has_nvCxnSpPr() const;
        CT_GvmlConnectorNonVisual* mutable_nvCxnSpPr();
        const CT_GvmlConnectorNonVisual& nvCxnSpPr() const;
        bool has_spPr() const;
        CT_ShapeProperties* mutable_spPr();
        const CT_ShapeProperties& spPr() const;
        bool has_style() const;
        CT_ShapeStyle* mutable_style();
        const CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlConnector& default_instance() const;

    private:
        bool m_has_nvCxnSpPr ;
        CT_GvmlConnectorNonVisual* m_nvCxnSpPr ;
        bool m_has_spPr ;
        CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlConnector* default_instance_ ;

    }

    class CT_GvmlPictureNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        CT_NonVisualDrawingProps* mutable_cNvPr();
        const CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvPicPr() const;
        CT_NonVisualPictureProperties* mutable_cNvPicPr();
        const CT_NonVisualPictureProperties& cNvPicPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlPictureNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvPicPr ;
        CT_NonVisualPictureProperties* m_cNvPicPr ;
        static CT_GvmlPictureNonVisual* default_instance_ ;

    }

    class CT_GvmlPicture : public XSD::ComplexType{
    public:
        bool has_nvPicPr() const;
        CT_GvmlPictureNonVisual* mutable_nvPicPr();
        const CT_GvmlPictureNonVisual& nvPicPr() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_spPr() const;
        CT_ShapeProperties* mutable_spPr();
        const CT_ShapeProperties& spPr() const;
        bool has_style() const;
        CT_ShapeStyle* mutable_style();
        const CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlPicture& default_instance() const;

    private:
        bool m_has_nvPicPr ;
        CT_GvmlPictureNonVisual* m_nvPicPr ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_spPr ;
        CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlPicture* default_instance_ ;

    }

    class CT_GvmlGraphicFrameNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        CT_NonVisualDrawingProps* mutable_cNvPr();
        const CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlGraphicFrameNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGraphicFramePr ;
        CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        static CT_GvmlGraphicFrameNonVisual* default_instance_ ;

    }

    class CT_GvmlGraphicalObjectFrame : public XSD::ComplexType{
    public:
        bool has_nvGraphicFramePr() const;
        CT_GvmlGraphicFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GvmlGraphicFrameNonVisual& nvGraphicFramePr() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        bool has_xfrm() const;
        CT_Transform2D* mutable_xfrm();
        const CT_Transform2D& xfrm() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlGraphicalObjectFrame& default_instance() const;

    private:
        bool m_has_nvGraphicFramePr ;
        CT_GvmlGraphicFrameNonVisual* m_nvGraphicFramePr ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        bool m_has_xfrm ;
        CT_Transform2D* m_xfrm ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlGraphicalObjectFrame* default_instance_ ;

    }

    class CT_GvmlGroupShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        CT_NonVisualDrawingProps* mutable_cNvPr();
        const CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGrpSpPr() const;
        CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlGroupShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        static CT_GvmlGroupShapeNonVisual* default_instance_ ;

    }

    class CT_GvmlGroupShape : public XSD::ComplexType{
    public:
        bool has_nvGrpSpPr() const;
        CT_GvmlGroupShapeNonVisual* mutable_nvGrpSpPr();
        const CT_GvmlGroupShapeNonVisual& nvGrpSpPr() const;
        bool has_grpSpPr() const;
        CT_GroupShapeProperties* mutable_grpSpPr();
        const CT_GroupShapeProperties& grpSpPr() const;
        CT_GvmlTextShape* add_txSp();
        CT_GvmlShape* add_sp();
        CT_GvmlConnector* add_cxnSp();
        CT_GvmlPicture* add_pic();
        CT_GvmlGraphicalObjectFrame* add_graphicFrame();
        CT_GvmlGroupShape* add_grpSp();
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GvmlGroupShape& default_instance() const;

    private:
        bool m_has_nvGrpSpPr ;
        CT_GvmlGroupShapeNonVisual* m_nvGrpSpPr ;
        bool m_has_grpSpPr ;
        CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GvmlGroupShape* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_txSp() const;
            CT_GvmlTextShape* mutable_txSp();
            const CT_GvmlTextShape& txSp() const;
            bool has_sp() const;
            CT_GvmlShape* mutable_sp();
            const CT_GvmlShape& sp() const;
            bool has_cxnSp() const;
            CT_GvmlConnector* mutable_cxnSp();
            const CT_GvmlConnector& cxnSp() const;
            bool has_pic() const;
            CT_GvmlPicture* mutable_pic();
            const CT_GvmlPicture& pic() const;
            bool has_graphicFrame() const;
            CT_GvmlGraphicalObjectFrame* mutable_graphicFrame();
            const CT_GvmlGraphicalObjectFrame& graphicFrame() const;
            bool has_grpSp() const;
            CT_GvmlGroupShape* mutable_grpSp();
            const CT_GvmlGroupShape& grpSp() const;

        private:
            bool m_has_txSp ;
            CT_GvmlTextShape* m_txSp ;
            bool m_has_sp ;
            CT_GvmlShape* m_sp ;
            bool m_has_cxnSp ;
            CT_GvmlConnector* m_cxnSp ;
            bool m_has_pic ;
            CT_GvmlPicture* m_pic ;
            bool m_has_graphicFrame ;
            CT_GvmlGraphicalObjectFrame* m_graphicFrame ;
            bool m_has_grpSp ;
            CT_GvmlGroupShape* m_grpSp ;

        }


    }

    class CT_Camera : public XSD::ComplexType{
    public:
        bool has_rot() const;
        CT_SphereCoords* mutable_rot();
        const CT_SphereCoords& rot() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Camera& default_instance() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_PresetCameraType& _prst_attr );
        const ST_PresetCameraType& prst_attr() const;
        bool has_fov_attr() const;
        void set_fov_attr(const ST_FOVAngle& _fov_attr );
        const ST_FOVAngle& fov_attr() const;
        bool has_zoom_attr() const;
        void set_zoom_attr(const ST_PositivePercentage& _zoom_attr );
        const ST_PositivePercentage& zoom_attr() const;

    private:
        bool m_has_rot ;
        CT_SphereCoords* m_rot ;
        static CT_Camera* default_instance_ ;
        bool m_has_prst_attr ;
        ST_PresetCameraType* m_prst_attr ;
        bool m_has_fov_attr ;
        ST_FOVAngle* m_fov_attr ;
        bool m_has_zoom_attr ;
        ST_PositivePercentage* m_zoom_attr ;

    }

    class CT_LightRig : public XSD::ComplexType{
    public:
        bool has_rot() const;
        CT_SphereCoords* mutable_rot();
        const CT_SphereCoords& rot() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LightRig& default_instance() const;
        bool has_rig_attr() const;
        void set_rig_attr(const ST_LightRigType& _rig_attr );
        const ST_LightRigType& rig_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_LightRigDirection& _dir_attr );
        const ST_LightRigDirection& dir_attr() const;

    private:
        bool m_has_rot ;
        CT_SphereCoords* m_rot ;
        static CT_LightRig* default_instance_ ;
        bool m_has_rig_attr ;
        ST_LightRigType* m_rig_attr ;
        bool m_has_dir_attr ;
        ST_LightRigDirection* m_dir_attr ;

    }

    class CT_Scene3D : public XSD::ComplexType{
    public:
        bool has_camera() const;
        CT_Camera* mutable_camera();
        const CT_Camera& camera() const;
        bool has_lightRig() const;
        CT_LightRig* mutable_lightRig();
        const CT_LightRig& lightRig() const;
        bool has_backdrop() const;
        CT_Backdrop* mutable_backdrop();
        const CT_Backdrop& backdrop() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Scene3D& default_instance() const;

    private:
        bool m_has_camera ;
        CT_Camera* m_camera ;
        bool m_has_lightRig ;
        CT_LightRig* m_lightRig ;
        bool m_has_backdrop ;
        CT_Backdrop* m_backdrop ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Scene3D* default_instance_ ;

    }

    class CT_Backdrop : public XSD::ComplexType{
    public:
        bool has_anchor() const;
        CT_Point3D* mutable_anchor();
        const CT_Point3D& anchor() const;
        bool has_norm() const;
        CT_Vector3D* mutable_norm();
        const CT_Vector3D& norm() const;
        bool has_up() const;
        CT_Vector3D* mutable_up();
        const CT_Vector3D& up() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Backdrop& default_instance() const;

    private:
        bool m_has_anchor ;
        CT_Point3D* m_anchor ;
        bool m_has_norm ;
        CT_Vector3D* m_norm ;
        bool m_has_up ;
        CT_Vector3D* m_up ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Backdrop* default_instance_ ;

    }

    class CT_Bevel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Bevel& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_PositiveCoordinate& _w_attr );
        const ST_PositiveCoordinate& w_attr() const;
        bool has_h_attr() const;
        void set_h_attr(const ST_PositiveCoordinate& _h_attr );
        const ST_PositiveCoordinate& h_attr() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_BevelPresetType& _prst_attr );
        const ST_BevelPresetType& prst_attr() const;

    private:
        static CT_Bevel* default_instance_ ;
        bool m_has_w_attr ;
        ST_PositiveCoordinate* m_w_attr ;
        bool m_has_h_attr ;
        ST_PositiveCoordinate* m_h_attr ;
        bool m_has_prst_attr ;
        ST_BevelPresetType* m_prst_attr ;

    }

    class CT_Shape3D : public XSD::ComplexType{
    public:
        bool has_bevelT() const;
        CT_Bevel* mutable_bevelT();
        const CT_Bevel& bevelT() const;
        bool has_bevelB() const;
        CT_Bevel* mutable_bevelB();
        const CT_Bevel& bevelB() const;
        bool has_extrusionClr() const;
        CT_Color* mutable_extrusionClr();
        const CT_Color& extrusionClr() const;
        bool has_contourClr() const;
        CT_Color* mutable_contourClr();
        const CT_Color& contourClr() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape3D& default_instance() const;
        bool has_z_attr() const;
        void set_z_attr(const ST_Coordinate& _z_attr );
        const ST_Coordinate& z_attr() const;
        bool has_extrusionH_attr() const;
        void set_extrusionH_attr(const ST_PositiveCoordinate& _extrusionH_attr );
        const ST_PositiveCoordinate& extrusionH_attr() const;
        bool has_contourW_attr() const;
        void set_contourW_attr(const ST_PositiveCoordinate& _contourW_attr );
        const ST_PositiveCoordinate& contourW_attr() const;
        bool has_prstMaterial_attr() const;
        void set_prstMaterial_attr(const ST_PresetMaterialType& _prstMaterial_attr );
        const ST_PresetMaterialType& prstMaterial_attr() const;

    private:
        bool m_has_bevelT ;
        CT_Bevel* m_bevelT ;
        bool m_has_bevelB ;
        CT_Bevel* m_bevelB ;
        bool m_has_extrusionClr ;
        CT_Color* m_extrusionClr ;
        bool m_has_contourClr ;
        CT_Color* m_contourClr ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Shape3D* default_instance_ ;
        bool m_has_z_attr ;
        ST_Coordinate* m_z_attr ;
        bool m_has_extrusionH_attr ;
        ST_PositiveCoordinate* m_extrusionH_attr ;
        bool m_has_contourW_attr ;
        ST_PositiveCoordinate* m_contourW_attr ;
        bool m_has_prstMaterial_attr ;
        ST_PresetMaterialType* m_prstMaterial_attr ;

    }

    class CT_FlatText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FlatText& default_instance() const;
        bool has_z_attr() const;
        void set_z_attr(const ST_Coordinate& _z_attr );
        const ST_Coordinate& z_attr() const;

    private:
        static CT_FlatText* default_instance_ ;
        bool m_has_z_attr ;
        ST_Coordinate* m_z_attr ;

    }

    class CT_AlphaBiLevelEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaBiLevelEffect& default_instance() const;
        bool has_thresh_attr() const;
        void set_thresh_attr(const ST_PositiveFixedPercentage& _thresh_attr );
        const ST_PositiveFixedPercentage& thresh_attr() const;

    private:
        static CT_AlphaBiLevelEffect* default_instance_ ;
        bool m_has_thresh_attr ;
        ST_PositiveFixedPercentage* m_thresh_attr ;

    }

    class CT_AlphaCeilingEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaCeilingEffect& default_instance() const;

    private:
        static CT_AlphaCeilingEffect* default_instance_ ;

    }

    class CT_AlphaFloorEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaFloorEffect& default_instance() const;

    private:
        static CT_AlphaFloorEffect* default_instance_ ;

    }

    class CT_AlphaInverseEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaInverseEffect& default_instance() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_AlphaInverseEffect* default_instance_ ;

    }

    class CT_AlphaModulateFixedEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaModulateFixedEffect& default_instance() const;
        bool has_amt_attr() const;
        void set_amt_attr(const ST_PositivePercentage& _amt_attr );
        const ST_PositivePercentage& amt_attr() const;

    private:
        static CT_AlphaModulateFixedEffect* default_instance_ ;
        bool m_has_amt_attr ;
        ST_PositivePercentage* m_amt_attr ;

    }

    class CT_AlphaOutsetEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaOutsetEffect& default_instance() const;
        bool has_rad_attr() const;
        void set_rad_attr(const ST_Coordinate& _rad_attr );
        const ST_Coordinate& rad_attr() const;

    private:
        static CT_AlphaOutsetEffect* default_instance_ ;
        bool m_has_rad_attr ;
        ST_Coordinate* m_rad_attr ;

    }

    class CT_AlphaReplaceEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaReplaceEffect& default_instance() const;
        bool has_a_attr() const;
        void set_a_attr(const ST_PositiveFixedPercentage& _a_attr );
        const ST_PositiveFixedPercentage& a_attr() const;

    private:
        static CT_AlphaReplaceEffect* default_instance_ ;
        bool m_has_a_attr ;
        ST_PositiveFixedPercentage* m_a_attr ;

    }

    class CT_BiLevelEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BiLevelEffect& default_instance() const;
        bool has_thresh_attr() const;
        void set_thresh_attr(const ST_PositiveFixedPercentage& _thresh_attr );
        const ST_PositiveFixedPercentage& thresh_attr() const;

    private:
        static CT_BiLevelEffect* default_instance_ ;
        bool m_has_thresh_attr ;
        ST_PositiveFixedPercentage* m_thresh_attr ;

    }

    class CT_BlurEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BlurEffect& default_instance() const;
        bool has_rad_attr() const;
        void set_rad_attr(const ST_PositiveCoordinate& _rad_attr );
        const ST_PositiveCoordinate& rad_attr() const;
        bool has_grow_attr() const;
        void set_grow_attr(const boolean& _grow_attr );
        const boolean& grow_attr() const;

    private:
        static CT_BlurEffect* default_instance_ ;
        bool m_has_rad_attr ;
        ST_PositiveCoordinate* m_rad_attr ;
        bool m_has_grow_attr ;
        boolean m_grow_attr ;

    }

    class CT_ColorChangeEffect : public XSD::ComplexType{
    public:
        bool has_clrFrom() const;
        CT_Color* mutable_clrFrom();
        const CT_Color& clrFrom() const;
        bool has_clrTo() const;
        CT_Color* mutable_clrTo();
        const CT_Color& clrTo() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorChangeEffect& default_instance() const;
        bool has_useA_attr() const;
        void set_useA_attr(const boolean& _useA_attr );
        const boolean& useA_attr() const;

    private:
        bool m_has_clrFrom ;
        CT_Color* m_clrFrom ;
        bool m_has_clrTo ;
        CT_Color* m_clrTo ;
        static CT_ColorChangeEffect* default_instance_ ;
        bool m_has_useA_attr ;
        boolean m_useA_attr ;

    }

    class CT_ColorReplaceEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorReplaceEffect& default_instance() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_ColorReplaceEffect* default_instance_ ;

    }

    class CT_DuotoneEffect : public XSD::ComplexType{
    public:
        CT_ScRgbColor* add_scrgbClr();
        CT_SRgbColor* add_srgbClr();
        CT_HslColor* add_hslClr();
        CT_SystemColor* add_sysClr();
        CT_SchemeColor* add_schemeClr();
        CT_PresetColor* add_prstClr();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DuotoneEffect& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_DuotoneEffect* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_scrgbClr() const;
            CT_ScRgbColor* mutable_scrgbClr();
            const CT_ScRgbColor& scrgbClr() const;
            bool has_srgbClr() const;
            CT_SRgbColor* mutable_srgbClr();
            const CT_SRgbColor& srgbClr() const;
            bool has_hslClr() const;
            CT_HslColor* mutable_hslClr();
            const CT_HslColor& hslClr() const;
            bool has_sysClr() const;
            CT_SystemColor* mutable_sysClr();
            const CT_SystemColor& sysClr() const;
            bool has_schemeClr() const;
            CT_SchemeColor* mutable_schemeClr();
            const CT_SchemeColor& schemeClr() const;
            bool has_prstClr() const;
            CT_PresetColor* mutable_prstClr();
            const CT_PresetColor& prstClr() const;

        private:
            bool m_has_scrgbClr ;
            CT_ScRgbColor* m_scrgbClr ;
            bool m_has_srgbClr ;
            CT_SRgbColor* m_srgbClr ;
            bool m_has_hslClr ;
            CT_HslColor* m_hslClr ;
            bool m_has_sysClr ;
            CT_SystemColor* m_sysClr ;
            bool m_has_schemeClr ;
            CT_SchemeColor* m_schemeClr ;
            bool m_has_prstClr ;
            CT_PresetColor* m_prstClr ;

        }


    }

    class CT_GlowEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GlowEffect& default_instance() const;
        bool has_rad_attr() const;
        void set_rad_attr(const ST_PositiveCoordinate& _rad_attr );
        const ST_PositiveCoordinate& rad_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_GlowEffect* default_instance_ ;
        bool m_has_rad_attr ;
        ST_PositiveCoordinate* m_rad_attr ;

    }

    class CT_GrayscaleEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GrayscaleEffect& default_instance() const;

    private:
        static CT_GrayscaleEffect* default_instance_ ;

    }

    class CT_HSLEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HSLEffect& default_instance() const;
        bool has_hue_attr() const;
        void set_hue_attr(const ST_PositiveFixedAngle& _hue_attr );
        const ST_PositiveFixedAngle& hue_attr() const;
        bool has_sat_attr() const;
        void set_sat_attr(const ST_FixedPercentage& _sat_attr );
        const ST_FixedPercentage& sat_attr() const;
        bool has_lum_attr() const;
        void set_lum_attr(const ST_FixedPercentage& _lum_attr );
        const ST_FixedPercentage& lum_attr() const;

    private:
        static CT_HSLEffect* default_instance_ ;
        bool m_has_hue_attr ;
        ST_PositiveFixedAngle* m_hue_attr ;
        bool m_has_sat_attr ;
        ST_FixedPercentage* m_sat_attr ;
        bool m_has_lum_attr ;
        ST_FixedPercentage* m_lum_attr ;

    }

    class CT_InnerShadowEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_InnerShadowEffect& default_instance() const;
        bool has_blurRad_attr() const;
        void set_blurRad_attr(const ST_PositiveCoordinate& _blurRad_attr );
        const ST_PositiveCoordinate& blurRad_attr() const;
        bool has_dist_attr() const;
        void set_dist_attr(const ST_PositiveCoordinate& _dist_attr );
        const ST_PositiveCoordinate& dist_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_PositiveFixedAngle& _dir_attr );
        const ST_PositiveFixedAngle& dir_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_InnerShadowEffect* default_instance_ ;
        bool m_has_blurRad_attr ;
        ST_PositiveCoordinate* m_blurRad_attr ;
        bool m_has_dist_attr ;
        ST_PositiveCoordinate* m_dist_attr ;
        bool m_has_dir_attr ;
        ST_PositiveFixedAngle* m_dir_attr ;

    }

    class CT_LuminanceEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LuminanceEffect& default_instance() const;
        bool has_bright_attr() const;
        void set_bright_attr(const ST_FixedPercentage& _bright_attr );
        const ST_FixedPercentage& bright_attr() const;
        bool has_contrast_attr() const;
        void set_contrast_attr(const ST_FixedPercentage& _contrast_attr );
        const ST_FixedPercentage& contrast_attr() const;

    private:
        static CT_LuminanceEffect* default_instance_ ;
        bool m_has_bright_attr ;
        ST_FixedPercentage* m_bright_attr ;
        bool m_has_contrast_attr ;
        ST_FixedPercentage* m_contrast_attr ;

    }

    class CT_OuterShadowEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OuterShadowEffect& default_instance() const;
        bool has_blurRad_attr() const;
        void set_blurRad_attr(const ST_PositiveCoordinate& _blurRad_attr );
        const ST_PositiveCoordinate& blurRad_attr() const;
        bool has_dist_attr() const;
        void set_dist_attr(const ST_PositiveCoordinate& _dist_attr );
        const ST_PositiveCoordinate& dist_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_PositiveFixedAngle& _dir_attr );
        const ST_PositiveFixedAngle& dir_attr() const;
        bool has_sx_attr() const;
        void set_sx_attr(const ST_Percentage& _sx_attr );
        const ST_Percentage& sx_attr() const;
        bool has_sy_attr() const;
        void set_sy_attr(const ST_Percentage& _sy_attr );
        const ST_Percentage& sy_attr() const;
        bool has_kx_attr() const;
        void set_kx_attr(const ST_FixedAngle& _kx_attr );
        const ST_FixedAngle& kx_attr() const;
        bool has_ky_attr() const;
        void set_ky_attr(const ST_FixedAngle& _ky_attr );
        const ST_FixedAngle& ky_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_RectAlignment& _algn_attr );
        const ST_RectAlignment& algn_attr() const;
        bool has_rotWithShape_attr() const;
        void set_rotWithShape_attr(const boolean& _rotWithShape_attr );
        const boolean& rotWithShape_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_OuterShadowEffect* default_instance_ ;
        bool m_has_blurRad_attr ;
        ST_PositiveCoordinate* m_blurRad_attr ;
        bool m_has_dist_attr ;
        ST_PositiveCoordinate* m_dist_attr ;
        bool m_has_dir_attr ;
        ST_PositiveFixedAngle* m_dir_attr ;
        bool m_has_sx_attr ;
        ST_Percentage* m_sx_attr ;
        bool m_has_sy_attr ;
        ST_Percentage* m_sy_attr ;
        bool m_has_kx_attr ;
        ST_FixedAngle* m_kx_attr ;
        bool m_has_ky_attr ;
        ST_FixedAngle* m_ky_attr ;
        bool m_has_algn_attr ;
        ST_RectAlignment* m_algn_attr ;
        bool m_has_rotWithShape_attr ;
        boolean m_rotWithShape_attr ;

    }

    class CT_PresetShadowEffect : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresetShadowEffect& default_instance() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_PresetShadowVal& _prst_attr );
        const ST_PresetShadowVal& prst_attr() const;
        bool has_dist_attr() const;
        void set_dist_attr(const ST_PositiveCoordinate& _dist_attr );
        const ST_PositiveCoordinate& dist_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_PositiveFixedAngle& _dir_attr );
        const ST_PositiveFixedAngle& dir_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_PresetShadowEffect* default_instance_ ;
        bool m_has_prst_attr ;
        ST_PresetShadowVal* m_prst_attr ;
        bool m_has_dist_attr ;
        ST_PositiveCoordinate* m_dist_attr ;
        bool m_has_dir_attr ;
        ST_PositiveFixedAngle* m_dir_attr ;

    }

    class CT_ReflectionEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ReflectionEffect& default_instance() const;
        bool has_blurRad_attr() const;
        void set_blurRad_attr(const ST_PositiveCoordinate& _blurRad_attr );
        const ST_PositiveCoordinate& blurRad_attr() const;
        bool has_stA_attr() const;
        void set_stA_attr(const ST_PositiveFixedPercentage& _stA_attr );
        const ST_PositiveFixedPercentage& stA_attr() const;
        bool has_stPos_attr() const;
        void set_stPos_attr(const ST_PositiveFixedPercentage& _stPos_attr );
        const ST_PositiveFixedPercentage& stPos_attr() const;
        bool has_endA_attr() const;
        void set_endA_attr(const ST_PositiveFixedPercentage& _endA_attr );
        const ST_PositiveFixedPercentage& endA_attr() const;
        bool has_endPos_attr() const;
        void set_endPos_attr(const ST_PositiveFixedPercentage& _endPos_attr );
        const ST_PositiveFixedPercentage& endPos_attr() const;
        bool has_dist_attr() const;
        void set_dist_attr(const ST_PositiveCoordinate& _dist_attr );
        const ST_PositiveCoordinate& dist_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_PositiveFixedAngle& _dir_attr );
        const ST_PositiveFixedAngle& dir_attr() const;
        bool has_fadeDir_attr() const;
        void set_fadeDir_attr(const ST_PositiveFixedAngle& _fadeDir_attr );
        const ST_PositiveFixedAngle& fadeDir_attr() const;
        bool has_sx_attr() const;
        void set_sx_attr(const ST_Percentage& _sx_attr );
        const ST_Percentage& sx_attr() const;
        bool has_sy_attr() const;
        void set_sy_attr(const ST_Percentage& _sy_attr );
        const ST_Percentage& sy_attr() const;
        bool has_kx_attr() const;
        void set_kx_attr(const ST_FixedAngle& _kx_attr );
        const ST_FixedAngle& kx_attr() const;
        bool has_ky_attr() const;
        void set_ky_attr(const ST_FixedAngle& _ky_attr );
        const ST_FixedAngle& ky_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_RectAlignment& _algn_attr );
        const ST_RectAlignment& algn_attr() const;
        bool has_rotWithShape_attr() const;
        void set_rotWithShape_attr(const boolean& _rotWithShape_attr );
        const boolean& rotWithShape_attr() const;

    private:
        static CT_ReflectionEffect* default_instance_ ;
        bool m_has_blurRad_attr ;
        ST_PositiveCoordinate* m_blurRad_attr ;
        bool m_has_stA_attr ;
        ST_PositiveFixedPercentage* m_stA_attr ;
        bool m_has_stPos_attr ;
        ST_PositiveFixedPercentage* m_stPos_attr ;
        bool m_has_endA_attr ;
        ST_PositiveFixedPercentage* m_endA_attr ;
        bool m_has_endPos_attr ;
        ST_PositiveFixedPercentage* m_endPos_attr ;
        bool m_has_dist_attr ;
        ST_PositiveCoordinate* m_dist_attr ;
        bool m_has_dir_attr ;
        ST_PositiveFixedAngle* m_dir_attr ;
        bool m_has_fadeDir_attr ;
        ST_PositiveFixedAngle* m_fadeDir_attr ;
        bool m_has_sx_attr ;
        ST_Percentage* m_sx_attr ;
        bool m_has_sy_attr ;
        ST_Percentage* m_sy_attr ;
        bool m_has_kx_attr ;
        ST_FixedAngle* m_kx_attr ;
        bool m_has_ky_attr ;
        ST_FixedAngle* m_ky_attr ;
        bool m_has_algn_attr ;
        ST_RectAlignment* m_algn_attr ;
        bool m_has_rotWithShape_attr ;
        boolean m_rotWithShape_attr ;

    }

    class CT_RelativeOffsetEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RelativeOffsetEffect& default_instance() const;
        bool has_tx_attr() const;
        void set_tx_attr(const ST_Percentage& _tx_attr );
        const ST_Percentage& tx_attr() const;
        bool has_ty_attr() const;
        void set_ty_attr(const ST_Percentage& _ty_attr );
        const ST_Percentage& ty_attr() const;

    private:
        static CT_RelativeOffsetEffect* default_instance_ ;
        bool m_has_tx_attr ;
        ST_Percentage* m_tx_attr ;
        bool m_has_ty_attr ;
        ST_Percentage* m_ty_attr ;

    }

    class CT_SoftEdgesEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SoftEdgesEffect& default_instance() const;
        bool has_rad_attr() const;
        void set_rad_attr(const ST_PositiveCoordinate& _rad_attr );
        const ST_PositiveCoordinate& rad_attr() const;

    private:
        static CT_SoftEdgesEffect* default_instance_ ;
        bool m_has_rad_attr ;
        ST_PositiveCoordinate* m_rad_attr ;

    }

    class CT_TintEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TintEffect& default_instance() const;
        bool has_hue_attr() const;
        void set_hue_attr(const ST_PositiveFixedAngle& _hue_attr );
        const ST_PositiveFixedAngle& hue_attr() const;
        bool has_amt_attr() const;
        void set_amt_attr(const ST_FixedPercentage& _amt_attr );
        const ST_FixedPercentage& amt_attr() const;

    private:
        static CT_TintEffect* default_instance_ ;
        bool m_has_hue_attr ;
        ST_PositiveFixedAngle* m_hue_attr ;
        bool m_has_amt_attr ;
        ST_FixedPercentage* m_amt_attr ;

    }

    class CT_TransformEffect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TransformEffect& default_instance() const;
        bool has_sx_attr() const;
        void set_sx_attr(const ST_Percentage& _sx_attr );
        const ST_Percentage& sx_attr() const;
        bool has_sy_attr() const;
        void set_sy_attr(const ST_Percentage& _sy_attr );
        const ST_Percentage& sy_attr() const;
        bool has_kx_attr() const;
        void set_kx_attr(const ST_FixedAngle& _kx_attr );
        const ST_FixedAngle& kx_attr() const;
        bool has_ky_attr() const;
        void set_ky_attr(const ST_FixedAngle& _ky_attr );
        const ST_FixedAngle& ky_attr() const;
        bool has_tx_attr() const;
        void set_tx_attr(const ST_Coordinate& _tx_attr );
        const ST_Coordinate& tx_attr() const;
        bool has_ty_attr() const;
        void set_ty_attr(const ST_Coordinate& _ty_attr );
        const ST_Coordinate& ty_attr() const;

    private:
        static CT_TransformEffect* default_instance_ ;
        bool m_has_sx_attr ;
        ST_Percentage* m_sx_attr ;
        bool m_has_sy_attr ;
        ST_Percentage* m_sy_attr ;
        bool m_has_kx_attr ;
        ST_FixedAngle* m_kx_attr ;
        bool m_has_ky_attr ;
        ST_FixedAngle* m_ky_attr ;
        bool m_has_tx_attr ;
        ST_Coordinate* m_tx_attr ;
        bool m_has_ty_attr ;
        ST_Coordinate* m_ty_attr ;

    }

    class CT_NoFillProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NoFillProperties& default_instance() const;

    private:
        static CT_NoFillProperties* default_instance_ ;

    }

    class CT_SolidColorFillProperties : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SolidColorFillProperties& default_instance() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_SolidColorFillProperties* default_instance_ ;

    }

    class CT_LinearShadeProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LinearShadeProperties& default_instance() const;
        bool has_ang_attr() const;
        void set_ang_attr(const ST_PositiveFixedAngle& _ang_attr );
        const ST_PositiveFixedAngle& ang_attr() const;
        bool has_scaled_attr() const;
        void set_scaled_attr(const boolean& _scaled_attr );
        const boolean& scaled_attr() const;

    private:
        static CT_LinearShadeProperties* default_instance_ ;
        bool m_has_ang_attr ;
        ST_PositiveFixedAngle* m_ang_attr ;
        bool m_has_scaled_attr ;
        boolean m_scaled_attr ;

    }

    class CT_PathShadeProperties : public XSD::ComplexType{
    public:
        bool has_fillToRect() const;
        CT_RelativeRect* mutable_fillToRect();
        const CT_RelativeRect& fillToRect() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PathShadeProperties& default_instance() const;
        bool has_path_attr() const;
        void set_path_attr(const ST_PathShadeType& _path_attr );
        const ST_PathShadeType& path_attr() const;

    private:
        bool m_has_fillToRect ;
        CT_RelativeRect* m_fillToRect ;
        static CT_PathShadeProperties* default_instance_ ;
        bool m_has_path_attr ;
        ST_PathShadeType* m_path_attr ;

    }

    class CT_GradientStop : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GradientStop& default_instance() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ST_PositiveFixedPercentage& _pos_attr );
        const ST_PositiveFixedPercentage& pos_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_GradientStop* default_instance_ ;
        bool m_has_pos_attr ;
        ST_PositiveFixedPercentage* m_pos_attr ;

    }

    class CT_GradientStopList : public XSD::ComplexType{
    public:
        bool has_gs() const;
        CT_GradientStop* mutable_gs();
        const CT_GradientStop& gs() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GradientStopList& default_instance() const;

    private:
        bool m_has_gs ;
        CT_GradientStop* m_gs ;
        static CT_GradientStopList* default_instance_ ;

    }

    class CT_GradientFillProperties : public XSD::ComplexType{
    public:
        bool has_gsLst() const;
        CT_GradientStopList* mutable_gsLst();
        const CT_GradientStopList& gsLst() const;
        bool has_lin() const;
        CT_LinearShadeProperties* mutable_lin();
        const CT_LinearShadeProperties& lin() const;
        bool has_path() const;
        CT_PathShadeProperties* mutable_path();
        const CT_PathShadeProperties& path() const;
        bool has_tileRect() const;
        CT_RelativeRect* mutable_tileRect();
        const CT_RelativeRect& tileRect() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GradientFillProperties& default_instance() const;
        bool has_flip_attr() const;
        void set_flip_attr(const ST_TileFlipMode& _flip_attr );
        const ST_TileFlipMode& flip_attr() const;
        bool has_rotWithShape_attr() const;
        void set_rotWithShape_attr(const boolean& _rotWithShape_attr );
        const boolean& rotWithShape_attr() const;

    private:
        bool m_has_gsLst ;
        CT_GradientStopList* m_gsLst ;
        bool m_has_lin ;
        CT_LinearShadeProperties* m_lin ;
        bool m_has_path ;
        CT_PathShadeProperties* m_path ;
        bool m_has_tileRect ;
        CT_RelativeRect* m_tileRect ;
        static CT_GradientFillProperties* default_instance_ ;
        bool m_has_flip_attr ;
        ST_TileFlipMode* m_flip_attr ;
        bool m_has_rotWithShape_attr ;
        boolean m_rotWithShape_attr ;

    }

    class CT_TileInfoProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TileInfoProperties& default_instance() const;
        bool has_tx_attr() const;
        void set_tx_attr(const ST_Coordinate& _tx_attr );
        const ST_Coordinate& tx_attr() const;
        bool has_ty_attr() const;
        void set_ty_attr(const ST_Coordinate& _ty_attr );
        const ST_Coordinate& ty_attr() const;
        bool has_sx_attr() const;
        void set_sx_attr(const ST_Percentage& _sx_attr );
        const ST_Percentage& sx_attr() const;
        bool has_sy_attr() const;
        void set_sy_attr(const ST_Percentage& _sy_attr );
        const ST_Percentage& sy_attr() const;
        bool has_flip_attr() const;
        void set_flip_attr(const ST_TileFlipMode& _flip_attr );
        const ST_TileFlipMode& flip_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_RectAlignment& _algn_attr );
        const ST_RectAlignment& algn_attr() const;

    private:
        static CT_TileInfoProperties* default_instance_ ;
        bool m_has_tx_attr ;
        ST_Coordinate* m_tx_attr ;
        bool m_has_ty_attr ;
        ST_Coordinate* m_ty_attr ;
        bool m_has_sx_attr ;
        ST_Percentage* m_sx_attr ;
        bool m_has_sy_attr ;
        ST_Percentage* m_sy_attr ;
        bool m_has_flip_attr ;
        ST_TileFlipMode* m_flip_attr ;
        bool m_has_algn_attr ;
        ST_RectAlignment* m_algn_attr ;

    }

    class CT_StretchInfoProperties : public XSD::ComplexType{
    public:
        bool has_fillRect() const;
        CT_RelativeRect* mutable_fillRect();
        const CT_RelativeRect& fillRect() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StretchInfoProperties& default_instance() const;

    private:
        bool m_has_fillRect ;
        CT_RelativeRect* m_fillRect ;
        static CT_StretchInfoProperties* default_instance_ ;

    }

    class CT_Blip : public XSD::ComplexType{
    public:
        CT_AlphaBiLevelEffect* add_alphaBiLevel();
        CT_AlphaCeilingEffect* add_alphaCeiling();
        CT_AlphaFloorEffect* add_alphaFloor();
        CT_AlphaInverseEffect* add_alphaInv();
        CT_AlphaModulateEffect* add_alphaMod();
        CT_AlphaModulateFixedEffect* add_alphaModFix();
        CT_AlphaReplaceEffect* add_alphaRepl();
        CT_BiLevelEffect* add_biLevel();
        CT_BlurEffect* add_blur();
        CT_ColorChangeEffect* add_clrChange();
        CT_ColorReplaceEffect* add_clrRepl();
        CT_DuotoneEffect* add_duotone();
        CT_FillOverlayEffect* add_fillOverlay();
        CT_GrayscaleEffect* add_grayscl();
        CT_HSLEffect* add_hsl();
        CT_LuminanceEffect* add_lum();
        CT_TintEffect* add_tint();
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Blip& default_instance() const;
        bool has_embed_attr() const;
        void set_embed_attr(const ST_RelationshipId& _embed_attr );
        const ST_RelationshipId& embed_attr() const;
        bool has_link_attr() const;
        void set_link_attr(const ST_RelationshipId& _link_attr );
        const ST_RelationshipId& link_attr() const;
        bool has_cstate_attr() const;
        void set_cstate_attr(const ST_BlipCompression& _cstate_attr );
        const ST_BlipCompression& cstate_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Blip* default_instance_ ;
        bool m_has_embed_attr ;
        ST_RelationshipId* m_embed_attr ;
        bool m_has_link_attr ;
        ST_RelationshipId* m_link_attr ;
        bool m_has_cstate_attr ;
        ST_BlipCompression* m_cstate_attr ;
        class ChildGroup_1{
        public:
            bool has_alphaBiLevel() const;
            CT_AlphaBiLevelEffect* mutable_alphaBiLevel();
            const CT_AlphaBiLevelEffect& alphaBiLevel() const;
            bool has_alphaCeiling() const;
            CT_AlphaCeilingEffect* mutable_alphaCeiling();
            const CT_AlphaCeilingEffect& alphaCeiling() const;
            bool has_alphaFloor() const;
            CT_AlphaFloorEffect* mutable_alphaFloor();
            const CT_AlphaFloorEffect& alphaFloor() const;
            bool has_alphaInv() const;
            CT_AlphaInverseEffect* mutable_alphaInv();
            const CT_AlphaInverseEffect& alphaInv() const;
            bool has_alphaMod() const;
            CT_AlphaModulateEffect* mutable_alphaMod();
            const CT_AlphaModulateEffect& alphaMod() const;
            bool has_alphaModFix() const;
            CT_AlphaModulateFixedEffect* mutable_alphaModFix();
            const CT_AlphaModulateFixedEffect& alphaModFix() const;
            bool has_alphaRepl() const;
            CT_AlphaReplaceEffect* mutable_alphaRepl();
            const CT_AlphaReplaceEffect& alphaRepl() const;
            bool has_biLevel() const;
            CT_BiLevelEffect* mutable_biLevel();
            const CT_BiLevelEffect& biLevel() const;
            bool has_blur() const;
            CT_BlurEffect* mutable_blur();
            const CT_BlurEffect& blur() const;
            bool has_clrChange() const;
            CT_ColorChangeEffect* mutable_clrChange();
            const CT_ColorChangeEffect& clrChange() const;
            bool has_clrRepl() const;
            CT_ColorReplaceEffect* mutable_clrRepl();
            const CT_ColorReplaceEffect& clrRepl() const;
            bool has_duotone() const;
            CT_DuotoneEffect* mutable_duotone();
            const CT_DuotoneEffect& duotone() const;
            bool has_fillOverlay() const;
            CT_FillOverlayEffect* mutable_fillOverlay();
            const CT_FillOverlayEffect& fillOverlay() const;
            bool has_grayscl() const;
            CT_GrayscaleEffect* mutable_grayscl();
            const CT_GrayscaleEffect& grayscl() const;
            bool has_hsl() const;
            CT_HSLEffect* mutable_hsl();
            const CT_HSLEffect& hsl() const;
            bool has_lum() const;
            CT_LuminanceEffect* mutable_lum();
            const CT_LuminanceEffect& lum() const;
            bool has_tint() const;
            CT_TintEffect* mutable_tint();
            const CT_TintEffect& tint() const;

        private:
            bool m_has_alphaBiLevel ;
            CT_AlphaBiLevelEffect* m_alphaBiLevel ;
            bool m_has_alphaCeiling ;
            CT_AlphaCeilingEffect* m_alphaCeiling ;
            bool m_has_alphaFloor ;
            CT_AlphaFloorEffect* m_alphaFloor ;
            bool m_has_alphaInv ;
            CT_AlphaInverseEffect* m_alphaInv ;
            bool m_has_alphaMod ;
            CT_AlphaModulateEffect* m_alphaMod ;
            bool m_has_alphaModFix ;
            CT_AlphaModulateFixedEffect* m_alphaModFix ;
            bool m_has_alphaRepl ;
            CT_AlphaReplaceEffect* m_alphaRepl ;
            bool m_has_biLevel ;
            CT_BiLevelEffect* m_biLevel ;
            bool m_has_blur ;
            CT_BlurEffect* m_blur ;
            bool m_has_clrChange ;
            CT_ColorChangeEffect* m_clrChange ;
            bool m_has_clrRepl ;
            CT_ColorReplaceEffect* m_clrRepl ;
            bool m_has_duotone ;
            CT_DuotoneEffect* m_duotone ;
            bool m_has_fillOverlay ;
            CT_FillOverlayEffect* m_fillOverlay ;
            bool m_has_grayscl ;
            CT_GrayscaleEffect* m_grayscl ;
            bool m_has_hsl ;
            CT_HSLEffect* m_hsl ;
            bool m_has_lum ;
            CT_LuminanceEffect* m_lum ;
            bool m_has_tint ;
            CT_TintEffect* m_tint ;

        }


    }

    class CT_BlipFillProperties : public XSD::ComplexType{
    public:
        bool has_blip() const;
        CT_Blip* mutable_blip();
        const CT_Blip& blip() const;
        bool has_srcRect() const;
        CT_RelativeRect* mutable_srcRect();
        const CT_RelativeRect& srcRect() const;
        bool has_tile() const;
        CT_TileInfoProperties* mutable_tile();
        const CT_TileInfoProperties& tile() const;
        bool has_stretch() const;
        CT_StretchInfoProperties* mutable_stretch();
        const CT_StretchInfoProperties& stretch() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BlipFillProperties& default_instance() const;
        bool has_dpi_attr() const;
        void set_dpi_attr(const unsignedInt& _dpi_attr );
        const unsignedInt& dpi_attr() const;
        bool has_rotWithShape_attr() const;
        void set_rotWithShape_attr(const boolean& _rotWithShape_attr );
        const boolean& rotWithShape_attr() const;

    private:
        bool m_has_blip ;
        CT_Blip* m_blip ;
        bool m_has_srcRect ;
        CT_RelativeRect* m_srcRect ;
        bool m_has_tile ;
        CT_TileInfoProperties* m_tile ;
        bool m_has_stretch ;
        CT_StretchInfoProperties* m_stretch ;
        static CT_BlipFillProperties* default_instance_ ;
        bool m_has_dpi_attr ;
        unsignedInt m_dpi_attr ;
        bool m_has_rotWithShape_attr ;
        boolean m_rotWithShape_attr ;

    }

    class CT_PatternFillProperties : public XSD::ComplexType{
    public:
        bool has_fgClr() const;
        CT_Color* mutable_fgClr();
        const CT_Color& fgClr() const;
        bool has_bgClr() const;
        CT_Color* mutable_bgClr();
        const CT_Color& bgClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PatternFillProperties& default_instance() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_PresetPatternVal& _prst_attr );
        const ST_PresetPatternVal& prst_attr() const;

    private:
        bool m_has_fgClr ;
        CT_Color* m_fgClr ;
        bool m_has_bgClr ;
        CT_Color* m_bgClr ;
        static CT_PatternFillProperties* default_instance_ ;
        bool m_has_prst_attr ;
        ST_PresetPatternVal* m_prst_attr ;

    }

    class CT_GroupFillProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupFillProperties& default_instance() const;

    private:
        static CT_GroupFillProperties* default_instance_ ;

    }

    class CT_FillProperties : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FillProperties& default_instance() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        static CT_FillProperties* default_instance_ ;

    }

    class CT_FillEffect : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FillEffect& default_instance() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        static CT_FillEffect* default_instance_ ;

    }

    class CT_FillOverlayEffect : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FillOverlayEffect& default_instance() const;
        bool has_blend_attr() const;
        void set_blend_attr(const ST_BlendMode& _blend_attr );
        const ST_BlendMode& blend_attr() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        static CT_FillOverlayEffect* default_instance_ ;
        bool m_has_blend_attr ;
        ST_BlendMode* m_blend_attr ;

    }

    class CT_EffectReference : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectReference& default_instance() const;
        bool has_ref_attr() const;
        void set_ref_attr(const token& _ref_attr );
        const token& ref_attr() const;

    private:
        static CT_EffectReference* default_instance_ ;
        bool m_has_ref_attr ;
        token m_ref_attr ;

    }

    class CT_EffectContainer : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectContainer& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_EffectContainerType& _type_attr );
        const ST_EffectContainerType& type_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const token& _name_attr );
        const token& name_attr() const;

    private:
        static CT_EffectContainer* default_instance_ ;
        bool m_has_type_attr ;
        ST_EffectContainerType* m_type_attr ;
        bool m_has_name_attr ;
        token m_name_attr ;

    }

    class CT_AlphaModulateEffect : public XSD::ComplexType{
    public:
        bool has_cont() const;
        CT_EffectContainer* mutable_cont();
        const CT_EffectContainer& cont() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AlphaModulateEffect& default_instance() const;

    private:
        bool m_has_cont ;
        CT_EffectContainer* m_cont ;
        static CT_AlphaModulateEffect* default_instance_ ;

    }

    class CT_BlendEffect : public XSD::ComplexType{
    public:
        bool has_cont() const;
        CT_EffectContainer* mutable_cont();
        const CT_EffectContainer& cont() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BlendEffect& default_instance() const;
        bool has_blend_attr() const;
        void set_blend_attr(const ST_BlendMode& _blend_attr );
        const ST_BlendMode& blend_attr() const;

    private:
        bool m_has_cont ;
        CT_EffectContainer* m_cont ;
        static CT_BlendEffect* default_instance_ ;
        bool m_has_blend_attr ;
        ST_BlendMode* m_blend_attr ;

    }

    class CT_EffectList : public XSD::ComplexType{
    public:
        bool has_blur() const;
        CT_BlurEffect* mutable_blur();
        const CT_BlurEffect& blur() const;
        bool has_fillOverlay() const;
        CT_FillOverlayEffect* mutable_fillOverlay();
        const CT_FillOverlayEffect& fillOverlay() const;
        bool has_glow() const;
        CT_GlowEffect* mutable_glow();
        const CT_GlowEffect& glow() const;
        bool has_innerShdw() const;
        CT_InnerShadowEffect* mutable_innerShdw();
        const CT_InnerShadowEffect& innerShdw() const;
        bool has_outerShdw() const;
        CT_OuterShadowEffect* mutable_outerShdw();
        const CT_OuterShadowEffect& outerShdw() const;
        bool has_prstShdw() const;
        CT_PresetShadowEffect* mutable_prstShdw();
        const CT_PresetShadowEffect& prstShdw() const;
        bool has_reflection() const;
        CT_ReflectionEffect* mutable_reflection();
        const CT_ReflectionEffect& reflection() const;
        bool has_softEdge() const;
        CT_SoftEdgesEffect* mutable_softEdge();
        const CT_SoftEdgesEffect& softEdge() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectList& default_instance() const;

    private:
        bool m_has_blur ;
        CT_BlurEffect* m_blur ;
        bool m_has_fillOverlay ;
        CT_FillOverlayEffect* m_fillOverlay ;
        bool m_has_glow ;
        CT_GlowEffect* m_glow ;
        bool m_has_innerShdw ;
        CT_InnerShadowEffect* m_innerShdw ;
        bool m_has_outerShdw ;
        CT_OuterShadowEffect* m_outerShdw ;
        bool m_has_prstShdw ;
        CT_PresetShadowEffect* m_prstShdw ;
        bool m_has_reflection ;
        CT_ReflectionEffect* m_reflection ;
        bool m_has_softEdge ;
        CT_SoftEdgesEffect* m_softEdge ;
        static CT_EffectList* default_instance_ ;

    }

    class CT_EffectProperties : public XSD::ComplexType{
    public:
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EffectProperties& default_instance() const;

    private:
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        static CT_EffectProperties* default_instance_ ;

    }

    class CT_GeomGuide : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GeomGuide& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ST_GeomGuideName& _name_attr );
        const ST_GeomGuideName& name_attr() const;
        bool has_fmla_attr() const;
        void set_fmla_attr(const ST_GeomGuideFormula& _fmla_attr );
        const ST_GeomGuideFormula& fmla_attr() const;

    private:
        static CT_GeomGuide* default_instance_ ;
        bool m_has_name_attr ;
        ST_GeomGuideName* m_name_attr ;
        bool m_has_fmla_attr ;
        ST_GeomGuideFormula* m_fmla_attr ;

    }

    class CT_GeomGuideList : public XSD::ComplexType{
    public:
        bool has_gd() const;
        CT_GeomGuide* mutable_gd();
        const CT_GeomGuide& gd() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GeomGuideList& default_instance() const;

    private:
        bool m_has_gd ;
        CT_GeomGuide* m_gd ;
        static CT_GeomGuideList* default_instance_ ;

    }

    class CT_AdjPoint2D : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AdjPoint2D& default_instance() const;
        bool has_x_attr() const;
        void set_x_attr(const ST_AdjCoordinate& _x_attr );
        const ST_AdjCoordinate& x_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ST_AdjCoordinate& _y_attr );
        const ST_AdjCoordinate& y_attr() const;

    private:
        static CT_AdjPoint2D* default_instance_ ;
        bool m_has_x_attr ;
        ST_AdjCoordinate* m_x_attr ;
        bool m_has_y_attr ;
        ST_AdjCoordinate* m_y_attr ;

    }

    class CT_GeomRect : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GeomRect& default_instance() const;
        bool has_l_attr() const;
        void set_l_attr(const ST_AdjCoordinate& _l_attr );
        const ST_AdjCoordinate& l_attr() const;
        bool has_t_attr() const;
        void set_t_attr(const ST_AdjCoordinate& _t_attr );
        const ST_AdjCoordinate& t_attr() const;
        bool has_r_attr() const;
        void set_r_attr(const ST_AdjCoordinate& _r_attr );
        const ST_AdjCoordinate& r_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ST_AdjCoordinate& _b_attr );
        const ST_AdjCoordinate& b_attr() const;

    private:
        static CT_GeomRect* default_instance_ ;
        bool m_has_l_attr ;
        ST_AdjCoordinate* m_l_attr ;
        bool m_has_t_attr ;
        ST_AdjCoordinate* m_t_attr ;
        bool m_has_r_attr ;
        ST_AdjCoordinate* m_r_attr ;
        bool m_has_b_attr ;
        ST_AdjCoordinate* m_b_attr ;

    }

    class CT_XYAdjustHandle : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_AdjPoint2D* mutable_pos();
        const CT_AdjPoint2D& pos() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_XYAdjustHandle& default_instance() const;
        bool has_gdRefX_attr() const;
        void set_gdRefX_attr(const ST_GeomGuideName& _gdRefX_attr );
        const ST_GeomGuideName& gdRefX_attr() const;
        bool has_minX_attr() const;
        void set_minX_attr(const ST_AdjCoordinate& _minX_attr );
        const ST_AdjCoordinate& minX_attr() const;
        bool has_maxX_attr() const;
        void set_maxX_attr(const ST_AdjCoordinate& _maxX_attr );
        const ST_AdjCoordinate& maxX_attr() const;
        bool has_gdRefY_attr() const;
        void set_gdRefY_attr(const ST_GeomGuideName& _gdRefY_attr );
        const ST_GeomGuideName& gdRefY_attr() const;
        bool has_minY_attr() const;
        void set_minY_attr(const ST_AdjCoordinate& _minY_attr );
        const ST_AdjCoordinate& minY_attr() const;
        bool has_maxY_attr() const;
        void set_maxY_attr(const ST_AdjCoordinate& _maxY_attr );
        const ST_AdjCoordinate& maxY_attr() const;

    private:
        bool m_has_pos ;
        CT_AdjPoint2D* m_pos ;
        static CT_XYAdjustHandle* default_instance_ ;
        bool m_has_gdRefX_attr ;
        ST_GeomGuideName* m_gdRefX_attr ;
        bool m_has_minX_attr ;
        ST_AdjCoordinate* m_minX_attr ;
        bool m_has_maxX_attr ;
        ST_AdjCoordinate* m_maxX_attr ;
        bool m_has_gdRefY_attr ;
        ST_GeomGuideName* m_gdRefY_attr ;
        bool m_has_minY_attr ;
        ST_AdjCoordinate* m_minY_attr ;
        bool m_has_maxY_attr ;
        ST_AdjCoordinate* m_maxY_attr ;

    }

    class CT_PolarAdjustHandle : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_AdjPoint2D* mutable_pos();
        const CT_AdjPoint2D& pos() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PolarAdjustHandle& default_instance() const;
        bool has_gdRefR_attr() const;
        void set_gdRefR_attr(const ST_GeomGuideName& _gdRefR_attr );
        const ST_GeomGuideName& gdRefR_attr() const;
        bool has_minR_attr() const;
        void set_minR_attr(const ST_AdjCoordinate& _minR_attr );
        const ST_AdjCoordinate& minR_attr() const;
        bool has_maxR_attr() const;
        void set_maxR_attr(const ST_AdjCoordinate& _maxR_attr );
        const ST_AdjCoordinate& maxR_attr() const;
        bool has_gdRefAng_attr() const;
        void set_gdRefAng_attr(const ST_GeomGuideName& _gdRefAng_attr );
        const ST_GeomGuideName& gdRefAng_attr() const;
        bool has_minAng_attr() const;
        void set_minAng_attr(const ST_AdjAngle& _minAng_attr );
        const ST_AdjAngle& minAng_attr() const;
        bool has_maxAng_attr() const;
        void set_maxAng_attr(const ST_AdjAngle& _maxAng_attr );
        const ST_AdjAngle& maxAng_attr() const;

    private:
        bool m_has_pos ;
        CT_AdjPoint2D* m_pos ;
        static CT_PolarAdjustHandle* default_instance_ ;
        bool m_has_gdRefR_attr ;
        ST_GeomGuideName* m_gdRefR_attr ;
        bool m_has_minR_attr ;
        ST_AdjCoordinate* m_minR_attr ;
        bool m_has_maxR_attr ;
        ST_AdjCoordinate* m_maxR_attr ;
        bool m_has_gdRefAng_attr ;
        ST_GeomGuideName* m_gdRefAng_attr ;
        bool m_has_minAng_attr ;
        ST_AdjAngle* m_minAng_attr ;
        bool m_has_maxAng_attr ;
        ST_AdjAngle* m_maxAng_attr ;

    }

    class CT_ConnectionSite : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_AdjPoint2D* mutable_pos();
        const CT_AdjPoint2D& pos() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ConnectionSite& default_instance() const;
        bool has_ang_attr() const;
        void set_ang_attr(const ST_AdjAngle& _ang_attr );
        const ST_AdjAngle& ang_attr() const;

    private:
        bool m_has_pos ;
        CT_AdjPoint2D* m_pos ;
        static CT_ConnectionSite* default_instance_ ;
        bool m_has_ang_attr ;
        ST_AdjAngle* m_ang_attr ;

    }

    class CT_AdjustHandleList : public XSD::ComplexType{
    public:
        CT_XYAdjustHandle* add_ahXY();
        CT_PolarAdjustHandle* add_ahPolar();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AdjustHandleList& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_AdjustHandleList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_ahXY() const;
            CT_XYAdjustHandle* mutable_ahXY();
            const CT_XYAdjustHandle& ahXY() const;
            bool has_ahPolar() const;
            CT_PolarAdjustHandle* mutable_ahPolar();
            const CT_PolarAdjustHandle& ahPolar() const;

        private:
            bool m_has_ahXY ;
            CT_XYAdjustHandle* m_ahXY ;
            bool m_has_ahPolar ;
            CT_PolarAdjustHandle* m_ahPolar ;

        }


    }

    class CT_ConnectionSiteList : public XSD::ComplexType{
    public:
        bool has_cxn() const;
        CT_ConnectionSite* mutable_cxn();
        const CT_ConnectionSite& cxn() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ConnectionSiteList& default_instance() const;

    private:
        bool m_has_cxn ;
        CT_ConnectionSite* m_cxn ;
        static CT_ConnectionSiteList* default_instance_ ;

    }

    class CT_Connection : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Connection& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_DrawingElementId& _id_attr );
        const ST_DrawingElementId& id_attr() const;
        bool has_idx_attr() const;
        void set_idx_attr(const unsignedInt& _idx_attr );
        const unsignedInt& idx_attr() const;

    private:
        static CT_Connection* default_instance_ ;
        bool m_has_id_attr ;
        ST_DrawingElementId* m_id_attr ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;

    }

    class CT_Path2DMoveTo : public XSD::ComplexType{
    public:
        bool has_pt() const;
        CT_AdjPoint2D* mutable_pt();
        const CT_AdjPoint2D& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DMoveTo& default_instance() const;

    private:
        bool m_has_pt ;
        CT_AdjPoint2D* m_pt ;
        static CT_Path2DMoveTo* default_instance_ ;

    }

    class CT_Path2DLineTo : public XSD::ComplexType{
    public:
        bool has_pt() const;
        CT_AdjPoint2D* mutable_pt();
        const CT_AdjPoint2D& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DLineTo& default_instance() const;

    private:
        bool m_has_pt ;
        CT_AdjPoint2D* m_pt ;
        static CT_Path2DLineTo* default_instance_ ;

    }

    class CT_Path2DArcTo : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DArcTo& default_instance() const;
        bool has_wR_attr() const;
        void set_wR_attr(const ST_AdjCoordinate& _wR_attr );
        const ST_AdjCoordinate& wR_attr() const;
        bool has_hR_attr() const;
        void set_hR_attr(const ST_AdjCoordinate& _hR_attr );
        const ST_AdjCoordinate& hR_attr() const;
        bool has_stAng_attr() const;
        void set_stAng_attr(const ST_AdjAngle& _stAng_attr );
        const ST_AdjAngle& stAng_attr() const;
        bool has_swAng_attr() const;
        void set_swAng_attr(const ST_AdjAngle& _swAng_attr );
        const ST_AdjAngle& swAng_attr() const;

    private:
        static CT_Path2DArcTo* default_instance_ ;
        bool m_has_wR_attr ;
        ST_AdjCoordinate* m_wR_attr ;
        bool m_has_hR_attr ;
        ST_AdjCoordinate* m_hR_attr ;
        bool m_has_stAng_attr ;
        ST_AdjAngle* m_stAng_attr ;
        bool m_has_swAng_attr ;
        ST_AdjAngle* m_swAng_attr ;

    }

    class CT_Path2DQuadBezierTo : public XSD::ComplexType{
    public:
        bool has_pt() const;
        CT_AdjPoint2D* mutable_pt();
        const CT_AdjPoint2D& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DQuadBezierTo& default_instance() const;

    private:
        bool m_has_pt ;
        CT_AdjPoint2D* m_pt ;
        static CT_Path2DQuadBezierTo* default_instance_ ;

    }

    class CT_Path2DCubicBezierTo : public XSD::ComplexType{
    public:
        bool has_pt() const;
        CT_AdjPoint2D* mutable_pt();
        const CT_AdjPoint2D& pt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DCubicBezierTo& default_instance() const;

    private:
        bool m_has_pt ;
        CT_AdjPoint2D* m_pt ;
        static CT_Path2DCubicBezierTo* default_instance_ ;

    }

    class CT_Path2DClose : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DClose& default_instance() const;

    private:
        static CT_Path2DClose* default_instance_ ;

    }

    class CT_Path2D : public XSD::ComplexType{
    public:
        CT_Path2DClose* add_close();
        CT_Path2DMoveTo* add_moveTo();
        CT_Path2DLineTo* add_lnTo();
        CT_Path2DArcTo* add_arcTo();
        CT_Path2DQuadBezierTo* add_quadBezTo();
        CT_Path2DCubicBezierTo* add_cubicBezTo();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2D& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_PositiveCoordinate& _w_attr );
        const ST_PositiveCoordinate& w_attr() const;
        bool has_h_attr() const;
        void set_h_attr(const ST_PositiveCoordinate& _h_attr );
        const ST_PositiveCoordinate& h_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ST_PathFillMode& _fill_attr );
        const ST_PathFillMode& fill_attr() const;
        bool has_stroke_attr() const;
        void set_stroke_attr(const boolean& _stroke_attr );
        const boolean& stroke_attr() const;
        bool has_extrusionOk_attr() const;
        void set_extrusionOk_attr(const boolean& _extrusionOk_attr );
        const boolean& extrusionOk_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Path2D* default_instance_ ;
        bool m_has_w_attr ;
        ST_PositiveCoordinate* m_w_attr ;
        bool m_has_h_attr ;
        ST_PositiveCoordinate* m_h_attr ;
        bool m_has_fill_attr ;
        ST_PathFillMode* m_fill_attr ;
        bool m_has_stroke_attr ;
        boolean m_stroke_attr ;
        bool m_has_extrusionOk_attr ;
        boolean m_extrusionOk_attr ;
        class ChildGroup_1{
        public:
            bool has_close() const;
            CT_Path2DClose* mutable_close();
            const CT_Path2DClose& close() const;
            bool has_moveTo() const;
            CT_Path2DMoveTo* mutable_moveTo();
            const CT_Path2DMoveTo& moveTo() const;
            bool has_lnTo() const;
            CT_Path2DLineTo* mutable_lnTo();
            const CT_Path2DLineTo& lnTo() const;
            bool has_arcTo() const;
            CT_Path2DArcTo* mutable_arcTo();
            const CT_Path2DArcTo& arcTo() const;
            bool has_quadBezTo() const;
            CT_Path2DQuadBezierTo* mutable_quadBezTo();
            const CT_Path2DQuadBezierTo& quadBezTo() const;
            bool has_cubicBezTo() const;
            CT_Path2DCubicBezierTo* mutable_cubicBezTo();
            const CT_Path2DCubicBezierTo& cubicBezTo() const;

        private:
            bool m_has_close ;
            CT_Path2DClose* m_close ;
            bool m_has_moveTo ;
            CT_Path2DMoveTo* m_moveTo ;
            bool m_has_lnTo ;
            CT_Path2DLineTo* m_lnTo ;
            bool m_has_arcTo ;
            CT_Path2DArcTo* m_arcTo ;
            bool m_has_quadBezTo ;
            CT_Path2DQuadBezierTo* m_quadBezTo ;
            bool m_has_cubicBezTo ;
            CT_Path2DCubicBezierTo* m_cubicBezTo ;

        }


    }

    class CT_Path2DList : public XSD::ComplexType{
    public:
        bool has_path() const;
        CT_Path2D* mutable_path();
        const CT_Path2D& path() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Path2DList& default_instance() const;

    private:
        bool m_has_path ;
        CT_Path2D* m_path ;
        static CT_Path2DList* default_instance_ ;

    }

    class CT_PresetGeometry2D : public XSD::ComplexType{
    public:
        bool has_avLst() const;
        CT_GeomGuideList* mutable_avLst();
        const CT_GeomGuideList& avLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresetGeometry2D& default_instance() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_ShapeType& _prst_attr );
        const ST_ShapeType& prst_attr() const;

    private:
        bool m_has_avLst ;
        CT_GeomGuideList* m_avLst ;
        static CT_PresetGeometry2D* default_instance_ ;
        bool m_has_prst_attr ;
        ST_ShapeType* m_prst_attr ;

    }

    class CT_PresetTextShape : public XSD::ComplexType{
    public:
        bool has_avLst() const;
        CT_GeomGuideList* mutable_avLst();
        const CT_GeomGuideList& avLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresetTextShape& default_instance() const;
        bool has_prst_attr() const;
        void set_prst_attr(const ST_TextShapeType& _prst_attr );
        const ST_TextShapeType& prst_attr() const;

    private:
        bool m_has_avLst ;
        CT_GeomGuideList* m_avLst ;
        static CT_PresetTextShape* default_instance_ ;
        bool m_has_prst_attr ;
        ST_TextShapeType* m_prst_attr ;

    }

    class CT_CustomGeometry2D : public XSD::ComplexType{
    public:
        bool has_avLst() const;
        CT_GeomGuideList* mutable_avLst();
        const CT_GeomGuideList& avLst() const;
        bool has_gdLst() const;
        CT_GeomGuideList* mutable_gdLst();
        const CT_GeomGuideList& gdLst() const;
        bool has_ahLst() const;
        CT_AdjustHandleList* mutable_ahLst();
        const CT_AdjustHandleList& ahLst() const;
        bool has_cxnLst() const;
        CT_ConnectionSiteList* mutable_cxnLst();
        const CT_ConnectionSiteList& cxnLst() const;
        bool has_rect() const;
        CT_GeomRect* mutable_rect();
        const CT_GeomRect& rect() const;
        bool has_pathLst() const;
        CT_Path2DList* mutable_pathLst();
        const CT_Path2DList& pathLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomGeometry2D& default_instance() const;

    private:
        bool m_has_avLst ;
        CT_GeomGuideList* m_avLst ;
        bool m_has_gdLst ;
        CT_GeomGuideList* m_gdLst ;
        bool m_has_ahLst ;
        CT_AdjustHandleList* m_ahLst ;
        bool m_has_cxnLst ;
        CT_ConnectionSiteList* m_cxnLst ;
        bool m_has_rect ;
        CT_GeomRect* m_rect ;
        bool m_has_pathLst ;
        CT_Path2DList* m_pathLst ;
        static CT_CustomGeometry2D* default_instance_ ;

    }

    class CT_LineEndProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineEndProperties& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_LineEndType& _type_attr );
        const ST_LineEndType& type_attr() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_LineEndWidth& _w_attr );
        const ST_LineEndWidth& w_attr() const;
        bool has_len_attr() const;
        void set_len_attr(const ST_LineEndLength& _len_attr );
        const ST_LineEndLength& len_attr() const;

    private:
        static CT_LineEndProperties* default_instance_ ;
        bool m_has_type_attr ;
        ST_LineEndType* m_type_attr ;
        bool m_has_w_attr ;
        ST_LineEndWidth* m_w_attr ;
        bool m_has_len_attr ;
        ST_LineEndLength* m_len_attr ;

    }

    class CT_LineJoinBevel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineJoinBevel& default_instance() const;

    private:
        static CT_LineJoinBevel* default_instance_ ;

    }

    class CT_LineJoinRound : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineJoinRound& default_instance() const;

    private:
        static CT_LineJoinRound* default_instance_ ;

    }

    class CT_LineJoinMiterProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineJoinMiterProperties& default_instance() const;
        bool has_lim_attr() const;
        void set_lim_attr(const ST_PositivePercentage& _lim_attr );
        const ST_PositivePercentage& lim_attr() const;

    private:
        static CT_LineJoinMiterProperties* default_instance_ ;
        bool m_has_lim_attr ;
        ST_PositivePercentage* m_lim_attr ;

    }

    class CT_PresetLineDashProperties : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresetLineDashProperties& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_PresetLineDashVal& _val_attr );
        const ST_PresetLineDashVal& val_attr() const;

    private:
        static CT_PresetLineDashProperties* default_instance_ ;
        bool m_has_val_attr ;
        ST_PresetLineDashVal* m_val_attr ;

    }

    class CT_DashStop : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DashStop& default_instance() const;
        bool has_d_attr() const;
        void set_d_attr(const ST_PositivePercentage& _d_attr );
        const ST_PositivePercentage& d_attr() const;
        bool has_sp_attr() const;
        void set_sp_attr(const ST_PositivePercentage& _sp_attr );
        const ST_PositivePercentage& sp_attr() const;

    private:
        static CT_DashStop* default_instance_ ;
        bool m_has_d_attr ;
        ST_PositivePercentage* m_d_attr ;
        bool m_has_sp_attr ;
        ST_PositivePercentage* m_sp_attr ;

    }

    class CT_DashStopList : public XSD::ComplexType{
    public:
        bool has_ds() const;
        CT_DashStop* mutable_ds();
        const CT_DashStop& ds() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DashStopList& default_instance() const;

    private:
        bool m_has_ds ;
        CT_DashStop* m_ds ;
        static CT_DashStopList* default_instance_ ;

    }

    class CT_LineProperties : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_prstDash() const;
        CT_PresetLineDashProperties* mutable_prstDash();
        const CT_PresetLineDashProperties& prstDash() const;
        bool has_custDash() const;
        CT_DashStopList* mutable_custDash();
        const CT_DashStopList& custDash() const;
        bool has_round() const;
        CT_LineJoinRound* mutable_round();
        const CT_LineJoinRound& round() const;
        bool has_bevel() const;
        CT_LineJoinBevel* mutable_bevel();
        const CT_LineJoinBevel& bevel() const;
        bool has_miter() const;
        CT_LineJoinMiterProperties* mutable_miter();
        const CT_LineJoinMiterProperties& miter() const;
        bool has_headEnd() const;
        CT_LineEndProperties* mutable_headEnd();
        const CT_LineEndProperties& headEnd() const;
        bool has_tailEnd() const;
        CT_LineEndProperties* mutable_tailEnd();
        const CT_LineEndProperties& tailEnd() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LineProperties& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_LineWidth& _w_attr );
        const ST_LineWidth& w_attr() const;
        bool has_cap_attr() const;
        void set_cap_attr(const ST_LineCap& _cap_attr );
        const ST_LineCap& cap_attr() const;
        bool has_cmpd_attr() const;
        void set_cmpd_attr(const ST_CompoundLine& _cmpd_attr );
        const ST_CompoundLine& cmpd_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_PenAlignment& _algn_attr );
        const ST_PenAlignment& algn_attr() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_prstDash ;
        CT_PresetLineDashProperties* m_prstDash ;
        bool m_has_custDash ;
        CT_DashStopList* m_custDash ;
        bool m_has_round ;
        CT_LineJoinRound* m_round ;
        bool m_has_bevel ;
        CT_LineJoinBevel* m_bevel ;
        bool m_has_miter ;
        CT_LineJoinMiterProperties* m_miter ;
        bool m_has_headEnd ;
        CT_LineEndProperties* m_headEnd ;
        bool m_has_tailEnd ;
        CT_LineEndProperties* m_tailEnd ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_LineProperties* default_instance_ ;
        bool m_has_w_attr ;
        ST_LineWidth* m_w_attr ;
        bool m_has_cap_attr ;
        ST_LineCap* m_cap_attr ;
        bool m_has_cmpd_attr ;
        ST_CompoundLine* m_cmpd_attr ;
        bool m_has_algn_attr ;
        ST_PenAlignment* m_algn_attr ;

    }

    class CT_ShapeProperties : public XSD::ComplexType{
    public:
        bool has_xfrm() const;
        CT_Transform2D* mutable_xfrm();
        const CT_Transform2D& xfrm() const;
        bool has_custGeom() const;
        CT_CustomGeometry2D* mutable_custGeom();
        const CT_CustomGeometry2D& custGeom() const;
        bool has_prstGeom() const;
        CT_PresetGeometry2D* mutable_prstGeom();
        const CT_PresetGeometry2D& prstGeom() const;
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_ln() const;
        CT_LineProperties* mutable_ln();
        const CT_LineProperties& ln() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        bool has_scene3d() const;
        CT_Scene3D* mutable_scene3d();
        const CT_Scene3D& scene3d() const;
        bool has_sp3d() const;
        CT_Shape3D* mutable_sp3d();
        const CT_Shape3D& sp3d() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeProperties& default_instance() const;
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ST_BlackWhiteMode& _bwMode_attr );
        const ST_BlackWhiteMode& bwMode_attr() const;

    private:
        bool m_has_xfrm ;
        CT_Transform2D* m_xfrm ;
        bool m_has_custGeom ;
        CT_CustomGeometry2D* m_custGeom ;
        bool m_has_prstGeom ;
        CT_PresetGeometry2D* m_prstGeom ;
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_ln ;
        CT_LineProperties* m_ln ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        bool m_has_scene3d ;
        CT_Scene3D* m_scene3d ;
        bool m_has_sp3d ;
        CT_Shape3D* m_sp3d ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ShapeProperties* default_instance_ ;
        bool m_has_bwMode_attr ;
        ST_BlackWhiteMode* m_bwMode_attr ;

    }

    class CT_GroupShapeProperties : public XSD::ComplexType{
    public:
        bool has_xfrm() const;
        CT_GroupTransform2D* mutable_xfrm();
        const CT_GroupTransform2D& xfrm() const;
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        bool has_scene3d() const;
        CT_Scene3D* mutable_scene3d();
        const CT_Scene3D& scene3d() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupShapeProperties& default_instance() const;
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ST_BlackWhiteMode& _bwMode_attr );
        const ST_BlackWhiteMode& bwMode_attr() const;

    private:
        bool m_has_xfrm ;
        CT_GroupTransform2D* m_xfrm ;
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        bool m_has_scene3d ;
        CT_Scene3D* m_scene3d ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_GroupShapeProperties* default_instance_ ;
        bool m_has_bwMode_attr ;
        ST_BlackWhiteMode* m_bwMode_attr ;

    }

    class CT_StyleMatrixReference : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StyleMatrixReference& default_instance() const;
        bool has_idx_attr() const;
        void set_idx_attr(const ST_StyleMatrixColumnIndex& _idx_attr );
        const ST_StyleMatrixColumnIndex& idx_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_StyleMatrixReference* default_instance_ ;
        bool m_has_idx_attr ;
        ST_StyleMatrixColumnIndex* m_idx_attr ;

    }

    class CT_FontReference : public XSD::ComplexType{
    public:
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FontReference& default_instance() const;
        bool has_idx_attr() const;
        void set_idx_attr(const ST_FontCollectionIndex& _idx_attr );
        const ST_FontCollectionIndex& idx_attr() const;

    private:
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        static CT_FontReference* default_instance_ ;
        bool m_has_idx_attr ;
        ST_FontCollectionIndex* m_idx_attr ;

    }

    class CT_ShapeStyle : public XSD::ComplexType{
    public:
        bool has_lnRef() const;
        CT_StyleMatrixReference* mutable_lnRef();
        const CT_StyleMatrixReference& lnRef() const;
        bool has_fillRef() const;
        CT_StyleMatrixReference* mutable_fillRef();
        const CT_StyleMatrixReference& fillRef() const;
        bool has_effectRef() const;
        CT_StyleMatrixReference* mutable_effectRef();
        const CT_StyleMatrixReference& effectRef() const;
        bool has_fontRef() const;
        CT_FontReference* mutable_fontRef();
        const CT_FontReference& fontRef() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeStyle& default_instance() const;

    private:
        bool m_has_lnRef ;
        CT_StyleMatrixReference* m_lnRef ;
        bool m_has_fillRef ;
        CT_StyleMatrixReference* m_fillRef ;
        bool m_has_effectRef ;
        CT_StyleMatrixReference* m_effectRef ;
        bool m_has_fontRef ;
        CT_FontReference* m_fontRef ;
        static CT_ShapeStyle* default_instance_ ;

    }

    class CT_DefaultShapeDefinition : public XSD::ComplexType{
    public:
        bool has_spPr() const;
        CT_ShapeProperties* mutable_spPr();
        const CT_ShapeProperties& spPr() const;
        bool has_bodyPr() const;
        CT_TextBodyProperties* mutable_bodyPr();
        const CT_TextBodyProperties& bodyPr() const;
        bool has_lstStyle() const;
        CT_TextListStyle* mutable_lstStyle();
        const CT_TextListStyle& lstStyle() const;
        bool has_style() const;
        CT_ShapeStyle* mutable_style();
        const CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DefaultShapeDefinition& default_instance() const;

    private:
        bool m_has_spPr ;
        CT_ShapeProperties* m_spPr ;
        bool m_has_bodyPr ;
        CT_TextBodyProperties* m_bodyPr ;
        bool m_has_lstStyle ;
        CT_TextListStyle* m_lstStyle ;
        bool m_has_style ;
        CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_DefaultShapeDefinition* default_instance_ ;

    }

    class CT_ObjectStyleDefaults : public XSD::ComplexType{
    public:
        bool has_spDef() const;
        CT_DefaultShapeDefinition* mutable_spDef();
        const CT_DefaultShapeDefinition& spDef() const;
        bool has_lnDef() const;
        CT_DefaultShapeDefinition* mutable_lnDef();
        const CT_DefaultShapeDefinition& lnDef() const;
        bool has_txDef() const;
        CT_DefaultShapeDefinition* mutable_txDef();
        const CT_DefaultShapeDefinition& txDef() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ObjectStyleDefaults& default_instance() const;

    private:
        bool m_has_spDef ;
        CT_DefaultShapeDefinition* m_spDef ;
        bool m_has_lnDef ;
        CT_DefaultShapeDefinition* m_lnDef ;
        bool m_has_txDef ;
        CT_DefaultShapeDefinition* m_txDef ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ObjectStyleDefaults* default_instance_ ;

    }

    class CT_EmptyElement : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EmptyElement& default_instance() const;

    private:
        static CT_EmptyElement* default_instance_ ;

    }

    class CT_ColorMapping : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorMapping& default_instance() const;
        bool has_bg1_attr() const;
        void set_bg1_attr(const ST_ColorSchemeIndex& _bg1_attr );
        const ST_ColorSchemeIndex& bg1_attr() const;
        bool has_tx1_attr() const;
        void set_tx1_attr(const ST_ColorSchemeIndex& _tx1_attr );
        const ST_ColorSchemeIndex& tx1_attr() const;
        bool has_bg2_attr() const;
        void set_bg2_attr(const ST_ColorSchemeIndex& _bg2_attr );
        const ST_ColorSchemeIndex& bg2_attr() const;
        bool has_tx2_attr() const;
        void set_tx2_attr(const ST_ColorSchemeIndex& _tx2_attr );
        const ST_ColorSchemeIndex& tx2_attr() const;
        bool has_accent1_attr() const;
        void set_accent1_attr(const ST_ColorSchemeIndex& _accent1_attr );
        const ST_ColorSchemeIndex& accent1_attr() const;
        bool has_accent2_attr() const;
        void set_accent2_attr(const ST_ColorSchemeIndex& _accent2_attr );
        const ST_ColorSchemeIndex& accent2_attr() const;
        bool has_accent3_attr() const;
        void set_accent3_attr(const ST_ColorSchemeIndex& _accent3_attr );
        const ST_ColorSchemeIndex& accent3_attr() const;
        bool has_accent4_attr() const;
        void set_accent4_attr(const ST_ColorSchemeIndex& _accent4_attr );
        const ST_ColorSchemeIndex& accent4_attr() const;
        bool has_accent5_attr() const;
        void set_accent5_attr(const ST_ColorSchemeIndex& _accent5_attr );
        const ST_ColorSchemeIndex& accent5_attr() const;
        bool has_accent6_attr() const;
        void set_accent6_attr(const ST_ColorSchemeIndex& _accent6_attr );
        const ST_ColorSchemeIndex& accent6_attr() const;
        bool has_hlink_attr() const;
        void set_hlink_attr(const ST_ColorSchemeIndex& _hlink_attr );
        const ST_ColorSchemeIndex& hlink_attr() const;
        bool has_folHlink_attr() const;
        void set_folHlink_attr(const ST_ColorSchemeIndex& _folHlink_attr );
        const ST_ColorSchemeIndex& folHlink_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_ColorMapping* default_instance_ ;
        bool m_has_bg1_attr ;
        ST_ColorSchemeIndex* m_bg1_attr ;
        bool m_has_tx1_attr ;
        ST_ColorSchemeIndex* m_tx1_attr ;
        bool m_has_bg2_attr ;
        ST_ColorSchemeIndex* m_bg2_attr ;
        bool m_has_tx2_attr ;
        ST_ColorSchemeIndex* m_tx2_attr ;
        bool m_has_accent1_attr ;
        ST_ColorSchemeIndex* m_accent1_attr ;
        bool m_has_accent2_attr ;
        ST_ColorSchemeIndex* m_accent2_attr ;
        bool m_has_accent3_attr ;
        ST_ColorSchemeIndex* m_accent3_attr ;
        bool m_has_accent4_attr ;
        ST_ColorSchemeIndex* m_accent4_attr ;
        bool m_has_accent5_attr ;
        ST_ColorSchemeIndex* m_accent5_attr ;
        bool m_has_accent6_attr ;
        ST_ColorSchemeIndex* m_accent6_attr ;
        bool m_has_hlink_attr ;
        ST_ColorSchemeIndex* m_hlink_attr ;
        bool m_has_folHlink_attr ;
        ST_ColorSchemeIndex* m_folHlink_attr ;

    }

    class CT_ColorMappingOverride : public XSD::ComplexType{
    public:
        bool has_masterClrMapping() const;
        CT_EmptyElement* mutable_masterClrMapping();
        const CT_EmptyElement& masterClrMapping() const;
        bool has_overrideClrMapping() const;
        CT_ColorMapping* mutable_overrideClrMapping();
        const CT_ColorMapping& overrideClrMapping() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorMappingOverride& default_instance() const;

    private:
        bool m_has_masterClrMapping ;
        CT_EmptyElement* m_masterClrMapping ;
        bool m_has_overrideClrMapping ;
        CT_ColorMapping* m_overrideClrMapping ;
        static CT_ColorMappingOverride* default_instance_ ;

    }

    class CT_ColorSchemeAndMapping : public XSD::ComplexType{
    public:
        bool has_clrScheme() const;
        CT_ColorScheme* mutable_clrScheme();
        const CT_ColorScheme& clrScheme() const;
        bool has_clrMap() const;
        CT_ColorMapping* mutable_clrMap();
        const CT_ColorMapping& clrMap() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorSchemeAndMapping& default_instance() const;

    private:
        bool m_has_clrScheme ;
        CT_ColorScheme* m_clrScheme ;
        bool m_has_clrMap ;
        CT_ColorMapping* m_clrMap ;
        static CT_ColorSchemeAndMapping* default_instance_ ;

    }

    class CT_ColorSchemeList : public XSD::ComplexType{
    public:
        bool has_extraClrScheme() const;
        CT_ColorSchemeAndMapping* mutable_extraClrScheme();
        const CT_ColorSchemeAndMapping& extraClrScheme() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ColorSchemeList& default_instance() const;

    private:
        bool m_has_extraClrScheme ;
        CT_ColorSchemeAndMapping* m_extraClrScheme ;
        static CT_ColorSchemeList* default_instance_ ;

    }

    class CT_OfficeStyleSheet : public XSD::ComplexType{
    public:
        bool has_themeElements() const;
        CT_BaseStyles* mutable_themeElements();
        const CT_BaseStyles& themeElements() const;
        bool has_objectDefaults() const;
        CT_ObjectStyleDefaults* mutable_objectDefaults();
        const CT_ObjectStyleDefaults& objectDefaults() const;
        bool has_extraClrSchemeLst() const;
        CT_ColorSchemeList* mutable_extraClrSchemeLst();
        const CT_ColorSchemeList& extraClrSchemeLst() const;
        bool has_custClrLst() const;
        CT_CustomColorList* mutable_custClrLst();
        const CT_CustomColorList& custClrLst() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OfficeStyleSheet& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_themeElements ;
        CT_BaseStyles* m_themeElements ;
        bool m_has_objectDefaults ;
        CT_ObjectStyleDefaults* m_objectDefaults ;
        bool m_has_extraClrSchemeLst ;
        CT_ColorSchemeList* m_extraClrSchemeLst ;
        bool m_has_custClrLst ;
        CT_CustomColorList* m_custClrLst ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_OfficeStyleSheet* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_BaseStylesOverride : public XSD::ComplexType{
    public:
        bool has_clrScheme() const;
        CT_ColorScheme* mutable_clrScheme();
        const CT_ColorScheme& clrScheme() const;
        bool has_fontScheme() const;
        CT_FontScheme* mutable_fontScheme();
        const CT_FontScheme& fontScheme() const;
        bool has_fmtScheme() const;
        CT_StyleMatrix* mutable_fmtScheme();
        const CT_StyleMatrix& fmtScheme() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BaseStylesOverride& default_instance() const;

    private:
        bool m_has_clrScheme ;
        CT_ColorScheme* m_clrScheme ;
        bool m_has_fontScheme ;
        CT_FontScheme* m_fontScheme ;
        bool m_has_fmtScheme ;
        CT_StyleMatrix* m_fmtScheme ;
        static CT_BaseStylesOverride* default_instance_ ;

    }

    class CT_ClipboardStyleSheet : public XSD::ComplexType{
    public:
        bool has_themeElements() const;
        CT_BaseStyles* mutable_themeElements();
        const CT_BaseStyles& themeElements() const;
        bool has_clrMap() const;
        CT_ColorMapping* mutable_clrMap();
        const CT_ColorMapping& clrMap() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ClipboardStyleSheet& default_instance() const;

    private:
        bool m_has_themeElements ;
        CT_BaseStyles* m_themeElements ;
        bool m_has_clrMap ;
        CT_ColorMapping* m_clrMap ;
        static CT_ClipboardStyleSheet* default_instance_ ;

    }

    class CT_TableCellProperties : public XSD::ComplexType{
    public:
        bool has_lnL() const;
        CT_LineProperties* mutable_lnL();
        const CT_LineProperties& lnL() const;
        bool has_lnR() const;
        CT_LineProperties* mutable_lnR();
        const CT_LineProperties& lnR() const;
        bool has_lnT() const;
        CT_LineProperties* mutable_lnT();
        const CT_LineProperties& lnT() const;
        bool has_lnB() const;
        CT_LineProperties* mutable_lnB();
        const CT_LineProperties& lnB() const;
        bool has_lnTlToBr() const;
        CT_LineProperties* mutable_lnTlToBr();
        const CT_LineProperties& lnTlToBr() const;
        bool has_lnBlToTr() const;
        CT_LineProperties* mutable_lnBlToTr();
        const CT_LineProperties& lnBlToTr() const;
        bool has_cell3D() const;
        CT_Cell3D* mutable_cell3D();
        const CT_Cell3D& cell3D() const;
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_headers() const;
        CT_Headers* mutable_headers();
        const CT_Headers& headers() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableCellProperties& default_instance() const;
        bool has_marL_attr() const;
        void set_marL_attr(const ST_Coordinate32& _marL_attr );
        const ST_Coordinate32& marL_attr() const;
        bool has_marR_attr() const;
        void set_marR_attr(const ST_Coordinate32& _marR_attr );
        const ST_Coordinate32& marR_attr() const;
        bool has_marT_attr() const;
        void set_marT_attr(const ST_Coordinate32& _marT_attr );
        const ST_Coordinate32& marT_attr() const;
        bool has_marB_attr() const;
        void set_marB_attr(const ST_Coordinate32& _marB_attr );
        const ST_Coordinate32& marB_attr() const;
        bool has_vert_attr() const;
        void set_vert_attr(const ST_TextVerticalType& _vert_attr );
        const ST_TextVerticalType& vert_attr() const;
        bool has_anchor_attr() const;
        void set_anchor_attr(const ST_TextAnchoringType& _anchor_attr );
        const ST_TextAnchoringType& anchor_attr() const;
        bool has_anchorCtr_attr() const;
        void set_anchorCtr_attr(const boolean& _anchorCtr_attr );
        const boolean& anchorCtr_attr() const;
        bool has_horzOverflow_attr() const;
        void set_horzOverflow_attr(const ST_TextHorzOverflowType& _horzOverflow_attr );
        const ST_TextHorzOverflowType& horzOverflow_attr() const;

    private:
        bool m_has_lnL ;
        CT_LineProperties* m_lnL ;
        bool m_has_lnR ;
        CT_LineProperties* m_lnR ;
        bool m_has_lnT ;
        CT_LineProperties* m_lnT ;
        bool m_has_lnB ;
        CT_LineProperties* m_lnB ;
        bool m_has_lnTlToBr ;
        CT_LineProperties* m_lnTlToBr ;
        bool m_has_lnBlToTr ;
        CT_LineProperties* m_lnBlToTr ;
        bool m_has_cell3D ;
        CT_Cell3D* m_cell3D ;
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_headers ;
        CT_Headers* m_headers ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableCellProperties* default_instance_ ;
        bool m_has_marL_attr ;
        ST_Coordinate32* m_marL_attr ;
        bool m_has_marR_attr ;
        ST_Coordinate32* m_marR_attr ;
        bool m_has_marT_attr ;
        ST_Coordinate32* m_marT_attr ;
        bool m_has_marB_attr ;
        ST_Coordinate32* m_marB_attr ;
        bool m_has_vert_attr ;
        ST_TextVerticalType* m_vert_attr ;
        bool m_has_anchor_attr ;
        ST_TextAnchoringType* m_anchor_attr ;
        bool m_has_anchorCtr_attr ;
        boolean m_anchorCtr_attr ;
        bool m_has_horzOverflow_attr ;
        ST_TextHorzOverflowType* m_horzOverflow_attr ;

    }

    class CT_Headers : public XSD::ComplexType{
    public:
        string* add_header();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Headers& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Headers* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_header() const;
            void set_header(const string& _header );
            const string& header() const;

        private:
            bool m_has_header ;
            string m_header ;

        }


    }

    class CT_TableCol : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableCol& default_instance() const;
        bool has_w_attr() const;
        void set_w_attr(const ST_Coordinate& _w_attr );
        const ST_Coordinate& w_attr() const;

    private:
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableCol* default_instance_ ;
        bool m_has_w_attr ;
        ST_Coordinate* m_w_attr ;

    }

    class CT_TableGrid : public XSD::ComplexType{
    public:
        bool has_gridCol() const;
        CT_TableCol* mutable_gridCol();
        const CT_TableCol& gridCol() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableGrid& default_instance() const;

    private:
        bool m_has_gridCol ;
        CT_TableCol* m_gridCol ;
        static CT_TableGrid* default_instance_ ;

    }

    class CT_TableCell : public XSD::ComplexType{
    public:
        bool has_txBody() const;
        CT_TextBody* mutable_txBody();
        const CT_TextBody& txBody() const;
        bool has_tcPr() const;
        CT_TableCellProperties* mutable_tcPr();
        const CT_TableCellProperties& tcPr() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableCell& default_instance() const;
        bool has_rowSpan_attr() const;
        void set_rowSpan_attr(const int& _rowSpan_attr );
        const int& rowSpan_attr() const;
        bool has_gridSpan_attr() const;
        void set_gridSpan_attr(const int& _gridSpan_attr );
        const int& gridSpan_attr() const;
        bool has_hMerge_attr() const;
        void set_hMerge_attr(const boolean& _hMerge_attr );
        const boolean& hMerge_attr() const;
        bool has_vMerge_attr() const;
        void set_vMerge_attr(const boolean& _vMerge_attr );
        const boolean& vMerge_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;

    private:
        bool m_has_txBody ;
        CT_TextBody* m_txBody ;
        bool m_has_tcPr ;
        CT_TableCellProperties* m_tcPr ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableCell* default_instance_ ;
        bool m_has_rowSpan_attr ;
        int m_rowSpan_attr ;
        bool m_has_gridSpan_attr ;
        int m_gridSpan_attr ;
        bool m_has_hMerge_attr ;
        boolean m_hMerge_attr ;
        bool m_has_vMerge_attr ;
        boolean m_vMerge_attr ;
        bool m_has_id_attr ;
        string m_id_attr ;

    }

    class CT_TableRow : public XSD::ComplexType{
    public:
        bool has_tc() const;
        CT_TableCell* mutable_tc();
        const CT_TableCell& tc() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableRow& default_instance() const;
        bool has_h_attr() const;
        void set_h_attr(const ST_Coordinate& _h_attr );
        const ST_Coordinate& h_attr() const;

    private:
        bool m_has_tc ;
        CT_TableCell* m_tc ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableRow* default_instance_ ;
        bool m_has_h_attr ;
        ST_Coordinate* m_h_attr ;

    }

    class CT_TableProperties : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        bool has_tableStyle() const;
        CT_TableStyle* mutable_tableStyle();
        const CT_TableStyle& tableStyle() const;
        bool has_tableStyleId() const;
        ns_s::ST_Guid* mutable_tableStyleId();
        const ns_s::ST_Guid& tableStyleId() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableProperties& default_instance() const;
        bool has_rtl_attr() const;
        void set_rtl_attr(const boolean& _rtl_attr );
        const boolean& rtl_attr() const;
        bool has_firstRow_attr() const;
        void set_firstRow_attr(const boolean& _firstRow_attr );
        const boolean& firstRow_attr() const;
        bool has_firstCol_attr() const;
        void set_firstCol_attr(const boolean& _firstCol_attr );
        const boolean& firstCol_attr() const;
        bool has_lastRow_attr() const;
        void set_lastRow_attr(const boolean& _lastRow_attr );
        const boolean& lastRow_attr() const;
        bool has_lastCol_attr() const;
        void set_lastCol_attr(const boolean& _lastCol_attr );
        const boolean& lastCol_attr() const;
        bool has_bandRow_attr() const;
        void set_bandRow_attr(const boolean& _bandRow_attr );
        const boolean& bandRow_attr() const;
        bool has_bandCol_attr() const;
        void set_bandCol_attr(const boolean& _bandCol_attr );
        const boolean& bandCol_attr() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        bool m_has_tableStyle ;
        CT_TableStyle* m_tableStyle ;
        bool m_has_tableStyleId ;
        ns_s::ST_Guid* m_tableStyleId ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableProperties* default_instance_ ;
        bool m_has_rtl_attr ;
        boolean m_rtl_attr ;
        bool m_has_firstRow_attr ;
        boolean m_firstRow_attr ;
        bool m_has_firstCol_attr ;
        boolean m_firstCol_attr ;
        bool m_has_lastRow_attr ;
        boolean m_lastRow_attr ;
        bool m_has_lastCol_attr ;
        boolean m_lastCol_attr ;
        bool m_has_bandRow_attr ;
        boolean m_bandRow_attr ;
        bool m_has_bandCol_attr ;
        boolean m_bandCol_attr ;

    }

    class CT_Table : public XSD::ComplexType{
    public:
        bool has_tblPr() const;
        CT_TableProperties* mutable_tblPr();
        const CT_TableProperties& tblPr() const;
        bool has_tblGrid() const;
        CT_TableGrid* mutable_tblGrid();
        const CT_TableGrid& tblGrid() const;
        bool has_tr() const;
        CT_TableRow* mutable_tr();
        const CT_TableRow& tr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Table& default_instance() const;

    private:
        bool m_has_tblPr ;
        CT_TableProperties* m_tblPr ;
        bool m_has_tblGrid ;
        CT_TableGrid* m_tblGrid ;
        bool m_has_tr ;
        CT_TableRow* m_tr ;
        static CT_Table* default_instance_ ;

    }

    class CT_Cell3D : public XSD::ComplexType{
    public:
        bool has_bevel() const;
        CT_Bevel* mutable_bevel();
        const CT_Bevel& bevel() const;
        bool has_lightRig() const;
        CT_LightRig* mutable_lightRig();
        const CT_LightRig& lightRig() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Cell3D& default_instance() const;
        bool has_prstMaterial_attr() const;
        void set_prstMaterial_attr(const ST_PresetMaterialType& _prstMaterial_attr );
        const ST_PresetMaterialType& prstMaterial_attr() const;

    private:
        bool m_has_bevel ;
        CT_Bevel* m_bevel ;
        bool m_has_lightRig ;
        CT_LightRig* m_lightRig ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_Cell3D* default_instance_ ;
        bool m_has_prstMaterial_attr ;
        ST_PresetMaterialType* m_prstMaterial_attr ;

    }

    class CT_ThemeableLineStyle : public XSD::ComplexType{
    public:
        bool has_ln() const;
        CT_LineProperties* mutable_ln();
        const CT_LineProperties& ln() const;
        bool has_lnRef() const;
        CT_StyleMatrixReference* mutable_lnRef();
        const CT_StyleMatrixReference& lnRef() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ThemeableLineStyle& default_instance() const;

    private:
        bool m_has_ln ;
        CT_LineProperties* m_ln ;
        bool m_has_lnRef ;
        CT_StyleMatrixReference* m_lnRef ;
        static CT_ThemeableLineStyle* default_instance_ ;

    }

    class CT_TableStyleTextStyle : public XSD::ComplexType{
    public:
        bool has_font() const;
        CT_FontCollection* mutable_font();
        const CT_FontCollection& font() const;
        bool has_fontRef() const;
        CT_FontReference* mutable_fontRef();
        const CT_FontReference& fontRef() const;
        bool has_scrgbClr() const;
        CT_ScRgbColor* mutable_scrgbClr();
        const CT_ScRgbColor& scrgbClr() const;
        bool has_srgbClr() const;
        CT_SRgbColor* mutable_srgbClr();
        const CT_SRgbColor& srgbClr() const;
        bool has_hslClr() const;
        CT_HslColor* mutable_hslClr();
        const CT_HslColor& hslClr() const;
        bool has_sysClr() const;
        CT_SystemColor* mutable_sysClr();
        const CT_SystemColor& sysClr() const;
        bool has_schemeClr() const;
        CT_SchemeColor* mutable_schemeClr();
        const CT_SchemeColor& schemeClr() const;
        bool has_prstClr() const;
        CT_PresetColor* mutable_prstClr();
        const CT_PresetColor& prstClr() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableStyleTextStyle& default_instance() const;
        bool has_b_attr() const;
        void set_b_attr(const ST_OnOffStyleType& _b_attr );
        const ST_OnOffStyleType& b_attr() const;
        bool has_i_attr() const;
        void set_i_attr(const ST_OnOffStyleType& _i_attr );
        const ST_OnOffStyleType& i_attr() const;

    private:
        bool m_has_font ;
        CT_FontCollection* m_font ;
        bool m_has_fontRef ;
        CT_FontReference* m_fontRef ;
        bool m_has_scrgbClr ;
        CT_ScRgbColor* m_scrgbClr ;
        bool m_has_srgbClr ;
        CT_SRgbColor* m_srgbClr ;
        bool m_has_hslClr ;
        CT_HslColor* m_hslClr ;
        bool m_has_sysClr ;
        CT_SystemColor* m_sysClr ;
        bool m_has_schemeClr ;
        CT_SchemeColor* m_schemeClr ;
        bool m_has_prstClr ;
        CT_PresetColor* m_prstClr ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableStyleTextStyle* default_instance_ ;
        bool m_has_b_attr ;
        ST_OnOffStyleType* m_b_attr ;
        bool m_has_i_attr ;
        ST_OnOffStyleType* m_i_attr ;

    }

    class CT_TableCellBorderStyle : public XSD::ComplexType{
    public:
        bool has_left() const;
        CT_ThemeableLineStyle* mutable_left();
        const CT_ThemeableLineStyle& left() const;
        bool has_right() const;
        CT_ThemeableLineStyle* mutable_right();
        const CT_ThemeableLineStyle& right() const;
        bool has_top() const;
        CT_ThemeableLineStyle* mutable_top();
        const CT_ThemeableLineStyle& top() const;
        bool has_bottom() const;
        CT_ThemeableLineStyle* mutable_bottom();
        const CT_ThemeableLineStyle& bottom() const;
        bool has_insideH() const;
        CT_ThemeableLineStyle* mutable_insideH();
        const CT_ThemeableLineStyle& insideH() const;
        bool has_insideV() const;
        CT_ThemeableLineStyle* mutable_insideV();
        const CT_ThemeableLineStyle& insideV() const;
        bool has_tl2br() const;
        CT_ThemeableLineStyle* mutable_tl2br();
        const CT_ThemeableLineStyle& tl2br() const;
        bool has_tr2bl() const;
        CT_ThemeableLineStyle* mutable_tr2bl();
        const CT_ThemeableLineStyle& tr2bl() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableCellBorderStyle& default_instance() const;

    private:
        bool m_has_left ;
        CT_ThemeableLineStyle* m_left ;
        bool m_has_right ;
        CT_ThemeableLineStyle* m_right ;
        bool m_has_top ;
        CT_ThemeableLineStyle* m_top ;
        bool m_has_bottom ;
        CT_ThemeableLineStyle* m_bottom ;
        bool m_has_insideH ;
        CT_ThemeableLineStyle* m_insideH ;
        bool m_has_insideV ;
        CT_ThemeableLineStyle* m_insideV ;
        bool m_has_tl2br ;
        CT_ThemeableLineStyle* m_tl2br ;
        bool m_has_tr2bl ;
        CT_ThemeableLineStyle* m_tr2bl ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableCellBorderStyle* default_instance_ ;

    }

    class CT_TableBackgroundStyle : public XSD::ComplexType{
    public:
        bool has_fill() const;
        CT_FillProperties* mutable_fill();
        const CT_FillProperties& fill() const;
        bool has_fillRef() const;
        CT_StyleMatrixReference* mutable_fillRef();
        const CT_StyleMatrixReference& fillRef() const;
        bool has_effect() const;
        CT_EffectProperties* mutable_effect();
        const CT_EffectProperties& effect() const;
        bool has_effectRef() const;
        CT_StyleMatrixReference* mutable_effectRef();
        const CT_StyleMatrixReference& effectRef() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableBackgroundStyle& default_instance() const;

    private:
        bool m_has_fill ;
        CT_FillProperties* m_fill ;
        bool m_has_fillRef ;
        CT_StyleMatrixReference* m_fillRef ;
        bool m_has_effect ;
        CT_EffectProperties* m_effect ;
        bool m_has_effectRef ;
        CT_StyleMatrixReference* m_effectRef ;
        static CT_TableBackgroundStyle* default_instance_ ;

    }

    class CT_TableStyleCellStyle : public XSD::ComplexType{
    public:
        bool has_tcBdr() const;
        CT_TableCellBorderStyle* mutable_tcBdr();
        const CT_TableCellBorderStyle& tcBdr() const;
        bool has_fill() const;
        CT_FillProperties* mutable_fill();
        const CT_FillProperties& fill() const;
        bool has_fillRef() const;
        CT_StyleMatrixReference* mutable_fillRef();
        const CT_StyleMatrixReference& fillRef() const;
        bool has_cell3D() const;
        CT_Cell3D* mutable_cell3D();
        const CT_Cell3D& cell3D() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableStyleCellStyle& default_instance() const;

    private:
        bool m_has_tcBdr ;
        CT_TableCellBorderStyle* m_tcBdr ;
        bool m_has_fill ;
        CT_FillProperties* m_fill ;
        bool m_has_fillRef ;
        CT_StyleMatrixReference* m_fillRef ;
        bool m_has_cell3D ;
        CT_Cell3D* m_cell3D ;
        static CT_TableStyleCellStyle* default_instance_ ;

    }

    class CT_TablePartStyle : public XSD::ComplexType{
    public:
        bool has_tcTxStyle() const;
        CT_TableStyleTextStyle* mutable_tcTxStyle();
        const CT_TableStyleTextStyle& tcTxStyle() const;
        bool has_tcStyle() const;
        CT_TableStyleCellStyle* mutable_tcStyle();
        const CT_TableStyleCellStyle& tcStyle() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TablePartStyle& default_instance() const;

    private:
        bool m_has_tcTxStyle ;
        CT_TableStyleTextStyle* m_tcTxStyle ;
        bool m_has_tcStyle ;
        CT_TableStyleCellStyle* m_tcStyle ;
        static CT_TablePartStyle* default_instance_ ;

    }

    class CT_TableStyle : public XSD::ComplexType{
    public:
        bool has_tblBg() const;
        CT_TableBackgroundStyle* mutable_tblBg();
        const CT_TableBackgroundStyle& tblBg() const;
        bool has_wholeTbl() const;
        CT_TablePartStyle* mutable_wholeTbl();
        const CT_TablePartStyle& wholeTbl() const;
        bool has_band1H() const;
        CT_TablePartStyle* mutable_band1H();
        const CT_TablePartStyle& band1H() const;
        bool has_band2H() const;
        CT_TablePartStyle* mutable_band2H();
        const CT_TablePartStyle& band2H() const;
        bool has_band1V() const;
        CT_TablePartStyle* mutable_band1V();
        const CT_TablePartStyle& band1V() const;
        bool has_band2V() const;
        CT_TablePartStyle* mutable_band2V();
        const CT_TablePartStyle& band2V() const;
        bool has_lastCol() const;
        CT_TablePartStyle* mutable_lastCol();
        const CT_TablePartStyle& lastCol() const;
        bool has_firstCol() const;
        CT_TablePartStyle* mutable_firstCol();
        const CT_TablePartStyle& firstCol() const;
        bool has_lastRow() const;
        CT_TablePartStyle* mutable_lastRow();
        const CT_TablePartStyle& lastRow() const;
        bool has_seCell() const;
        CT_TablePartStyle* mutable_seCell();
        const CT_TablePartStyle& seCell() const;
        bool has_swCell() const;
        CT_TablePartStyle* mutable_swCell();
        const CT_TablePartStyle& swCell() const;
        bool has_firstRow() const;
        CT_TablePartStyle* mutable_firstRow();
        const CT_TablePartStyle& firstRow() const;
        bool has_neCell() const;
        CT_TablePartStyle* mutable_neCell();
        const CT_TablePartStyle& neCell() const;
        bool has_nwCell() const;
        CT_TablePartStyle* mutable_nwCell();
        const CT_TablePartStyle& nwCell() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableStyle& default_instance() const;
        bool has_styleId_attr() const;
        void set_styleId_attr(const ns_s::ST_Guid& _styleId_attr );
        const ns_s::ST_Guid& styleId_attr() const;
        bool has_styleName_attr() const;
        void set_styleName_attr(const string& _styleName_attr );
        const string& styleName_attr() const;

    private:
        bool m_has_tblBg ;
        CT_TableBackgroundStyle* m_tblBg ;
        bool m_has_wholeTbl ;
        CT_TablePartStyle* m_wholeTbl ;
        bool m_has_band1H ;
        CT_TablePartStyle* m_band1H ;
        bool m_has_band2H ;
        CT_TablePartStyle* m_band2H ;
        bool m_has_band1V ;
        CT_TablePartStyle* m_band1V ;
        bool m_has_band2V ;
        CT_TablePartStyle* m_band2V ;
        bool m_has_lastCol ;
        CT_TablePartStyle* m_lastCol ;
        bool m_has_firstCol ;
        CT_TablePartStyle* m_firstCol ;
        bool m_has_lastRow ;
        CT_TablePartStyle* m_lastRow ;
        bool m_has_seCell ;
        CT_TablePartStyle* m_seCell ;
        bool m_has_swCell ;
        CT_TablePartStyle* m_swCell ;
        bool m_has_firstRow ;
        CT_TablePartStyle* m_firstRow ;
        bool m_has_neCell ;
        CT_TablePartStyle* m_neCell ;
        bool m_has_nwCell ;
        CT_TablePartStyle* m_nwCell ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TableStyle* default_instance_ ;
        bool m_has_styleId_attr ;
        ns_s::ST_Guid* m_styleId_attr ;
        bool m_has_styleName_attr ;
        string m_styleName_attr ;

    }

    class CT_TableStyleList : public XSD::ComplexType{
    public:
        bool has_tblStyle() const;
        CT_TableStyle* mutable_tblStyle();
        const CT_TableStyle& tblStyle() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TableStyleList& default_instance() const;
        bool has_def_attr() const;
        void set_def_attr(const ns_s::ST_Guid& _def_attr );
        const ns_s::ST_Guid& def_attr() const;

    private:
        bool m_has_tblStyle ;
        CT_TableStyle* m_tblStyle ;
        static CT_TableStyleList* default_instance_ ;
        bool m_has_def_attr ;
        ns_s::ST_Guid* m_def_attr ;

    }

    class CT_TextParagraph : public XSD::ComplexType{
    public:
        bool has_pPr() const;
        CT_TextParagraphProperties* mutable_pPr();
        const CT_TextParagraphProperties& pPr() const;
        CT_RegularTextRun* add_r();
        CT_TextLineBreak* add_br();
        CT_TextField* add_fld();
        bool has_endParaRPr() const;
        CT_TextCharacterProperties* mutable_endParaRPr();
        const CT_TextCharacterProperties& endParaRPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextParagraph& default_instance() const;

    private:
        bool m_has_pPr ;
        CT_TextParagraphProperties* m_pPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_endParaRPr ;
        CT_TextCharacterProperties* m_endParaRPr ;
        static CT_TextParagraph* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_r() const;
            CT_RegularTextRun* mutable_r();
            const CT_RegularTextRun& r() const;
            bool has_br() const;
            CT_TextLineBreak* mutable_br();
            const CT_TextLineBreak& br() const;
            bool has_fld() const;
            CT_TextField* mutable_fld();
            const CT_TextField& fld() const;

        private:
            bool m_has_r ;
            CT_RegularTextRun* m_r ;
            bool m_has_br ;
            CT_TextLineBreak* m_br ;
            bool m_has_fld ;
            CT_TextField* m_fld ;

        }


    }

    class CT_TextListStyle : public XSD::ComplexType{
    public:
        bool has_defPPr() const;
        CT_TextParagraphProperties* mutable_defPPr();
        const CT_TextParagraphProperties& defPPr() const;
        bool has_lvl1pPr() const;
        CT_TextParagraphProperties* mutable_lvl1pPr();
        const CT_TextParagraphProperties& lvl1pPr() const;
        bool has_lvl2pPr() const;
        CT_TextParagraphProperties* mutable_lvl2pPr();
        const CT_TextParagraphProperties& lvl2pPr() const;
        bool has_lvl3pPr() const;
        CT_TextParagraphProperties* mutable_lvl3pPr();
        const CT_TextParagraphProperties& lvl3pPr() const;
        bool has_lvl4pPr() const;
        CT_TextParagraphProperties* mutable_lvl4pPr();
        const CT_TextParagraphProperties& lvl4pPr() const;
        bool has_lvl5pPr() const;
        CT_TextParagraphProperties* mutable_lvl5pPr();
        const CT_TextParagraphProperties& lvl5pPr() const;
        bool has_lvl6pPr() const;
        CT_TextParagraphProperties* mutable_lvl6pPr();
        const CT_TextParagraphProperties& lvl6pPr() const;
        bool has_lvl7pPr() const;
        CT_TextParagraphProperties* mutable_lvl7pPr();
        const CT_TextParagraphProperties& lvl7pPr() const;
        bool has_lvl8pPr() const;
        CT_TextParagraphProperties* mutable_lvl8pPr();
        const CT_TextParagraphProperties& lvl8pPr() const;
        bool has_lvl9pPr() const;
        CT_TextParagraphProperties* mutable_lvl9pPr();
        const CT_TextParagraphProperties& lvl9pPr() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextListStyle& default_instance() const;

    private:
        bool m_has_defPPr ;
        CT_TextParagraphProperties* m_defPPr ;
        bool m_has_lvl1pPr ;
        CT_TextParagraphProperties* m_lvl1pPr ;
        bool m_has_lvl2pPr ;
        CT_TextParagraphProperties* m_lvl2pPr ;
        bool m_has_lvl3pPr ;
        CT_TextParagraphProperties* m_lvl3pPr ;
        bool m_has_lvl4pPr ;
        CT_TextParagraphProperties* m_lvl4pPr ;
        bool m_has_lvl5pPr ;
        CT_TextParagraphProperties* m_lvl5pPr ;
        bool m_has_lvl6pPr ;
        CT_TextParagraphProperties* m_lvl6pPr ;
        bool m_has_lvl7pPr ;
        CT_TextParagraphProperties* m_lvl7pPr ;
        bool m_has_lvl8pPr ;
        CT_TextParagraphProperties* m_lvl8pPr ;
        bool m_has_lvl9pPr ;
        CT_TextParagraphProperties* m_lvl9pPr ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextListStyle* default_instance_ ;

    }

    class CT_TextNormalAutofit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextNormalAutofit& default_instance() const;
        bool has_fontScale_attr() const;
        void set_fontScale_attr(const ST_TextFontScalePercentOrPercentString& _fontScale_attr );
        const ST_TextFontScalePercentOrPercentString& fontScale_attr() const;
        bool has_lnSpcReduction_attr() const;
        void set_lnSpcReduction_attr(const ST_TextSpacingPercentOrPercentString& _lnSpcReduction_attr );
        const ST_TextSpacingPercentOrPercentString& lnSpcReduction_attr() const;

    private:
        static CT_TextNormalAutofit* default_instance_ ;
        bool m_has_fontScale_attr ;
        ST_TextFontScalePercentOrPercentString* m_fontScale_attr ;
        bool m_has_lnSpcReduction_attr ;
        ST_TextSpacingPercentOrPercentString* m_lnSpcReduction_attr ;

    }

    class CT_TextShapeAutofit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextShapeAutofit& default_instance() const;

    private:
        static CT_TextShapeAutofit* default_instance_ ;

    }

    class CT_TextNoAutofit : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextNoAutofit& default_instance() const;

    private:
        static CT_TextNoAutofit* default_instance_ ;

    }

    class CT_TextBodyProperties : public XSD::ComplexType{
    public:
        bool has_prstTxWarp() const;
        CT_PresetTextShape* mutable_prstTxWarp();
        const CT_PresetTextShape& prstTxWarp() const;
        bool has_noAutofit() const;
        CT_TextNoAutofit* mutable_noAutofit();
        const CT_TextNoAutofit& noAutofit() const;
        bool has_normAutofit() const;
        CT_TextNormalAutofit* mutable_normAutofit();
        const CT_TextNormalAutofit& normAutofit() const;
        bool has_spAutoFit() const;
        CT_TextShapeAutofit* mutable_spAutoFit();
        const CT_TextShapeAutofit& spAutoFit() const;
        bool has_scene3d() const;
        CT_Scene3D* mutable_scene3d();
        const CT_Scene3D& scene3d() const;
        bool has_sp3d() const;
        CT_Shape3D* mutable_sp3d();
        const CT_Shape3D& sp3d() const;
        bool has_flatTx() const;
        CT_FlatText* mutable_flatTx();
        const CT_FlatText& flatTx() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBodyProperties& default_instance() const;
        bool has_rot_attr() const;
        void set_rot_attr(const ST_Angle& _rot_attr );
        const ST_Angle& rot_attr() const;
        bool has_spcFirstLastPara_attr() const;
        void set_spcFirstLastPara_attr(const boolean& _spcFirstLastPara_attr );
        const boolean& spcFirstLastPara_attr() const;
        bool has_vertOverflow_attr() const;
        void set_vertOverflow_attr(const ST_TextVertOverflowType& _vertOverflow_attr );
        const ST_TextVertOverflowType& vertOverflow_attr() const;
        bool has_horzOverflow_attr() const;
        void set_horzOverflow_attr(const ST_TextHorzOverflowType& _horzOverflow_attr );
        const ST_TextHorzOverflowType& horzOverflow_attr() const;
        bool has_vert_attr() const;
        void set_vert_attr(const ST_TextVerticalType& _vert_attr );
        const ST_TextVerticalType& vert_attr() const;
        bool has_wrap_attr() const;
        void set_wrap_attr(const ST_TextWrappingType& _wrap_attr );
        const ST_TextWrappingType& wrap_attr() const;
        bool has_lIns_attr() const;
        void set_lIns_attr(const ST_Coordinate32& _lIns_attr );
        const ST_Coordinate32& lIns_attr() const;
        bool has_tIns_attr() const;
        void set_tIns_attr(const ST_Coordinate32& _tIns_attr );
        const ST_Coordinate32& tIns_attr() const;
        bool has_rIns_attr() const;
        void set_rIns_attr(const ST_Coordinate32& _rIns_attr );
        const ST_Coordinate32& rIns_attr() const;
        bool has_bIns_attr() const;
        void set_bIns_attr(const ST_Coordinate32& _bIns_attr );
        const ST_Coordinate32& bIns_attr() const;
        bool has_numCol_attr() const;
        void set_numCol_attr(const ST_TextColumnCount& _numCol_attr );
        const ST_TextColumnCount& numCol_attr() const;
        bool has_spcCol_attr() const;
        void set_spcCol_attr(const ST_PositiveCoordinate32& _spcCol_attr );
        const ST_PositiveCoordinate32& spcCol_attr() const;
        bool has_rtlCol_attr() const;
        void set_rtlCol_attr(const boolean& _rtlCol_attr );
        const boolean& rtlCol_attr() const;
        bool has_fromWordArt_attr() const;
        void set_fromWordArt_attr(const boolean& _fromWordArt_attr );
        const boolean& fromWordArt_attr() const;
        bool has_anchor_attr() const;
        void set_anchor_attr(const ST_TextAnchoringType& _anchor_attr );
        const ST_TextAnchoringType& anchor_attr() const;
        bool has_anchorCtr_attr() const;
        void set_anchorCtr_attr(const boolean& _anchorCtr_attr );
        const boolean& anchorCtr_attr() const;
        bool has_forceAA_attr() const;
        void set_forceAA_attr(const boolean& _forceAA_attr );
        const boolean& forceAA_attr() const;
        bool has_upright_attr() const;
        void set_upright_attr(const boolean& _upright_attr );
        const boolean& upright_attr() const;
        bool has_compatLnSpc_attr() const;
        void set_compatLnSpc_attr(const boolean& _compatLnSpc_attr );
        const boolean& compatLnSpc_attr() const;

    private:
        bool m_has_prstTxWarp ;
        CT_PresetTextShape* m_prstTxWarp ;
        bool m_has_noAutofit ;
        CT_TextNoAutofit* m_noAutofit ;
        bool m_has_normAutofit ;
        CT_TextNormalAutofit* m_normAutofit ;
        bool m_has_spAutoFit ;
        CT_TextShapeAutofit* m_spAutoFit ;
        bool m_has_scene3d ;
        CT_Scene3D* m_scene3d ;
        bool m_has_sp3d ;
        CT_Shape3D* m_sp3d ;
        bool m_has_flatTx ;
        CT_FlatText* m_flatTx ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextBodyProperties* default_instance_ ;
        bool m_has_rot_attr ;
        ST_Angle* m_rot_attr ;
        bool m_has_spcFirstLastPara_attr ;
        boolean m_spcFirstLastPara_attr ;
        bool m_has_vertOverflow_attr ;
        ST_TextVertOverflowType* m_vertOverflow_attr ;
        bool m_has_horzOverflow_attr ;
        ST_TextHorzOverflowType* m_horzOverflow_attr ;
        bool m_has_vert_attr ;
        ST_TextVerticalType* m_vert_attr ;
        bool m_has_wrap_attr ;
        ST_TextWrappingType* m_wrap_attr ;
        bool m_has_lIns_attr ;
        ST_Coordinate32* m_lIns_attr ;
        bool m_has_tIns_attr ;
        ST_Coordinate32* m_tIns_attr ;
        bool m_has_rIns_attr ;
        ST_Coordinate32* m_rIns_attr ;
        bool m_has_bIns_attr ;
        ST_Coordinate32* m_bIns_attr ;
        bool m_has_numCol_attr ;
        ST_TextColumnCount* m_numCol_attr ;
        bool m_has_spcCol_attr ;
        ST_PositiveCoordinate32* m_spcCol_attr ;
        bool m_has_rtlCol_attr ;
        boolean m_rtlCol_attr ;
        bool m_has_fromWordArt_attr ;
        boolean m_fromWordArt_attr ;
        bool m_has_anchor_attr ;
        ST_TextAnchoringType* m_anchor_attr ;
        bool m_has_anchorCtr_attr ;
        boolean m_anchorCtr_attr ;
        bool m_has_forceAA_attr ;
        boolean m_forceAA_attr ;
        bool m_has_upright_attr ;
        boolean m_upright_attr ;
        bool m_has_compatLnSpc_attr ;
        boolean m_compatLnSpc_attr ;

    }

    class CT_TextBody : public XSD::ComplexType{
    public:
        bool has_bodyPr() const;
        CT_TextBodyProperties* mutable_bodyPr();
        const CT_TextBodyProperties& bodyPr() const;
        bool has_lstStyle() const;
        CT_TextListStyle* mutable_lstStyle();
        const CT_TextListStyle& lstStyle() const;
        bool has_p() const;
        CT_TextParagraph* mutable_p();
        const CT_TextParagraph& p() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBody& default_instance() const;

    private:
        bool m_has_bodyPr ;
        CT_TextBodyProperties* m_bodyPr ;
        bool m_has_lstStyle ;
        CT_TextListStyle* m_lstStyle ;
        bool m_has_p ;
        CT_TextParagraph* m_p ;
        static CT_TextBody* default_instance_ ;

    }

    class CT_TextBulletColorFollowText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBulletColorFollowText& default_instance() const;

    private:
        static CT_TextBulletColorFollowText* default_instance_ ;

    }

    class CT_TextBulletSizeFollowText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBulletSizeFollowText& default_instance() const;

    private:
        static CT_TextBulletSizeFollowText* default_instance_ ;

    }

    class CT_TextBulletSizePercent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBulletSizePercent& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextBulletSizePercent& _val_attr );
        const ST_TextBulletSizePercent& val_attr() const;

    private:
        static CT_TextBulletSizePercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextBulletSizePercent* m_val_attr ;

    }

    class CT_TextBulletSizePoint : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBulletSizePoint& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextFontSize& _val_attr );
        const ST_TextFontSize& val_attr() const;

    private:
        static CT_TextBulletSizePoint* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextFontSize* m_val_attr ;

    }

    class CT_TextBulletTypefaceFollowText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBulletTypefaceFollowText& default_instance() const;

    private:
        static CT_TextBulletTypefaceFollowText* default_instance_ ;

    }

    class CT_TextAutonumberBullet : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextAutonumberBullet& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TextAutonumberScheme& _type_attr );
        const ST_TextAutonumberScheme& type_attr() const;
        bool has_startAt_attr() const;
        void set_startAt_attr(const ST_TextBulletStartAtNum& _startAt_attr );
        const ST_TextBulletStartAtNum& startAt_attr() const;

    private:
        static CT_TextAutonumberBullet* default_instance_ ;
        bool m_has_type_attr ;
        ST_TextAutonumberScheme* m_type_attr ;
        bool m_has_startAt_attr ;
        ST_TextBulletStartAtNum* m_startAt_attr ;

    }

    class CT_TextCharBullet : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextCharBullet& default_instance() const;
        bool has_char_attr() const;
        void set_char_attr(const string& _char_attr );
        const string& char_attr() const;

    private:
        static CT_TextCharBullet* default_instance_ ;
        bool m_has_char_attr ;
        string m_char_attr ;

    }

    class CT_TextBlipBullet : public XSD::ComplexType{
    public:
        bool has_blip() const;
        CT_Blip* mutable_blip();
        const CT_Blip& blip() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextBlipBullet& default_instance() const;

    private:
        bool m_has_blip ;
        CT_Blip* m_blip ;
        static CT_TextBlipBullet* default_instance_ ;

    }

    class CT_TextNoBullet : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextNoBullet& default_instance() const;

    private:
        static CT_TextNoBullet* default_instance_ ;

    }

    class CT_TextFont : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextFont& default_instance() const;
        bool has_typeface_attr() const;
        void set_typeface_attr(const ST_TextTypeface& _typeface_attr );
        const ST_TextTypeface& typeface_attr() const;
        bool has_panose_attr() const;
        void set_panose_attr(const ns_s::ST_Panose& _panose_attr );
        const ns_s::ST_Panose& panose_attr() const;
        bool has_pitchFamily_attr() const;
        void set_pitchFamily_attr(const ST_PitchFamily& _pitchFamily_attr );
        const ST_PitchFamily& pitchFamily_attr() const;
        bool has_charset_attr() const;
        void set_charset_attr(const byte& _charset_attr );
        const byte& charset_attr() const;

    private:
        static CT_TextFont* default_instance_ ;
        bool m_has_typeface_attr ;
        ST_TextTypeface* m_typeface_attr ;
        bool m_has_panose_attr ;
        ns_s::ST_Panose* m_panose_attr ;
        bool m_has_pitchFamily_attr ;
        ST_PitchFamily* m_pitchFamily_attr ;
        bool m_has_charset_attr ;
        byte m_charset_attr ;

    }

    class CT_TextUnderlineLineFollowText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextUnderlineLineFollowText& default_instance() const;

    private:
        static CT_TextUnderlineLineFollowText* default_instance_ ;

    }

    class CT_TextUnderlineFillFollowText : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextUnderlineFillFollowText& default_instance() const;

    private:
        static CT_TextUnderlineFillFollowText* default_instance_ ;

    }

    class CT_TextUnderlineFillGroupWrapper : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextUnderlineFillGroupWrapper& default_instance() const;

    private:
        static CT_TextUnderlineFillGroupWrapper* default_instance_ ;

    }

    class CT_TextCharacterProperties : public XSD::ComplexType{
    public:
        bool has_ln() const;
        CT_LineProperties* mutable_ln();
        const CT_LineProperties& ln() const;
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        bool has_highlight() const;
        CT_Color* mutable_highlight();
        const CT_Color& highlight() const;
        bool has_uLnTx() const;
        CT_TextUnderlineLineFollowText* mutable_uLnTx();
        const CT_TextUnderlineLineFollowText& uLnTx() const;
        bool has_uLn() const;
        CT_LineProperties* mutable_uLn();
        const CT_LineProperties& uLn() const;
        bool has_uFillTx() const;
        CT_TextUnderlineFillFollowText* mutable_uFillTx();
        const CT_TextUnderlineFillFollowText& uFillTx() const;
        bool has_uFill() const;
        CT_TextUnderlineFillGroupWrapper* mutable_uFill();
        const CT_TextUnderlineFillGroupWrapper& uFill() const;
        bool has_latin() const;
        CT_TextFont* mutable_latin();
        const CT_TextFont& latin() const;
        bool has_ea() const;
        CT_TextFont* mutable_ea();
        const CT_TextFont& ea() const;
        bool has_cs() const;
        CT_TextFont* mutable_cs();
        const CT_TextFont& cs() const;
        bool has_sym() const;
        CT_TextFont* mutable_sym();
        const CT_TextFont& sym() const;
        bool has_hlinkClick() const;
        CT_Hyperlink* mutable_hlinkClick();
        const CT_Hyperlink& hlinkClick() const;
        bool has_hlinkMouseOver() const;
        CT_Hyperlink* mutable_hlinkMouseOver();
        const CT_Hyperlink& hlinkMouseOver() const;
        bool has_rtl() const;
        CT_Boolean* mutable_rtl();
        const CT_Boolean& rtl() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextCharacterProperties& default_instance() const;
        bool has_kumimoji_attr() const;
        void set_kumimoji_attr(const boolean& _kumimoji_attr );
        const boolean& kumimoji_attr() const;
        bool has_lang_attr() const;
        void set_lang_attr(const ns_s::ST_Lang& _lang_attr );
        const ns_s::ST_Lang& lang_attr() const;
        bool has_altLang_attr() const;
        void set_altLang_attr(const ns_s::ST_Lang& _altLang_attr );
        const ns_s::ST_Lang& altLang_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_TextFontSize& _sz_attr );
        const ST_TextFontSize& sz_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const boolean& _b_attr );
        const boolean& b_attr() const;
        bool has_i_attr() const;
        void set_i_attr(const boolean& _i_attr );
        const boolean& i_attr() const;
        bool has_u_attr() const;
        void set_u_attr(const ST_TextUnderlineType& _u_attr );
        const ST_TextUnderlineType& u_attr() const;
        bool has_strike_attr() const;
        void set_strike_attr(const ST_TextStrikeType& _strike_attr );
        const ST_TextStrikeType& strike_attr() const;
        bool has_kern_attr() const;
        void set_kern_attr(const ST_TextNonNegativePoint& _kern_attr );
        const ST_TextNonNegativePoint& kern_attr() const;
        bool has_cap_attr() const;
        void set_cap_attr(const ST_TextCapsType& _cap_attr );
        const ST_TextCapsType& cap_attr() const;
        bool has_spc_attr() const;
        void set_spc_attr(const ST_TextPoint& _spc_attr );
        const ST_TextPoint& spc_attr() const;
        bool has_normalizeH_attr() const;
        void set_normalizeH_attr(const boolean& _normalizeH_attr );
        const boolean& normalizeH_attr() const;
        bool has_baseline_attr() const;
        void set_baseline_attr(const ST_Percentage& _baseline_attr );
        const ST_Percentage& baseline_attr() const;
        bool has_noProof_attr() const;
        void set_noProof_attr(const boolean& _noProof_attr );
        const boolean& noProof_attr() const;
        bool has_dirty_attr() const;
        void set_dirty_attr(const boolean& _dirty_attr );
        const boolean& dirty_attr() const;
        bool has_err_attr() const;
        void set_err_attr(const boolean& _err_attr );
        const boolean& err_attr() const;
        bool has_smtClean_attr() const;
        void set_smtClean_attr(const boolean& _smtClean_attr );
        const boolean& smtClean_attr() const;
        bool has_smtId_attr() const;
        void set_smtId_attr(const unsignedInt& _smtId_attr );
        const unsignedInt& smtId_attr() const;
        bool has_bmk_attr() const;
        void set_bmk_attr(const string& _bmk_attr );
        const string& bmk_attr() const;

    private:
        bool m_has_ln ;
        CT_LineProperties* m_ln ;
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        bool m_has_highlight ;
        CT_Color* m_highlight ;
        bool m_has_uLnTx ;
        CT_TextUnderlineLineFollowText* m_uLnTx ;
        bool m_has_uLn ;
        CT_LineProperties* m_uLn ;
        bool m_has_uFillTx ;
        CT_TextUnderlineFillFollowText* m_uFillTx ;
        bool m_has_uFill ;
        CT_TextUnderlineFillGroupWrapper* m_uFill ;
        bool m_has_latin ;
        CT_TextFont* m_latin ;
        bool m_has_ea ;
        CT_TextFont* m_ea ;
        bool m_has_cs ;
        CT_TextFont* m_cs ;
        bool m_has_sym ;
        CT_TextFont* m_sym ;
        bool m_has_hlinkClick ;
        CT_Hyperlink* m_hlinkClick ;
        bool m_has_hlinkMouseOver ;
        CT_Hyperlink* m_hlinkMouseOver ;
        bool m_has_rtl ;
        CT_Boolean* m_rtl ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextCharacterProperties* default_instance_ ;
        bool m_has_kumimoji_attr ;
        boolean m_kumimoji_attr ;
        bool m_has_lang_attr ;
        ns_s::ST_Lang* m_lang_attr ;
        bool m_has_altLang_attr ;
        ns_s::ST_Lang* m_altLang_attr ;
        bool m_has_sz_attr ;
        ST_TextFontSize* m_sz_attr ;
        bool m_has_b_attr ;
        boolean m_b_attr ;
        bool m_has_i_attr ;
        boolean m_i_attr ;
        bool m_has_u_attr ;
        ST_TextUnderlineType* m_u_attr ;
        bool m_has_strike_attr ;
        ST_TextStrikeType* m_strike_attr ;
        bool m_has_kern_attr ;
        ST_TextNonNegativePoint* m_kern_attr ;
        bool m_has_cap_attr ;
        ST_TextCapsType* m_cap_attr ;
        bool m_has_spc_attr ;
        ST_TextPoint* m_spc_attr ;
        bool m_has_normalizeH_attr ;
        boolean m_normalizeH_attr ;
        bool m_has_baseline_attr ;
        ST_Percentage* m_baseline_attr ;
        bool m_has_noProof_attr ;
        boolean m_noProof_attr ;
        bool m_has_dirty_attr ;
        boolean m_dirty_attr ;
        bool m_has_err_attr ;
        boolean m_err_attr ;
        bool m_has_smtClean_attr ;
        boolean m_smtClean_attr ;
        bool m_has_smtId_attr ;
        unsignedInt m_smtId_attr ;
        bool m_has_bmk_attr ;
        string m_bmk_attr ;

    }

    class CT_Boolean : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Boolean& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_OnOff& _val_attr );
        const ns_s::ST_OnOff& val_attr() const;

    private:
        static CT_Boolean* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_OnOff* m_val_attr ;

    }

    class CT_TextSpacingPercent : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextSpacingPercent& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextSpacingPercentOrPercentString& _val_attr );
        const ST_TextSpacingPercentOrPercentString& val_attr() const;

    private:
        static CT_TextSpacingPercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextSpacingPercentOrPercentString* m_val_attr ;

    }

    class CT_TextSpacingPoint : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextSpacingPoint& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TextSpacingPoint& _val_attr );
        const ST_TextSpacingPoint& val_attr() const;

    private:
        static CT_TextSpacingPoint* default_instance_ ;
        bool m_has_val_attr ;
        ST_TextSpacingPoint* m_val_attr ;

    }

    class CT_TextTabStop : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextTabStop& default_instance() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ST_Coordinate32& _pos_attr );
        const ST_Coordinate32& pos_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_TextTabAlignType& _algn_attr );
        const ST_TextTabAlignType& algn_attr() const;

    private:
        static CT_TextTabStop* default_instance_ ;
        bool m_has_pos_attr ;
        ST_Coordinate32* m_pos_attr ;
        bool m_has_algn_attr ;
        ST_TextTabAlignType* m_algn_attr ;

    }

    class CT_TextTabStopList : public XSD::ComplexType{
    public:
        bool has_tab() const;
        CT_TextTabStop* mutable_tab();
        const CT_TextTabStop& tab() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextTabStopList& default_instance() const;

    private:
        bool m_has_tab ;
        CT_TextTabStop* m_tab ;
        static CT_TextTabStopList* default_instance_ ;

    }

    class CT_TextLineBreak : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_TextCharacterProperties* mutable_rPr();
        const CT_TextCharacterProperties& rPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextLineBreak& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_TextCharacterProperties* m_rPr ;
        static CT_TextLineBreak* default_instance_ ;

    }

    class CT_TextSpacing : public XSD::ComplexType{
    public:
        bool has_spcPct() const;
        CT_TextSpacingPercent* mutable_spcPct();
        const CT_TextSpacingPercent& spcPct() const;
        bool has_spcPts() const;
        CT_TextSpacingPoint* mutable_spcPts();
        const CT_TextSpacingPoint& spcPts() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextSpacing& default_instance() const;

    private:
        bool m_has_spcPct ;
        CT_TextSpacingPercent* m_spcPct ;
        bool m_has_spcPts ;
        CT_TextSpacingPoint* m_spcPts ;
        static CT_TextSpacing* default_instance_ ;

    }

    class CT_TextParagraphProperties : public XSD::ComplexType{
    public:
        bool has_lnSpc() const;
        CT_TextSpacing* mutable_lnSpc();
        const CT_TextSpacing& lnSpc() const;
        bool has_spcBef() const;
        CT_TextSpacing* mutable_spcBef();
        const CT_TextSpacing& spcBef() const;
        bool has_spcAft() const;
        CT_TextSpacing* mutable_spcAft();
        const CT_TextSpacing& spcAft() const;
        bool has_buClrTx() const;
        CT_TextBulletColorFollowText* mutable_buClrTx();
        const CT_TextBulletColorFollowText& buClrTx() const;
        bool has_buClr() const;
        CT_Color* mutable_buClr();
        const CT_Color& buClr() const;
        bool has_buSzTx() const;
        CT_TextBulletSizeFollowText* mutable_buSzTx();
        const CT_TextBulletSizeFollowText& buSzTx() const;
        bool has_buSzPct() const;
        CT_TextBulletSizePercent* mutable_buSzPct();
        const CT_TextBulletSizePercent& buSzPct() const;
        bool has_buSzPts() const;
        CT_TextBulletSizePoint* mutable_buSzPts();
        const CT_TextBulletSizePoint& buSzPts() const;
        bool has_buFontTx() const;
        CT_TextBulletTypefaceFollowText* mutable_buFontTx();
        const CT_TextBulletTypefaceFollowText& buFontTx() const;
        bool has_buFont() const;
        CT_TextFont* mutable_buFont();
        const CT_TextFont& buFont() const;
        bool has_buNone() const;
        CT_TextNoBullet* mutable_buNone();
        const CT_TextNoBullet& buNone() const;
        bool has_buAutoNum() const;
        CT_TextAutonumberBullet* mutable_buAutoNum();
        const CT_TextAutonumberBullet& buAutoNum() const;
        bool has_buChar() const;
        CT_TextCharBullet* mutable_buChar();
        const CT_TextCharBullet& buChar() const;
        bool has_buBlip() const;
        CT_TextBlipBullet* mutable_buBlip();
        const CT_TextBlipBullet& buBlip() const;
        bool has_tabLst() const;
        CT_TextTabStopList* mutable_tabLst();
        const CT_TextTabStopList& tabLst() const;
        bool has_defRPr() const;
        CT_TextCharacterProperties* mutable_defRPr();
        const CT_TextCharacterProperties& defRPr() const;
        bool has_extLst() const;
        CT_OfficeArtExtensionList* mutable_extLst();
        const CT_OfficeArtExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextParagraphProperties& default_instance() const;
        bool has_marL_attr() const;
        void set_marL_attr(const ST_TextMargin& _marL_attr );
        const ST_TextMargin& marL_attr() const;
        bool has_marR_attr() const;
        void set_marR_attr(const ST_TextMargin& _marR_attr );
        const ST_TextMargin& marR_attr() const;
        bool has_lvl_attr() const;
        void set_lvl_attr(const ST_TextIndentLevelType& _lvl_attr );
        const ST_TextIndentLevelType& lvl_attr() const;
        bool has_indent_attr() const;
        void set_indent_attr(const ST_TextIndent& _indent_attr );
        const ST_TextIndent& indent_attr() const;
        bool has_algn_attr() const;
        void set_algn_attr(const ST_TextAlignType& _algn_attr );
        const ST_TextAlignType& algn_attr() const;
        bool has_defTabSz_attr() const;
        void set_defTabSz_attr(const ST_Coordinate32& _defTabSz_attr );
        const ST_Coordinate32& defTabSz_attr() const;
        bool has_rtl_attr() const;
        void set_rtl_attr(const boolean& _rtl_attr );
        const boolean& rtl_attr() const;
        bool has_eaLnBrk_attr() const;
        void set_eaLnBrk_attr(const boolean& _eaLnBrk_attr );
        const boolean& eaLnBrk_attr() const;
        bool has_fontAlgn_attr() const;
        void set_fontAlgn_attr(const ST_TextFontAlignType& _fontAlgn_attr );
        const ST_TextFontAlignType& fontAlgn_attr() const;
        bool has_latinLnBrk_attr() const;
        void set_latinLnBrk_attr(const boolean& _latinLnBrk_attr );
        const boolean& latinLnBrk_attr() const;
        bool has_hangingPunct_attr() const;
        void set_hangingPunct_attr(const boolean& _hangingPunct_attr );
        const boolean& hangingPunct_attr() const;

    private:
        bool m_has_lnSpc ;
        CT_TextSpacing* m_lnSpc ;
        bool m_has_spcBef ;
        CT_TextSpacing* m_spcBef ;
        bool m_has_spcAft ;
        CT_TextSpacing* m_spcAft ;
        bool m_has_buClrTx ;
        CT_TextBulletColorFollowText* m_buClrTx ;
        bool m_has_buClr ;
        CT_Color* m_buClr ;
        bool m_has_buSzTx ;
        CT_TextBulletSizeFollowText* m_buSzTx ;
        bool m_has_buSzPct ;
        CT_TextBulletSizePercent* m_buSzPct ;
        bool m_has_buSzPts ;
        CT_TextBulletSizePoint* m_buSzPts ;
        bool m_has_buFontTx ;
        CT_TextBulletTypefaceFollowText* m_buFontTx ;
        bool m_has_buFont ;
        CT_TextFont* m_buFont ;
        bool m_has_buNone ;
        CT_TextNoBullet* m_buNone ;
        bool m_has_buAutoNum ;
        CT_TextAutonumberBullet* m_buAutoNum ;
        bool m_has_buChar ;
        CT_TextCharBullet* m_buChar ;
        bool m_has_buBlip ;
        CT_TextBlipBullet* m_buBlip ;
        bool m_has_tabLst ;
        CT_TextTabStopList* m_tabLst ;
        bool m_has_defRPr ;
        CT_TextCharacterProperties* m_defRPr ;
        bool m_has_extLst ;
        CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextParagraphProperties* default_instance_ ;
        bool m_has_marL_attr ;
        ST_TextMargin* m_marL_attr ;
        bool m_has_marR_attr ;
        ST_TextMargin* m_marR_attr ;
        bool m_has_lvl_attr ;
        ST_TextIndentLevelType* m_lvl_attr ;
        bool m_has_indent_attr ;
        ST_TextIndent* m_indent_attr ;
        bool m_has_algn_attr ;
        ST_TextAlignType* m_algn_attr ;
        bool m_has_defTabSz_attr ;
        ST_Coordinate32* m_defTabSz_attr ;
        bool m_has_rtl_attr ;
        boolean m_rtl_attr ;
        bool m_has_eaLnBrk_attr ;
        boolean m_eaLnBrk_attr ;
        bool m_has_fontAlgn_attr ;
        ST_TextFontAlignType* m_fontAlgn_attr ;
        bool m_has_latinLnBrk_attr ;
        boolean m_latinLnBrk_attr ;
        bool m_has_hangingPunct_attr ;
        boolean m_hangingPunct_attr ;

    }

    class CT_TextField : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_TextCharacterProperties* mutable_rPr();
        const CT_TextCharacterProperties& rPr() const;
        bool has_pPr() const;
        CT_TextParagraphProperties* mutable_pPr();
        const CT_TextParagraphProperties& pPr() const;
        bool has_t() const;
        void set_t(const string& _t );
        const string& t() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TextField& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ns_s::ST_Guid& _id_attr );
        const ns_s::ST_Guid& id_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const string& _type_attr );
        const string& type_attr() const;

    private:
        bool m_has_rPr ;
        CT_TextCharacterProperties* m_rPr ;
        bool m_has_pPr ;
        CT_TextParagraphProperties* m_pPr ;
        bool m_has_t ;
        string m_t ;
        static CT_TextField* default_instance_ ;
        bool m_has_id_attr ;
        ns_s::ST_Guid* m_id_attr ;
        bool m_has_type_attr ;
        string m_type_attr ;

    }

    class CT_RegularTextRun : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_TextCharacterProperties* mutable_rPr();
        const CT_TextCharacterProperties& rPr() const;
        bool has_t() const;
        void set_t(const string& _t );
        const string& t() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RegularTextRun& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_TextCharacterProperties* m_rPr ;
        bool m_has_t ;
        string m_t ;
        static CT_RegularTextRun* default_instance_ ;

    }

    class CT_BackgroundFormatting : public XSD::ComplexType{
    public:
        bool has_noFill() const;
        CT_NoFillProperties* mutable_noFill();
        const CT_NoFillProperties& noFill() const;
        bool has_solidFill() const;
        CT_SolidColorFillProperties* mutable_solidFill();
        const CT_SolidColorFillProperties& solidFill() const;
        bool has_gradFill() const;
        CT_GradientFillProperties* mutable_gradFill();
        const CT_GradientFillProperties& gradFill() const;
        bool has_blipFill() const;
        CT_BlipFillProperties* mutable_blipFill();
        const CT_BlipFillProperties& blipFill() const;
        bool has_pattFill() const;
        CT_PatternFillProperties* mutable_pattFill();
        const CT_PatternFillProperties& pattFill() const;
        bool has_grpFill() const;
        CT_GroupFillProperties* mutable_grpFill();
        const CT_GroupFillProperties& grpFill() const;
        bool has_effectLst() const;
        CT_EffectList* mutable_effectLst();
        const CT_EffectList& effectLst() const;
        bool has_effectDag() const;
        CT_EffectContainer* mutable_effectDag();
        const CT_EffectContainer& effectDag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BackgroundFormatting& default_instance() const;

    private:
        bool m_has_noFill ;
        CT_NoFillProperties* m_noFill ;
        bool m_has_solidFill ;
        CT_SolidColorFillProperties* m_solidFill ;
        bool m_has_gradFill ;
        CT_GradientFillProperties* m_gradFill ;
        bool m_has_blipFill ;
        CT_BlipFillProperties* m_blipFill ;
        bool m_has_pattFill ;
        CT_PatternFillProperties* m_pattFill ;
        bool m_has_grpFill ;
        CT_GroupFillProperties* m_grpFill ;
        bool m_has_effectLst ;
        CT_EffectList* m_effectLst ;
        bool m_has_effectDag ;
        CT_EffectContainer* m_effectDag ;
        static CT_BackgroundFormatting* default_instance_ ;

    }

    class videoFile : public CT_VideoFile : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class graphic : public CT_GraphicalObject : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class blip : public CT_Blip : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class theme : public CT_OfficeStyleSheet : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class themeOverride : public CT_BaseStylesOverride : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class themeManager : public CT_EmptyElement : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class tbl : public CT_Table : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class tblStyleLst : public CT_TableStyleList : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}