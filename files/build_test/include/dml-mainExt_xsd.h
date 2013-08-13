namespace ns_a14 {
class Element;
class Attribute;
class ST_LegacySpreadsheetColorIndex;
class ST_ArtisticEffectParam100;
class ST_ArtisticEffectParam10;
class ST_ArtisticEffectParam6;
class ST_ArtisticEffectParam4;
class ST_ColorTemperature;
class ST_SaturationAmount;
class CT_TextMath;
class CT_ContentPartLocking;
class CT_NonVisualInkContentPartProperties;
class CT_CameraTool;
class CT_CompatExt;
class CT_IsGvmlCanvas;
class CT_GvmlContentPartNonVisual;
class CT_GvmlContentPart;
class CT_ShadowObscured;
class CT_PictureEffectBlur;
class CT_PictureEffectCement;
class CT_PictureEffectChalkSketch;
class CT_PictureEffectCrisscrossEtching;
class CT_PictureEffectCutout;
class CT_PictureEffectFilmGrain;
class CT_PictureEffectGlass;
class CT_PictureEffectGlowDiffused;
class CT_PictureEffectGlowEdges;
class CT_PictureEffectLightScreen;
class CT_PictureEffectLineDrawing;
class CT_PictureEffectMarker;
class CT_PictureEffectMosiaicBubbles;
class CT_PictureEffectPaintBrush;
class CT_PictureEffectPaintStrokes;
class CT_PictureEffectPastelsSmooth;
class CT_PictureEffectPencilGrayscale;
class CT_PictureEffectPencilSketch;
class CT_PictureEffectPhotocopy;
class CT_PictureEffectPlasticWrap;
class CT_PictureEffectTexturizer;
class CT_PictureEffectWatercolorSponge;
class CT_PictureEffectBackgroundRemovalForegroundMark;
class CT_PictureEffectBackgroundRemovalBackgroundMark;
class CT_PictureEffectBackgroundRemoval;
class CT_PictureEffectBrightnessContrast;
class CT_PictureEffectColorTemperature;
class CT_PictureEffectSaturation;
class CT_PictureEffectSharpenSoften;
class CT_PictureEffect;
class CT_PictureLayer;
class CT_Photo;
class CT_UseLocalDpi;
class m_element;
class cameraTool_element;
class compatExt_element;
class isCanvas_element;
class contentPart_element;
class shadowObscured_element;
class hiddenFill_element;
class hiddenLine_element;
class hiddenEffects_element;
class hiddenScene3d_element;
class hiddenSp3d_element;
class imgProps_element;
class useLocalDpi_element;
class legacySpreadsheetColorIndex_attr;
}
#ifndef __dml_mainExt_xsd_
#define __dml_mainExt_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_a14 {
using namespace std;
class Element: public XSD::Element
{
public:
protected:
private:
};

class Attribute: public XSD::Attribute
{
public:
protected:
private:
};

class ST_LegacySpreadsheetColorIndex: public XSD::SimpleType
{
public:
    ST_LegacySpreadsheetColorIndex();
    ST_LegacySpreadsheetColorIndex(const XSD::int_& _value);
    ~ST_LegacySpreadsheetColorIndex();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LegacySpreadsheetColorIndex& default_instance();
    std::string toString() const;
protected:
private:
    static ST_LegacySpreadsheetColorIndex* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_ArtisticEffectParam100: public XSD::SimpleType
{
public:
    ST_ArtisticEffectParam100();
    ST_ArtisticEffectParam100(const XSD::int_& _value);
    ~ST_ArtisticEffectParam100();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ArtisticEffectParam100& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ArtisticEffectParam100* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_ArtisticEffectParam10: public XSD::SimpleType
{
public:
    ST_ArtisticEffectParam10();
    ST_ArtisticEffectParam10(const XSD::int_& _value);
    ~ST_ArtisticEffectParam10();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ArtisticEffectParam10& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ArtisticEffectParam10* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_ArtisticEffectParam6: public XSD::SimpleType
{
public:
    ST_ArtisticEffectParam6();
    ST_ArtisticEffectParam6(const XSD::int_& _value);
    ~ST_ArtisticEffectParam6();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ArtisticEffectParam6& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ArtisticEffectParam6* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_ArtisticEffectParam4: public XSD::SimpleType
{
public:
    ST_ArtisticEffectParam4();
    ST_ArtisticEffectParam4(const XSD::int_& _value);
    ~ST_ArtisticEffectParam4();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ArtisticEffectParam4& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ArtisticEffectParam4* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_ColorTemperature: public XSD::SimpleType
{
public:
    ST_ColorTemperature();
    ST_ColorTemperature(const XSD::int_& _value);
    ~ST_ColorTemperature();
    bool has_value() const;
    void set_value(const XSD::int_& _value);
    const XSD::int_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ColorTemperature& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ColorTemperature* default_instance_;
    bool m_has_value;
    XSD::int_ m_value;
};

class ST_SaturationAmount: public ns_a::ST_Percentage
{
public:
    ST_SaturationAmount();
    ST_SaturationAmount(const ns_a::ST_Percentage& _ST_Percentage);
    ~ST_SaturationAmount();
    static const ST_SaturationAmount& default_instance();
protected:
private:
    static ST_SaturationAmount* default_instance_;
};

class CT_TextMath: public XSD::ComplexType
{
public:
    CT_TextMath();
    ~CT_TextMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextMath& default_instance();
protected:
private:
    static CT_TextMath* default_instance_;
};

class CT_ContentPartLocking: public XSD::ComplexType
{
public:
    CT_ContentPartLocking();
    ~CT_ContentPartLocking();
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ContentPartLocking& default_instance();
    bool has_a_noGrp_attr() const;
    void set_a_noGrp_attr(const XSD::boolean_& _a_noGrp_attr);
    const XSD::boolean_& get_a_noGrp_attr() const;
    bool has_a_noSelect_attr() const;
    void set_a_noSelect_attr(const XSD::boolean_& _a_noSelect_attr);
    const XSD::boolean_& get_a_noSelect_attr() const;
    bool has_a_noRot_attr() const;
    void set_a_noRot_attr(const XSD::boolean_& _a_noRot_attr);
    const XSD::boolean_& get_a_noRot_attr() const;
    bool has_a_noChangeAspect_attr() const;
    void set_a_noChangeAspect_attr(const XSD::boolean_& _a_noChangeAspect_attr);
    const XSD::boolean_& get_a_noChangeAspect_attr() const;
    bool has_a_noMove_attr() const;
    void set_a_noMove_attr(const XSD::boolean_& _a_noMove_attr);
    const XSD::boolean_& get_a_noMove_attr() const;
    bool has_a_noResize_attr() const;
    void set_a_noResize_attr(const XSD::boolean_& _a_noResize_attr);
    const XSD::boolean_& get_a_noResize_attr() const;
    bool has_a_noEditPoints_attr() const;
    void set_a_noEditPoints_attr(const XSD::boolean_& _a_noEditPoints_attr);
    const XSD::boolean_& get_a_noEditPoints_attr() const;
    bool has_a_noAdjustHandles_attr() const;
    void set_a_noAdjustHandles_attr(const XSD::boolean_& _a_noAdjustHandles_attr);
    const XSD::boolean_& get_a_noAdjustHandles_attr() const;
    bool has_a_noChangeArrowheads_attr() const;
    void set_a_noChangeArrowheads_attr(const XSD::boolean_& _a_noChangeArrowheads_attr);
    const XSD::boolean_& get_a_noChangeArrowheads_attr() const;
    bool has_a_noChangeShapeType_attr() const;
    void set_a_noChangeShapeType_attr(const XSD::boolean_& _a_noChangeShapeType_attr);
    const XSD::boolean_& get_a_noChangeShapeType_attr() const;
protected:
private:
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_ContentPartLocking* default_instance_;
    bool m_has_a_noGrp_attr;
    XSD::boolean_ m_a_noGrp_attr;
    bool m_has_a_noSelect_attr;
    XSD::boolean_ m_a_noSelect_attr;
    bool m_has_a_noRot_attr;
    XSD::boolean_ m_a_noRot_attr;
    bool m_has_a_noChangeAspect_attr;
    XSD::boolean_ m_a_noChangeAspect_attr;
    bool m_has_a_noMove_attr;
    XSD::boolean_ m_a_noMove_attr;
    bool m_has_a_noResize_attr;
    XSD::boolean_ m_a_noResize_attr;
    bool m_has_a_noEditPoints_attr;
    XSD::boolean_ m_a_noEditPoints_attr;
    bool m_has_a_noAdjustHandles_attr;
    XSD::boolean_ m_a_noAdjustHandles_attr;
    bool m_has_a_noChangeArrowheads_attr;
    XSD::boolean_ m_a_noChangeArrowheads_attr;
    bool m_has_a_noChangeShapeType_attr;
    XSD::boolean_ m_a_noChangeShapeType_attr;
};

class CT_NonVisualInkContentPartProperties: public XSD::ComplexType
{
public:
    CT_NonVisualInkContentPartProperties();
    ~CT_NonVisualInkContentPartProperties();
    bool has_cpLocks() const;
    CT_ContentPartLocking* mutable_cpLocks();
    const CT_ContentPartLocking& get_cpLocks() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NonVisualInkContentPartProperties& default_instance();
    bool has_isComment_attr() const;
    void set_isComment_attr(const XSD::boolean_& _isComment_attr);
    const XSD::boolean_& get_isComment_attr() const;
protected:
private:
    bool m_has_cpLocks;
    CT_ContentPartLocking* m_cpLocks;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_NonVisualInkContentPartProperties* default_instance_;
    bool m_has_isComment_attr;
    XSD::boolean_ m_isComment_attr;
};

class CT_CameraTool: public XSD::ComplexType
{
public:
    CT_CameraTool();
    ~CT_CameraTool();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CameraTool& default_instance();
    bool has_cellRange_attr() const;
    void set_cellRange_attr(const XSD::string_& _cellRange_attr);
    const XSD::string_& get_cellRange_attr() const;
    bool has_spid_attr() const;
    void set_spid_attr(const XSD::string_& _spid_attr);
    const XSD::string_& get_spid_attr() const;
protected:
private:
    static CT_CameraTool* default_instance_;
    bool m_has_cellRange_attr;
    XSD::string_ m_cellRange_attr;
    bool m_has_spid_attr;
    XSD::string_ m_spid_attr;
};

class CT_CompatExt: public XSD::ComplexType
{
public:
    CT_CompatExt();
    ~CT_CompatExt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CompatExt& default_instance();
    bool has_spid_attr() const;
    void set_spid_attr(const XSD::string_& _spid_attr);
    const XSD::string_& get_spid_attr() const;
protected:
private:
    static CT_CompatExt* default_instance_;
    bool m_has_spid_attr;
    XSD::string_ m_spid_attr;
};

class CT_IsGvmlCanvas: public XSD::ComplexType
{
public:
    CT_IsGvmlCanvas();
    ~CT_IsGvmlCanvas();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_IsGvmlCanvas& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_IsGvmlCanvas* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_GvmlContentPartNonVisual: public XSD::ComplexType
{
public:
    CT_GvmlContentPartNonVisual();
    ~CT_GvmlContentPartNonVisual();
    bool has_cNvPr() const;
    ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
    const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
    bool has_cNvContentPartPr() const;
    CT_NonVisualInkContentPartProperties* mutable_cNvContentPartPr();
    const CT_NonVisualInkContentPartProperties& get_cNvContentPartPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_GvmlContentPartNonVisual& default_instance();
protected:
private:
    bool m_has_cNvPr;
    ns_a::CT_NonVisualDrawingProps* m_cNvPr;
    bool m_has_cNvContentPartPr;
    CT_NonVisualInkContentPartProperties* m_cNvContentPartPr;
    static CT_GvmlContentPartNonVisual* default_instance_;
};

class CT_GvmlContentPart: public XSD::ComplexType
{
public:
    CT_GvmlContentPart();
    ~CT_GvmlContentPart();
    bool has_nvContentPartPr() const;
    CT_GvmlContentPartNonVisual* mutable_nvContentPartPr();
    const CT_GvmlContentPartNonVisual& get_nvContentPartPr() const;
    bool has_xfrm() const;
    ns_a::CT_Transform2D* mutable_xfrm();
    const ns_a::CT_Transform2D& get_xfrm() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_GvmlContentPart& default_instance();
    bool has_bwMode_attr() const;
    void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr);
    const ns_a::ST_BlackWhiteMode& get_bwMode_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    bool m_has_nvContentPartPr;
    CT_GvmlContentPartNonVisual* m_nvContentPartPr;
    bool m_has_xfrm;
    ns_a::CT_Transform2D* m_xfrm;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static CT_GvmlContentPart* default_instance_;
    bool m_has_bwMode_attr;
    ns_a::ST_BlackWhiteMode* m_bwMode_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_ShadowObscured: public XSD::ComplexType
{
public:
    CT_ShadowObscured();
    ~CT_ShadowObscured();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ShadowObscured& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_ShadowObscured* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_PictureEffectBlur: public XSD::ComplexType
{
public:
    CT_PictureEffectBlur();
    ~CT_PictureEffectBlur();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectBlur& default_instance();
    bool has_radius_attr() const;
    void set_radius_attr(const ST_ArtisticEffectParam100& _radius_attr);
    const ST_ArtisticEffectParam100& get_radius_attr() const;
protected:
private:
    static CT_PictureEffectBlur* default_instance_;
    bool m_has_radius_attr;
    ST_ArtisticEffectParam100* m_radius_attr;
};

class CT_PictureEffectCement: public XSD::ComplexType
{
public:
    CT_PictureEffectCement();
    ~CT_PictureEffectCement();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectCement& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_crackSpacing_attr() const;
    void set_crackSpacing_attr(const ST_ArtisticEffectParam100& _crackSpacing_attr);
    const ST_ArtisticEffectParam100& get_crackSpacing_attr() const;
protected:
private:
    static CT_PictureEffectCement* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_crackSpacing_attr;
    ST_ArtisticEffectParam100* m_crackSpacing_attr;
};

class CT_PictureEffectChalkSketch: public XSD::ComplexType
{
public:
    CT_PictureEffectChalkSketch();
    ~CT_PictureEffectChalkSketch();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectChalkSketch& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pressure_attr() const;
    void set_pressure_attr(const ST_ArtisticEffectParam4& _pressure_attr);
    const ST_ArtisticEffectParam4& get_pressure_attr() const;
protected:
private:
    static CT_PictureEffectChalkSketch* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pressure_attr;
    ST_ArtisticEffectParam4* m_pressure_attr;
};

class CT_PictureEffectCrisscrossEtching: public XSD::ComplexType
{
public:
    CT_PictureEffectCrisscrossEtching();
    ~CT_PictureEffectCrisscrossEtching();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectCrisscrossEtching& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pressure_attr() const;
    void set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr);
    const ST_ArtisticEffectParam100& get_pressure_attr() const;
protected:
private:
    static CT_PictureEffectCrisscrossEtching* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pressure_attr;
    ST_ArtisticEffectParam100* m_pressure_attr;
};

class CT_PictureEffectCutout: public XSD::ComplexType
{
public:
    CT_PictureEffectCutout();
    ~CT_PictureEffectCutout();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectCutout& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_numberOfShades_attr() const;
    void set_numberOfShades_attr(const ST_ArtisticEffectParam6& _numberOfShades_attr);
    const ST_ArtisticEffectParam6& get_numberOfShades_attr() const;
protected:
private:
    static CT_PictureEffectCutout* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_numberOfShades_attr;
    ST_ArtisticEffectParam6* m_numberOfShades_attr;
};

class CT_PictureEffectFilmGrain: public XSD::ComplexType
{
public:
    CT_PictureEffectFilmGrain();
    ~CT_PictureEffectFilmGrain();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectFilmGrain& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_grainSize_attr() const;
    void set_grainSize_attr(const ST_ArtisticEffectParam100& _grainSize_attr);
    const ST_ArtisticEffectParam100& get_grainSize_attr() const;
protected:
private:
    static CT_PictureEffectFilmGrain* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_grainSize_attr;
    ST_ArtisticEffectParam100* m_grainSize_attr;
};

class CT_PictureEffectGlass: public XSD::ComplexType
{
public:
    CT_PictureEffectGlass();
    ~CT_PictureEffectGlass();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectGlass& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_scaling_attr() const;
    void set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr);
    const ST_ArtisticEffectParam100& get_scaling_attr() const;
protected:
private:
    static CT_PictureEffectGlass* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_scaling_attr;
    ST_ArtisticEffectParam100* m_scaling_attr;
};

class CT_PictureEffectGlowDiffused: public XSD::ComplexType
{
public:
    CT_PictureEffectGlowDiffused();
    ~CT_PictureEffectGlowDiffused();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectGlowDiffused& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_intensity_attr() const;
    void set_intensity_attr(const ST_ArtisticEffectParam10& _intensity_attr);
    const ST_ArtisticEffectParam10& get_intensity_attr() const;
protected:
private:
    static CT_PictureEffectGlowDiffused* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_intensity_attr;
    ST_ArtisticEffectParam10* m_intensity_attr;
};

class CT_PictureEffectGlowEdges: public XSD::ComplexType
{
public:
    CT_PictureEffectGlowEdges();
    ~CT_PictureEffectGlowEdges();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectGlowEdges& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_smoothness_attr() const;
    void set_smoothness_attr(const ST_ArtisticEffectParam10& _smoothness_attr);
    const ST_ArtisticEffectParam10& get_smoothness_attr() const;
protected:
private:
    static CT_PictureEffectGlowEdges* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_smoothness_attr;
    ST_ArtisticEffectParam10* m_smoothness_attr;
};

class CT_PictureEffectLightScreen: public XSD::ComplexType
{
public:
    CT_PictureEffectLightScreen();
    ~CT_PictureEffectLightScreen();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectLightScreen& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_gridSize_attr() const;
    void set_gridSize_attr(const ST_ArtisticEffectParam10& _gridSize_attr);
    const ST_ArtisticEffectParam10& get_gridSize_attr() const;
protected:
private:
    static CT_PictureEffectLightScreen* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_gridSize_attr;
    ST_ArtisticEffectParam10* m_gridSize_attr;
};

class CT_PictureEffectLineDrawing: public XSD::ComplexType
{
public:
    CT_PictureEffectLineDrawing();
    ~CT_PictureEffectLineDrawing();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectLineDrawing& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pencilSize_attr() const;
    void set_pencilSize_attr(const ST_ArtisticEffectParam100& _pencilSize_attr);
    const ST_ArtisticEffectParam100& get_pencilSize_attr() const;
protected:
private:
    static CT_PictureEffectLineDrawing* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pencilSize_attr;
    ST_ArtisticEffectParam100* m_pencilSize_attr;
};

class CT_PictureEffectMarker: public XSD::ComplexType
{
public:
    CT_PictureEffectMarker();
    ~CT_PictureEffectMarker();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectMarker& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_size_attr() const;
    void set_size_attr(const ST_ArtisticEffectParam100& _size_attr);
    const ST_ArtisticEffectParam100& get_size_attr() const;
protected:
private:
    static CT_PictureEffectMarker* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_size_attr;
    ST_ArtisticEffectParam100* m_size_attr;
};

class CT_PictureEffectMosiaicBubbles: public XSD::ComplexType
{
public:
    CT_PictureEffectMosiaicBubbles();
    ~CT_PictureEffectMosiaicBubbles();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectMosiaicBubbles& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pressure_attr() const;
    void set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr);
    const ST_ArtisticEffectParam100& get_pressure_attr() const;
protected:
private:
    static CT_PictureEffectMosiaicBubbles* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pressure_attr;
    ST_ArtisticEffectParam100* m_pressure_attr;
};

class CT_PictureEffectPaintBrush: public XSD::ComplexType
{
public:
    CT_PictureEffectPaintBrush();
    ~CT_PictureEffectPaintBrush();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPaintBrush& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_brushSize_attr() const;
    void set_brushSize_attr(const ST_ArtisticEffectParam10& _brushSize_attr);
    const ST_ArtisticEffectParam10& get_brushSize_attr() const;
protected:
private:
    static CT_PictureEffectPaintBrush* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_brushSize_attr;
    ST_ArtisticEffectParam10* m_brushSize_attr;
};

class CT_PictureEffectPaintStrokes: public XSD::ComplexType
{
public:
    CT_PictureEffectPaintStrokes();
    ~CT_PictureEffectPaintStrokes();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPaintStrokes& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_intensity_attr() const;
    void set_intensity_attr(const ST_ArtisticEffectParam10& _intensity_attr);
    const ST_ArtisticEffectParam10& get_intensity_attr() const;
protected:
private:
    static CT_PictureEffectPaintStrokes* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_intensity_attr;
    ST_ArtisticEffectParam10* m_intensity_attr;
};

class CT_PictureEffectPastelsSmooth: public XSD::ComplexType
{
public:
    CT_PictureEffectPastelsSmooth();
    ~CT_PictureEffectPastelsSmooth();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPastelsSmooth& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_scaling_attr() const;
    void set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr);
    const ST_ArtisticEffectParam100& get_scaling_attr() const;
protected:
private:
    static CT_PictureEffectPastelsSmooth* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_scaling_attr;
    ST_ArtisticEffectParam100* m_scaling_attr;
};

class CT_PictureEffectPencilGrayscale: public XSD::ComplexType
{
public:
    CT_PictureEffectPencilGrayscale();
    ~CT_PictureEffectPencilGrayscale();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPencilGrayscale& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pencilSize_attr() const;
    void set_pencilSize_attr(const ST_ArtisticEffectParam100& _pencilSize_attr);
    const ST_ArtisticEffectParam100& get_pencilSize_attr() const;
protected:
private:
    static CT_PictureEffectPencilGrayscale* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pencilSize_attr;
    ST_ArtisticEffectParam100* m_pencilSize_attr;
};

class CT_PictureEffectPencilSketch: public XSD::ComplexType
{
public:
    CT_PictureEffectPencilSketch();
    ~CT_PictureEffectPencilSketch();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPencilSketch& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_pressure_attr() const;
    void set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr);
    const ST_ArtisticEffectParam100& get_pressure_attr() const;
protected:
private:
    static CT_PictureEffectPencilSketch* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_pressure_attr;
    ST_ArtisticEffectParam100* m_pressure_attr;
};

class CT_PictureEffectPhotocopy: public XSD::ComplexType
{
public:
    CT_PictureEffectPhotocopy();
    ~CT_PictureEffectPhotocopy();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPhotocopy& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_detail_attr() const;
    void set_detail_attr(const ST_ArtisticEffectParam10& _detail_attr);
    const ST_ArtisticEffectParam10& get_detail_attr() const;
protected:
private:
    static CT_PictureEffectPhotocopy* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_detail_attr;
    ST_ArtisticEffectParam10* m_detail_attr;
};

class CT_PictureEffectPlasticWrap: public XSD::ComplexType
{
public:
    CT_PictureEffectPlasticWrap();
    ~CT_PictureEffectPlasticWrap();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectPlasticWrap& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_smoothness_attr() const;
    void set_smoothness_attr(const ST_ArtisticEffectParam10& _smoothness_attr);
    const ST_ArtisticEffectParam10& get_smoothness_attr() const;
protected:
private:
    static CT_PictureEffectPlasticWrap* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_smoothness_attr;
    ST_ArtisticEffectParam10* m_smoothness_attr;
};

class CT_PictureEffectTexturizer: public XSD::ComplexType
{
public:
    CT_PictureEffectTexturizer();
    ~CT_PictureEffectTexturizer();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectTexturizer& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_scaling_attr() const;
    void set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr);
    const ST_ArtisticEffectParam100& get_scaling_attr() const;
protected:
private:
    static CT_PictureEffectTexturizer* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_scaling_attr;
    ST_ArtisticEffectParam100* m_scaling_attr;
};

class CT_PictureEffectWatercolorSponge: public XSD::ComplexType
{
public:
    CT_PictureEffectWatercolorSponge();
    ~CT_PictureEffectWatercolorSponge();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectWatercolorSponge& default_instance();
    bool has_trans_attr() const;
    void set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr);
    const ns_a::ST_PositiveFixedPercentage& get_trans_attr() const;
    bool has_brushSize_attr() const;
    void set_brushSize_attr(const ST_ArtisticEffectParam10& _brushSize_attr);
    const ST_ArtisticEffectParam10& get_brushSize_attr() const;
protected:
private:
    static CT_PictureEffectWatercolorSponge* default_instance_;
    bool m_has_trans_attr;
    ns_a::ST_PositiveFixedPercentage* m_trans_attr;
    bool m_has_brushSize_attr;
    ST_ArtisticEffectParam10* m_brushSize_attr;
};

class CT_PictureEffectBackgroundRemovalForegroundMark: public XSD::ComplexType
{
public:
    CT_PictureEffectBackgroundRemovalForegroundMark();
    ~CT_PictureEffectBackgroundRemovalForegroundMark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectBackgroundRemovalForegroundMark& default_instance();
    bool has_x1_attr() const;
    void set_x1_attr(const ns_a::ST_PositiveFixedPercentage& _x1_attr);
    const ns_a::ST_PositiveFixedPercentage& get_x1_attr() const;
    bool has_y1_attr() const;
    void set_y1_attr(const ns_a::ST_PositiveFixedPercentage& _y1_attr);
    const ns_a::ST_PositiveFixedPercentage& get_y1_attr() const;
    bool has_x2_attr() const;
    void set_x2_attr(const ns_a::ST_PositiveFixedPercentage& _x2_attr);
    const ns_a::ST_PositiveFixedPercentage& get_x2_attr() const;
    bool has_y2_attr() const;
    void set_y2_attr(const ns_a::ST_PositiveFixedPercentage& _y2_attr);
    const ns_a::ST_PositiveFixedPercentage& get_y2_attr() const;
protected:
private:
    static CT_PictureEffectBackgroundRemovalForegroundMark* default_instance_;
    bool m_has_x1_attr;
    ns_a::ST_PositiveFixedPercentage* m_x1_attr;
    bool m_has_y1_attr;
    ns_a::ST_PositiveFixedPercentage* m_y1_attr;
    bool m_has_x2_attr;
    ns_a::ST_PositiveFixedPercentage* m_x2_attr;
    bool m_has_y2_attr;
    ns_a::ST_PositiveFixedPercentage* m_y2_attr;
};

class CT_PictureEffectBackgroundRemovalBackgroundMark: public XSD::ComplexType
{
public:
    CT_PictureEffectBackgroundRemovalBackgroundMark();
    ~CT_PictureEffectBackgroundRemovalBackgroundMark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectBackgroundRemovalBackgroundMark& default_instance();
    bool has_x1_attr() const;
    void set_x1_attr(const ns_a::ST_PositiveFixedPercentage& _x1_attr);
    const ns_a::ST_PositiveFixedPercentage& get_x1_attr() const;
    bool has_y1_attr() const;
    void set_y1_attr(const ns_a::ST_PositiveFixedPercentage& _y1_attr);
    const ns_a::ST_PositiveFixedPercentage& get_y1_attr() const;
    bool has_x2_attr() const;
    void set_x2_attr(const ns_a::ST_PositiveFixedPercentage& _x2_attr);
    const ns_a::ST_PositiveFixedPercentage& get_x2_attr() const;
    bool has_y2_attr() const;
    void set_y2_attr(const ns_a::ST_PositiveFixedPercentage& _y2_attr);
    const ns_a::ST_PositiveFixedPercentage& get_y2_attr() const;
protected:
private:
    static CT_PictureEffectBackgroundRemovalBackgroundMark* default_instance_;
    bool m_has_x1_attr;
    ns_a::ST_PositiveFixedPercentage* m_x1_attr;
    bool m_has_y1_attr;
    ns_a::ST_PositiveFixedPercentage* m_y1_attr;
    bool m_has_x2_attr;
    ns_a::ST_PositiveFixedPercentage* m_x2_attr;
    bool m_has_y2_attr;
    ns_a::ST_PositiveFixedPercentage* m_y2_attr;
};

class CT_PictureEffectBackgroundRemoval: public XSD::ComplexType
{
public:
    CT_PictureEffectBackgroundRemoval();
    ~CT_PictureEffectBackgroundRemoval();
    CT_PictureEffectBackgroundRemovalForegroundMark* add_foregroundMark();
    CT_PictureEffectBackgroundRemovalBackgroundMark* add_backgroundMark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectBackgroundRemoval& default_instance();
    bool has_t_attr() const;
    void set_t_attr(const ns_a::ST_PositiveFixedPercentage& _t_attr);
    const ns_a::ST_PositiveFixedPercentage& get_t_attr() const;
    bool has_b_attr() const;
    void set_b_attr(const ns_a::ST_PositiveFixedPercentage& _b_attr);
    const ns_a::ST_PositiveFixedPercentage& get_b_attr() const;
    bool has_l_attr() const;
    void set_l_attr(const ns_a::ST_PositiveFixedPercentage& _l_attr);
    const ns_a::ST_PositiveFixedPercentage& get_l_attr() const;
    bool has_r_attr() const;
    void set_r_attr(const ns_a::ST_PositiveFixedPercentage& _r_attr);
    const ns_a::ST_PositiveFixedPercentage& get_r_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_foregroundMark() const;
        CT_PictureEffectBackgroundRemovalForegroundMark* mutable_foregroundMark();
        const CT_PictureEffectBackgroundRemovalForegroundMark& get_foregroundMark() const;
    protected:
    private:
        bool m_has_foregroundMark;
        CT_PictureEffectBackgroundRemovalForegroundMark* m_foregroundMark;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_backgroundMark() const;
        CT_PictureEffectBackgroundRemovalBackgroundMark* mutable_backgroundMark();
        const CT_PictureEffectBackgroundRemovalBackgroundMark& get_backgroundMark() const;
    protected:
    private:
        bool m_has_backgroundMark;
        CT_PictureEffectBackgroundRemovalBackgroundMark* m_backgroundMark;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    static CT_PictureEffectBackgroundRemoval* default_instance_;
    bool m_has_t_attr;
    ns_a::ST_PositiveFixedPercentage* m_t_attr;
    bool m_has_b_attr;
    ns_a::ST_PositiveFixedPercentage* m_b_attr;
    bool m_has_l_attr;
    ns_a::ST_PositiveFixedPercentage* m_l_attr;
    bool m_has_r_attr;
    ns_a::ST_PositiveFixedPercentage* m_r_attr;
};

class CT_PictureEffectBrightnessContrast: public XSD::ComplexType
{
public:
    CT_PictureEffectBrightnessContrast();
    ~CT_PictureEffectBrightnessContrast();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectBrightnessContrast& default_instance();
    bool has_bright_attr() const;
    void set_bright_attr(const ns_a::ST_FixedPercentage& _bright_attr);
    const ns_a::ST_FixedPercentage& get_bright_attr() const;
    bool has_contrast_attr() const;
    void set_contrast_attr(const ns_a::ST_FixedPercentage& _contrast_attr);
    const ns_a::ST_FixedPercentage& get_contrast_attr() const;
protected:
private:
    static CT_PictureEffectBrightnessContrast* default_instance_;
    bool m_has_bright_attr;
    ns_a::ST_FixedPercentage* m_bright_attr;
    bool m_has_contrast_attr;
    ns_a::ST_FixedPercentage* m_contrast_attr;
};

class CT_PictureEffectColorTemperature: public XSD::ComplexType
{
public:
    CT_PictureEffectColorTemperature();
    ~CT_PictureEffectColorTemperature();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectColorTemperature& default_instance();
    bool has_colorTemp_attr() const;
    void set_colorTemp_attr(const ST_ColorTemperature& _colorTemp_attr);
    const ST_ColorTemperature& get_colorTemp_attr() const;
protected:
private:
    static CT_PictureEffectColorTemperature* default_instance_;
    bool m_has_colorTemp_attr;
    ST_ColorTemperature* m_colorTemp_attr;
};

class CT_PictureEffectSaturation: public XSD::ComplexType
{
public:
    CT_PictureEffectSaturation();
    ~CT_PictureEffectSaturation();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectSaturation& default_instance();
    bool has_sat_attr() const;
    void set_sat_attr(const ST_SaturationAmount& _sat_attr);
    const ST_SaturationAmount& get_sat_attr() const;
protected:
private:
    static CT_PictureEffectSaturation* default_instance_;
    bool m_has_sat_attr;
    ST_SaturationAmount* m_sat_attr;
};

class CT_PictureEffectSharpenSoften: public XSD::ComplexType
{
public:
    CT_PictureEffectSharpenSoften();
    ~CT_PictureEffectSharpenSoften();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffectSharpenSoften& default_instance();
    bool has_amount_attr() const;
    void set_amount_attr(const ns_a::ST_FixedPercentage& _amount_attr);
    const ns_a::ST_FixedPercentage& get_amount_attr() const;
protected:
private:
    static CT_PictureEffectSharpenSoften* default_instance_;
    bool m_has_amount_attr;
    ns_a::ST_FixedPercentage* m_amount_attr;
};

class CT_PictureEffect: public XSD::ComplexType
{
public:
    CT_PictureEffect();
    ~CT_PictureEffect();
    bool has_artisticBlur() const;
    CT_PictureEffectBlur* mutable_artisticBlur();
    const CT_PictureEffectBlur& get_artisticBlur() const;
    bool has_artisticCement() const;
    CT_PictureEffectCement* mutable_artisticCement();
    const CT_PictureEffectCement& get_artisticCement() const;
    bool has_artisticChalkSketch() const;
    CT_PictureEffectChalkSketch* mutable_artisticChalkSketch();
    const CT_PictureEffectChalkSketch& get_artisticChalkSketch() const;
    bool has_artisticCrisscrossEtching() const;
    CT_PictureEffectCrisscrossEtching* mutable_artisticCrisscrossEtching();
    const CT_PictureEffectCrisscrossEtching& get_artisticCrisscrossEtching() const;
    bool has_artisticCutout() const;
    CT_PictureEffectCutout* mutable_artisticCutout();
    const CT_PictureEffectCutout& get_artisticCutout() const;
    bool has_artisticFilmGrain() const;
    CT_PictureEffectFilmGrain* mutable_artisticFilmGrain();
    const CT_PictureEffectFilmGrain& get_artisticFilmGrain() const;
    bool has_artisticGlass() const;
    CT_PictureEffectGlass* mutable_artisticGlass();
    const CT_PictureEffectGlass& get_artisticGlass() const;
    bool has_artisticGlowDiffused() const;
    CT_PictureEffectGlowDiffused* mutable_artisticGlowDiffused();
    const CT_PictureEffectGlowDiffused& get_artisticGlowDiffused() const;
    bool has_artisticGlowEdges() const;
    CT_PictureEffectGlowEdges* mutable_artisticGlowEdges();
    const CT_PictureEffectGlowEdges& get_artisticGlowEdges() const;
    bool has_artisticLightScreen() const;
    CT_PictureEffectLightScreen* mutable_artisticLightScreen();
    const CT_PictureEffectLightScreen& get_artisticLightScreen() const;
    bool has_artisticLineDrawing() const;
    CT_PictureEffectLineDrawing* mutable_artisticLineDrawing();
    const CT_PictureEffectLineDrawing& get_artisticLineDrawing() const;
    bool has_artisticMarker() const;
    CT_PictureEffectMarker* mutable_artisticMarker();
    const CT_PictureEffectMarker& get_artisticMarker() const;
    bool has_artisticMosiaicBubbles() const;
    CT_PictureEffectMosiaicBubbles* mutable_artisticMosiaicBubbles();
    const CT_PictureEffectMosiaicBubbles& get_artisticMosiaicBubbles() const;
    bool has_artisticPaintStrokes() const;
    CT_PictureEffectPaintStrokes* mutable_artisticPaintStrokes();
    const CT_PictureEffectPaintStrokes& get_artisticPaintStrokes() const;
    bool has_artisticPaintBrush() const;
    CT_PictureEffectPaintBrush* mutable_artisticPaintBrush();
    const CT_PictureEffectPaintBrush& get_artisticPaintBrush() const;
    bool has_artisticPastelsSmooth() const;
    CT_PictureEffectPastelsSmooth* mutable_artisticPastelsSmooth();
    const CT_PictureEffectPastelsSmooth& get_artisticPastelsSmooth() const;
    bool has_artisticPencilGrayscale() const;
    CT_PictureEffectPencilGrayscale* mutable_artisticPencilGrayscale();
    const CT_PictureEffectPencilGrayscale& get_artisticPencilGrayscale() const;
    bool has_artisticPencilSketch() const;
    CT_PictureEffectPencilSketch* mutable_artisticPencilSketch();
    const CT_PictureEffectPencilSketch& get_artisticPencilSketch() const;
    bool has_artisticPhotocopy() const;
    CT_PictureEffectPhotocopy* mutable_artisticPhotocopy();
    const CT_PictureEffectPhotocopy& get_artisticPhotocopy() const;
    bool has_artisticPlasticWrap() const;
    CT_PictureEffectPlasticWrap* mutable_artisticPlasticWrap();
    const CT_PictureEffectPlasticWrap& get_artisticPlasticWrap() const;
    bool has_artisticTexturizer() const;
    CT_PictureEffectTexturizer* mutable_artisticTexturizer();
    const CT_PictureEffectTexturizer& get_artisticTexturizer() const;
    bool has_artisticWatercolorSponge() const;
    CT_PictureEffectWatercolorSponge* mutable_artisticWatercolorSponge();
    const CT_PictureEffectWatercolorSponge& get_artisticWatercolorSponge() const;
    bool has_backgroundRemoval() const;
    CT_PictureEffectBackgroundRemoval* mutable_backgroundRemoval();
    const CT_PictureEffectBackgroundRemoval& get_backgroundRemoval() const;
    bool has_brightnessContrast() const;
    CT_PictureEffectBrightnessContrast* mutable_brightnessContrast();
    const CT_PictureEffectBrightnessContrast& get_brightnessContrast() const;
    bool has_colorTemperature() const;
    CT_PictureEffectColorTemperature* mutable_colorTemperature();
    const CT_PictureEffectColorTemperature& get_colorTemperature() const;
    bool has_saturation() const;
    CT_PictureEffectSaturation* mutable_saturation();
    const CT_PictureEffectSaturation& get_saturation() const;
    bool has_sharpenSoften() const;
    CT_PictureEffectSharpenSoften* mutable_sharpenSoften();
    const CT_PictureEffectSharpenSoften& get_sharpenSoften() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureEffect& default_instance();
    bool has_visible_attr() const;
    void set_visible_attr(const XSD::boolean_& _visible_attr);
    const XSD::boolean_& get_visible_attr() const;
protected:
private:
    bool m_has_artisticBlur;
    CT_PictureEffectBlur* m_artisticBlur;
    bool m_has_artisticCement;
    CT_PictureEffectCement* m_artisticCement;
    bool m_has_artisticChalkSketch;
    CT_PictureEffectChalkSketch* m_artisticChalkSketch;
    bool m_has_artisticCrisscrossEtching;
    CT_PictureEffectCrisscrossEtching* m_artisticCrisscrossEtching;
    bool m_has_artisticCutout;
    CT_PictureEffectCutout* m_artisticCutout;
    bool m_has_artisticFilmGrain;
    CT_PictureEffectFilmGrain* m_artisticFilmGrain;
    bool m_has_artisticGlass;
    CT_PictureEffectGlass* m_artisticGlass;
    bool m_has_artisticGlowDiffused;
    CT_PictureEffectGlowDiffused* m_artisticGlowDiffused;
    bool m_has_artisticGlowEdges;
    CT_PictureEffectGlowEdges* m_artisticGlowEdges;
    bool m_has_artisticLightScreen;
    CT_PictureEffectLightScreen* m_artisticLightScreen;
    bool m_has_artisticLineDrawing;
    CT_PictureEffectLineDrawing* m_artisticLineDrawing;
    bool m_has_artisticMarker;
    CT_PictureEffectMarker* m_artisticMarker;
    bool m_has_artisticMosiaicBubbles;
    CT_PictureEffectMosiaicBubbles* m_artisticMosiaicBubbles;
    bool m_has_artisticPaintStrokes;
    CT_PictureEffectPaintStrokes* m_artisticPaintStrokes;
    bool m_has_artisticPaintBrush;
    CT_PictureEffectPaintBrush* m_artisticPaintBrush;
    bool m_has_artisticPastelsSmooth;
    CT_PictureEffectPastelsSmooth* m_artisticPastelsSmooth;
    bool m_has_artisticPencilGrayscale;
    CT_PictureEffectPencilGrayscale* m_artisticPencilGrayscale;
    bool m_has_artisticPencilSketch;
    CT_PictureEffectPencilSketch* m_artisticPencilSketch;
    bool m_has_artisticPhotocopy;
    CT_PictureEffectPhotocopy* m_artisticPhotocopy;
    bool m_has_artisticPlasticWrap;
    CT_PictureEffectPlasticWrap* m_artisticPlasticWrap;
    bool m_has_artisticTexturizer;
    CT_PictureEffectTexturizer* m_artisticTexturizer;
    bool m_has_artisticWatercolorSponge;
    CT_PictureEffectWatercolorSponge* m_artisticWatercolorSponge;
    bool m_has_backgroundRemoval;
    CT_PictureEffectBackgroundRemoval* m_backgroundRemoval;
    bool m_has_brightnessContrast;
    CT_PictureEffectBrightnessContrast* m_brightnessContrast;
    bool m_has_colorTemperature;
    CT_PictureEffectColorTemperature* m_colorTemperature;
    bool m_has_saturation;
    CT_PictureEffectSaturation* m_saturation;
    bool m_has_sharpenSoften;
    CT_PictureEffectSharpenSoften* m_sharpenSoften;
    static CT_PictureEffect* default_instance_;
    bool m_has_visible_attr;
    XSD::boolean_ m_visible_attr;
};

class CT_PictureLayer: public XSD::ComplexType
{
public:
    CT_PictureLayer();
    ~CT_PictureLayer();
    CT_PictureEffect* add_imgEffect();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureLayer& default_instance();
    bool has_r_embed_attr() const;
    void set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr);
    const ns_r::ST_RelationshipId& get_r_embed_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_imgEffect() const;
        CT_PictureEffect* mutable_imgEffect();
        const CT_PictureEffect& get_imgEffect() const;
    protected:
    private:
        bool m_has_imgEffect;
        CT_PictureEffect* m_imgEffect;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_PictureLayer* default_instance_;
    bool m_has_r_embed_attr;
    ns_r::ST_RelationshipId* m_r_embed_attr;
};

class CT_Photo: public XSD::ComplexType
{
public:
    CT_Photo();
    ~CT_Photo();
    bool has_imgLayer() const;
    CT_PictureLayer* mutable_imgLayer();
    const CT_PictureLayer& get_imgLayer() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Photo& default_instance();
protected:
private:
    bool m_has_imgLayer;
    CT_PictureLayer* m_imgLayer;
    static CT_Photo* default_instance_;
};

class CT_UseLocalDpi: public XSD::ComplexType
{
public:
    CT_UseLocalDpi();
    ~CT_UseLocalDpi();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_UseLocalDpi& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_UseLocalDpi* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class m_element: public Element
{
public:
    m_element();
    ~m_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const m_element& default_instance();
protected:
private:
    static m_element* default_instance_;
};

class cameraTool_element: public Element
{
public:
    cameraTool_element();
    ~cameraTool_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const cameraTool_element& default_instance();
    bool has_cellRange_attr() const;
    void set_cellRange_attr(const XSD::string_& _cellRange_attr);
    const XSD::string_& get_cellRange_attr() const;
    bool has_spid_attr() const;
    void set_spid_attr(const XSD::string_& _spid_attr);
    const XSD::string_& get_spid_attr() const;
protected:
private:
    static cameraTool_element* default_instance_;
    bool m_has_cellRange_attr;
    XSD::string_ m_cellRange_attr;
    bool m_has_spid_attr;
    XSD::string_ m_spid_attr;
};

class compatExt_element: public Element
{
public:
    compatExt_element();
    ~compatExt_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const compatExt_element& default_instance();
    bool has_spid_attr() const;
    void set_spid_attr(const XSD::string_& _spid_attr);
    const XSD::string_& get_spid_attr() const;
protected:
private:
    static compatExt_element* default_instance_;
    bool m_has_spid_attr;
    XSD::string_ m_spid_attr;
};

class isCanvas_element: public Element
{
public:
    isCanvas_element();
    ~isCanvas_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const isCanvas_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static isCanvas_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class contentPart_element: public Element
{
public:
    contentPart_element();
    ~contentPart_element();
    bool has_nvContentPartPr() const;
    CT_GvmlContentPartNonVisual* mutable_nvContentPartPr();
    const CT_GvmlContentPartNonVisual& get_nvContentPartPr() const;
    bool has_xfrm() const;
    ns_a::CT_Transform2D* mutable_xfrm();
    const ns_a::CT_Transform2D& get_xfrm() const;
    bool has_extLst() const;
    ns_a::CT_OfficeArtExtensionList* mutable_extLst();
    const ns_a::CT_OfficeArtExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const contentPart_element& default_instance();
    bool has_bwMode_attr() const;
    void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr);
    const ns_a::ST_BlackWhiteMode& get_bwMode_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    bool m_has_nvContentPartPr;
    CT_GvmlContentPartNonVisual* m_nvContentPartPr;
    bool m_has_xfrm;
    ns_a::CT_Transform2D* m_xfrm;
    bool m_has_extLst;
    ns_a::CT_OfficeArtExtensionList* m_extLst;
    static contentPart_element* default_instance_;
    bool m_has_bwMode_attr;
    ns_a::ST_BlackWhiteMode* m_bwMode_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class shadowObscured_element: public Element
{
public:
    shadowObscured_element();
    ~shadowObscured_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const shadowObscured_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static shadowObscured_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class hiddenFill_element: public Element
{
public:
protected:
private:
};

class hiddenLine_element: public Element
{
public:
protected:
private:
};

class hiddenEffects_element: public Element
{
public:
protected:
private:
};

class hiddenScene3d_element: public Element
{
public:
protected:
private:
};

class hiddenSp3d_element: public Element
{
public:
protected:
private:
};

class imgProps_element: public Element
{
public:
    imgProps_element();
    ~imgProps_element();
    bool has_imgLayer() const;
    CT_PictureLayer* mutable_imgLayer();
    const CT_PictureLayer& get_imgLayer() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const imgProps_element& default_instance();
protected:
private:
    bool m_has_imgLayer;
    CT_PictureLayer* m_imgLayer;
    static imgProps_element* default_instance_;
};

class useLocalDpi_element: public Element
{
public:
    useLocalDpi_element();
    ~useLocalDpi_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const useLocalDpi_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static useLocalDpi_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class legacySpreadsheetColorIndex_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

}
#endif