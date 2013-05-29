namespace ns_p {
    class Element;
    class Attribute;
    class ST_TransitionSideDirectionType;
    class ST_TransitionCornerDirectionType;
    class ST_TransitionInOutDirectionType;
    class ST_TransitionEightDirectionType;
    class ST_TransitionSpeed;
    class ST_TLTimeIndefinite;
    class ST_TLTime;
    class ST_TLTimeNodeID;
    class ST_IterateType;
    class ST_TLChartSubelementType;
    class ST_TLTriggerRuntimeNode;
    class ST_TLTriggerEvent;
    class ST_TLTimeNodePresetClassType;
    class ST_TLTimeNodeRestartType;
    class ST_TLTimeNodeFillType;
    class ST_TLTimeNodeSyncType;
    class ST_TLTimeNodeMasterRelation;
    class ST_TLTimeNodeType;
    class ST_TLNextActionType;
    class ST_TLPreviousActionType;
    class ST_TLBehaviorAdditiveType;
    class ST_TLBehaviorAccumulateType;
    class ST_TLBehaviorTransformType;
    class ST_TLBehaviorOverrideType;
    class ST_TLTimeAnimateValueTime;
    class ST_TLAnimateBehaviorCalcMode;
    class ST_TLAnimateBehaviorValueType;
    class ST_TLAnimateColorSpace;
    class ST_TLAnimateColorDirection;
    class ST_TLAnimateEffectTransition;
    class ST_TLAnimateMotionBehaviorOrigin;
    class ST_TLAnimateMotionPathEditMode;
    class ST_TLCommandType;
    class ST_TLParaBuildType;
    class ST_TLDiagramBuildType;
    class ST_TLOleChartBuildType;
    class ST_Name;
    class ST_Direction;
    class ST_Index;
    class ST_OleObjectFollowColorScheme;
    class ST_SlideId;
    class ST_SlideMasterId;
    class ST_PhotoAlbumLayout;
    class ST_PhotoAlbumFrameShape;
    class ST_SlideSizeCoordinate;
    class ST_SlideSizeType;
    class ST_BookmarkIdSeed;
    class ST_WebColorType;
    class ST_WebScreenSize;
    class ST_WebEncoding;
    class ST_PrintWhat;
    class ST_PrintColorMode;
    class ST_PlaceholderType;
    class ST_PlaceholderSize;
    class ST_SlideLayoutType;
    class ST_SlideLayoutId;
    class ST_SplitterBarState;
    class ST_ViewType;
    class CT_SideDirectionTransition;
    class CT_CornerDirectionTransition;
    class CT_EightDirectionTransition;
    class CT_OrientationTransition;
    class CT_InOutTransition;
    class CT_OptionalBlackTransition;
    class CT_SplitTransition;
    class CT_WheelTransition;
    class CT_TransitionStartSoundAction;
    class CT_TransitionSoundAction;
    class CT_SlideTransition;
    class CT_TLIterateIntervalTime;
    class CT_TLIterateIntervalPercentage;
    class CT_TLIterateData;
    class CT_TLSubShapeId;
    class CT_TLTextTargetElement;
    class CT_TLOleChartTargetElement;
    class CT_TLShapeTargetElement;
    class CT_TLTimeTargetElement;
    class CT_TLTriggerTimeNodeID;
    class CT_TLTriggerRuntimeNode;
    class CT_TLTimeCondition;
    class CT_TLTimeConditionList;
    class CT_TimeNodeList;
    class CT_TLCommonTimeNodeData;
    class CT_TLTimeNodeParallel;
    class CT_TLTimeNodeSequence;
    class CT_TLTimeNodeExclusive;
    class CT_TLBehaviorAttributeNameList;
    class CT_TLCommonBehaviorData;
    class CT_TLAnimVariantBooleanVal;
    class CT_TLAnimVariantIntegerVal;
    class CT_TLAnimVariantFloatVal;
    class CT_TLAnimVariantStringVal;
    class CT_TLAnimVariant;
    class CT_TLTimeAnimateValue;
    class CT_TLTimeAnimateValueList;
    class CT_TLAnimateBehavior;
    class CT_TLByRgbColorTransform;
    class CT_TLByHslColorTransform;
    class CT_TLByAnimateColorTransform;
    class CT_TLAnimateColorBehavior;
    class CT_TLAnimateEffectBehavior;
    class CT_TLPoint;
    class CT_TLAnimateMotionBehavior;
    class CT_TLAnimateRotationBehavior;
    class CT_TLAnimateScaleBehavior;
    class CT_TLCommandBehavior;
    class CT_TLSetBehavior;
    class CT_TLCommonMediaNodeData;
    class CT_TLMediaNodeAudio;
    class CT_TLMediaNodeVideo;
    class CT_TLTemplate;
    class CT_TLTemplateList;
    class CT_TLBuildParagraph;
    class CT_TLBuildDiagram;
    class CT_TLOleBuildChart;
    class CT_TLGraphicalObjectBuild;
    class CT_BuildList;
    class CT_SlideTiming;
    class CT_Empty;
    class CT_IndexRange;
    class CT_SlideRelationshipListEntry;
    class CT_SlideRelationshipList;
    class CT_CustomShowId;
    class CT_CustomerData;
    class CT_TagsData;
    class CT_CustomerDataList;
    class CT_Extension;
    class CT_ExtensionList;
    class CT_ExtensionListModify;
    class CT_CommentAuthor;
    class CT_CommentAuthorList;
    class CT_Comment;
    class CT_CommentList;
    class CT_OleObjectEmbed;
    class CT_OleObjectLink;
    class CT_OleObject;
    class CT_Control;
    class CT_ControlList;
    class CT_SlideIdListEntry;
    class CT_SlideIdList;
    class CT_SlideMasterIdListEntry;
    class CT_SlideMasterIdList;
    class CT_NotesMasterIdListEntry;
    class CT_NotesMasterIdList;
    class CT_HandoutMasterIdListEntry;
    class CT_HandoutMasterIdList;
    class CT_EmbeddedFontDataId;
    class CT_EmbeddedFontListEntry;
    class CT_EmbeddedFontList;
    class CT_SmartTags;
    class CT_CustomShow;
    class CT_CustomShowList;
    class CT_PhotoAlbum;
    class CT_SlideSize;
    class CT_Kinsoku;
    class CT_ModifyVerifier;
    class CT_Presentation;
    class CT_HtmlPublishProperties;
    class CT_WebProperties;
    class CT_PrintProperties;
    class CT_ShowInfoBrowse;
    class CT_ShowInfoKiosk;
    class CT_ShowProperties;
    class CT_PresentationProperties;
    class CT_HeaderFooter;
    class CT_Placeholder;
    class CT_ApplicationNonVisualDrawingProps;
    class CT_ShapeNonVisual;
    class CT_Shape;
    class CT_ConnectorNonVisual;
    class CT_Connector;
    class CT_PictureNonVisual;
    class CT_Picture;
    class CT_GraphicalObjectFrameNonVisual;
    class CT_GraphicalObjectFrame;
    class CT_GroupShapeNonVisual;
    class CT_GroupShape;
    class CT_Rel;
    class CT_BackgroundProperties;
    class CT_Background;
    class CT_CommonSlideData;
    class CT_Slide;
    class CT_SlideLayout;
    class CT_SlideMasterTextStyles;
    class CT_SlideLayoutIdListEntry;
    class CT_SlideLayoutIdList;
    class CT_SlideMaster;
    class CT_HandoutMaster;
    class CT_NotesMaster;
    class CT_NotesSlide;
    class CT_SlideSyncProperties;
    class CT_StringTag;
    class CT_TagList;
    class CT_NormalViewPortion;
    class CT_NormalViewProperties;
    class CT_CommonViewProperties;
    class CT_NotesTextViewProperties;
    class CT_OutlineViewSlideEntry;
    class CT_OutlineViewSlideList;
    class CT_OutlineViewProperties;
    class CT_SlideSorterViewProperties;
    class CT_Guide;
    class CT_GuideList;
    class CT_CommonSlideViewProperties;
    class CT_SlideViewProperties;
    class CT_NotesViewProperties;
    class CT_ViewProperties;
    class cmAuthorLst_element;
    class cmLst_element;
    class oleObj_element;
    class presentation_element;
    class presentationPr_element;
    class sld_element;
    class sldLayout_element;
    class sldMaster_element;
    class handoutMaster_element;
    class notesMaster_element;
    class notes_element;
    class sldSyncPr_element;
    class tagLst_element;
    class viewPr_element;
}
#ifndef __pml_xsd_
#define __pml_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_p {
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

    class ST_TransitionSideDirectionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _l_ = 0,
            _u_,
            _r_,
            _d_
        };
        ST_TransitionSideDirectionType();
        ST_TransitionSideDirectionType(const ST_TransitionSideDirectionType::Type& _type);
        ~ST_TransitionSideDirectionType();
        bool has_type() const;
        void set_type(const ST_TransitionSideDirectionType::Type& _type);
        const ST_TransitionSideDirectionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TransitionSideDirectionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TransitionSideDirectionType* default_instance_;
        bool m_has_type;
        ST_TransitionSideDirectionType::Type m_type;
    };

    class ST_TransitionCornerDirectionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _lu_ = 0,
            _ru_,
            _ld_,
            _rd_
        };
        ST_TransitionCornerDirectionType();
        ST_TransitionCornerDirectionType(const ST_TransitionCornerDirectionType::Type& _type);
        ~ST_TransitionCornerDirectionType();
        bool has_type() const;
        void set_type(const ST_TransitionCornerDirectionType::Type& _type);
        const ST_TransitionCornerDirectionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TransitionCornerDirectionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TransitionCornerDirectionType* default_instance_;
        bool m_has_type;
        ST_TransitionCornerDirectionType::Type m_type;
    };

    class ST_TransitionInOutDirectionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _out_ = 0,
            _in_
        };
        ST_TransitionInOutDirectionType();
        ST_TransitionInOutDirectionType(const ST_TransitionInOutDirectionType::Type& _type);
        ~ST_TransitionInOutDirectionType();
        bool has_type() const;
        void set_type(const ST_TransitionInOutDirectionType::Type& _type);
        const ST_TransitionInOutDirectionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TransitionInOutDirectionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TransitionInOutDirectionType* default_instance_;
        bool m_has_type;
        ST_TransitionInOutDirectionType::Type m_type;
    };

    class ST_TransitionEightDirectionType: public XSD::SimpleType
    {
    public:
        ST_TransitionEightDirectionType();
        ST_TransitionEightDirectionType(const ST_TransitionEightDirectionType& _ST_TransitionEightDirectionType);
        ~ST_TransitionEightDirectionType();
        bool has_ST_TransitionSideDirectionType() const;
        ST_TransitionSideDirectionType* mutable_ST_TransitionSideDirectionType();
        const ST_TransitionSideDirectionType& get_ST_TransitionSideDirectionType() const;
        void clear_ST_TransitionSideDirectionType();
        bool has_ST_TransitionCornerDirectionType() const;
        ST_TransitionCornerDirectionType* mutable_ST_TransitionCornerDirectionType();
        const ST_TransitionCornerDirectionType& get_ST_TransitionCornerDirectionType() const;
        void clear_ST_TransitionCornerDirectionType();
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TransitionEightDirectionType& default_instance();
    protected:
    private:
        bool m_has_ST_TransitionSideDirectionType;
        ST_TransitionSideDirectionType* m_ST_TransitionSideDirectionType;
        bool m_has_ST_TransitionCornerDirectionType;
        ST_TransitionCornerDirectionType* m_ST_TransitionCornerDirectionType;
        static ST_TransitionEightDirectionType* default_instance_;
    };

    class ST_TransitionSpeed: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _slow_ = 0,
            _med_,
            _fast_
        };
        ST_TransitionSpeed();
        ST_TransitionSpeed(const ST_TransitionSpeed::Type& _type);
        ~ST_TransitionSpeed();
        bool has_type() const;
        void set_type(const ST_TransitionSpeed::Type& _type);
        const ST_TransitionSpeed::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TransitionSpeed& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TransitionSpeed* default_instance_;
        bool m_has_type;
        ST_TransitionSpeed::Type m_type;
    };

    class ST_TLTimeIndefinite: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _indefinite_ = 0
        };
        ST_TLTimeIndefinite();
        ST_TLTimeIndefinite(const ST_TLTimeIndefinite::Type& _type);
        ~ST_TLTimeIndefinite();
        bool has_type() const;
        void set_type(const ST_TLTimeIndefinite::Type& _type);
        const ST_TLTimeIndefinite::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeIndefinite& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeIndefinite* default_instance_;
        bool m_has_type;
        ST_TLTimeIndefinite::Type m_type;
    };

    class ST_TLTime: public XSD::SimpleType
    {
    public:
        ST_TLTime();
        ST_TLTime(const ST_TLTime& _ST_TLTime);
        ~ST_TLTime();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear_unsignedInt();
        bool has_ST_TLTimeIndefinite() const;
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite();
        const ST_TLTimeIndefinite& get_ST_TLTimeIndefinite() const;
        void clear_ST_TLTimeIndefinite();
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTime& default_instance();
    protected:
    private:
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
        bool m_has_ST_TLTimeIndefinite;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite;
        static ST_TLTime* default_instance_;
    };

    class ST_TLTimeNodeID: public XSD::SimpleType
    {
    public:
        ST_TLTimeNodeID();
        ST_TLTimeNodeID(const XSD::unsignedInt_& _unsignedInt);
        ~ST_TLTimeNodeID();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeID& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_TLTimeNodeID* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_IterateType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _el_ = 0,
            _wd_,
            _lt_
        };
        ST_IterateType();
        ST_IterateType(const ST_IterateType::Type& _type);
        ~ST_IterateType();
        bool has_type() const;
        void set_type(const ST_IterateType::Type& _type);
        const ST_IterateType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_IterateType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_IterateType* default_instance_;
        bool m_has_type;
        ST_IterateType::Type m_type;
    };

    class ST_TLChartSubelementType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _gridLegend_ = 0,
            _series_,
            _category_,
            _ptInSeries_,
            _ptInCategory_
        };
        ST_TLChartSubelementType();
        ST_TLChartSubelementType(const ST_TLChartSubelementType::Type& _type);
        ~ST_TLChartSubelementType();
        bool has_type() const;
        void set_type(const ST_TLChartSubelementType::Type& _type);
        const ST_TLChartSubelementType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLChartSubelementType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLChartSubelementType* default_instance_;
        bool m_has_type;
        ST_TLChartSubelementType::Type m_type;
    };

    class ST_TLTriggerRuntimeNode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _first_ = 0,
            _last_,
            _all_
        };
        ST_TLTriggerRuntimeNode();
        ST_TLTriggerRuntimeNode(const ST_TLTriggerRuntimeNode::Type& _type);
        ~ST_TLTriggerRuntimeNode();
        bool has_type() const;
        void set_type(const ST_TLTriggerRuntimeNode::Type& _type);
        const ST_TLTriggerRuntimeNode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTriggerRuntimeNode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTriggerRuntimeNode* default_instance_;
        bool m_has_type;
        ST_TLTriggerRuntimeNode::Type m_type;
    };

    class ST_TLTriggerEvent: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _onBegin_ = 0,
            _onEnd_,
            _begin_,
            _end_,
            _onClick_,
            _onDblClick_,
            _onMouseOver_,
            _onMouseOut_,
            _onNext_,
            _onPrev_,
            _onStopAudio_
        };
        ST_TLTriggerEvent();
        ST_TLTriggerEvent(const ST_TLTriggerEvent::Type& _type);
        ~ST_TLTriggerEvent();
        bool has_type() const;
        void set_type(const ST_TLTriggerEvent::Type& _type);
        const ST_TLTriggerEvent::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTriggerEvent& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTriggerEvent* default_instance_;
        bool m_has_type;
        ST_TLTriggerEvent::Type m_type;
    };

    class ST_TLTimeNodePresetClassType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _entr_ = 0,
            _exit_,
            _emph_,
            _path_,
            _verb_,
            _mediacall_
        };
        ST_TLTimeNodePresetClassType();
        ST_TLTimeNodePresetClassType(const ST_TLTimeNodePresetClassType::Type& _type);
        ~ST_TLTimeNodePresetClassType();
        bool has_type() const;
        void set_type(const ST_TLTimeNodePresetClassType::Type& _type);
        const ST_TLTimeNodePresetClassType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodePresetClassType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodePresetClassType* default_instance_;
        bool m_has_type;
        ST_TLTimeNodePresetClassType::Type m_type;
    };

    class ST_TLTimeNodeRestartType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _always_ = 0,
            _whenNotActive_,
            _never_
        };
        ST_TLTimeNodeRestartType();
        ST_TLTimeNodeRestartType(const ST_TLTimeNodeRestartType::Type& _type);
        ~ST_TLTimeNodeRestartType();
        bool has_type() const;
        void set_type(const ST_TLTimeNodeRestartType::Type& _type);
        const ST_TLTimeNodeRestartType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeRestartType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodeRestartType* default_instance_;
        bool m_has_type;
        ST_TLTimeNodeRestartType::Type m_type;
    };

    class ST_TLTimeNodeFillType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _remove_ = 0,
            _freeze_,
            _hold_,
            _transition_
        };
        ST_TLTimeNodeFillType();
        ST_TLTimeNodeFillType(const ST_TLTimeNodeFillType::Type& _type);
        ~ST_TLTimeNodeFillType();
        bool has_type() const;
        void set_type(const ST_TLTimeNodeFillType::Type& _type);
        const ST_TLTimeNodeFillType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeFillType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodeFillType* default_instance_;
        bool m_has_type;
        ST_TLTimeNodeFillType::Type m_type;
    };

    class ST_TLTimeNodeSyncType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _canSlip_ = 0,
            _locked_
        };
        ST_TLTimeNodeSyncType();
        ST_TLTimeNodeSyncType(const ST_TLTimeNodeSyncType::Type& _type);
        ~ST_TLTimeNodeSyncType();
        bool has_type() const;
        void set_type(const ST_TLTimeNodeSyncType::Type& _type);
        const ST_TLTimeNodeSyncType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeSyncType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodeSyncType* default_instance_;
        bool m_has_type;
        ST_TLTimeNodeSyncType::Type m_type;
    };

    class ST_TLTimeNodeMasterRelation: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _sameClick_ = 0,
            _lastClick_,
            _nextClick_
        };
        ST_TLTimeNodeMasterRelation();
        ST_TLTimeNodeMasterRelation(const ST_TLTimeNodeMasterRelation::Type& _type);
        ~ST_TLTimeNodeMasterRelation();
        bool has_type() const;
        void set_type(const ST_TLTimeNodeMasterRelation::Type& _type);
        const ST_TLTimeNodeMasterRelation::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeMasterRelation& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodeMasterRelation* default_instance_;
        bool m_has_type;
        ST_TLTimeNodeMasterRelation::Type m_type;
    };

    class ST_TLTimeNodeType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _clickEffect_ = 0,
            _withEffect_,
            _afterEffect_,
            _mainSeq_,
            _interactiveSeq_,
            _clickPar_,
            _withGroup_,
            _afterGroup_,
            _tmRoot_
        };
        ST_TLTimeNodeType();
        ST_TLTimeNodeType(const ST_TLTimeNodeType::Type& _type);
        ~ST_TLTimeNodeType();
        bool has_type() const;
        void set_type(const ST_TLTimeNodeType::Type& _type);
        const ST_TLTimeNodeType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeNodeType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLTimeNodeType* default_instance_;
        bool m_has_type;
        ST_TLTimeNodeType::Type m_type;
    };

    class ST_TLNextActionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _seek_
        };
        ST_TLNextActionType();
        ST_TLNextActionType(const ST_TLNextActionType::Type& _type);
        ~ST_TLNextActionType();
        bool has_type() const;
        void set_type(const ST_TLNextActionType::Type& _type);
        const ST_TLNextActionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLNextActionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLNextActionType* default_instance_;
        bool m_has_type;
        ST_TLNextActionType::Type m_type;
    };

    class ST_TLPreviousActionType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _skipTimed_
        };
        ST_TLPreviousActionType();
        ST_TLPreviousActionType(const ST_TLPreviousActionType::Type& _type);
        ~ST_TLPreviousActionType();
        bool has_type() const;
        void set_type(const ST_TLPreviousActionType::Type& _type);
        const ST_TLPreviousActionType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLPreviousActionType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLPreviousActionType* default_instance_;
        bool m_has_type;
        ST_TLPreviousActionType::Type m_type;
    };

    class ST_TLBehaviorAdditiveType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _base_ = 0,
            _sum_,
            _repl_,
            _mult_,
            _none_
        };
        ST_TLBehaviorAdditiveType();
        ST_TLBehaviorAdditiveType(const ST_TLBehaviorAdditiveType::Type& _type);
        ~ST_TLBehaviorAdditiveType();
        bool has_type() const;
        void set_type(const ST_TLBehaviorAdditiveType::Type& _type);
        const ST_TLBehaviorAdditiveType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLBehaviorAdditiveType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLBehaviorAdditiveType* default_instance_;
        bool m_has_type;
        ST_TLBehaviorAdditiveType::Type m_type;
    };

    class ST_TLBehaviorAccumulateType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _always_
        };
        ST_TLBehaviorAccumulateType();
        ST_TLBehaviorAccumulateType(const ST_TLBehaviorAccumulateType::Type& _type);
        ~ST_TLBehaviorAccumulateType();
        bool has_type() const;
        void set_type(const ST_TLBehaviorAccumulateType::Type& _type);
        const ST_TLBehaviorAccumulateType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLBehaviorAccumulateType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLBehaviorAccumulateType* default_instance_;
        bool m_has_type;
        ST_TLBehaviorAccumulateType::Type m_type;
    };

    class ST_TLBehaviorTransformType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _pt_ = 0,
            _img_
        };
        ST_TLBehaviorTransformType();
        ST_TLBehaviorTransformType(const ST_TLBehaviorTransformType::Type& _type);
        ~ST_TLBehaviorTransformType();
        bool has_type() const;
        void set_type(const ST_TLBehaviorTransformType::Type& _type);
        const ST_TLBehaviorTransformType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLBehaviorTransformType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLBehaviorTransformType* default_instance_;
        bool m_has_type;
        ST_TLBehaviorTransformType::Type m_type;
    };

    class ST_TLBehaviorOverrideType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _normal_ = 0,
            _childStyle_
        };
        ST_TLBehaviorOverrideType();
        ST_TLBehaviorOverrideType(const ST_TLBehaviorOverrideType::Type& _type);
        ~ST_TLBehaviorOverrideType();
        bool has_type() const;
        void set_type(const ST_TLBehaviorOverrideType::Type& _type);
        const ST_TLBehaviorOverrideType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLBehaviorOverrideType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLBehaviorOverrideType* default_instance_;
        bool m_has_type;
        ST_TLBehaviorOverrideType::Type m_type;
    };

    class ST_TLTimeAnimateValueTime: public XSD::SimpleType
    {
    public:
        ST_TLTimeAnimateValueTime();
        ST_TLTimeAnimateValueTime(const ST_TLTimeAnimateValueTime& _ST_TLTimeAnimateValueTime);
        ~ST_TLTimeAnimateValueTime();
        bool has_ST_PositiveFixedPercentage() const;
        ns_a::ST_PositiveFixedPercentage* mutable_ST_PositiveFixedPercentage();
        const ns_a::ST_PositiveFixedPercentage& get_ST_PositiveFixedPercentage() const;
        void clear_ST_PositiveFixedPercentage();
        bool has_ST_TLTimeIndefinite() const;
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite();
        const ST_TLTimeIndefinite& get_ST_TLTimeIndefinite() const;
        void clear_ST_TLTimeIndefinite();
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLTimeAnimateValueTime& default_instance();
    protected:
    private:
        bool m_has_ST_PositiveFixedPercentage;
        ns_a::ST_PositiveFixedPercentage* m_ST_PositiveFixedPercentage;
        bool m_has_ST_TLTimeIndefinite;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite;
        static ST_TLTimeAnimateValueTime* default_instance_;
    };

    class ST_TLAnimateBehaviorCalcMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _discrete_ = 0,
            _lin_,
            _fmla_
        };
        ST_TLAnimateBehaviorCalcMode();
        ST_TLAnimateBehaviorCalcMode(const ST_TLAnimateBehaviorCalcMode::Type& _type);
        ~ST_TLAnimateBehaviorCalcMode();
        bool has_type() const;
        void set_type(const ST_TLAnimateBehaviorCalcMode::Type& _type);
        const ST_TLAnimateBehaviorCalcMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateBehaviorCalcMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateBehaviorCalcMode* default_instance_;
        bool m_has_type;
        ST_TLAnimateBehaviorCalcMode::Type m_type;
    };

    class ST_TLAnimateBehaviorValueType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _str_ = 0,
            _num_,
            _clr_
        };
        ST_TLAnimateBehaviorValueType();
        ST_TLAnimateBehaviorValueType(const ST_TLAnimateBehaviorValueType::Type& _type);
        ~ST_TLAnimateBehaviorValueType();
        bool has_type() const;
        void set_type(const ST_TLAnimateBehaviorValueType::Type& _type);
        const ST_TLAnimateBehaviorValueType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateBehaviorValueType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateBehaviorValueType* default_instance_;
        bool m_has_type;
        ST_TLAnimateBehaviorValueType::Type m_type;
    };

    class ST_TLAnimateColorSpace: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _rgb_ = 0,
            _hsl_
        };
        ST_TLAnimateColorSpace();
        ST_TLAnimateColorSpace(const ST_TLAnimateColorSpace::Type& _type);
        ~ST_TLAnimateColorSpace();
        bool has_type() const;
        void set_type(const ST_TLAnimateColorSpace::Type& _type);
        const ST_TLAnimateColorSpace::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateColorSpace& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateColorSpace* default_instance_;
        bool m_has_type;
        ST_TLAnimateColorSpace::Type m_type;
    };

    class ST_TLAnimateColorDirection: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _cw_ = 0,
            _ccw_
        };
        ST_TLAnimateColorDirection();
        ST_TLAnimateColorDirection(const ST_TLAnimateColorDirection::Type& _type);
        ~ST_TLAnimateColorDirection();
        bool has_type() const;
        void set_type(const ST_TLAnimateColorDirection::Type& _type);
        const ST_TLAnimateColorDirection::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateColorDirection& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateColorDirection* default_instance_;
        bool m_has_type;
        ST_TLAnimateColorDirection::Type m_type;
    };

    class ST_TLAnimateEffectTransition: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _in_ = 0,
            _out_,
            _none_
        };
        ST_TLAnimateEffectTransition();
        ST_TLAnimateEffectTransition(const ST_TLAnimateEffectTransition::Type& _type);
        ~ST_TLAnimateEffectTransition();
        bool has_type() const;
        void set_type(const ST_TLAnimateEffectTransition::Type& _type);
        const ST_TLAnimateEffectTransition::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateEffectTransition& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateEffectTransition* default_instance_;
        bool m_has_type;
        ST_TLAnimateEffectTransition::Type m_type;
    };

    class ST_TLAnimateMotionBehaviorOrigin: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _parent_ = 0,
            _layout_
        };
        ST_TLAnimateMotionBehaviorOrigin();
        ST_TLAnimateMotionBehaviorOrigin(const ST_TLAnimateMotionBehaviorOrigin::Type& _type);
        ~ST_TLAnimateMotionBehaviorOrigin();
        bool has_type() const;
        void set_type(const ST_TLAnimateMotionBehaviorOrigin::Type& _type);
        const ST_TLAnimateMotionBehaviorOrigin::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateMotionBehaviorOrigin& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateMotionBehaviorOrigin* default_instance_;
        bool m_has_type;
        ST_TLAnimateMotionBehaviorOrigin::Type m_type;
    };

    class ST_TLAnimateMotionPathEditMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _relative_ = 0,
            _fixed_
        };
        ST_TLAnimateMotionPathEditMode();
        ST_TLAnimateMotionPathEditMode(const ST_TLAnimateMotionPathEditMode::Type& _type);
        ~ST_TLAnimateMotionPathEditMode();
        bool has_type() const;
        void set_type(const ST_TLAnimateMotionPathEditMode::Type& _type);
        const ST_TLAnimateMotionPathEditMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLAnimateMotionPathEditMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLAnimateMotionPathEditMode* default_instance_;
        bool m_has_type;
        ST_TLAnimateMotionPathEditMode::Type m_type;
    };

    class ST_TLCommandType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _evt_ = 0,
            _call_,
            _verb_
        };
        ST_TLCommandType();
        ST_TLCommandType(const ST_TLCommandType::Type& _type);
        ~ST_TLCommandType();
        bool has_type() const;
        void set_type(const ST_TLCommandType::Type& _type);
        const ST_TLCommandType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLCommandType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLCommandType* default_instance_;
        bool m_has_type;
        ST_TLCommandType::Type m_type;
    };

    class ST_TLParaBuildType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _allAtOnce_ = 0,
            _p_,
            _cust_,
            _whole_
        };
        ST_TLParaBuildType();
        ST_TLParaBuildType(const ST_TLParaBuildType::Type& _type);
        ~ST_TLParaBuildType();
        bool has_type() const;
        void set_type(const ST_TLParaBuildType::Type& _type);
        const ST_TLParaBuildType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLParaBuildType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLParaBuildType* default_instance_;
        bool m_has_type;
        ST_TLParaBuildType::Type m_type;
    };

    class ST_TLDiagramBuildType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _whole_ = 0,
            _depthByNode_,
            _depthByBranch_,
            _breadthByNode_,
            _breadthByLvl_,
            _cw_,
            _cwIn_,
            _cwOut_,
            _ccw_,
            _ccwIn_,
            _ccwOut_,
            _inByRing_,
            _outByRing_,
            _up_,
            _down_,
            _allAtOnce_,
            _cust_
        };
        ST_TLDiagramBuildType();
        ST_TLDiagramBuildType(const ST_TLDiagramBuildType::Type& _type);
        ~ST_TLDiagramBuildType();
        bool has_type() const;
        void set_type(const ST_TLDiagramBuildType::Type& _type);
        const ST_TLDiagramBuildType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLDiagramBuildType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLDiagramBuildType* default_instance_;
        bool m_has_type;
        ST_TLDiagramBuildType::Type m_type;
    };

    class ST_TLOleChartBuildType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _allAtOnce_ = 0,
            _series_,
            _category_,
            _seriesEl_,
            _categoryEl_
        };
        ST_TLOleChartBuildType();
        ST_TLOleChartBuildType(const ST_TLOleChartBuildType::Type& _type);
        ~ST_TLOleChartBuildType();
        bool has_type() const;
        void set_type(const ST_TLOleChartBuildType::Type& _type);
        const ST_TLOleChartBuildType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TLOleChartBuildType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TLOleChartBuildType* default_instance_;
        bool m_has_type;
        ST_TLOleChartBuildType::Type m_type;
    };

    class ST_Name: public XSD::SimpleType
    {
    public:
        ST_Name();
        ST_Name(const XSD::string_& _string);
        ~ST_Name();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Name& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Name* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_Direction: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _horz_ = 0,
            _vert_
        };
        ST_Direction();
        ST_Direction(const ST_Direction::Type& _type);
        ~ST_Direction();
        bool has_type() const;
        void set_type(const ST_Direction::Type& _type);
        const ST_Direction::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Direction& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_Direction* default_instance_;
        bool m_has_type;
        ST_Direction::Type m_type;
    };

    class ST_Index: public XSD::SimpleType
    {
    public:
        ST_Index();
        ST_Index(const XSD::unsignedInt_& _unsignedInt);
        ~ST_Index();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Index& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Index* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_OleObjectFollowColorScheme: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _full_,
            _textAndBackground_
        };
        ST_OleObjectFollowColorScheme();
        ST_OleObjectFollowColorScheme(const ST_OleObjectFollowColorScheme::Type& _type);
        ~ST_OleObjectFollowColorScheme();
        bool has_type() const;
        void set_type(const ST_OleObjectFollowColorScheme::Type& _type);
        const ST_OleObjectFollowColorScheme::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OleObjectFollowColorScheme& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_OleObjectFollowColorScheme* default_instance_;
        bool m_has_type;
        ST_OleObjectFollowColorScheme::Type m_type;
    };

    class ST_SlideId: public XSD::SimpleType
    {
    public:
        ST_SlideId();
        ST_SlideId(const XSD::unsignedInt_& _unsignedInt);
        ~ST_SlideId();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SlideId& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_SlideId* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_SlideMasterId: public XSD::SimpleType
    {
    public:
        ST_SlideMasterId();
        ST_SlideMasterId(const XSD::unsignedInt_& _unsignedInt);
        ~ST_SlideMasterId();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SlideMasterId& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_SlideMasterId* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_PhotoAlbumLayout: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _fitToSlide_ = 0,
            _1pic_,
            _2pic_,
            _4pic_,
            _1picTitle_,
            _2picTitle_,
            _4picTitle_
        };
        ST_PhotoAlbumLayout();
        ST_PhotoAlbumLayout(const ST_PhotoAlbumLayout::Type& _type);
        ~ST_PhotoAlbumLayout();
        bool has_type() const;
        void set_type(const ST_PhotoAlbumLayout::Type& _type);
        const ST_PhotoAlbumLayout::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PhotoAlbumLayout& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PhotoAlbumLayout* default_instance_;
        bool m_has_type;
        ST_PhotoAlbumLayout::Type m_type;
    };

    class ST_PhotoAlbumFrameShape: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _frameStyle1_ = 0,
            _frameStyle2_,
            _frameStyle3_,
            _frameStyle4_,
            _frameStyle5_,
            _frameStyle6_,
            _frameStyle7_
        };
        ST_PhotoAlbumFrameShape();
        ST_PhotoAlbumFrameShape(const ST_PhotoAlbumFrameShape::Type& _type);
        ~ST_PhotoAlbumFrameShape();
        bool has_type() const;
        void set_type(const ST_PhotoAlbumFrameShape::Type& _type);
        const ST_PhotoAlbumFrameShape::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PhotoAlbumFrameShape& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PhotoAlbumFrameShape* default_instance_;
        bool m_has_type;
        ST_PhotoAlbumFrameShape::Type m_type;
    };

    class ST_SlideSizeCoordinate: public ns_a::ST_PositiveCoordinate32
    {
    public:
        ST_SlideSizeCoordinate();
        ST_SlideSizeCoordinate(const ns_a::ST_PositiveCoordinate32& _ST_PositiveCoordinate32);
        ~ST_SlideSizeCoordinate();
        static const ST_SlideSizeCoordinate& default_instance();
    protected:
    private:
        static ST_SlideSizeCoordinate* default_instance_;
    };

    class ST_SlideSizeType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _screen4x3_ = 0,
            _letter_,
            _A4_,
            _35mm_,
            _overhead_,
            _banner_,
            _custom_,
            _ledger_,
            _A3_,
            _B4ISO_,
            _B5ISO_,
            _B4JIS_,
            _B5JIS_,
            _hagakiCard_,
            _screen16x9_,
            _screen16x10_
        };
        ST_SlideSizeType();
        ST_SlideSizeType(const ST_SlideSizeType::Type& _type);
        ~ST_SlideSizeType();
        bool has_type() const;
        void set_type(const ST_SlideSizeType::Type& _type);
        const ST_SlideSizeType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SlideSizeType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_SlideSizeType* default_instance_;
        bool m_has_type;
        ST_SlideSizeType::Type m_type;
    };

    class ST_BookmarkIdSeed: public XSD::SimpleType
    {
    public:
        ST_BookmarkIdSeed();
        ST_BookmarkIdSeed(const XSD::unsignedInt_& _unsignedInt);
        ~ST_BookmarkIdSeed();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BookmarkIdSeed& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_BookmarkIdSeed* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_WebColorType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _browser_,
            _presentationText_,
            _presentationAccent_,
            _whiteTextOnBlack_,
            _blackTextOnWhite_
        };
        ST_WebColorType();
        ST_WebColorType(const ST_WebColorType::Type& _type);
        ~ST_WebColorType();
        bool has_type() const;
        void set_type(const ST_WebColorType::Type& _type);
        const ST_WebColorType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WebColorType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_WebColorType* default_instance_;
        bool m_has_type;
        ST_WebColorType::Type m_type;
    };

    class ST_WebScreenSize: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _544x376_ = 0,
            _640x480_,
            _720x512_,
            _800x600_,
            _1024x768_,
            _1152x882_,
            _1152x900_,
            _1280x1024_,
            _1600x1200_,
            _1800x1400_,
            _1920x1200_
        };
        ST_WebScreenSize();
        ST_WebScreenSize(const ST_WebScreenSize::Type& _type);
        ~ST_WebScreenSize();
        bool has_type() const;
        void set_type(const ST_WebScreenSize::Type& _type);
        const ST_WebScreenSize::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WebScreenSize& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_WebScreenSize* default_instance_;
        bool m_has_type;
        ST_WebScreenSize::Type m_type;
    };

    class ST_WebEncoding: public XSD::SimpleType
    {
    public:
        ST_WebEncoding();
        ST_WebEncoding(const XSD::string_& _string);
        ~ST_WebEncoding();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WebEncoding& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_WebEncoding* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_PrintWhat: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _slides_ = 0,
            _handouts1_,
            _handouts2_,
            _handouts3_,
            _handouts4_,
            _handouts6_,
            _handouts9_,
            _notes_,
            _outline_
        };
        ST_PrintWhat();
        ST_PrintWhat(const ST_PrintWhat::Type& _type);
        ~ST_PrintWhat();
        bool has_type() const;
        void set_type(const ST_PrintWhat::Type& _type);
        const ST_PrintWhat::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PrintWhat& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PrintWhat* default_instance_;
        bool m_has_type;
        ST_PrintWhat::Type m_type;
    };

    class ST_PrintColorMode: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _bw_ = 0,
            _gray_,
            _clr_
        };
        ST_PrintColorMode();
        ST_PrintColorMode(const ST_PrintColorMode::Type& _type);
        ~ST_PrintColorMode();
        bool has_type() const;
        void set_type(const ST_PrintColorMode::Type& _type);
        const ST_PrintColorMode::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PrintColorMode& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PrintColorMode* default_instance_;
        bool m_has_type;
        ST_PrintColorMode::Type m_type;
    };

    class ST_PlaceholderType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _title_ = 0,
            _body_,
            _ctrTitle_,
            _subTitle_,
            _dt_,
            _sldNum_,
            _ftr_,
            _hdr_,
            _obj_,
            _chart_,
            _tbl_,
            _clipArt_,
            _dgm_,
            _media_,
            _sldImg_,
            _pic_
        };
        ST_PlaceholderType();
        ST_PlaceholderType(const ST_PlaceholderType::Type& _type);
        ~ST_PlaceholderType();
        bool has_type() const;
        void set_type(const ST_PlaceholderType::Type& _type);
        const ST_PlaceholderType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PlaceholderType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PlaceholderType* default_instance_;
        bool m_has_type;
        ST_PlaceholderType::Type m_type;
    };

    class ST_PlaceholderSize: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _full_ = 0,
            _half_,
            _quarter_
        };
        ST_PlaceholderSize();
        ST_PlaceholderSize(const ST_PlaceholderSize::Type& _type);
        ~ST_PlaceholderSize();
        bool has_type() const;
        void set_type(const ST_PlaceholderSize::Type& _type);
        const ST_PlaceholderSize::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_PlaceholderSize& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_PlaceholderSize* default_instance_;
        bool m_has_type;
        ST_PlaceholderSize::Type m_type;
    };

    class ST_SlideLayoutType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _title_ = 0,
            _tx_,
            _twoColTx_,
            _tbl_,
            _txAndChart_,
            _chartAndTx_,
            _dgm_,
            _chart_,
            _txAndClipArt_,
            _clipArtAndTx_,
            _titleOnly_,
            _blank_,
            _txAndObj_,
            _objAndTx_,
            _objOnly_,
            _obj_,
            _txAndMedia_,
            _mediaAndTx_,
            _objOverTx_,
            _txOverObj_,
            _txAndTwoObj_,
            _twoObjAndTx_,
            _twoObjOverTx_,
            _fourObj_,
            _vertTx_,
            _clipArtAndVertTx_,
            _vertTitleAndTx_,
            _vertTitleAndTxOverChart_,
            _twoObj_,
            _objAndTwoObj_,
            _twoObjAndObj_,
            _cust_,
            _secHead_,
            _twoTxTwoObj_,
            _objTx_,
            _picTx_
        };
        ST_SlideLayoutType();
        ST_SlideLayoutType(const ST_SlideLayoutType::Type& _type);
        ~ST_SlideLayoutType();
        bool has_type() const;
        void set_type(const ST_SlideLayoutType::Type& _type);
        const ST_SlideLayoutType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SlideLayoutType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_SlideLayoutType* default_instance_;
        bool m_has_type;
        ST_SlideLayoutType::Type m_type;
    };

    class ST_SlideLayoutId: public XSD::SimpleType
    {
    public:
        ST_SlideLayoutId();
        ST_SlideLayoutId(const XSD::unsignedInt_& _unsignedInt);
        ~ST_SlideLayoutId();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SlideLayoutId& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_SlideLayoutId* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_SplitterBarState: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _minimized_ = 0,
            _restored_,
            _maximized_
        };
        ST_SplitterBarState();
        ST_SplitterBarState(const ST_SplitterBarState::Type& _type);
        ~ST_SplitterBarState();
        bool has_type() const;
        void set_type(const ST_SplitterBarState::Type& _type);
        const ST_SplitterBarState::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SplitterBarState& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_SplitterBarState* default_instance_;
        bool m_has_type;
        ST_SplitterBarState::Type m_type;
    };

    class ST_ViewType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _sldView_ = 0,
            _sldMasterView_,
            _notesView_,
            _handoutView_,
            _notesMasterView_,
            _outlineView_,
            _sldSorterView_,
            _sldThumbnailView_
        };
        ST_ViewType();
        ST_ViewType(const ST_ViewType::Type& _type);
        ~ST_ViewType();
        bool has_type() const;
        void set_type(const ST_ViewType::Type& _type);
        const ST_ViewType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ViewType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ViewType* default_instance_;
        bool m_has_type;
        ST_ViewType::Type m_type;
    };

    class CT_SideDirectionTransition: public XSD::ComplexType
    {
    public:
        CT_SideDirectionTransition();
        ~CT_SideDirectionTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SideDirectionTransition& default_instance();
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionSideDirectionType& _dir_attr);
        const ST_TransitionSideDirectionType& get_dir_attr() const;
    protected:
    private:
        static CT_SideDirectionTransition* default_instance_;
        bool m_has_dir_attr;
        ST_TransitionSideDirectionType* m_dir_attr;
    };

    class CT_CornerDirectionTransition: public XSD::ComplexType
    {
    public:
        CT_CornerDirectionTransition();
        ~CT_CornerDirectionTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CornerDirectionTransition& default_instance();
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionCornerDirectionType& _dir_attr);
        const ST_TransitionCornerDirectionType& get_dir_attr() const;
    protected:
    private:
        static CT_CornerDirectionTransition* default_instance_;
        bool m_has_dir_attr;
        ST_TransitionCornerDirectionType* m_dir_attr;
    };

    class CT_EightDirectionTransition: public XSD::ComplexType
    {
    public:
        CT_EightDirectionTransition();
        ~CT_EightDirectionTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EightDirectionTransition& default_instance();
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionEightDirectionType& _dir_attr);
        const ST_TransitionEightDirectionType& get_dir_attr() const;
    protected:
    private:
        static CT_EightDirectionTransition* default_instance_;
        bool m_has_dir_attr;
        ST_TransitionEightDirectionType* m_dir_attr;
    };

    class CT_OrientationTransition: public XSD::ComplexType
    {
    public:
        CT_OrientationTransition();
        ~CT_OrientationTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OrientationTransition& default_instance();
        bool has_dir_attr() const;
        void set_dir_attr(const ST_Direction& _dir_attr);
        const ST_Direction& get_dir_attr() const;
    protected:
    private:
        static CT_OrientationTransition* default_instance_;
        bool m_has_dir_attr;
        ST_Direction* m_dir_attr;
    };

    class CT_InOutTransition: public XSD::ComplexType
    {
    public:
        CT_InOutTransition();
        ~CT_InOutTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_InOutTransition& default_instance();
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr);
        const ST_TransitionInOutDirectionType& get_dir_attr() const;
    protected:
    private:
        static CT_InOutTransition* default_instance_;
        bool m_has_dir_attr;
        ST_TransitionInOutDirectionType* m_dir_attr;
    };

    class CT_OptionalBlackTransition: public XSD::ComplexType
    {
    public:
        CT_OptionalBlackTransition();
        ~CT_OptionalBlackTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OptionalBlackTransition& default_instance();
        bool has_thruBlk_attr() const;
        void set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr);
        const XSD::boolean_& get_thruBlk_attr() const;
    protected:
    private:
        static CT_OptionalBlackTransition* default_instance_;
        bool m_has_thruBlk_attr;
        XSD::boolean_ m_thruBlk_attr;
    };

    class CT_SplitTransition: public XSD::ComplexType
    {
    public:
        CT_SplitTransition();
        ~CT_SplitTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SplitTransition& default_instance();
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr);
        const ST_Direction& get_orient_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr);
        const ST_TransitionInOutDirectionType& get_dir_attr() const;
    protected:
    private:
        static CT_SplitTransition* default_instance_;
        bool m_has_orient_attr;
        ST_Direction* m_orient_attr;
        bool m_has_dir_attr;
        ST_TransitionInOutDirectionType* m_dir_attr;
    };

    class CT_WheelTransition: public XSD::ComplexType
    {
    public:
        CT_WheelTransition();
        ~CT_WheelTransition();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WheelTransition& default_instance();
        bool has_spokes_attr() const;
        void set_spokes_attr(const XSD::unsignedInt_& _spokes_attr);
        const XSD::unsignedInt_& get_spokes_attr() const;
    protected:
    private:
        static CT_WheelTransition* default_instance_;
        bool m_has_spokes_attr;
        XSD::unsignedInt_ m_spokes_attr;
    };

    class CT_TransitionStartSoundAction: public XSD::ComplexType
    {
    public:
        CT_TransitionStartSoundAction();
        ~CT_TransitionStartSoundAction();
        bool has_snd() const;
        ns_a::CT_EmbeddedWAVAudioFile* mutable_snd();
        const ns_a::CT_EmbeddedWAVAudioFile& get_snd() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TransitionStartSoundAction& default_instance();
        bool has_loop_attr() const;
        void set_loop_attr(const XSD::boolean_& _loop_attr);
        const XSD::boolean_& get_loop_attr() const;
    protected:
    private:
        bool m_has_snd;
        ns_a::CT_EmbeddedWAVAudioFile* m_snd;
        static CT_TransitionStartSoundAction* default_instance_;
        bool m_has_loop_attr;
        XSD::boolean_ m_loop_attr;
    };

    class CT_TransitionSoundAction: public XSD::ComplexType
    {
    public:
        CT_TransitionSoundAction();
        ~CT_TransitionSoundAction();
        bool has_stSnd() const;
        CT_TransitionStartSoundAction* mutable_stSnd();
        const CT_TransitionStartSoundAction& get_stSnd() const;
        bool has_endSnd() const;
        CT_Empty* mutable_endSnd();
        const CT_Empty& get_endSnd() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TransitionSoundAction& default_instance();
    protected:
    private:
        bool m_has_stSnd;
        CT_TransitionStartSoundAction* m_stSnd;
        bool m_has_endSnd;
        CT_Empty* m_endSnd;
        static CT_TransitionSoundAction* default_instance_;
    };

    class CT_SlideTransition: public XSD::ComplexType
    {
    public:
        CT_SlideTransition();
        ~CT_SlideTransition();
        bool has_blinds() const;
        CT_OrientationTransition* mutable_blinds();
        const CT_OrientationTransition& get_blinds() const;
        bool has_checker() const;
        CT_OrientationTransition* mutable_checker();
        const CT_OrientationTransition& get_checker() const;
        bool has_circle() const;
        CT_Empty* mutable_circle();
        const CT_Empty& get_circle() const;
        bool has_dissolve() const;
        CT_Empty* mutable_dissolve();
        const CT_Empty& get_dissolve() const;
        bool has_comb() const;
        CT_OrientationTransition* mutable_comb();
        const CT_OrientationTransition& get_comb() const;
        bool has_cover() const;
        CT_EightDirectionTransition* mutable_cover();
        const CT_EightDirectionTransition& get_cover() const;
        bool has_cut() const;
        CT_OptionalBlackTransition* mutable_cut();
        const CT_OptionalBlackTransition& get_cut() const;
        bool has_diamond() const;
        CT_Empty* mutable_diamond();
        const CT_Empty& get_diamond() const;
        bool has_fade() const;
        CT_OptionalBlackTransition* mutable_fade();
        const CT_OptionalBlackTransition& get_fade() const;
        bool has_newsflash() const;
        CT_Empty* mutable_newsflash();
        const CT_Empty& get_newsflash() const;
        bool has_plus() const;
        CT_Empty* mutable_plus();
        const CT_Empty& get_plus() const;
        bool has_pull() const;
        CT_EightDirectionTransition* mutable_pull();
        const CT_EightDirectionTransition& get_pull() const;
        bool has_push() const;
        CT_SideDirectionTransition* mutable_push();
        const CT_SideDirectionTransition& get_push() const;
        bool has_random() const;
        CT_Empty* mutable_random();
        const CT_Empty& get_random() const;
        bool has_randomBar() const;
        CT_OrientationTransition* mutable_randomBar();
        const CT_OrientationTransition& get_randomBar() const;
        bool has_split() const;
        CT_SplitTransition* mutable_split();
        const CT_SplitTransition& get_split() const;
        bool has_strips() const;
        CT_CornerDirectionTransition* mutable_strips();
        const CT_CornerDirectionTransition& get_strips() const;
        bool has_wedge() const;
        CT_Empty* mutable_wedge();
        const CT_Empty& get_wedge() const;
        bool has_wheel() const;
        CT_WheelTransition* mutable_wheel();
        const CT_WheelTransition& get_wheel() const;
        bool has_wipe() const;
        CT_SideDirectionTransition* mutable_wipe();
        const CT_SideDirectionTransition& get_wipe() const;
        bool has_zoom() const;
        CT_InOutTransition* mutable_zoom();
        const CT_InOutTransition& get_zoom() const;
        bool has_sndAc() const;
        CT_TransitionSoundAction* mutable_sndAc();
        const CT_TransitionSoundAction& get_sndAc() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideTransition& default_instance();
        bool has_spd_attr() const;
        void set_spd_attr(const ST_TransitionSpeed& _spd_attr);
        const ST_TransitionSpeed& get_spd_attr() const;
        bool has_advClick_attr() const;
        void set_advClick_attr(const XSD::boolean_& _advClick_attr);
        const XSD::boolean_& get_advClick_attr() const;
        bool has_advTm_attr() const;
        void set_advTm_attr(const XSD::unsignedInt_& _advTm_attr);
        const XSD::unsignedInt_& get_advTm_attr() const;
    protected:
    private:
        bool m_has_blinds;
        CT_OrientationTransition* m_blinds;
        bool m_has_checker;
        CT_OrientationTransition* m_checker;
        bool m_has_circle;
        CT_Empty* m_circle;
        bool m_has_dissolve;
        CT_Empty* m_dissolve;
        bool m_has_comb;
        CT_OrientationTransition* m_comb;
        bool m_has_cover;
        CT_EightDirectionTransition* m_cover;
        bool m_has_cut;
        CT_OptionalBlackTransition* m_cut;
        bool m_has_diamond;
        CT_Empty* m_diamond;
        bool m_has_fade;
        CT_OptionalBlackTransition* m_fade;
        bool m_has_newsflash;
        CT_Empty* m_newsflash;
        bool m_has_plus;
        CT_Empty* m_plus;
        bool m_has_pull;
        CT_EightDirectionTransition* m_pull;
        bool m_has_push;
        CT_SideDirectionTransition* m_push;
        bool m_has_random;
        CT_Empty* m_random;
        bool m_has_randomBar;
        CT_OrientationTransition* m_randomBar;
        bool m_has_split;
        CT_SplitTransition* m_split;
        bool m_has_strips;
        CT_CornerDirectionTransition* m_strips;
        bool m_has_wedge;
        CT_Empty* m_wedge;
        bool m_has_wheel;
        CT_WheelTransition* m_wheel;
        bool m_has_wipe;
        CT_SideDirectionTransition* m_wipe;
        bool m_has_zoom;
        CT_InOutTransition* m_zoom;
        bool m_has_sndAc;
        CT_TransitionSoundAction* m_sndAc;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_SlideTransition* default_instance_;
        bool m_has_spd_attr;
        ST_TransitionSpeed* m_spd_attr;
        bool m_has_advClick_attr;
        XSD::boolean_ m_advClick_attr;
        bool m_has_advTm_attr;
        XSD::unsignedInt_ m_advTm_attr;
    };

    class CT_TLIterateIntervalTime: public XSD::ComplexType
    {
    public:
        CT_TLIterateIntervalTime();
        ~CT_TLIterateIntervalTime();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLIterateIntervalTime& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTime& _val_attr);
        const ST_TLTime& get_val_attr() const;
    protected:
    private:
        static CT_TLIterateIntervalTime* default_instance_;
        bool m_has_val_attr;
        ST_TLTime* m_val_attr;
    };

    class CT_TLIterateIntervalPercentage: public XSD::ComplexType
    {
    public:
        CT_TLIterateIntervalPercentage();
        ~CT_TLIterateIntervalPercentage();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLIterateIntervalPercentage& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ns_a::ST_PositivePercentage& _val_attr);
        const ns_a::ST_PositivePercentage& get_val_attr() const;
    protected:
    private:
        static CT_TLIterateIntervalPercentage* default_instance_;
        bool m_has_val_attr;
        ns_a::ST_PositivePercentage* m_val_attr;
    };

    class CT_TLIterateData: public XSD::ComplexType
    {
    public:
        CT_TLIterateData();
        ~CT_TLIterateData();
        bool has_tmAbs() const;
        CT_TLIterateIntervalTime* mutable_tmAbs();
        const CT_TLIterateIntervalTime& get_tmAbs() const;
        bool has_tmPct() const;
        CT_TLIterateIntervalPercentage* mutable_tmPct();
        const CT_TLIterateIntervalPercentage& get_tmPct() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLIterateData& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_IterateType& _type_attr);
        const ST_IterateType& get_type_attr() const;
        bool has_backwards_attr() const;
        void set_backwards_attr(const XSD::boolean_& _backwards_attr);
        const XSD::boolean_& get_backwards_attr() const;
    protected:
    private:
        bool m_has_tmAbs;
        CT_TLIterateIntervalTime* m_tmAbs;
        bool m_has_tmPct;
        CT_TLIterateIntervalPercentage* m_tmPct;
        static CT_TLIterateData* default_instance_;
        bool m_has_type_attr;
        ST_IterateType* m_type_attr;
        bool m_has_backwards_attr;
        XSD::boolean_ m_backwards_attr;
    };

    class CT_TLSubShapeId: public XSD::ComplexType
    {
    public:
        CT_TLSubShapeId();
        ~CT_TLSubShapeId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLSubShapeId& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr);
        const ns_a::ST_ShapeID& get_spid_attr() const;
    protected:
    private:
        static CT_TLSubShapeId* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_ShapeID* m_spid_attr;
    };

    class CT_TLTextTargetElement: public XSD::ComplexType
    {
    public:
        CT_TLTextTargetElement();
        ~CT_TLTextTargetElement();
        bool has_charRg() const;
        CT_IndexRange* mutable_charRg();
        const CT_IndexRange& get_charRg() const;
        bool has_pRg() const;
        CT_IndexRange* mutable_pRg();
        const CT_IndexRange& get_pRg() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTextTargetElement& default_instance();
    protected:
    private:
        bool m_has_charRg;
        CT_IndexRange* m_charRg;
        bool m_has_pRg;
        CT_IndexRange* m_pRg;
        static CT_TLTextTargetElement* default_instance_;
    };

    class CT_TLOleChartTargetElement: public XSD::ComplexType
    {
    public:
        CT_TLOleChartTargetElement();
        ~CT_TLOleChartTargetElement();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLOleChartTargetElement& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_TLChartSubelementType& _type_attr);
        const ST_TLChartSubelementType& get_type_attr() const;
        bool has_lvl_attr() const;
        void set_lvl_attr(const XSD::unsignedInt_& _lvl_attr);
        const XSD::unsignedInt_& get_lvl_attr() const;
    protected:
    private:
        static CT_TLOleChartTargetElement* default_instance_;
        bool m_has_type_attr;
        ST_TLChartSubelementType* m_type_attr;
        bool m_has_lvl_attr;
        XSD::unsignedInt_ m_lvl_attr;
    };

    class CT_TLShapeTargetElement: public XSD::ComplexType
    {
    public:
        CT_TLShapeTargetElement();
        ~CT_TLShapeTargetElement();
        bool has_bg() const;
        CT_Empty* mutable_bg();
        const CT_Empty& get_bg() const;
        bool has_subSp() const;
        CT_TLSubShapeId* mutable_subSp();
        const CT_TLSubShapeId& get_subSp() const;
        bool has_oleChartEl() const;
        CT_TLOleChartTargetElement* mutable_oleChartEl();
        const CT_TLOleChartTargetElement& get_oleChartEl() const;
        bool has_txEl() const;
        CT_TLTextTargetElement* mutable_txEl();
        const CT_TLTextTargetElement& get_txEl() const;
        bool has_graphicEl() const;
        ns_a::CT_AnimationElementChoice* mutable_graphicEl();
        const ns_a::CT_AnimationElementChoice& get_graphicEl() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLShapeTargetElement& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
        const ns_a::ST_DrawingElementId& get_spid_attr() const;
    protected:
    private:
        bool m_has_bg;
        CT_Empty* m_bg;
        bool m_has_subSp;
        CT_TLSubShapeId* m_subSp;
        bool m_has_oleChartEl;
        CT_TLOleChartTargetElement* m_oleChartEl;
        bool m_has_txEl;
        CT_TLTextTargetElement* m_txEl;
        bool m_has_graphicEl;
        ns_a::CT_AnimationElementChoice* m_graphicEl;
        static CT_TLShapeTargetElement* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_DrawingElementId* m_spid_attr;
    };

    class CT_TLTimeTargetElement: public XSD::ComplexType
    {
    public:
        CT_TLTimeTargetElement();
        ~CT_TLTimeTargetElement();
        bool has_sldTgt() const;
        CT_Empty* mutable_sldTgt();
        const CT_Empty& get_sldTgt() const;
        bool has_sndTgt() const;
        ns_a::CT_EmbeddedWAVAudioFile* mutable_sndTgt();
        const ns_a::CT_EmbeddedWAVAudioFile& get_sndTgt() const;
        bool has_spTgt() const;
        CT_TLShapeTargetElement* mutable_spTgt();
        const CT_TLShapeTargetElement& get_spTgt() const;
        bool has_inkTgt() const;
        CT_TLSubShapeId* mutable_inkTgt();
        const CT_TLSubShapeId& get_inkTgt() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeTargetElement& default_instance();
    protected:
    private:
        bool m_has_sldTgt;
        CT_Empty* m_sldTgt;
        bool m_has_sndTgt;
        ns_a::CT_EmbeddedWAVAudioFile* m_sndTgt;
        bool m_has_spTgt;
        CT_TLShapeTargetElement* m_spTgt;
        bool m_has_inkTgt;
        CT_TLSubShapeId* m_inkTgt;
        static CT_TLTimeTargetElement* default_instance_;
    };

    class CT_TLTriggerTimeNodeID: public XSD::ComplexType
    {
    public:
        CT_TLTriggerTimeNodeID();
        ~CT_TLTriggerTimeNodeID();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTriggerTimeNodeID& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTimeNodeID& _val_attr);
        const ST_TLTimeNodeID& get_val_attr() const;
    protected:
    private:
        static CT_TLTriggerTimeNodeID* default_instance_;
        bool m_has_val_attr;
        ST_TLTimeNodeID* m_val_attr;
    };

    class CT_TLTriggerRuntimeNode: public XSD::ComplexType
    {
    public:
        CT_TLTriggerRuntimeNode();
        ~CT_TLTriggerRuntimeNode();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTriggerRuntimeNode& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTriggerRuntimeNode& _val_attr);
        const ST_TLTriggerRuntimeNode& get_val_attr() const;
    protected:
    private:
        static CT_TLTriggerRuntimeNode* default_instance_;
        bool m_has_val_attr;
        ST_TLTriggerRuntimeNode* m_val_attr;
    };

    class CT_TLTimeCondition: public XSD::ComplexType
    {
    public:
        CT_TLTimeCondition();
        ~CT_TLTimeCondition();
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& get_tgtEl() const;
        bool has_tn() const;
        CT_TLTriggerTimeNodeID* mutable_tn();
        const CT_TLTriggerTimeNodeID& get_tn() const;
        bool has_rtn() const;
        CT_TLTriggerRuntimeNode* mutable_rtn();
        const CT_TLTriggerRuntimeNode& get_rtn() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeCondition& default_instance();
        bool has_evt_attr() const;
        void set_evt_attr(const ST_TLTriggerEvent& _evt_attr);
        const ST_TLTriggerEvent& get_evt_attr() const;
        bool has_delay_attr() const;
        void set_delay_attr(const ST_TLTime& _delay_attr);
        const ST_TLTime& get_delay_attr() const;
    protected:
    private:
        bool m_has_tgtEl;
        CT_TLTimeTargetElement* m_tgtEl;
        bool m_has_tn;
        CT_TLTriggerTimeNodeID* m_tn;
        bool m_has_rtn;
        CT_TLTriggerRuntimeNode* m_rtn;
        static CT_TLTimeCondition* default_instance_;
        bool m_has_evt_attr;
        ST_TLTriggerEvent* m_evt_attr;
        bool m_has_delay_attr;
        ST_TLTime* m_delay_attr;
    };

    class CT_TLTimeConditionList: public XSD::ComplexType
    {
    public:
        CT_TLTimeConditionList();
        ~CT_TLTimeConditionList();
        CT_TLTimeCondition* add_cond();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeConditionList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_cond() const;
            CT_TLTimeCondition* mutable_cond();
            const CT_TLTimeCondition& get_cond() const;
        protected:
        private:
            bool m_has_cond;
            CT_TLTimeCondition* m_cond;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TLTimeConditionList* default_instance_;
    };

    class CT_TimeNodeList: public XSD::ComplexType
    {
    public:
        CT_TimeNodeList();
        ~CT_TimeNodeList();
        CT_TLTimeNodeParallel* add_par();
        CT_TLTimeNodeSequence* add_seq();
        CT_TLTimeNodeExclusive* add_excl();
        CT_TLAnimateBehavior* add_anim();
        CT_TLAnimateColorBehavior* add_animClr();
        CT_TLAnimateEffectBehavior* add_animEffect();
        CT_TLAnimateMotionBehavior* add_animMotion();
        CT_TLAnimateRotationBehavior* add_animRot();
        CT_TLAnimateScaleBehavior* add_animScale();
        CT_TLCommandBehavior* add_cmd();
        CT_TLSetBehavior* add_set();
        CT_TLMediaNodeAudio* add_audio();
        CT_TLMediaNodeVideo* add_video();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TimeNodeList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_par() const;
            CT_TLTimeNodeParallel* mutable_par();
            const CT_TLTimeNodeParallel& get_par() const;
            bool has_seq() const;
            CT_TLTimeNodeSequence* mutable_seq();
            const CT_TLTimeNodeSequence& get_seq() const;
            bool has_excl() const;
            CT_TLTimeNodeExclusive* mutable_excl();
            const CT_TLTimeNodeExclusive& get_excl() const;
            bool has_anim() const;
            CT_TLAnimateBehavior* mutable_anim();
            const CT_TLAnimateBehavior& get_anim() const;
            bool has_animClr() const;
            CT_TLAnimateColorBehavior* mutable_animClr();
            const CT_TLAnimateColorBehavior& get_animClr() const;
            bool has_animEffect() const;
            CT_TLAnimateEffectBehavior* mutable_animEffect();
            const CT_TLAnimateEffectBehavior& get_animEffect() const;
            bool has_animMotion() const;
            CT_TLAnimateMotionBehavior* mutable_animMotion();
            const CT_TLAnimateMotionBehavior& get_animMotion() const;
            bool has_animRot() const;
            CT_TLAnimateRotationBehavior* mutable_animRot();
            const CT_TLAnimateRotationBehavior& get_animRot() const;
            bool has_animScale() const;
            CT_TLAnimateScaleBehavior* mutable_animScale();
            const CT_TLAnimateScaleBehavior& get_animScale() const;
            bool has_cmd() const;
            CT_TLCommandBehavior* mutable_cmd();
            const CT_TLCommandBehavior& get_cmd() const;
            bool has_set() const;
            CT_TLSetBehavior* mutable_set();
            const CT_TLSetBehavior& get_set() const;
            bool has_audio() const;
            CT_TLMediaNodeAudio* mutable_audio();
            const CT_TLMediaNodeAudio& get_audio() const;
            bool has_video() const;
            CT_TLMediaNodeVideo* mutable_video();
            const CT_TLMediaNodeVideo& get_video() const;
        protected:
        private:
            bool m_has_par;
            CT_TLTimeNodeParallel* m_par;
            bool m_has_seq;
            CT_TLTimeNodeSequence* m_seq;
            bool m_has_excl;
            CT_TLTimeNodeExclusive* m_excl;
            bool m_has_anim;
            CT_TLAnimateBehavior* m_anim;
            bool m_has_animClr;
            CT_TLAnimateColorBehavior* m_animClr;
            bool m_has_animEffect;
            CT_TLAnimateEffectBehavior* m_animEffect;
            bool m_has_animMotion;
            CT_TLAnimateMotionBehavior* m_animMotion;
            bool m_has_animRot;
            CT_TLAnimateRotationBehavior* m_animRot;
            bool m_has_animScale;
            CT_TLAnimateScaleBehavior* m_animScale;
            bool m_has_cmd;
            CT_TLCommandBehavior* m_cmd;
            bool m_has_set;
            CT_TLSetBehavior* m_set;
            bool m_has_audio;
            CT_TLMediaNodeAudio* m_audio;
            bool m_has_video;
            CT_TLMediaNodeVideo* m_video;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TimeNodeList* default_instance_;
    };

    class CT_TLCommonTimeNodeData: public XSD::ComplexType
    {
    public:
        CT_TLCommonTimeNodeData();
        ~CT_TLCommonTimeNodeData();
        bool has_stCondLst() const;
        CT_TLTimeConditionList* mutable_stCondLst();
        const CT_TLTimeConditionList& get_stCondLst() const;
        bool has_endCondLst() const;
        CT_TLTimeConditionList* mutable_endCondLst();
        const CT_TLTimeConditionList& get_endCondLst() const;
        bool has_endSync() const;
        CT_TLTimeCondition* mutable_endSync();
        const CT_TLTimeCondition& get_endSync() const;
        bool has_iterate() const;
        CT_TLIterateData* mutable_iterate();
        const CT_TLIterateData& get_iterate() const;
        bool has_childTnLst() const;
        CT_TimeNodeList* mutable_childTnLst();
        const CT_TimeNodeList& get_childTnLst() const;
        bool has_subTnLst() const;
        CT_TimeNodeList* mutable_subTnLst();
        const CT_TimeNodeList& get_subTnLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLCommonTimeNodeData& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const ST_TLTimeNodeID& _id_attr);
        const ST_TLTimeNodeID& get_id_attr() const;
        bool has_presetID_attr() const;
        void set_presetID_attr(const XSD::int_& _presetID_attr);
        const XSD::int_& get_presetID_attr() const;
        bool has_presetClass_attr() const;
        void set_presetClass_attr(const ST_TLTimeNodePresetClassType& _presetClass_attr);
        const ST_TLTimeNodePresetClassType& get_presetClass_attr() const;
        bool has_presetSubtype_attr() const;
        void set_presetSubtype_attr(const XSD::int_& _presetSubtype_attr);
        const XSD::int_& get_presetSubtype_attr() const;
        bool has_dur_attr() const;
        void set_dur_attr(const ST_TLTime& _dur_attr);
        const ST_TLTime& get_dur_attr() const;
        bool has_repeatCount_attr() const;
        void set_repeatCount_attr(const ST_TLTime& _repeatCount_attr);
        const ST_TLTime& get_repeatCount_attr() const;
        bool has_repeatDur_attr() const;
        void set_repeatDur_attr(const ST_TLTime& _repeatDur_attr);
        const ST_TLTime& get_repeatDur_attr() const;
        bool has_spd_attr() const;
        void set_spd_attr(const ns_a::ST_Percentage& _spd_attr);
        const ns_a::ST_Percentage& get_spd_attr() const;
        bool has_accel_attr() const;
        void set_accel_attr(const ns_a::ST_PositiveFixedPercentage& _accel_attr);
        const ns_a::ST_PositiveFixedPercentage& get_accel_attr() const;
        bool has_decel_attr() const;
        void set_decel_attr(const ns_a::ST_PositiveFixedPercentage& _decel_attr);
        const ns_a::ST_PositiveFixedPercentage& get_decel_attr() const;
        bool has_autoRev_attr() const;
        void set_autoRev_attr(const XSD::boolean_& _autoRev_attr);
        const XSD::boolean_& get_autoRev_attr() const;
        bool has_restart_attr() const;
        void set_restart_attr(const ST_TLTimeNodeRestartType& _restart_attr);
        const ST_TLTimeNodeRestartType& get_restart_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ST_TLTimeNodeFillType& _fill_attr);
        const ST_TLTimeNodeFillType& get_fill_attr() const;
        bool has_syncBehavior_attr() const;
        void set_syncBehavior_attr(const ST_TLTimeNodeSyncType& _syncBehavior_attr);
        const ST_TLTimeNodeSyncType& get_syncBehavior_attr() const;
        bool has_tmFilter_attr() const;
        void set_tmFilter_attr(const XSD::string_& _tmFilter_attr);
        const XSD::string_& get_tmFilter_attr() const;
        bool has_evtFilter_attr() const;
        void set_evtFilter_attr(const XSD::string_& _evtFilter_attr);
        const XSD::string_& get_evtFilter_attr() const;
        bool has_display_attr() const;
        void set_display_attr(const XSD::boolean_& _display_attr);
        const XSD::boolean_& get_display_attr() const;
        bool has_masterRel_attr() const;
        void set_masterRel_attr(const ST_TLTimeNodeMasterRelation& _masterRel_attr);
        const ST_TLTimeNodeMasterRelation& get_masterRel_attr() const;
        bool has_bldLvl_attr() const;
        void set_bldLvl_attr(const XSD::int_& _bldLvl_attr);
        const XSD::int_& get_bldLvl_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const XSD::unsignedInt_& _grpId_attr);
        const XSD::unsignedInt_& get_grpId_attr() const;
        bool has_afterEffect_attr() const;
        void set_afterEffect_attr(const XSD::boolean_& _afterEffect_attr);
        const XSD::boolean_& get_afterEffect_attr() const;
        bool has_nodeType_attr() const;
        void set_nodeType_attr(const ST_TLTimeNodeType& _nodeType_attr);
        const ST_TLTimeNodeType& get_nodeType_attr() const;
        bool has_nodePh_attr() const;
        void set_nodePh_attr(const XSD::boolean_& _nodePh_attr);
        const XSD::boolean_& get_nodePh_attr() const;
    protected:
    private:
        bool m_has_stCondLst;
        CT_TLTimeConditionList* m_stCondLst;
        bool m_has_endCondLst;
        CT_TLTimeConditionList* m_endCondLst;
        bool m_has_endSync;
        CT_TLTimeCondition* m_endSync;
        bool m_has_iterate;
        CT_TLIterateData* m_iterate;
        bool m_has_childTnLst;
        CT_TimeNodeList* m_childTnLst;
        bool m_has_subTnLst;
        CT_TimeNodeList* m_subTnLst;
        static CT_TLCommonTimeNodeData* default_instance_;
        bool m_has_id_attr;
        ST_TLTimeNodeID* m_id_attr;
        bool m_has_presetID_attr;
        XSD::int_ m_presetID_attr;
        bool m_has_presetClass_attr;
        ST_TLTimeNodePresetClassType* m_presetClass_attr;
        bool m_has_presetSubtype_attr;
        XSD::int_ m_presetSubtype_attr;
        bool m_has_dur_attr;
        ST_TLTime* m_dur_attr;
        bool m_has_repeatCount_attr;
        ST_TLTime* m_repeatCount_attr;
        bool m_has_repeatDur_attr;
        ST_TLTime* m_repeatDur_attr;
        bool m_has_spd_attr;
        ns_a::ST_Percentage* m_spd_attr;
        bool m_has_accel_attr;
        ns_a::ST_PositiveFixedPercentage* m_accel_attr;
        bool m_has_decel_attr;
        ns_a::ST_PositiveFixedPercentage* m_decel_attr;
        bool m_has_autoRev_attr;
        XSD::boolean_ m_autoRev_attr;
        bool m_has_restart_attr;
        ST_TLTimeNodeRestartType* m_restart_attr;
        bool m_has_fill_attr;
        ST_TLTimeNodeFillType* m_fill_attr;
        bool m_has_syncBehavior_attr;
        ST_TLTimeNodeSyncType* m_syncBehavior_attr;
        bool m_has_tmFilter_attr;
        XSD::string_ m_tmFilter_attr;
        bool m_has_evtFilter_attr;
        XSD::string_ m_evtFilter_attr;
        bool m_has_display_attr;
        XSD::boolean_ m_display_attr;
        bool m_has_masterRel_attr;
        ST_TLTimeNodeMasterRelation* m_masterRel_attr;
        bool m_has_bldLvl_attr;
        XSD::int_ m_bldLvl_attr;
        bool m_has_grpId_attr;
        XSD::unsignedInt_ m_grpId_attr;
        bool m_has_afterEffect_attr;
        XSD::boolean_ m_afterEffect_attr;
        bool m_has_nodeType_attr;
        ST_TLTimeNodeType* m_nodeType_attr;
        bool m_has_nodePh_attr;
        XSD::boolean_ m_nodePh_attr;
    };

    class CT_TLTimeNodeParallel: public XSD::ComplexType
    {
    public:
        CT_TLTimeNodeParallel();
        ~CT_TLTimeNodeParallel();
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& get_cTn() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeNodeParallel& default_instance();
    protected:
    private:
        bool m_has_cTn;
        CT_TLCommonTimeNodeData* m_cTn;
        static CT_TLTimeNodeParallel* default_instance_;
    };

    class CT_TLTimeNodeSequence: public XSD::ComplexType
    {
    public:
        CT_TLTimeNodeSequence();
        ~CT_TLTimeNodeSequence();
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& get_cTn() const;
        bool has_prevCondLst() const;
        CT_TLTimeConditionList* mutable_prevCondLst();
        const CT_TLTimeConditionList& get_prevCondLst() const;
        bool has_nextCondLst() const;
        CT_TLTimeConditionList* mutable_nextCondLst();
        const CT_TLTimeConditionList& get_nextCondLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeNodeSequence& default_instance();
        bool has_concurrent_attr() const;
        void set_concurrent_attr(const XSD::boolean_& _concurrent_attr);
        const XSD::boolean_& get_concurrent_attr() const;
        bool has_prevAc_attr() const;
        void set_prevAc_attr(const ST_TLPreviousActionType& _prevAc_attr);
        const ST_TLPreviousActionType& get_prevAc_attr() const;
        bool has_nextAc_attr() const;
        void set_nextAc_attr(const ST_TLNextActionType& _nextAc_attr);
        const ST_TLNextActionType& get_nextAc_attr() const;
    protected:
    private:
        bool m_has_cTn;
        CT_TLCommonTimeNodeData* m_cTn;
        bool m_has_prevCondLst;
        CT_TLTimeConditionList* m_prevCondLst;
        bool m_has_nextCondLst;
        CT_TLTimeConditionList* m_nextCondLst;
        static CT_TLTimeNodeSequence* default_instance_;
        bool m_has_concurrent_attr;
        XSD::boolean_ m_concurrent_attr;
        bool m_has_prevAc_attr;
        ST_TLPreviousActionType* m_prevAc_attr;
        bool m_has_nextAc_attr;
        ST_TLNextActionType* m_nextAc_attr;
    };

    class CT_TLTimeNodeExclusive: public XSD::ComplexType
    {
    public:
        CT_TLTimeNodeExclusive();
        ~CT_TLTimeNodeExclusive();
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& get_cTn() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeNodeExclusive& default_instance();
    protected:
    private:
        bool m_has_cTn;
        CT_TLCommonTimeNodeData* m_cTn;
        static CT_TLTimeNodeExclusive* default_instance_;
    };

    class CT_TLBehaviorAttributeNameList: public XSD::ComplexType
    {
    public:
        CT_TLBehaviorAttributeNameList();
        ~CT_TLBehaviorAttributeNameList();
        void add_attrName(const XSD::string_& _attrName);
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLBehaviorAttributeNameList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_attrName() const;
            void set_attrName(const XSD::string_& _attrName);
            const XSD::string_& get_attrName() const;
        protected:
        private:
            bool m_has_attrName;
            XSD::string_ m_attrName;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TLBehaviorAttributeNameList* default_instance_;
    };

    class CT_TLCommonBehaviorData: public XSD::ComplexType
    {
    public:
        CT_TLCommonBehaviorData();
        ~CT_TLCommonBehaviorData();
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& get_cTn() const;
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& get_tgtEl() const;
        bool has_attrNameLst() const;
        CT_TLBehaviorAttributeNameList* mutable_attrNameLst();
        const CT_TLBehaviorAttributeNameList& get_attrNameLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLCommonBehaviorData& default_instance();
        bool has_additive_attr() const;
        void set_additive_attr(const ST_TLBehaviorAdditiveType& _additive_attr);
        const ST_TLBehaviorAdditiveType& get_additive_attr() const;
        bool has_accumulate_attr() const;
        void set_accumulate_attr(const ST_TLBehaviorAccumulateType& _accumulate_attr);
        const ST_TLBehaviorAccumulateType& get_accumulate_attr() const;
        bool has_xfrmType_attr() const;
        void set_xfrmType_attr(const ST_TLBehaviorTransformType& _xfrmType_attr);
        const ST_TLBehaviorTransformType& get_xfrmType_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const XSD::string_& _from_attr);
        const XSD::string_& get_from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const XSD::string_& _to_attr);
        const XSD::string_& get_to_attr() const;
        bool has_by_attr() const;
        void set_by_attr(const XSD::string_& _by_attr);
        const XSD::string_& get_by_attr() const;
        bool has_rctx_attr() const;
        void set_rctx_attr(const XSD::string_& _rctx_attr);
        const XSD::string_& get_rctx_attr() const;
        bool has_override_attr() const;
        void set_override_attr(const ST_TLBehaviorOverrideType& _override_attr);
        const ST_TLBehaviorOverrideType& get_override_attr() const;
    protected:
    private:
        bool m_has_cTn;
        CT_TLCommonTimeNodeData* m_cTn;
        bool m_has_tgtEl;
        CT_TLTimeTargetElement* m_tgtEl;
        bool m_has_attrNameLst;
        CT_TLBehaviorAttributeNameList* m_attrNameLst;
        static CT_TLCommonBehaviorData* default_instance_;
        bool m_has_additive_attr;
        ST_TLBehaviorAdditiveType* m_additive_attr;
        bool m_has_accumulate_attr;
        ST_TLBehaviorAccumulateType* m_accumulate_attr;
        bool m_has_xfrmType_attr;
        ST_TLBehaviorTransformType* m_xfrmType_attr;
        bool m_has_from_attr;
        XSD::string_ m_from_attr;
        bool m_has_to_attr;
        XSD::string_ m_to_attr;
        bool m_has_by_attr;
        XSD::string_ m_by_attr;
        bool m_has_rctx_attr;
        XSD::string_ m_rctx_attr;
        bool m_has_override_attr;
        ST_TLBehaviorOverrideType* m_override_attr;
    };

    class CT_TLAnimVariantBooleanVal: public XSD::ComplexType
    {
    public:
        CT_TLAnimVariantBooleanVal();
        ~CT_TLAnimVariantBooleanVal();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimVariantBooleanVal& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const XSD::boolean_& _val_attr);
        const XSD::boolean_& get_val_attr() const;
    protected:
    private:
        static CT_TLAnimVariantBooleanVal* default_instance_;
        bool m_has_val_attr;
        XSD::boolean_ m_val_attr;
    };

    class CT_TLAnimVariantIntegerVal: public XSD::ComplexType
    {
    public:
        CT_TLAnimVariantIntegerVal();
        ~CT_TLAnimVariantIntegerVal();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimVariantIntegerVal& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const XSD::int_& _val_attr);
        const XSD::int_& get_val_attr() const;
    protected:
    private:
        static CT_TLAnimVariantIntegerVal* default_instance_;
        bool m_has_val_attr;
        XSD::int_ m_val_attr;
    };

    class CT_TLAnimVariantFloatVal: public XSD::ComplexType
    {
    public:
        CT_TLAnimVariantFloatVal();
        ~CT_TLAnimVariantFloatVal();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimVariantFloatVal& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const XSD::float_& _val_attr);
        const XSD::float_& get_val_attr() const;
    protected:
    private:
        static CT_TLAnimVariantFloatVal* default_instance_;
        bool m_has_val_attr;
        XSD::float_ m_val_attr;
    };

    class CT_TLAnimVariantStringVal: public XSD::ComplexType
    {
    public:
        CT_TLAnimVariantStringVal();
        ~CT_TLAnimVariantStringVal();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimVariantStringVal& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const XSD::string_& _val_attr);
        const XSD::string_& get_val_attr() const;
    protected:
    private:
        static CT_TLAnimVariantStringVal* default_instance_;
        bool m_has_val_attr;
        XSD::string_ m_val_attr;
    };

    class CT_TLAnimVariant: public XSD::ComplexType
    {
    public:
        CT_TLAnimVariant();
        ~CT_TLAnimVariant();
        bool has_boolVal() const;
        CT_TLAnimVariantBooleanVal* mutable_boolVal();
        const CT_TLAnimVariantBooleanVal& get_boolVal() const;
        bool has_intVal() const;
        CT_TLAnimVariantIntegerVal* mutable_intVal();
        const CT_TLAnimVariantIntegerVal& get_intVal() const;
        bool has_fltVal() const;
        CT_TLAnimVariantFloatVal* mutable_fltVal();
        const CT_TLAnimVariantFloatVal& get_fltVal() const;
        bool has_strVal() const;
        CT_TLAnimVariantStringVal* mutable_strVal();
        const CT_TLAnimVariantStringVal& get_strVal() const;
        bool has_clrVal() const;
        ns_a::CT_Color* mutable_clrVal();
        const ns_a::CT_Color& get_clrVal() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimVariant& default_instance();
    protected:
    private:
        bool m_has_boolVal;
        CT_TLAnimVariantBooleanVal* m_boolVal;
        bool m_has_intVal;
        CT_TLAnimVariantIntegerVal* m_intVal;
        bool m_has_fltVal;
        CT_TLAnimVariantFloatVal* m_fltVal;
        bool m_has_strVal;
        CT_TLAnimVariantStringVal* m_strVal;
        bool m_has_clrVal;
        ns_a::CT_Color* m_clrVal;
        static CT_TLAnimVariant* default_instance_;
    };

    class CT_TLTimeAnimateValue: public XSD::ComplexType
    {
    public:
        CT_TLTimeAnimateValue();
        ~CT_TLTimeAnimateValue();
        bool has_val() const;
        CT_TLAnimVariant* mutable_val();
        const CT_TLAnimVariant& get_val() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeAnimateValue& default_instance();
        bool has_tm_attr() const;
        void set_tm_attr(const ST_TLTimeAnimateValueTime& _tm_attr);
        const ST_TLTimeAnimateValueTime& get_tm_attr() const;
        bool has_fmla_attr() const;
        void set_fmla_attr(const XSD::string_& _fmla_attr);
        const XSD::string_& get_fmla_attr() const;
    protected:
    private:
        bool m_has_val;
        CT_TLAnimVariant* m_val;
        static CT_TLTimeAnimateValue* default_instance_;
        bool m_has_tm_attr;
        ST_TLTimeAnimateValueTime* m_tm_attr;
        bool m_has_fmla_attr;
        XSD::string_ m_fmla_attr;
    };

    class CT_TLTimeAnimateValueList: public XSD::ComplexType
    {
    public:
        CT_TLTimeAnimateValueList();
        ~CT_TLTimeAnimateValueList();
        CT_TLTimeAnimateValue* add_tav();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTimeAnimateValueList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_tav() const;
            CT_TLTimeAnimateValue* mutable_tav();
            const CT_TLTimeAnimateValue& get_tav() const;
        protected:
        private:
            bool m_has_tav;
            CT_TLTimeAnimateValue* m_tav;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TLTimeAnimateValueList* default_instance_;
    };

    class CT_TLAnimateBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateBehavior();
        ~CT_TLAnimateBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_tavLst() const;
        CT_TLTimeAnimateValueList* mutable_tavLst();
        const CT_TLTimeAnimateValueList& get_tavLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateBehavior& default_instance();
        bool has_by_attr() const;
        void set_by_attr(const XSD::string_& _by_attr);
        const XSD::string_& get_by_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const XSD::string_& _from_attr);
        const XSD::string_& get_from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const XSD::string_& _to_attr);
        const XSD::string_& get_to_attr() const;
        bool has_calcmode_attr() const;
        void set_calcmode_attr(const ST_TLAnimateBehaviorCalcMode& _calcmode_attr);
        const ST_TLAnimateBehaviorCalcMode& get_calcmode_attr() const;
        bool has_valueType_attr() const;
        void set_valueType_attr(const ST_TLAnimateBehaviorValueType& _valueType_attr);
        const ST_TLAnimateBehaviorValueType& get_valueType_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_tavLst;
        CT_TLTimeAnimateValueList* m_tavLst;
        static CT_TLAnimateBehavior* default_instance_;
        bool m_has_by_attr;
        XSD::string_ m_by_attr;
        bool m_has_from_attr;
        XSD::string_ m_from_attr;
        bool m_has_to_attr;
        XSD::string_ m_to_attr;
        bool m_has_calcmode_attr;
        ST_TLAnimateBehaviorCalcMode* m_calcmode_attr;
        bool m_has_valueType_attr;
        ST_TLAnimateBehaviorValueType* m_valueType_attr;
    };

    class CT_TLByRgbColorTransform: public XSD::ComplexType
    {
    public:
        CT_TLByRgbColorTransform();
        ~CT_TLByRgbColorTransform();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLByRgbColorTransform& default_instance();
        bool has_r_attr() const;
        void set_r_attr(const ns_a::ST_FixedPercentage& _r_attr);
        const ns_a::ST_FixedPercentage& get_r_attr() const;
        bool has_g_attr() const;
        void set_g_attr(const ns_a::ST_FixedPercentage& _g_attr);
        const ns_a::ST_FixedPercentage& get_g_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ns_a::ST_FixedPercentage& _b_attr);
        const ns_a::ST_FixedPercentage& get_b_attr() const;
    protected:
    private:
        static CT_TLByRgbColorTransform* default_instance_;
        bool m_has_r_attr;
        ns_a::ST_FixedPercentage* m_r_attr;
        bool m_has_g_attr;
        ns_a::ST_FixedPercentage* m_g_attr;
        bool m_has_b_attr;
        ns_a::ST_FixedPercentage* m_b_attr;
    };

    class CT_TLByHslColorTransform: public XSD::ComplexType
    {
    public:
        CT_TLByHslColorTransform();
        ~CT_TLByHslColorTransform();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLByHslColorTransform& default_instance();
        bool has_h_attr() const;
        void set_h_attr(const ns_a::ST_Angle& _h_attr);
        const ns_a::ST_Angle& get_h_attr() const;
        bool has_s_attr() const;
        void set_s_attr(const ns_a::ST_FixedPercentage& _s_attr);
        const ns_a::ST_FixedPercentage& get_s_attr() const;
        bool has_l_attr() const;
        void set_l_attr(const ns_a::ST_FixedPercentage& _l_attr);
        const ns_a::ST_FixedPercentage& get_l_attr() const;
    protected:
    private:
        static CT_TLByHslColorTransform* default_instance_;
        bool m_has_h_attr;
        ns_a::ST_Angle* m_h_attr;
        bool m_has_s_attr;
        ns_a::ST_FixedPercentage* m_s_attr;
        bool m_has_l_attr;
        ns_a::ST_FixedPercentage* m_l_attr;
    };

    class CT_TLByAnimateColorTransform: public XSD::ComplexType
    {
    public:
        CT_TLByAnimateColorTransform();
        ~CT_TLByAnimateColorTransform();
        bool has_rgb() const;
        CT_TLByRgbColorTransform* mutable_rgb();
        const CT_TLByRgbColorTransform& get_rgb() const;
        bool has_hsl() const;
        CT_TLByHslColorTransform* mutable_hsl();
        const CT_TLByHslColorTransform& get_hsl() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLByAnimateColorTransform& default_instance();
    protected:
    private:
        bool m_has_rgb;
        CT_TLByRgbColorTransform* m_rgb;
        bool m_has_hsl;
        CT_TLByHslColorTransform* m_hsl;
        static CT_TLByAnimateColorTransform* default_instance_;
    };

    class CT_TLAnimateColorBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateColorBehavior();
        ~CT_TLAnimateColorBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_by() const;
        CT_TLByAnimateColorTransform* mutable_by();
        const CT_TLByAnimateColorTransform& get_by() const;
        bool has_from() const;
        ns_a::CT_Color* mutable_from();
        const ns_a::CT_Color& get_from() const;
        bool has_to() const;
        ns_a::CT_Color* mutable_to();
        const ns_a::CT_Color& get_to() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateColorBehavior& default_instance();
        bool has_clrSpc_attr() const;
        void set_clrSpc_attr(const ST_TLAnimateColorSpace& _clrSpc_attr);
        const ST_TLAnimateColorSpace& get_clrSpc_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TLAnimateColorDirection& _dir_attr);
        const ST_TLAnimateColorDirection& get_dir_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_by;
        CT_TLByAnimateColorTransform* m_by;
        bool m_has_from;
        ns_a::CT_Color* m_from;
        bool m_has_to;
        ns_a::CT_Color* m_to;
        static CT_TLAnimateColorBehavior* default_instance_;
        bool m_has_clrSpc_attr;
        ST_TLAnimateColorSpace* m_clrSpc_attr;
        bool m_has_dir_attr;
        ST_TLAnimateColorDirection* m_dir_attr;
    };

    class CT_TLAnimateEffectBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateEffectBehavior();
        ~CT_TLAnimateEffectBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_progress() const;
        CT_TLAnimVariant* mutable_progress();
        const CT_TLAnimVariant& get_progress() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateEffectBehavior& default_instance();
        bool has_transition_attr() const;
        void set_transition_attr(const ST_TLAnimateEffectTransition& _transition_attr);
        const ST_TLAnimateEffectTransition& get_transition_attr() const;
        bool has_filter_attr() const;
        void set_filter_attr(const XSD::string_& _filter_attr);
        const XSD::string_& get_filter_attr() const;
        bool has_prLst_attr() const;
        void set_prLst_attr(const XSD::string_& _prLst_attr);
        const XSD::string_& get_prLst_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_progress;
        CT_TLAnimVariant* m_progress;
        static CT_TLAnimateEffectBehavior* default_instance_;
        bool m_has_transition_attr;
        ST_TLAnimateEffectTransition* m_transition_attr;
        bool m_has_filter_attr;
        XSD::string_ m_filter_attr;
        bool m_has_prLst_attr;
        XSD::string_ m_prLst_attr;
    };

    class CT_TLPoint: public XSD::ComplexType
    {
    public:
        CT_TLPoint();
        ~CT_TLPoint();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLPoint& default_instance();
        bool has_x_attr() const;
        void set_x_attr(const ns_a::ST_Percentage& _x_attr);
        const ns_a::ST_Percentage& get_x_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ns_a::ST_Percentage& _y_attr);
        const ns_a::ST_Percentage& get_y_attr() const;
    protected:
    private:
        static CT_TLPoint* default_instance_;
        bool m_has_x_attr;
        ns_a::ST_Percentage* m_x_attr;
        bool m_has_y_attr;
        ns_a::ST_Percentage* m_y_attr;
    };

    class CT_TLAnimateMotionBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateMotionBehavior();
        ~CT_TLAnimateMotionBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_by() const;
        CT_TLPoint* mutable_by();
        const CT_TLPoint& get_by() const;
        bool has_from() const;
        CT_TLPoint* mutable_from();
        const CT_TLPoint& get_from() const;
        bool has_to() const;
        CT_TLPoint* mutable_to();
        const CT_TLPoint& get_to() const;
        bool has_rCtr() const;
        CT_TLPoint* mutable_rCtr();
        const CT_TLPoint& get_rCtr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateMotionBehavior& default_instance();
        bool has_origin_attr() const;
        void set_origin_attr(const ST_TLAnimateMotionBehaviorOrigin& _origin_attr);
        const ST_TLAnimateMotionBehaviorOrigin& get_origin_attr() const;
        bool has_path_attr() const;
        void set_path_attr(const XSD::string_& _path_attr);
        const XSD::string_& get_path_attr() const;
        bool has_pathEditMode_attr() const;
        void set_pathEditMode_attr(const ST_TLAnimateMotionPathEditMode& _pathEditMode_attr);
        const ST_TLAnimateMotionPathEditMode& get_pathEditMode_attr() const;
        bool has_rAng_attr() const;
        void set_rAng_attr(const ns_a::ST_Angle& _rAng_attr);
        const ns_a::ST_Angle& get_rAng_attr() const;
        bool has_ptsTypes_attr() const;
        void set_ptsTypes_attr(const XSD::string_& _ptsTypes_attr);
        const XSD::string_& get_ptsTypes_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_by;
        CT_TLPoint* m_by;
        bool m_has_from;
        CT_TLPoint* m_from;
        bool m_has_to;
        CT_TLPoint* m_to;
        bool m_has_rCtr;
        CT_TLPoint* m_rCtr;
        static CT_TLAnimateMotionBehavior* default_instance_;
        bool m_has_origin_attr;
        ST_TLAnimateMotionBehaviorOrigin* m_origin_attr;
        bool m_has_path_attr;
        XSD::string_ m_path_attr;
        bool m_has_pathEditMode_attr;
        ST_TLAnimateMotionPathEditMode* m_pathEditMode_attr;
        bool m_has_rAng_attr;
        ns_a::ST_Angle* m_rAng_attr;
        bool m_has_ptsTypes_attr;
        XSD::string_ m_ptsTypes_attr;
    };

    class CT_TLAnimateRotationBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateRotationBehavior();
        ~CT_TLAnimateRotationBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateRotationBehavior& default_instance();
        bool has_by_attr() const;
        void set_by_attr(const ns_a::ST_Angle& _by_attr);
        const ns_a::ST_Angle& get_by_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const ns_a::ST_Angle& _from_attr);
        const ns_a::ST_Angle& get_from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const ns_a::ST_Angle& _to_attr);
        const ns_a::ST_Angle& get_to_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        static CT_TLAnimateRotationBehavior* default_instance_;
        bool m_has_by_attr;
        ns_a::ST_Angle* m_by_attr;
        bool m_has_from_attr;
        ns_a::ST_Angle* m_from_attr;
        bool m_has_to_attr;
        ns_a::ST_Angle* m_to_attr;
    };

    class CT_TLAnimateScaleBehavior: public XSD::ComplexType
    {
    public:
        CT_TLAnimateScaleBehavior();
        ~CT_TLAnimateScaleBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_by() const;
        CT_TLPoint* mutable_by();
        const CT_TLPoint& get_by() const;
        bool has_from() const;
        CT_TLPoint* mutable_from();
        const CT_TLPoint& get_from() const;
        bool has_to() const;
        CT_TLPoint* mutable_to();
        const CT_TLPoint& get_to() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLAnimateScaleBehavior& default_instance();
        bool has_zoomContents_attr() const;
        void set_zoomContents_attr(const XSD::boolean_& _zoomContents_attr);
        const XSD::boolean_& get_zoomContents_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_by;
        CT_TLPoint* m_by;
        bool m_has_from;
        CT_TLPoint* m_from;
        bool m_has_to;
        CT_TLPoint* m_to;
        static CT_TLAnimateScaleBehavior* default_instance_;
        bool m_has_zoomContents_attr;
        XSD::boolean_ m_zoomContents_attr;
    };

    class CT_TLCommandBehavior: public XSD::ComplexType
    {
    public:
        CT_TLCommandBehavior();
        ~CT_TLCommandBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLCommandBehavior& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_TLCommandType& _type_attr);
        const ST_TLCommandType& get_type_attr() const;
        bool has_cmd_attr() const;
        void set_cmd_attr(const XSD::string_& _cmd_attr);
        const XSD::string_& get_cmd_attr() const;
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        static CT_TLCommandBehavior* default_instance_;
        bool m_has_type_attr;
        ST_TLCommandType* m_type_attr;
        bool m_has_cmd_attr;
        XSD::string_ m_cmd_attr;
    };

    class CT_TLSetBehavior: public XSD::ComplexType
    {
    public:
        CT_TLSetBehavior();
        ~CT_TLSetBehavior();
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& get_cBhvr() const;
        bool has_to() const;
        CT_TLAnimVariant* mutable_to();
        const CT_TLAnimVariant& get_to() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLSetBehavior& default_instance();
    protected:
    private:
        bool m_has_cBhvr;
        CT_TLCommonBehaviorData* m_cBhvr;
        bool m_has_to;
        CT_TLAnimVariant* m_to;
        static CT_TLSetBehavior* default_instance_;
    };

    class CT_TLCommonMediaNodeData: public XSD::ComplexType
    {
    public:
        CT_TLCommonMediaNodeData();
        ~CT_TLCommonMediaNodeData();
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& get_cTn() const;
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& get_tgtEl() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLCommonMediaNodeData& default_instance();
        bool has_vol_attr() const;
        void set_vol_attr(const ns_a::ST_PositiveFixedPercentage& _vol_attr);
        const ns_a::ST_PositiveFixedPercentage& get_vol_attr() const;
        bool has_mute_attr() const;
        void set_mute_attr(const XSD::boolean_& _mute_attr);
        const XSD::boolean_& get_mute_attr() const;
        bool has_numSld_attr() const;
        void set_numSld_attr(const XSD::unsignedInt_& _numSld_attr);
        const XSD::unsignedInt_& get_numSld_attr() const;
        bool has_showWhenStopped_attr() const;
        void set_showWhenStopped_attr(const XSD::boolean_& _showWhenStopped_attr);
        const XSD::boolean_& get_showWhenStopped_attr() const;
    protected:
    private:
        bool m_has_cTn;
        CT_TLCommonTimeNodeData* m_cTn;
        bool m_has_tgtEl;
        CT_TLTimeTargetElement* m_tgtEl;
        static CT_TLCommonMediaNodeData* default_instance_;
        bool m_has_vol_attr;
        ns_a::ST_PositiveFixedPercentage* m_vol_attr;
        bool m_has_mute_attr;
        XSD::boolean_ m_mute_attr;
        bool m_has_numSld_attr;
        XSD::unsignedInt_ m_numSld_attr;
        bool m_has_showWhenStopped_attr;
        XSD::boolean_ m_showWhenStopped_attr;
    };

    class CT_TLMediaNodeAudio: public XSD::ComplexType
    {
    public:
        CT_TLMediaNodeAudio();
        ~CT_TLMediaNodeAudio();
        bool has_cMediaNode() const;
        CT_TLCommonMediaNodeData* mutable_cMediaNode();
        const CT_TLCommonMediaNodeData& get_cMediaNode() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLMediaNodeAudio& default_instance();
        bool has_isNarration_attr() const;
        void set_isNarration_attr(const XSD::boolean_& _isNarration_attr);
        const XSD::boolean_& get_isNarration_attr() const;
    protected:
    private:
        bool m_has_cMediaNode;
        CT_TLCommonMediaNodeData* m_cMediaNode;
        static CT_TLMediaNodeAudio* default_instance_;
        bool m_has_isNarration_attr;
        XSD::boolean_ m_isNarration_attr;
    };

    class CT_TLMediaNodeVideo: public XSD::ComplexType
    {
    public:
        CT_TLMediaNodeVideo();
        ~CT_TLMediaNodeVideo();
        bool has_cMediaNode() const;
        CT_TLCommonMediaNodeData* mutable_cMediaNode();
        const CT_TLCommonMediaNodeData& get_cMediaNode() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLMediaNodeVideo& default_instance();
        bool has_fullScrn_attr() const;
        void set_fullScrn_attr(const XSD::boolean_& _fullScrn_attr);
        const XSD::boolean_& get_fullScrn_attr() const;
    protected:
    private:
        bool m_has_cMediaNode;
        CT_TLCommonMediaNodeData* m_cMediaNode;
        static CT_TLMediaNodeVideo* default_instance_;
        bool m_has_fullScrn_attr;
        XSD::boolean_ m_fullScrn_attr;
    };

    class CT_TLTemplate: public XSD::ComplexType
    {
    public:
        CT_TLTemplate();
        ~CT_TLTemplate();
        bool has_tnLst() const;
        CT_TimeNodeList* mutable_tnLst();
        const CT_TimeNodeList& get_tnLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTemplate& default_instance();
        bool has_lvl_attr() const;
        void set_lvl_attr(const XSD::unsignedInt_& _lvl_attr);
        const XSD::unsignedInt_& get_lvl_attr() const;
    protected:
    private:
        bool m_has_tnLst;
        CT_TimeNodeList* m_tnLst;
        static CT_TLTemplate* default_instance_;
        bool m_has_lvl_attr;
        XSD::unsignedInt_ m_lvl_attr;
    };

    class CT_TLTemplateList: public XSD::ComplexType
    {
    public:
        CT_TLTemplateList();
        ~CT_TLTemplateList();
        CT_TLTemplate* add_tmpl();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLTemplateList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_tmpl() const;
            CT_TLTemplate* mutable_tmpl();
            const CT_TLTemplate& get_tmpl() const;
        protected:
        private:
            bool m_has_tmpl;
            CT_TLTemplate* m_tmpl;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TLTemplateList* default_instance_;
    };

    class CT_TLBuildParagraph: public XSD::ComplexType
    {
    public:
        CT_TLBuildParagraph();
        ~CT_TLBuildParagraph();
        bool has_tmplLst() const;
        CT_TLTemplateList* mutable_tmplLst();
        const CT_TLTemplateList& get_tmplLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLBuildParagraph& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
        const ns_a::ST_DrawingElementId& get_spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const XSD::unsignedInt_& _grpId_attr);
        const XSD::unsignedInt_& get_grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr);
        const XSD::boolean_& get_uiExpand_attr() const;
        bool has_build_attr() const;
        void set_build_attr(const ST_TLParaBuildType& _build_attr);
        const ST_TLParaBuildType& get_build_attr() const;
        bool has_bldLvl_attr() const;
        void set_bldLvl_attr(const XSD::unsignedInt_& _bldLvl_attr);
        const XSD::unsignedInt_& get_bldLvl_attr() const;
        bool has_animBg_attr() const;
        void set_animBg_attr(const XSD::boolean_& _animBg_attr);
        const XSD::boolean_& get_animBg_attr() const;
        bool has_autoUpdateAnimBg_attr() const;
        void set_autoUpdateAnimBg_attr(const XSD::boolean_& _autoUpdateAnimBg_attr);
        const XSD::boolean_& get_autoUpdateAnimBg_attr() const;
        bool has_rev_attr() const;
        void set_rev_attr(const XSD::boolean_& _rev_attr);
        const XSD::boolean_& get_rev_attr() const;
        bool has_advAuto_attr() const;
        void set_advAuto_attr(const ST_TLTime& _advAuto_attr);
        const ST_TLTime& get_advAuto_attr() const;
    protected:
    private:
        bool m_has_tmplLst;
        CT_TLTemplateList* m_tmplLst;
        static CT_TLBuildParagraph* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_DrawingElementId* m_spid_attr;
        bool m_has_grpId_attr;
        XSD::unsignedInt_ m_grpId_attr;
        bool m_has_uiExpand_attr;
        XSD::boolean_ m_uiExpand_attr;
        bool m_has_build_attr;
        ST_TLParaBuildType* m_build_attr;
        bool m_has_bldLvl_attr;
        XSD::unsignedInt_ m_bldLvl_attr;
        bool m_has_animBg_attr;
        XSD::boolean_ m_animBg_attr;
        bool m_has_autoUpdateAnimBg_attr;
        XSD::boolean_ m_autoUpdateAnimBg_attr;
        bool m_has_rev_attr;
        XSD::boolean_ m_rev_attr;
        bool m_has_advAuto_attr;
        ST_TLTime* m_advAuto_attr;
    };

    class CT_TLBuildDiagram: public XSD::ComplexType
    {
    public:
        CT_TLBuildDiagram();
        ~CT_TLBuildDiagram();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLBuildDiagram& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
        const ns_a::ST_DrawingElementId& get_spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const XSD::unsignedInt_& _grpId_attr);
        const XSD::unsignedInt_& get_grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr);
        const XSD::boolean_& get_uiExpand_attr() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_TLDiagramBuildType& _bld_attr);
        const ST_TLDiagramBuildType& get_bld_attr() const;
    protected:
    private:
        static CT_TLBuildDiagram* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_DrawingElementId* m_spid_attr;
        bool m_has_grpId_attr;
        XSD::unsignedInt_ m_grpId_attr;
        bool m_has_uiExpand_attr;
        XSD::boolean_ m_uiExpand_attr;
        bool m_has_bld_attr;
        ST_TLDiagramBuildType* m_bld_attr;
    };

    class CT_TLOleBuildChart: public XSD::ComplexType
    {
    public:
        CT_TLOleBuildChart();
        ~CT_TLOleBuildChart();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLOleBuildChart& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
        const ns_a::ST_DrawingElementId& get_spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const XSD::unsignedInt_& _grpId_attr);
        const XSD::unsignedInt_& get_grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr);
        const XSD::boolean_& get_uiExpand_attr() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_TLOleChartBuildType& _bld_attr);
        const ST_TLOleChartBuildType& get_bld_attr() const;
        bool has_animBg_attr() const;
        void set_animBg_attr(const XSD::boolean_& _animBg_attr);
        const XSD::boolean_& get_animBg_attr() const;
    protected:
    private:
        static CT_TLOleBuildChart* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_DrawingElementId* m_spid_attr;
        bool m_has_grpId_attr;
        XSD::unsignedInt_ m_grpId_attr;
        bool m_has_uiExpand_attr;
        XSD::boolean_ m_uiExpand_attr;
        bool m_has_bld_attr;
        ST_TLOleChartBuildType* m_bld_attr;
        bool m_has_animBg_attr;
        XSD::boolean_ m_animBg_attr;
    };

    class CT_TLGraphicalObjectBuild: public XSD::ComplexType
    {
    public:
        CT_TLGraphicalObjectBuild();
        ~CT_TLGraphicalObjectBuild();
        bool has_bldAsOne() const;
        CT_Empty* mutable_bldAsOne();
        const CT_Empty& get_bldAsOne() const;
        bool has_bldSub() const;
        ns_a::CT_AnimationGraphicalObjectBuildProperties* mutable_bldSub();
        const ns_a::CT_AnimationGraphicalObjectBuildProperties& get_bldSub() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TLGraphicalObjectBuild& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
        const ns_a::ST_DrawingElementId& get_spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const XSD::unsignedInt_& _grpId_attr);
        const XSD::unsignedInt_& get_grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr);
        const XSD::boolean_& get_uiExpand_attr() const;
    protected:
    private:
        bool m_has_bldAsOne;
        CT_Empty* m_bldAsOne;
        bool m_has_bldSub;
        ns_a::CT_AnimationGraphicalObjectBuildProperties* m_bldSub;
        static CT_TLGraphicalObjectBuild* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_DrawingElementId* m_spid_attr;
        bool m_has_grpId_attr;
        XSD::unsignedInt_ m_grpId_attr;
        bool m_has_uiExpand_attr;
        XSD::boolean_ m_uiExpand_attr;
    };

    class CT_BuildList: public XSD::ComplexType
    {
    public:
        CT_BuildList();
        ~CT_BuildList();
        CT_TLBuildParagraph* add_bldP();
        CT_TLBuildDiagram* add_bldDgm();
        CT_TLOleBuildChart* add_bldOleChart();
        CT_TLGraphicalObjectBuild* add_bldGraphic();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BuildList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_bldP() const;
            CT_TLBuildParagraph* mutable_bldP();
            const CT_TLBuildParagraph& get_bldP() const;
            bool has_bldDgm() const;
            CT_TLBuildDiagram* mutable_bldDgm();
            const CT_TLBuildDiagram& get_bldDgm() const;
            bool has_bldOleChart() const;
            CT_TLOleBuildChart* mutable_bldOleChart();
            const CT_TLOleBuildChart& get_bldOleChart() const;
            bool has_bldGraphic() const;
            CT_TLGraphicalObjectBuild* mutable_bldGraphic();
            const CT_TLGraphicalObjectBuild& get_bldGraphic() const;
        protected:
        private:
            bool m_has_bldP;
            CT_TLBuildParagraph* m_bldP;
            bool m_has_bldDgm;
            CT_TLBuildDiagram* m_bldDgm;
            bool m_has_bldOleChart;
            CT_TLOleBuildChart* m_bldOleChart;
            bool m_has_bldGraphic;
            CT_TLGraphicalObjectBuild* m_bldGraphic;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_BuildList* default_instance_;
    };

    class CT_SlideTiming: public XSD::ComplexType
    {
    public:
        CT_SlideTiming();
        ~CT_SlideTiming();
        bool has_tnLst() const;
        CT_TimeNodeList* mutable_tnLst();
        const CT_TimeNodeList& get_tnLst() const;
        bool has_bldLst() const;
        CT_BuildList* mutable_bldLst();
        const CT_BuildList& get_bldLst() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideTiming& default_instance();
    protected:
    private:
        bool m_has_tnLst;
        CT_TimeNodeList* m_tnLst;
        bool m_has_bldLst;
        CT_BuildList* m_bldLst;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_SlideTiming* default_instance_;
    };

    class CT_Empty: public XSD::ComplexType
    {
    public:
        CT_Empty();
        ~CT_Empty();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Empty& default_instance();
    protected:
    private:
        static CT_Empty* default_instance_;
    };

    class CT_IndexRange: public XSD::ComplexType
    {
    public:
        CT_IndexRange();
        ~CT_IndexRange();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_IndexRange& default_instance();
        bool has_st_attr() const;
        void set_st_attr(const ST_Index& _st_attr);
        const ST_Index& get_st_attr() const;
        bool has_end_attr() const;
        void set_end_attr(const ST_Index& _end_attr);
        const ST_Index& get_end_attr() const;
    protected:
    private:
        static CT_IndexRange* default_instance_;
        bool m_has_st_attr;
        ST_Index* m_st_attr;
        bool m_has_end_attr;
        ST_Index* m_end_attr;
    };

    class CT_SlideRelationshipListEntry: public XSD::ComplexType
    {
    public:
        CT_SlideRelationshipListEntry();
        ~CT_SlideRelationshipListEntry();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideRelationshipListEntry& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_SlideRelationshipListEntry* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_SlideRelationshipList: public XSD::ComplexType
    {
    public:
        CT_SlideRelationshipList();
        ~CT_SlideRelationshipList();
        CT_SlideRelationshipListEntry* add_sld();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideRelationshipList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sld() const;
            CT_SlideRelationshipListEntry* mutable_sld();
            const CT_SlideRelationshipListEntry& get_sld() const;
        protected:
        private:
            bool m_has_sld;
            CT_SlideRelationshipListEntry* m_sld;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SlideRelationshipList* default_instance_;
    };

    class CT_CustomShowId: public XSD::ComplexType
    {
    public:
        CT_CustomShowId();
        ~CT_CustomShowId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CustomShowId& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::unsignedInt_& _id_attr);
        const XSD::unsignedInt_& get_id_attr() const;
    protected:
    private:
        static CT_CustomShowId* default_instance_;
        bool m_has_id_attr;
        XSD::unsignedInt_ m_id_attr;
    };

    class CT_CustomerData: public XSD::ComplexType
    {
    public:
        CT_CustomerData();
        ~CT_CustomerData();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CustomerData& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_CustomerData* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_TagsData: public XSD::ComplexType
    {
    public:
        CT_TagsData();
        ~CT_TagsData();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TagsData& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_TagsData* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_CustomerDataList: public XSD::ComplexType
    {
    public:
        CT_CustomerDataList();
        ~CT_CustomerDataList();
        CT_CustomerData* add_custData();
        bool has_tags() const;
        CT_TagsData* mutable_tags();
        const CT_TagsData& get_tags() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CustomerDataList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_custData() const;
            CT_CustomerData* mutable_custData();
            const CT_CustomerData& get_custData() const;
        protected:
        private:
            bool m_has_custData;
            CT_CustomerData* m_custData;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_tags;
        CT_TagsData* m_tags;
        static CT_CustomerDataList* default_instance_;
    };

    class CT_Extension: public XSD::ComplexType
    {
    public:
        CT_Extension();
        ~CT_Extension();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Extension& default_instance();
        bool has_uri_attr() const;
        void set_uri_attr(const XSD::token_& _uri_attr);
        const XSD::token_& get_uri_attr() const;
    protected:
    private:
        bool m_has__any;
        XSD::Element* m__any;
        static CT_Extension* default_instance_;
        bool m_has_uri_attr;
        XSD::token_ m_uri_attr;
    };

    class CT_ExtensionList: public XSD::ComplexType
    {
    public:
        CT_ExtensionList();
        ~CT_ExtensionList();
        CT_Extension* add_ext();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ExtensionList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_ext() const;
            CT_Extension* mutable_ext();
            const CT_Extension& get_ext() const;
        protected:
        private:
            bool m_has_ext;
            CT_Extension* m_ext;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_ExtensionList* default_instance_;
    };

    class CT_ExtensionListModify: public XSD::ComplexType
    {
    public:
        CT_ExtensionListModify();
        ~CT_ExtensionListModify();
        CT_Extension* add_ext();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ExtensionListModify& default_instance();
        bool has_mod_attr() const;
        void set_mod_attr(const XSD::boolean_& _mod_attr);
        const XSD::boolean_& get_mod_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_ext() const;
            CT_Extension* mutable_ext();
            const CT_Extension& get_ext() const;
        protected:
        private:
            bool m_has_ext;
            CT_Extension* m_ext;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_ExtensionListModify* default_instance_;
        bool m_has_mod_attr;
        XSD::boolean_ m_mod_attr;
    };

    class CT_CommentAuthor: public XSD::ComplexType
    {
    public:
        CT_CommentAuthor();
        ~CT_CommentAuthor();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommentAuthor& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::unsignedInt_& _id_attr);
        const XSD::unsignedInt_& get_id_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ST_Name& _name_attr);
        const ST_Name& get_name_attr() const;
        bool has_initials_attr() const;
        void set_initials_attr(const ST_Name& _initials_attr);
        const ST_Name& get_initials_attr() const;
        bool has_lastIdx_attr() const;
        void set_lastIdx_attr(const XSD::unsignedInt_& _lastIdx_attr);
        const XSD::unsignedInt_& get_lastIdx_attr() const;
        bool has_clrIdx_attr() const;
        void set_clrIdx_attr(const XSD::unsignedInt_& _clrIdx_attr);
        const XSD::unsignedInt_& get_clrIdx_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_CommentAuthor* default_instance_;
        bool m_has_id_attr;
        XSD::unsignedInt_ m_id_attr;
        bool m_has_name_attr;
        ST_Name* m_name_attr;
        bool m_has_initials_attr;
        ST_Name* m_initials_attr;
        bool m_has_lastIdx_attr;
        XSD::unsignedInt_ m_lastIdx_attr;
        bool m_has_clrIdx_attr;
        XSD::unsignedInt_ m_clrIdx_attr;
    };

    class CT_CommentAuthorList: public XSD::ComplexType
    {
    public:
        CT_CommentAuthorList();
        ~CT_CommentAuthorList();
        CT_CommentAuthor* add_cmAuthor();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommentAuthorList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_cmAuthor() const;
            CT_CommentAuthor* mutable_cmAuthor();
            const CT_CommentAuthor& get_cmAuthor() const;
        protected:
        private:
            bool m_has_cmAuthor;
            CT_CommentAuthor* m_cmAuthor;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_CommentAuthorList* default_instance_;
    };

    class CT_Comment: public XSD::ComplexType
    {
    public:
        CT_Comment();
        ~CT_Comment();
        bool has_pos() const;
        ns_a::CT_Point2D* mutable_pos();
        const ns_a::CT_Point2D& get_pos() const;
        bool has_text() const;
        void set_text(const XSD::string_& _text);
        const XSD::string_& get_text() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Comment& default_instance();
        bool has_authorId_attr() const;
        void set_authorId_attr(const XSD::unsignedInt_& _authorId_attr);
        const XSD::unsignedInt_& get_authorId_attr() const;
        bool has_dt_attr() const;
        void set_dt_attr(const XSD::dateTime_& _dt_attr);
        const XSD::dateTime_& get_dt_attr() const;
        bool has_idx_attr() const;
        void set_idx_attr(const ST_Index& _idx_attr);
        const ST_Index& get_idx_attr() const;
    protected:
    private:
        bool m_has_pos;
        ns_a::CT_Point2D* m_pos;
        bool m_has_text;
        XSD::string_ m_text;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Comment* default_instance_;
        bool m_has_authorId_attr;
        XSD::unsignedInt_ m_authorId_attr;
        bool m_has_dt_attr;
        XSD::dateTime_ m_dt_attr;
        bool m_has_idx_attr;
        ST_Index* m_idx_attr;
    };

    class CT_CommentList: public XSD::ComplexType
    {
    public:
        CT_CommentList();
        ~CT_CommentList();
        CT_Comment* add_cm();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommentList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_cm() const;
            CT_Comment* mutable_cm();
            const CT_Comment& get_cm() const;
        protected:
        private:
            bool m_has_cm;
            CT_Comment* m_cm;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_CommentList* default_instance_;
    };

    class CT_OleObjectEmbed: public XSD::ComplexType
    {
    public:
        CT_OleObjectEmbed();
        ~CT_OleObjectEmbed();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OleObjectEmbed& default_instance();
        bool has_followColorScheme_attr() const;
        void set_followColorScheme_attr(const ST_OleObjectFollowColorScheme& _followColorScheme_attr);
        const ST_OleObjectFollowColorScheme& get_followColorScheme_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_OleObjectEmbed* default_instance_;
        bool m_has_followColorScheme_attr;
        ST_OleObjectFollowColorScheme* m_followColorScheme_attr;
    };

    class CT_OleObjectLink: public XSD::ComplexType
    {
    public:
        CT_OleObjectLink();
        ~CT_OleObjectLink();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OleObjectLink& default_instance();
        bool has_updateAutomatic_attr() const;
        void set_updateAutomatic_attr(const XSD::boolean_& _updateAutomatic_attr);
        const XSD::boolean_& get_updateAutomatic_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_OleObjectLink* default_instance_;
        bool m_has_updateAutomatic_attr;
        XSD::boolean_ m_updateAutomatic_attr;
    };

    class CT_OleObject: public XSD::ComplexType
    {
    public:
        CT_OleObject();
        ~CT_OleObject();
        bool has_embed() const;
        CT_OleObjectEmbed* mutable_embed();
        const CT_OleObjectEmbed& get_embed() const;
        bool has_link() const;
        CT_OleObjectLink* mutable_link();
        const CT_OleObjectLink& get_link() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OleObject& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr);
        const ns_a::ST_ShapeID& get_spid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const XSD::string_& _name_attr);
        const XSD::string_& get_name_attr() const;
        bool has_showAsIcon_attr() const;
        void set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr);
        const XSD::boolean_& get_showAsIcon_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_imgW_attr() const;
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgW_attr() const;
        bool has_imgH_attr() const;
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgH_attr() const;
        bool has_progId_attr() const;
        void set_progId_attr(const XSD::string_& _progId_attr);
        const XSD::string_& get_progId_attr() const;
    protected:
    private:
        bool m_has_embed;
        CT_OleObjectEmbed* m_embed;
        bool m_has_link;
        CT_OleObjectLink* m_link;
        bool m_has_pic;
        CT_Picture* m_pic;
        static CT_OleObject* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_ShapeID* m_spid_attr;
        bool m_has_name_attr;
        XSD::string_ m_name_attr;
        bool m_has_showAsIcon_attr;
        XSD::boolean_ m_showAsIcon_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_imgW_attr;
        ns_a::ST_PositiveCoordinate32* m_imgW_attr;
        bool m_has_imgH_attr;
        ns_a::ST_PositiveCoordinate32* m_imgH_attr;
        bool m_has_progId_attr;
        XSD::string_ m_progId_attr;
    };

    class CT_Control: public XSD::ComplexType
    {
    public:
        CT_Control();
        ~CT_Control();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Control& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr);
        const ns_a::ST_ShapeID& get_spid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const XSD::string_& _name_attr);
        const XSD::string_& get_name_attr() const;
        bool has_showAsIcon_attr() const;
        void set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr);
        const XSD::boolean_& get_showAsIcon_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_imgW_attr() const;
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgW_attr() const;
        bool has_imgH_attr() const;
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgH_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        bool m_has_pic;
        CT_Picture* m_pic;
        static CT_Control* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_ShapeID* m_spid_attr;
        bool m_has_name_attr;
        XSD::string_ m_name_attr;
        bool m_has_showAsIcon_attr;
        XSD::boolean_ m_showAsIcon_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_imgW_attr;
        ns_a::ST_PositiveCoordinate32* m_imgW_attr;
        bool m_has_imgH_attr;
        ns_a::ST_PositiveCoordinate32* m_imgH_attr;
    };

    class CT_ControlList: public XSD::ComplexType
    {
    public:
        CT_ControlList();
        ~CT_ControlList();
        CT_Control* add_control();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ControlList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_control() const;
            CT_Control* mutable_control();
            const CT_Control& get_control() const;
        protected:
        private:
            bool m_has_control;
            CT_Control* m_control;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_ControlList* default_instance_;
    };

    class CT_SlideIdListEntry: public XSD::ComplexType
    {
    public:
        CT_SlideIdListEntry();
        ~CT_SlideIdListEntry();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideIdListEntry& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideId& _id_attr);
        const ST_SlideId& get_id_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideIdListEntry* default_instance_;
        bool m_has_id_attr;
        ST_SlideId* m_id_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_SlideIdList: public XSD::ComplexType
    {
    public:
        CT_SlideIdList();
        ~CT_SlideIdList();
        CT_SlideIdListEntry* add_sldId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideIdList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sldId() const;
            CT_SlideIdListEntry* mutable_sldId();
            const CT_SlideIdListEntry& get_sldId() const;
        protected:
        private:
            bool m_has_sldId;
            CT_SlideIdListEntry* m_sldId;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SlideIdList* default_instance_;
    };

    class CT_SlideMasterIdListEntry: public XSD::ComplexType
    {
    public:
        CT_SlideMasterIdListEntry();
        ~CT_SlideMasterIdListEntry();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideMasterIdListEntry& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideMasterId& _id_attr);
        const ST_SlideMasterId& get_id_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideMasterIdListEntry* default_instance_;
        bool m_has_id_attr;
        ST_SlideMasterId* m_id_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_SlideMasterIdList: public XSD::ComplexType
    {
    public:
        CT_SlideMasterIdList();
        ~CT_SlideMasterIdList();
        CT_SlideMasterIdListEntry* add_sldMasterId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideMasterIdList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sldMasterId() const;
            CT_SlideMasterIdListEntry* mutable_sldMasterId();
            const CT_SlideMasterIdListEntry& get_sldMasterId() const;
        protected:
        private:
            bool m_has_sldMasterId;
            CT_SlideMasterIdListEntry* m_sldMasterId;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SlideMasterIdList* default_instance_;
    };

    class CT_NotesMasterIdListEntry: public XSD::ComplexType
    {
    public:
        CT_NotesMasterIdListEntry();
        ~CT_NotesMasterIdListEntry();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesMasterIdListEntry& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_NotesMasterIdListEntry* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_NotesMasterIdList: public XSD::ComplexType
    {
    public:
        CT_NotesMasterIdList();
        ~CT_NotesMasterIdList();
        bool has_notesMasterId() const;
        CT_NotesMasterIdListEntry* mutable_notesMasterId();
        const CT_NotesMasterIdListEntry& get_notesMasterId() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesMasterIdList& default_instance();
    protected:
    private:
        bool m_has_notesMasterId;
        CT_NotesMasterIdListEntry* m_notesMasterId;
        static CT_NotesMasterIdList* default_instance_;
    };

    class CT_HandoutMasterIdListEntry: public XSD::ComplexType
    {
    public:
        CT_HandoutMasterIdListEntry();
        ~CT_HandoutMasterIdListEntry();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_HandoutMasterIdListEntry& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_HandoutMasterIdListEntry* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_HandoutMasterIdList: public XSD::ComplexType
    {
    public:
        CT_HandoutMasterIdList();
        ~CT_HandoutMasterIdList();
        bool has_handoutMasterId() const;
        CT_HandoutMasterIdListEntry* mutable_handoutMasterId();
        const CT_HandoutMasterIdListEntry& get_handoutMasterId() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_HandoutMasterIdList& default_instance();
    protected:
    private:
        bool m_has_handoutMasterId;
        CT_HandoutMasterIdListEntry* m_handoutMasterId;
        static CT_HandoutMasterIdList* default_instance_;
    };

    class CT_EmbeddedFontDataId: public XSD::ComplexType
    {
    public:
        CT_EmbeddedFontDataId();
        ~CT_EmbeddedFontDataId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EmbeddedFontDataId& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_EmbeddedFontDataId* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_EmbeddedFontListEntry: public XSD::ComplexType
    {
    public:
        CT_EmbeddedFontListEntry();
        ~CT_EmbeddedFontListEntry();
        bool has_font() const;
        ns_a::CT_TextFont* mutable_font();
        const ns_a::CT_TextFont& get_font() const;
        bool has_regular() const;
        CT_EmbeddedFontDataId* mutable_regular();
        const CT_EmbeddedFontDataId& get_regular() const;
        bool has_bold() const;
        CT_EmbeddedFontDataId* mutable_bold();
        const CT_EmbeddedFontDataId& get_bold() const;
        bool has_italic() const;
        CT_EmbeddedFontDataId* mutable_italic();
        const CT_EmbeddedFontDataId& get_italic() const;
        bool has_boldItalic() const;
        CT_EmbeddedFontDataId* mutable_boldItalic();
        const CT_EmbeddedFontDataId& get_boldItalic() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EmbeddedFontListEntry& default_instance();
    protected:
    private:
        bool m_has_font;
        ns_a::CT_TextFont* m_font;
        bool m_has_regular;
        CT_EmbeddedFontDataId* m_regular;
        bool m_has_bold;
        CT_EmbeddedFontDataId* m_bold;
        bool m_has_italic;
        CT_EmbeddedFontDataId* m_italic;
        bool m_has_boldItalic;
        CT_EmbeddedFontDataId* m_boldItalic;
        static CT_EmbeddedFontListEntry* default_instance_;
    };

    class CT_EmbeddedFontList: public XSD::ComplexType
    {
    public:
        CT_EmbeddedFontList();
        ~CT_EmbeddedFontList();
        CT_EmbeddedFontListEntry* add_embeddedFont();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EmbeddedFontList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_embeddedFont() const;
            CT_EmbeddedFontListEntry* mutable_embeddedFont();
            const CT_EmbeddedFontListEntry& get_embeddedFont() const;
        protected:
        private:
            bool m_has_embeddedFont;
            CT_EmbeddedFontListEntry* m_embeddedFont;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_EmbeddedFontList* default_instance_;
    };

    class CT_SmartTags: public XSD::ComplexType
    {
    public:
        CT_SmartTags();
        ~CT_SmartTags();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SmartTags& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_SmartTags* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_CustomShow: public XSD::ComplexType
    {
    public:
        CT_CustomShow();
        ~CT_CustomShow();
        bool has_sldLst() const;
        CT_SlideRelationshipList* mutable_sldLst();
        const CT_SlideRelationshipList& get_sldLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CustomShow& default_instance();
        bool has_name_attr() const;
        void set_name_attr(const ST_Name& _name_attr);
        const ST_Name& get_name_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const XSD::unsignedInt_& _id_attr);
        const XSD::unsignedInt_& get_id_attr() const;
    protected:
    private:
        bool m_has_sldLst;
        CT_SlideRelationshipList* m_sldLst;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_CustomShow* default_instance_;
        bool m_has_name_attr;
        ST_Name* m_name_attr;
        bool m_has_id_attr;
        XSD::unsignedInt_ m_id_attr;
    };

    class CT_CustomShowList: public XSD::ComplexType
    {
    public:
        CT_CustomShowList();
        ~CT_CustomShowList();
        CT_CustomShow* add_custShow();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CustomShowList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_custShow() const;
            CT_CustomShow* mutable_custShow();
            const CT_CustomShow& get_custShow() const;
        protected:
        private:
            bool m_has_custShow;
            CT_CustomShow* m_custShow;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_CustomShowList* default_instance_;
    };

    class CT_PhotoAlbum: public XSD::ComplexType
    {
    public:
        CT_PhotoAlbum();
        ~CT_PhotoAlbum();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PhotoAlbum& default_instance();
        bool has_bw_attr() const;
        void set_bw_attr(const XSD::boolean_& _bw_attr);
        const XSD::boolean_& get_bw_attr() const;
        bool has_showCaptions_attr() const;
        void set_showCaptions_attr(const XSD::boolean_& _showCaptions_attr);
        const XSD::boolean_& get_showCaptions_attr() const;
        bool has_layout_attr() const;
        void set_layout_attr(const ST_PhotoAlbumLayout& _layout_attr);
        const ST_PhotoAlbumLayout& get_layout_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ST_PhotoAlbumFrameShape& _frame_attr);
        const ST_PhotoAlbumFrameShape& get_frame_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_PhotoAlbum* default_instance_;
        bool m_has_bw_attr;
        XSD::boolean_ m_bw_attr;
        bool m_has_showCaptions_attr;
        XSD::boolean_ m_showCaptions_attr;
        bool m_has_layout_attr;
        ST_PhotoAlbumLayout* m_layout_attr;
        bool m_has_frame_attr;
        ST_PhotoAlbumFrameShape* m_frame_attr;
    };

    class CT_SlideSize: public XSD::ComplexType
    {
    public:
        CT_SlideSize();
        ~CT_SlideSize();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideSize& default_instance();
        bool has_cx_attr() const;
        void set_cx_attr(const ST_SlideSizeCoordinate& _cx_attr);
        const ST_SlideSizeCoordinate& get_cx_attr() const;
        bool has_cy_attr() const;
        void set_cy_attr(const ST_SlideSizeCoordinate& _cy_attr);
        const ST_SlideSizeCoordinate& get_cy_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_SlideSizeType& _type_attr);
        const ST_SlideSizeType& get_type_attr() const;
    protected:
    private:
        static CT_SlideSize* default_instance_;
        bool m_has_cx_attr;
        ST_SlideSizeCoordinate* m_cx_attr;
        bool m_has_cy_attr;
        ST_SlideSizeCoordinate* m_cy_attr;
        bool m_has_type_attr;
        ST_SlideSizeType* m_type_attr;
    };

    class CT_Kinsoku: public XSD::ComplexType
    {
    public:
        CT_Kinsoku();
        ~CT_Kinsoku();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Kinsoku& default_instance();
        bool has_lang_attr() const;
        void set_lang_attr(const XSD::string_& _lang_attr);
        const XSD::string_& get_lang_attr() const;
        bool has_invalStChars_attr() const;
        void set_invalStChars_attr(const XSD::string_& _invalStChars_attr);
        const XSD::string_& get_invalStChars_attr() const;
        bool has_invalEndChars_attr() const;
        void set_invalEndChars_attr(const XSD::string_& _invalEndChars_attr);
        const XSD::string_& get_invalEndChars_attr() const;
    protected:
    private:
        static CT_Kinsoku* default_instance_;
        bool m_has_lang_attr;
        XSD::string_ m_lang_attr;
        bool m_has_invalStChars_attr;
        XSD::string_ m_invalStChars_attr;
        bool m_has_invalEndChars_attr;
        XSD::string_ m_invalEndChars_attr;
    };

    class CT_ModifyVerifier: public XSD::ComplexType
    {
    public:
        CT_ModifyVerifier();
        ~CT_ModifyVerifier();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ModifyVerifier& default_instance();
        bool has_algorithmName_attr() const;
        void set_algorithmName_attr(const XSD::string_& _algorithmName_attr);
        const XSD::string_& get_algorithmName_attr() const;
        bool has_hashValue_attr() const;
        void set_hashValue_attr(const XSD::base64Binary_& _hashValue_attr);
        const XSD::base64Binary_& get_hashValue_attr() const;
        bool has_saltValue_attr() const;
        void set_saltValue_attr(const XSD::base64Binary_& _saltValue_attr);
        const XSD::base64Binary_& get_saltValue_attr() const;
        bool has_spinValue_attr() const;
        void set_spinValue_attr(const XSD::unsignedInt_& _spinValue_attr);
        const XSD::unsignedInt_& get_spinValue_attr() const;
        bool has_cryptProviderType_attr() const;
        void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr);
        const ns_s::ST_CryptProv& get_cryptProviderType_attr() const;
        bool has_cryptAlgorithmClass_attr() const;
        void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr);
        const ns_s::ST_AlgClass& get_cryptAlgorithmClass_attr() const;
        bool has_cryptAlgorithmType_attr() const;
        void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr);
        const ns_s::ST_AlgType& get_cryptAlgorithmType_attr() const;
        bool has_cryptAlgorithmSid_attr() const;
        void set_cryptAlgorithmSid_attr(const XSD::unsignedInt_& _cryptAlgorithmSid_attr);
        const XSD::unsignedInt_& get_cryptAlgorithmSid_attr() const;
        bool has_spinCount_attr() const;
        void set_spinCount_attr(const XSD::unsignedInt_& _spinCount_attr);
        const XSD::unsignedInt_& get_spinCount_attr() const;
        bool has_saltData_attr() const;
        void set_saltData_attr(const XSD::base64Binary_& _saltData_attr);
        const XSD::base64Binary_& get_saltData_attr() const;
        bool has_hashData_attr() const;
        void set_hashData_attr(const XSD::base64Binary_& _hashData_attr);
        const XSD::base64Binary_& get_hashData_attr() const;
        bool has_cryptProvider_attr() const;
        void set_cryptProvider_attr(const XSD::string_& _cryptProvider_attr);
        const XSD::string_& get_cryptProvider_attr() const;
        bool has_algIdExt_attr() const;
        void set_algIdExt_attr(const XSD::unsignedInt_& _algIdExt_attr);
        const XSD::unsignedInt_& get_algIdExt_attr() const;
        bool has_algIdExtSource_attr() const;
        void set_algIdExtSource_attr(const XSD::string_& _algIdExtSource_attr);
        const XSD::string_& get_algIdExtSource_attr() const;
        bool has_cryptProviderTypeExt_attr() const;
        void set_cryptProviderTypeExt_attr(const XSD::unsignedInt_& _cryptProviderTypeExt_attr);
        const XSD::unsignedInt_& get_cryptProviderTypeExt_attr() const;
        bool has_cryptProviderTypeExtSource_attr() const;
        void set_cryptProviderTypeExtSource_attr(const XSD::string_& _cryptProviderTypeExtSource_attr);
        const XSD::string_& get_cryptProviderTypeExtSource_attr() const;
    protected:
    private:
        static CT_ModifyVerifier* default_instance_;
        bool m_has_algorithmName_attr;
        XSD::string_ m_algorithmName_attr;
        bool m_has_hashValue_attr;
        XSD::base64Binary_ m_hashValue_attr;
        bool m_has_saltValue_attr;
        XSD::base64Binary_ m_saltValue_attr;
        bool m_has_spinValue_attr;
        XSD::unsignedInt_ m_spinValue_attr;
        bool m_has_cryptProviderType_attr;
        ns_s::ST_CryptProv* m_cryptProviderType_attr;
        bool m_has_cryptAlgorithmClass_attr;
        ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr;
        bool m_has_cryptAlgorithmType_attr;
        ns_s::ST_AlgType* m_cryptAlgorithmType_attr;
        bool m_has_cryptAlgorithmSid_attr;
        XSD::unsignedInt_ m_cryptAlgorithmSid_attr;
        bool m_has_spinCount_attr;
        XSD::unsignedInt_ m_spinCount_attr;
        bool m_has_saltData_attr;
        XSD::base64Binary_ m_saltData_attr;
        bool m_has_hashData_attr;
        XSD::base64Binary_ m_hashData_attr;
        bool m_has_cryptProvider_attr;
        XSD::string_ m_cryptProvider_attr;
        bool m_has_algIdExt_attr;
        XSD::unsignedInt_ m_algIdExt_attr;
        bool m_has_algIdExtSource_attr;
        XSD::string_ m_algIdExtSource_attr;
        bool m_has_cryptProviderTypeExt_attr;
        XSD::unsignedInt_ m_cryptProviderTypeExt_attr;
        bool m_has_cryptProviderTypeExtSource_attr;
        XSD::string_ m_cryptProviderTypeExtSource_attr;
    };

    class CT_Presentation: public XSD::ComplexType
    {
    public:
        CT_Presentation();
        ~CT_Presentation();
        bool has_sldMasterIdLst() const;
        CT_SlideMasterIdList* mutable_sldMasterIdLst();
        const CT_SlideMasterIdList& get_sldMasterIdLst() const;
        bool has_notesMasterIdLst() const;
        CT_NotesMasterIdList* mutable_notesMasterIdLst();
        const CT_NotesMasterIdList& get_notesMasterIdLst() const;
        bool has_handoutMasterIdLst() const;
        CT_HandoutMasterIdList* mutable_handoutMasterIdLst();
        const CT_HandoutMasterIdList& get_handoutMasterIdLst() const;
        bool has_sldIdLst() const;
        CT_SlideIdList* mutable_sldIdLst();
        const CT_SlideIdList& get_sldIdLst() const;
        bool has_sldSz() const;
        CT_SlideSize* mutable_sldSz();
        const CT_SlideSize& get_sldSz() const;
        bool has_notesSz() const;
        ns_a::CT_PositiveSize2D* mutable_notesSz();
        const ns_a::CT_PositiveSize2D& get_notesSz() const;
        bool has_smartTags() const;
        CT_SmartTags* mutable_smartTags();
        const CT_SmartTags& get_smartTags() const;
        bool has_embeddedFontLst() const;
        CT_EmbeddedFontList* mutable_embeddedFontLst();
        const CT_EmbeddedFontList& get_embeddedFontLst() const;
        bool has_custShowLst() const;
        CT_CustomShowList* mutable_custShowLst();
        const CT_CustomShowList& get_custShowLst() const;
        bool has_photoAlbum() const;
        CT_PhotoAlbum* mutable_photoAlbum();
        const CT_PhotoAlbum& get_photoAlbum() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& get_custDataLst() const;
        bool has_kinsoku() const;
        CT_Kinsoku* mutable_kinsoku();
        const CT_Kinsoku& get_kinsoku() const;
        bool has_defaultTextStyle() const;
        ns_a::CT_TextListStyle* mutable_defaultTextStyle();
        const ns_a::CT_TextListStyle& get_defaultTextStyle() const;
        bool has_modifyVerifier() const;
        CT_ModifyVerifier* mutable_modifyVerifier();
        const CT_ModifyVerifier& get_modifyVerifier() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Presentation& default_instance();
        bool has_serverZoom_attr() const;
        void set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr);
        const ns_a::ST_Percentage& get_serverZoom_attr() const;
        bool has_firstSlideNum_attr() const;
        void set_firstSlideNum_attr(const XSD::int_& _firstSlideNum_attr);
        const XSD::int_& get_firstSlideNum_attr() const;
        bool has_showSpecialPlsOnTitleSld_attr() const;
        void set_showSpecialPlsOnTitleSld_attr(const XSD::boolean_& _showSpecialPlsOnTitleSld_attr);
        const XSD::boolean_& get_showSpecialPlsOnTitleSld_attr() const;
        bool has_rtl_attr() const;
        void set_rtl_attr(const XSD::boolean_& _rtl_attr);
        const XSD::boolean_& get_rtl_attr() const;
        bool has_removePersonalInfoOnSave_attr() const;
        void set_removePersonalInfoOnSave_attr(const XSD::boolean_& _removePersonalInfoOnSave_attr);
        const XSD::boolean_& get_removePersonalInfoOnSave_attr() const;
        bool has_compatMode_attr() const;
        void set_compatMode_attr(const XSD::boolean_& _compatMode_attr);
        const XSD::boolean_& get_compatMode_attr() const;
        bool has_strictFirstAndLastChars_attr() const;
        void set_strictFirstAndLastChars_attr(const XSD::boolean_& _strictFirstAndLastChars_attr);
        const XSD::boolean_& get_strictFirstAndLastChars_attr() const;
        bool has_embedTrueTypeFonts_attr() const;
        void set_embedTrueTypeFonts_attr(const XSD::boolean_& _embedTrueTypeFonts_attr);
        const XSD::boolean_& get_embedTrueTypeFonts_attr() const;
        bool has_saveSubsetFonts_attr() const;
        void set_saveSubsetFonts_attr(const XSD::boolean_& _saveSubsetFonts_attr);
        const XSD::boolean_& get_saveSubsetFonts_attr() const;
        bool has_autoCompressPictures_attr() const;
        void set_autoCompressPictures_attr(const XSD::boolean_& _autoCompressPictures_attr);
        const XSD::boolean_& get_autoCompressPictures_attr() const;
        bool has_bookmarkIdSeed_attr() const;
        void set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr);
        const ST_BookmarkIdSeed& get_bookmarkIdSeed_attr() const;
        bool has_conformance_attr() const;
        void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr);
        const ns_s::ST_ConformanceClass& get_conformance_attr() const;
    protected:
    private:
        bool m_has_sldMasterIdLst;
        CT_SlideMasterIdList* m_sldMasterIdLst;
        bool m_has_notesMasterIdLst;
        CT_NotesMasterIdList* m_notesMasterIdLst;
        bool m_has_handoutMasterIdLst;
        CT_HandoutMasterIdList* m_handoutMasterIdLst;
        bool m_has_sldIdLst;
        CT_SlideIdList* m_sldIdLst;
        bool m_has_sldSz;
        CT_SlideSize* m_sldSz;
        bool m_has_notesSz;
        ns_a::CT_PositiveSize2D* m_notesSz;
        bool m_has_smartTags;
        CT_SmartTags* m_smartTags;
        bool m_has_embeddedFontLst;
        CT_EmbeddedFontList* m_embeddedFontLst;
        bool m_has_custShowLst;
        CT_CustomShowList* m_custShowLst;
        bool m_has_photoAlbum;
        CT_PhotoAlbum* m_photoAlbum;
        bool m_has_custDataLst;
        CT_CustomerDataList* m_custDataLst;
        bool m_has_kinsoku;
        CT_Kinsoku* m_kinsoku;
        bool m_has_defaultTextStyle;
        ns_a::CT_TextListStyle* m_defaultTextStyle;
        bool m_has_modifyVerifier;
        CT_ModifyVerifier* m_modifyVerifier;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_Presentation* default_instance_;
        bool m_has_serverZoom_attr;
        ns_a::ST_Percentage* m_serverZoom_attr;
        bool m_has_firstSlideNum_attr;
        XSD::int_ m_firstSlideNum_attr;
        bool m_has_showSpecialPlsOnTitleSld_attr;
        XSD::boolean_ m_showSpecialPlsOnTitleSld_attr;
        bool m_has_rtl_attr;
        XSD::boolean_ m_rtl_attr;
        bool m_has_removePersonalInfoOnSave_attr;
        XSD::boolean_ m_removePersonalInfoOnSave_attr;
        bool m_has_compatMode_attr;
        XSD::boolean_ m_compatMode_attr;
        bool m_has_strictFirstAndLastChars_attr;
        XSD::boolean_ m_strictFirstAndLastChars_attr;
        bool m_has_embedTrueTypeFonts_attr;
        XSD::boolean_ m_embedTrueTypeFonts_attr;
        bool m_has_saveSubsetFonts_attr;
        XSD::boolean_ m_saveSubsetFonts_attr;
        bool m_has_autoCompressPictures_attr;
        XSD::boolean_ m_autoCompressPictures_attr;
        bool m_has_bookmarkIdSeed_attr;
        ST_BookmarkIdSeed* m_bookmarkIdSeed_attr;
        bool m_has_conformance_attr;
        ns_s::ST_ConformanceClass* m_conformance_attr;
    };

    class CT_HtmlPublishProperties: public XSD::ComplexType
    {
    public:
        CT_HtmlPublishProperties();
        ~CT_HtmlPublishProperties();
        bool has_sldAll() const;
        CT_Empty* mutable_sldAll();
        const CT_Empty& get_sldAll() const;
        bool has_sldRg() const;
        CT_IndexRange* mutable_sldRg();
        const CT_IndexRange& get_sldRg() const;
        bool has_custShow() const;
        CT_CustomShowId* mutable_custShow();
        const CT_CustomShowId& get_custShow() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_HtmlPublishProperties& default_instance();
        bool has_showSpeakerNotes_attr() const;
        void set_showSpeakerNotes_attr(const XSD::boolean_& _showSpeakerNotes_attr);
        const XSD::boolean_& get_showSpeakerNotes_attr() const;
        bool has_target_attr() const;
        void set_target_attr(const XSD::string_& _target_attr);
        const XSD::string_& get_target_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const XSD::string_& _title_attr);
        const XSD::string_& get_title_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_sldAll;
        CT_Empty* m_sldAll;
        bool m_has_sldRg;
        CT_IndexRange* m_sldRg;
        bool m_has_custShow;
        CT_CustomShowId* m_custShow;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_HtmlPublishProperties* default_instance_;
        bool m_has_showSpeakerNotes_attr;
        XSD::boolean_ m_showSpeakerNotes_attr;
        bool m_has_target_attr;
        XSD::string_ m_target_attr;
        bool m_has_title_attr;
        XSD::string_ m_title_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_WebProperties: public XSD::ComplexType
    {
    public:
        CT_WebProperties();
        ~CT_WebProperties();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_WebProperties& default_instance();
        bool has_showAnimation_attr() const;
        void set_showAnimation_attr(const XSD::boolean_& _showAnimation_attr);
        const XSD::boolean_& get_showAnimation_attr() const;
        bool has_resizeGraphics_attr() const;
        void set_resizeGraphics_attr(const XSD::boolean_& _resizeGraphics_attr);
        const XSD::boolean_& get_resizeGraphics_attr() const;
        bool has_allowPng_attr() const;
        void set_allowPng_attr(const XSD::boolean_& _allowPng_attr);
        const XSD::boolean_& get_allowPng_attr() const;
        bool has_relyOnVml_attr() const;
        void set_relyOnVml_attr(const XSD::boolean_& _relyOnVml_attr);
        const XSD::boolean_& get_relyOnVml_attr() const;
        bool has_organizeInFolders_attr() const;
        void set_organizeInFolders_attr(const XSD::boolean_& _organizeInFolders_attr);
        const XSD::boolean_& get_organizeInFolders_attr() const;
        bool has_useLongFilenames_attr() const;
        void set_useLongFilenames_attr(const XSD::boolean_& _useLongFilenames_attr);
        const XSD::boolean_& get_useLongFilenames_attr() const;
        bool has_imgSz_attr() const;
        void set_imgSz_attr(const ST_WebScreenSize& _imgSz_attr);
        const ST_WebScreenSize& get_imgSz_attr() const;
        bool has_encoding_attr() const;
        void set_encoding_attr(const ST_WebEncoding& _encoding_attr);
        const ST_WebEncoding& get_encoding_attr() const;
        bool has_clr_attr() const;
        void set_clr_attr(const ST_WebColorType& _clr_attr);
        const ST_WebColorType& get_clr_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_WebProperties* default_instance_;
        bool m_has_showAnimation_attr;
        XSD::boolean_ m_showAnimation_attr;
        bool m_has_resizeGraphics_attr;
        XSD::boolean_ m_resizeGraphics_attr;
        bool m_has_allowPng_attr;
        XSD::boolean_ m_allowPng_attr;
        bool m_has_relyOnVml_attr;
        XSD::boolean_ m_relyOnVml_attr;
        bool m_has_organizeInFolders_attr;
        XSD::boolean_ m_organizeInFolders_attr;
        bool m_has_useLongFilenames_attr;
        XSD::boolean_ m_useLongFilenames_attr;
        bool m_has_imgSz_attr;
        ST_WebScreenSize* m_imgSz_attr;
        bool m_has_encoding_attr;
        ST_WebEncoding* m_encoding_attr;
        bool m_has_clr_attr;
        ST_WebColorType* m_clr_attr;
    };

    class CT_PrintProperties: public XSD::ComplexType
    {
    public:
        CT_PrintProperties();
        ~CT_PrintProperties();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PrintProperties& default_instance();
        bool has_prnWhat_attr() const;
        void set_prnWhat_attr(const ST_PrintWhat& _prnWhat_attr);
        const ST_PrintWhat& get_prnWhat_attr() const;
        bool has_clrMode_attr() const;
        void set_clrMode_attr(const ST_PrintColorMode& _clrMode_attr);
        const ST_PrintColorMode& get_clrMode_attr() const;
        bool has_hiddenSlides_attr() const;
        void set_hiddenSlides_attr(const XSD::boolean_& _hiddenSlides_attr);
        const XSD::boolean_& get_hiddenSlides_attr() const;
        bool has_scaleToFitPaper_attr() const;
        void set_scaleToFitPaper_attr(const XSD::boolean_& _scaleToFitPaper_attr);
        const XSD::boolean_& get_scaleToFitPaper_attr() const;
        bool has_frameSlides_attr() const;
        void set_frameSlides_attr(const XSD::boolean_& _frameSlides_attr);
        const XSD::boolean_& get_frameSlides_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_PrintProperties* default_instance_;
        bool m_has_prnWhat_attr;
        ST_PrintWhat* m_prnWhat_attr;
        bool m_has_clrMode_attr;
        ST_PrintColorMode* m_clrMode_attr;
        bool m_has_hiddenSlides_attr;
        XSD::boolean_ m_hiddenSlides_attr;
        bool m_has_scaleToFitPaper_attr;
        XSD::boolean_ m_scaleToFitPaper_attr;
        bool m_has_frameSlides_attr;
        XSD::boolean_ m_frameSlides_attr;
    };

    class CT_ShowInfoBrowse: public XSD::ComplexType
    {
    public:
        CT_ShowInfoBrowse();
        ~CT_ShowInfoBrowse();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShowInfoBrowse& default_instance();
        bool has_showScrollbar_attr() const;
        void set_showScrollbar_attr(const XSD::boolean_& _showScrollbar_attr);
        const XSD::boolean_& get_showScrollbar_attr() const;
    protected:
    private:
        static CT_ShowInfoBrowse* default_instance_;
        bool m_has_showScrollbar_attr;
        XSD::boolean_ m_showScrollbar_attr;
    };

    class CT_ShowInfoKiosk: public XSD::ComplexType
    {
    public:
        CT_ShowInfoKiosk();
        ~CT_ShowInfoKiosk();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShowInfoKiosk& default_instance();
        bool has_restart_attr() const;
        void set_restart_attr(const XSD::unsignedInt_& _restart_attr);
        const XSD::unsignedInt_& get_restart_attr() const;
    protected:
    private:
        static CT_ShowInfoKiosk* default_instance_;
        bool m_has_restart_attr;
        XSD::unsignedInt_ m_restart_attr;
    };

    class CT_ShowProperties: public XSD::ComplexType
    {
    public:
        CT_ShowProperties();
        ~CT_ShowProperties();
        bool has_present() const;
        CT_Empty* mutable_present();
        const CT_Empty& get_present() const;
        bool has_browse() const;
        CT_ShowInfoBrowse* mutable_browse();
        const CT_ShowInfoBrowse& get_browse() const;
        bool has_kiosk() const;
        CT_ShowInfoKiosk* mutable_kiosk();
        const CT_ShowInfoKiosk& get_kiosk() const;
        bool has_sldAll() const;
        CT_Empty* mutable_sldAll();
        const CT_Empty& get_sldAll() const;
        bool has_sldRg() const;
        CT_IndexRange* mutable_sldRg();
        const CT_IndexRange& get_sldRg() const;
        bool has_custShow() const;
        CT_CustomShowId* mutable_custShow();
        const CT_CustomShowId& get_custShow() const;
        bool has_penClr() const;
        ns_a::CT_Color* mutable_penClr();
        const ns_a::CT_Color& get_penClr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShowProperties& default_instance();
        bool has_loop_attr() const;
        void set_loop_attr(const XSD::boolean_& _loop_attr);
        const XSD::boolean_& get_loop_attr() const;
        bool has_showNarration_attr() const;
        void set_showNarration_attr(const XSD::boolean_& _showNarration_attr);
        const XSD::boolean_& get_showNarration_attr() const;
        bool has_showAnimation_attr() const;
        void set_showAnimation_attr(const XSD::boolean_& _showAnimation_attr);
        const XSD::boolean_& get_showAnimation_attr() const;
        bool has_useTimings_attr() const;
        void set_useTimings_attr(const XSD::boolean_& _useTimings_attr);
        const XSD::boolean_& get_useTimings_attr() const;
    protected:
    private:
        bool m_has_present;
        CT_Empty* m_present;
        bool m_has_browse;
        CT_ShowInfoBrowse* m_browse;
        bool m_has_kiosk;
        CT_ShowInfoKiosk* m_kiosk;
        bool m_has_sldAll;
        CT_Empty* m_sldAll;
        bool m_has_sldRg;
        CT_IndexRange* m_sldRg;
        bool m_has_custShow;
        CT_CustomShowId* m_custShow;
        bool m_has_penClr;
        ns_a::CT_Color* m_penClr;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_ShowProperties* default_instance_;
        bool m_has_loop_attr;
        XSD::boolean_ m_loop_attr;
        bool m_has_showNarration_attr;
        XSD::boolean_ m_showNarration_attr;
        bool m_has_showAnimation_attr;
        XSD::boolean_ m_showAnimation_attr;
        bool m_has_useTimings_attr;
        XSD::boolean_ m_useTimings_attr;
    };

    class CT_PresentationProperties: public XSD::ComplexType
    {
    public:
        CT_PresentationProperties();
        ~CT_PresentationProperties();
        bool has_htmlPubPr() const;
        CT_HtmlPublishProperties* mutable_htmlPubPr();
        const CT_HtmlPublishProperties& get_htmlPubPr() const;
        bool has_webPr() const;
        CT_WebProperties* mutable_webPr();
        const CT_WebProperties& get_webPr() const;
        bool has_prnPr() const;
        CT_PrintProperties* mutable_prnPr();
        const CT_PrintProperties& get_prnPr() const;
        bool has_showPr() const;
        CT_ShowProperties* mutable_showPr();
        const CT_ShowProperties& get_showPr() const;
        bool has_clrMru() const;
        ns_a::CT_ColorMRU* mutable_clrMru();
        const ns_a::CT_ColorMRU& get_clrMru() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PresentationProperties& default_instance();
    protected:
    private:
        bool m_has_htmlPubPr;
        CT_HtmlPublishProperties* m_htmlPubPr;
        bool m_has_webPr;
        CT_WebProperties* m_webPr;
        bool m_has_prnPr;
        CT_PrintProperties* m_prnPr;
        bool m_has_showPr;
        CT_ShowProperties* m_showPr;
        bool m_has_clrMru;
        ns_a::CT_ColorMRU* m_clrMru;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_PresentationProperties* default_instance_;
    };

    class CT_HeaderFooter: public XSD::ComplexType
    {
    public:
        CT_HeaderFooter();
        ~CT_HeaderFooter();
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_HeaderFooter& default_instance();
        bool has_sldNum_attr() const;
        void set_sldNum_attr(const XSD::boolean_& _sldNum_attr);
        const XSD::boolean_& get_sldNum_attr() const;
        bool has_hdr_attr() const;
        void set_hdr_attr(const XSD::boolean_& _hdr_attr);
        const XSD::boolean_& get_hdr_attr() const;
        bool has_ftr_attr() const;
        void set_ftr_attr(const XSD::boolean_& _ftr_attr);
        const XSD::boolean_& get_ftr_attr() const;
        bool has_dt_attr() const;
        void set_dt_attr(const XSD::boolean_& _dt_attr);
        const XSD::boolean_& get_dt_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_HeaderFooter* default_instance_;
        bool m_has_sldNum_attr;
        XSD::boolean_ m_sldNum_attr;
        bool m_has_hdr_attr;
        XSD::boolean_ m_hdr_attr;
        bool m_has_ftr_attr;
        XSD::boolean_ m_ftr_attr;
        bool m_has_dt_attr;
        XSD::boolean_ m_dt_attr;
    };

    class CT_Placeholder: public XSD::ComplexType
    {
    public:
        CT_Placeholder();
        ~CT_Placeholder();
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Placeholder& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_PlaceholderType& _type_attr);
        const ST_PlaceholderType& get_type_attr() const;
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr);
        const ST_Direction& get_orient_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_PlaceholderSize& _sz_attr);
        const ST_PlaceholderSize& get_sz_attr() const;
        bool has_idx_attr() const;
        void set_idx_attr(const XSD::unsignedInt_& _idx_attr);
        const XSD::unsignedInt_& get_idx_attr() const;
        bool has_hasCustomPrompt_attr() const;
        void set_hasCustomPrompt_attr(const XSD::boolean_& _hasCustomPrompt_attr);
        const XSD::boolean_& get_hasCustomPrompt_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Placeholder* default_instance_;
        bool m_has_type_attr;
        ST_PlaceholderType* m_type_attr;
        bool m_has_orient_attr;
        ST_Direction* m_orient_attr;
        bool m_has_sz_attr;
        ST_PlaceholderSize* m_sz_attr;
        bool m_has_idx_attr;
        XSD::unsignedInt_ m_idx_attr;
        bool m_has_hasCustomPrompt_attr;
        XSD::boolean_ m_hasCustomPrompt_attr;
    };

    class CT_ApplicationNonVisualDrawingProps: public XSD::ComplexType
    {
    public:
        CT_ApplicationNonVisualDrawingProps();
        ~CT_ApplicationNonVisualDrawingProps();
        bool has_ph() const;
        CT_Placeholder* mutable_ph();
        const CT_Placeholder& get_ph() const;
        bool has_a_audioCd() const;
        ns_a::CT_AudioCD* mutable_a_audioCd();
        const ns_a::CT_AudioCD& get_a_audioCd() const;
        bool has_a_wavAudioFile() const;
        ns_a::CT_EmbeddedWAVAudioFile* mutable_a_wavAudioFile();
        const ns_a::CT_EmbeddedWAVAudioFile& get_a_wavAudioFile() const;
        bool has_a_audioFile() const;
        ns_a::CT_AudioFile* mutable_a_audioFile();
        const ns_a::CT_AudioFile& get_a_audioFile() const;
        bool has_a_videoFile() const;
        ns_a::CT_VideoFile* mutable_a_videoFile();
        const ns_a::CT_VideoFile& get_a_videoFile() const;
        bool has_a_quickTimeFile() const;
        ns_a::CT_QuickTimeFile* mutable_a_quickTimeFile();
        const ns_a::CT_QuickTimeFile& get_a_quickTimeFile() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& get_custDataLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ApplicationNonVisualDrawingProps& default_instance();
        bool has_isPhoto_attr() const;
        void set_isPhoto_attr(const XSD::boolean_& _isPhoto_attr);
        const XSD::boolean_& get_isPhoto_attr() const;
        bool has_userDrawn_attr() const;
        void set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr);
        const XSD::boolean_& get_userDrawn_attr() const;
    protected:
    private:
        bool m_has_ph;
        CT_Placeholder* m_ph;
        bool m_has_a_audioCd;
        ns_a::CT_AudioCD* m_a_audioCd;
        bool m_has_a_wavAudioFile;
        ns_a::CT_EmbeddedWAVAudioFile* m_a_wavAudioFile;
        bool m_has_a_audioFile;
        ns_a::CT_AudioFile* m_a_audioFile;
        bool m_has_a_videoFile;
        ns_a::CT_VideoFile* m_a_videoFile;
        bool m_has_a_quickTimeFile;
        ns_a::CT_QuickTimeFile* m_a_quickTimeFile;
        bool m_has_custDataLst;
        CT_CustomerDataList* m_custDataLst;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_ApplicationNonVisualDrawingProps* default_instance_;
        bool m_has_isPhoto_attr;
        XSD::boolean_ m_isPhoto_attr;
        bool m_has_userDrawn_attr;
        XSD::boolean_ m_userDrawn_attr;
    };

    class CT_ShapeNonVisual: public XSD::ComplexType
    {
    public:
        CT_ShapeNonVisual();
        ~CT_ShapeNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& get_cNvSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ShapeNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvSpPr;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr;
        bool m_has_nvPr;
        CT_ApplicationNonVisualDrawingProps* m_nvPr;
        static CT_ShapeNonVisual* default_instance_;
    };

    class CT_Shape: public XSD::ComplexType
    {
    public:
        CT_Shape();
        ~CT_Shape();
        bool has_nvSpPr() const;
        CT_ShapeNonVisual* mutable_nvSpPr();
        const CT_ShapeNonVisual& get_nvSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        bool has_txBody() const;
        ns_a::CT_TextBody* mutable_txBody();
        const ns_a::CT_TextBody& get_txBody() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Shape& default_instance();
        bool has_useBgFill_attr() const;
        void set_useBgFill_attr(const XSD::boolean_& _useBgFill_attr);
        const XSD::boolean_& get_useBgFill_attr() const;
    protected:
    private:
        bool m_has_nvSpPr;
        CT_ShapeNonVisual* m_nvSpPr;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        bool m_has_txBody;
        ns_a::CT_TextBody* m_txBody;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Shape* default_instance_;
        bool m_has_useBgFill_attr;
        XSD::boolean_ m_useBgFill_attr;
    };

    class CT_ConnectorNonVisual: public XSD::ComplexType
    {
    public:
        CT_ConnectorNonVisual();
        ~CT_ConnectorNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvCxnSpPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr();
        const ns_a::CT_NonVisualConnectorProperties& get_cNvCxnSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ConnectorNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvCxnSpPr;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCxnSpPr;
        bool m_has_nvPr;
        CT_ApplicationNonVisualDrawingProps* m_nvPr;
        static CT_ConnectorNonVisual* default_instance_;
    };

    class CT_Connector: public XSD::ComplexType
    {
    public:
        CT_Connector();
        ~CT_Connector();
        bool has_nvCxnSpPr() const;
        CT_ConnectorNonVisual* mutable_nvCxnSpPr();
        const CT_ConnectorNonVisual& get_nvCxnSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Connector& default_instance();
    protected:
    private:
        bool m_has_nvCxnSpPr;
        CT_ConnectorNonVisual* m_nvCxnSpPr;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Connector* default_instance_;
    };

    class CT_PictureNonVisual: public XSD::ComplexType
    {
    public:
        CT_PictureNonVisual();
        ~CT_PictureNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvPicPr() const;
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr();
        const ns_a::CT_NonVisualPictureProperties& get_cNvPicPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PictureNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvPicPr;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr;
        bool m_has_nvPr;
        CT_ApplicationNonVisualDrawingProps* m_nvPr;
        static CT_PictureNonVisual* default_instance_;
    };

    class CT_Picture: public XSD::ComplexType
    {
    public:
        CT_Picture();
        ~CT_Picture();
        bool has_nvPicPr() const;
        CT_PictureNonVisual* mutable_nvPicPr();
        const CT_PictureNonVisual& get_nvPicPr() const;
        bool has_blipFill() const;
        ns_a::CT_BlipFillProperties* mutable_blipFill();
        const ns_a::CT_BlipFillProperties& get_blipFill() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& get_spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& get_style() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Picture& default_instance();
    protected:
    private:
        bool m_has_nvPicPr;
        CT_PictureNonVisual* m_nvPicPr;
        bool m_has_blipFill;
        ns_a::CT_BlipFillProperties* m_blipFill;
        bool m_has_spPr;
        ns_a::CT_ShapeProperties* m_spPr;
        bool m_has_style;
        ns_a::CT_ShapeStyle* m_style;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Picture* default_instance_;
    };

    class CT_GraphicalObjectFrameNonVisual: public XSD::ComplexType
    {
    public:
        CT_GraphicalObjectFrameNonVisual();
        ~CT_GraphicalObjectFrameNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& get_cNvGraphicFramePr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicalObjectFrameNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvGraphicFramePr;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr;
        bool m_has_nvPr;
        CT_ApplicationNonVisualDrawingProps* m_nvPr;
        static CT_GraphicalObjectFrameNonVisual* default_instance_;
    };

    class CT_GraphicalObjectFrame: public XSD::ComplexType
    {
    public:
        CT_GraphicalObjectFrame();
        ~CT_GraphicalObjectFrame();
        bool has_nvGraphicFramePr() const;
        CT_GraphicalObjectFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicalObjectFrameNonVisual& get_nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& get_xfrm() const;
        bool has_a_graphic() const;
        ns_a::CT_GraphicalObject* mutable_a_graphic();
        const ns_a::CT_GraphicalObject& get_a_graphic() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GraphicalObjectFrame& default_instance();
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr);
        const ns_a::ST_BlackWhiteMode& get_bwMode_attr() const;
    protected:
    private:
        bool m_has_nvGraphicFramePr;
        CT_GraphicalObjectFrameNonVisual* m_nvGraphicFramePr;
        bool m_has_xfrm;
        ns_a::CT_Transform2D* m_xfrm;
        bool m_has_a_graphic;
        ns_a::CT_GraphicalObject* m_a_graphic;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_GraphicalObjectFrame* default_instance_;
        bool m_has_bwMode_attr;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr;
    };

    class CT_GroupShapeNonVisual: public XSD::ComplexType
    {
    public:
        CT_GroupShapeNonVisual();
        ~CT_GroupShapeNonVisual();
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
        bool has_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& get_cNvGrpSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupShapeNonVisual& default_instance();
    protected:
    private:
        bool m_has_cNvPr;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr;
        bool m_has_cNvGrpSpPr;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr;
        bool m_has_nvPr;
        CT_ApplicationNonVisualDrawingProps* m_nvPr;
        static CT_GroupShapeNonVisual* default_instance_;
    };

    class CT_GroupShape: public XSD::ComplexType
    {
    public:
        CT_GroupShape();
        ~CT_GroupShape();
        bool has_nvGrpSpPr() const;
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr();
        const CT_GroupShapeNonVisual& get_nvGrpSpPr() const;
        bool has_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr();
        const ns_a::CT_GroupShapeProperties& get_grpSpPr() const;
        CT_Shape* add_sp();
        CT_GroupShape* add_grpSp();
        CT_GraphicalObjectFrame* add_graphicFrame();
        CT_Connector* add_cxnSp();
        CT_Picture* add_pic();
        CT_Rel* add_contentPart();
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupShape& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sp() const;
            CT_Shape* mutable_sp();
            const CT_Shape& get_sp() const;
            bool has_grpSp() const;
            CT_GroupShape* mutable_grpSp();
            const CT_GroupShape& get_grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicalObjectFrame* mutable_graphicFrame();
            const CT_GraphicalObjectFrame& get_graphicFrame() const;
            bool has_cxnSp() const;
            CT_Connector* mutable_cxnSp();
            const CT_Connector& get_cxnSp() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& get_pic() const;
            bool has_contentPart() const;
            CT_Rel* mutable_contentPart();
            const CT_Rel& get_contentPart() const;
        protected:
        private:
            bool m_has_sp;
            CT_Shape* m_sp;
            bool m_has_grpSp;
            CT_GroupShape* m_grpSp;
            bool m_has_graphicFrame;
            CT_GraphicalObjectFrame* m_graphicFrame;
            bool m_has_cxnSp;
            CT_Connector* m_cxnSp;
            bool m_has_pic;
            CT_Picture* m_pic;
            bool m_has_contentPart;
            CT_Rel* m_contentPart;
        };
        bool m_has_nvGrpSpPr;
        CT_GroupShapeNonVisual* m_nvGrpSpPr;
        bool m_has_grpSpPr;
        ns_a::CT_GroupShapeProperties* m_grpSpPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_GroupShape* default_instance_;
    };

    class CT_Rel: public XSD::ComplexType
    {
    public:
        CT_Rel();
        ~CT_Rel();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Rel& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        static CT_Rel* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_BackgroundProperties: public XSD::ComplexType
    {
    public:
        CT_BackgroundProperties();
        ~CT_BackgroundProperties();
        bool has_a_noFill() const;
        ns_a::CT_NoFillProperties* mutable_a_noFill();
        const ns_a::CT_NoFillProperties& get_a_noFill() const;
        bool has_a_solidFill() const;
        ns_a::CT_SolidColorFillProperties* mutable_a_solidFill();
        const ns_a::CT_SolidColorFillProperties& get_a_solidFill() const;
        bool has_a_gradFill() const;
        ns_a::CT_GradientFillProperties* mutable_a_gradFill();
        const ns_a::CT_GradientFillProperties& get_a_gradFill() const;
        bool has_a_blipFill() const;
        ns_a::CT_BlipFillProperties* mutable_a_blipFill();
        const ns_a::CT_BlipFillProperties& get_a_blipFill() const;
        bool has_a_pattFill() const;
        ns_a::CT_PatternFillProperties* mutable_a_pattFill();
        const ns_a::CT_PatternFillProperties& get_a_pattFill() const;
        bool has_a_grpFill() const;
        ns_a::CT_GroupFillProperties* mutable_a_grpFill();
        const ns_a::CT_GroupFillProperties& get_a_grpFill() const;
        bool has_a_effectLst() const;
        ns_a::CT_EffectList* mutable_a_effectLst();
        const ns_a::CT_EffectList& get_a_effectLst() const;
        bool has_a_effectDag() const;
        ns_a::CT_EffectContainer* mutable_a_effectDag();
        const ns_a::CT_EffectContainer& get_a_effectDag() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BackgroundProperties& default_instance();
        bool has_shadeToTitle_attr() const;
        void set_shadeToTitle_attr(const XSD::boolean_& _shadeToTitle_attr);
        const XSD::boolean_& get_shadeToTitle_attr() const;
    protected:
    private:
        bool m_has_a_noFill;
        ns_a::CT_NoFillProperties* m_a_noFill;
        bool m_has_a_solidFill;
        ns_a::CT_SolidColorFillProperties* m_a_solidFill;
        bool m_has_a_gradFill;
        ns_a::CT_GradientFillProperties* m_a_gradFill;
        bool m_has_a_blipFill;
        ns_a::CT_BlipFillProperties* m_a_blipFill;
        bool m_has_a_pattFill;
        ns_a::CT_PatternFillProperties* m_a_pattFill;
        bool m_has_a_grpFill;
        ns_a::CT_GroupFillProperties* m_a_grpFill;
        bool m_has_a_effectLst;
        ns_a::CT_EffectList* m_a_effectLst;
        bool m_has_a_effectDag;
        ns_a::CT_EffectContainer* m_a_effectDag;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_BackgroundProperties* default_instance_;
        bool m_has_shadeToTitle_attr;
        XSD::boolean_ m_shadeToTitle_attr;
    };

    class CT_Background: public XSD::ComplexType
    {
    public:
        CT_Background();
        ~CT_Background();
        bool has_bgPr() const;
        CT_BackgroundProperties* mutable_bgPr();
        const CT_BackgroundProperties& get_bgPr() const;
        bool has_bgRef() const;
        ns_a::CT_StyleMatrixReference* mutable_bgRef();
        const ns_a::CT_StyleMatrixReference& get_bgRef() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Background& default_instance();
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr);
        const ns_a::ST_BlackWhiteMode& get_bwMode_attr() const;
    protected:
    private:
        bool m_has_bgPr;
        CT_BackgroundProperties* m_bgPr;
        bool m_has_bgRef;
        ns_a::CT_StyleMatrixReference* m_bgRef;
        static CT_Background* default_instance_;
        bool m_has_bwMode_attr;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr;
    };

    class CT_CommonSlideData: public XSD::ComplexType
    {
    public:
        CT_CommonSlideData();
        ~CT_CommonSlideData();
        bool has_bg() const;
        CT_Background* mutable_bg();
        const CT_Background& get_bg() const;
        bool has_spTree() const;
        CT_GroupShape* mutable_spTree();
        const CT_GroupShape& get_spTree() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& get_custDataLst() const;
        bool has_controls() const;
        CT_ControlList* mutable_controls();
        const CT_ControlList& get_controls() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommonSlideData& default_instance();
        bool has_name_attr() const;
        void set_name_attr(const XSD::string_& _name_attr);
        const XSD::string_& get_name_attr() const;
    protected:
    private:
        bool m_has_bg;
        CT_Background* m_bg;
        bool m_has_spTree;
        CT_GroupShape* m_spTree;
        bool m_has_custDataLst;
        CT_CustomerDataList* m_custDataLst;
        bool m_has_controls;
        CT_ControlList* m_controls;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_CommonSlideData* default_instance_;
        bool m_has_name_attr;
        XSD::string_ m_name_attr;
    };

    class CT_Slide: public XSD::ComplexType
    {
    public:
        CT_Slide();
        ~CT_Slide();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Slide& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
        bool has_show_attr() const;
        void set_show_attr(const XSD::boolean_& _show_attr);
        const XSD::boolean_& get_show_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_Slide* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
        bool m_has_show_attr;
        XSD::boolean_ m_show_attr;
    };

    class CT_SlideLayout: public XSD::ComplexType
    {
    public:
        CT_SlideLayout();
        ~CT_SlideLayout();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideLayout& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
        bool has_matchingName_attr() const;
        void set_matchingName_attr(const XSD::string_& _matchingName_attr);
        const XSD::string_& get_matchingName_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_SlideLayoutType& _type_attr);
        const ST_SlideLayoutType& get_type_attr() const;
        bool has_preserve_attr() const;
        void set_preserve_attr(const XSD::boolean_& _preserve_attr);
        const XSD::boolean_& get_preserve_attr() const;
        bool has_userDrawn_attr() const;
        void set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr);
        const XSD::boolean_& get_userDrawn_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_SlideLayout* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
        bool m_has_matchingName_attr;
        XSD::string_ m_matchingName_attr;
        bool m_has_type_attr;
        ST_SlideLayoutType* m_type_attr;
        bool m_has_preserve_attr;
        XSD::boolean_ m_preserve_attr;
        bool m_has_userDrawn_attr;
        XSD::boolean_ m_userDrawn_attr;
    };

    class CT_SlideMasterTextStyles: public XSD::ComplexType
    {
    public:
        CT_SlideMasterTextStyles();
        ~CT_SlideMasterTextStyles();
        bool has_titleStyle() const;
        ns_a::CT_TextListStyle* mutable_titleStyle();
        const ns_a::CT_TextListStyle& get_titleStyle() const;
        bool has_bodyStyle() const;
        ns_a::CT_TextListStyle* mutable_bodyStyle();
        const ns_a::CT_TextListStyle& get_bodyStyle() const;
        bool has_otherStyle() const;
        ns_a::CT_TextListStyle* mutable_otherStyle();
        const ns_a::CT_TextListStyle& get_otherStyle() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideMasterTextStyles& default_instance();
    protected:
    private:
        bool m_has_titleStyle;
        ns_a::CT_TextListStyle* m_titleStyle;
        bool m_has_bodyStyle;
        ns_a::CT_TextListStyle* m_bodyStyle;
        bool m_has_otherStyle;
        ns_a::CT_TextListStyle* m_otherStyle;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideMasterTextStyles* default_instance_;
    };

    class CT_SlideLayoutIdListEntry: public XSD::ComplexType
    {
    public:
        CT_SlideLayoutIdListEntry();
        ~CT_SlideLayoutIdListEntry();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideLayoutIdListEntry& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideLayoutId& _id_attr);
        const ST_SlideLayoutId& get_id_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideLayoutIdListEntry* default_instance_;
        bool m_has_id_attr;
        ST_SlideLayoutId* m_id_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
    };

    class CT_SlideLayoutIdList: public XSD::ComplexType
    {
    public:
        CT_SlideLayoutIdList();
        ~CT_SlideLayoutIdList();
        CT_SlideLayoutIdListEntry* add_sldLayoutId();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideLayoutIdList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sldLayoutId() const;
            CT_SlideLayoutIdListEntry* mutable_sldLayoutId();
            const CT_SlideLayoutIdListEntry& get_sldLayoutId() const;
        protected:
        private:
            bool m_has_sldLayoutId;
            CT_SlideLayoutIdListEntry* m_sldLayoutId;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SlideLayoutIdList* default_instance_;
    };

    class CT_SlideMaster: public XSD::ComplexType
    {
    public:
        CT_SlideMaster();
        ~CT_SlideMaster();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_sldLayoutIdLst() const;
        CT_SlideLayoutIdList* mutable_sldLayoutIdLst();
        const CT_SlideLayoutIdList& get_sldLayoutIdLst() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_txStyles() const;
        CT_SlideMasterTextStyles* mutable_txStyles();
        const CT_SlideMasterTextStyles& get_txStyles() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideMaster& default_instance();
        bool has_preserve_attr() const;
        void set_preserve_attr(const XSD::boolean_& _preserve_attr);
        const XSD::boolean_& get_preserve_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_sldLayoutIdLst;
        CT_SlideLayoutIdList* m_sldLayoutIdLst;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_txStyles;
        CT_SlideMasterTextStyles* m_txStyles;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_SlideMaster* default_instance_;
        bool m_has_preserve_attr;
        XSD::boolean_ m_preserve_attr;
    };

    class CT_HandoutMaster: public XSD::ComplexType
    {
    public:
        CT_HandoutMaster();
        ~CT_HandoutMaster();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_HandoutMaster& default_instance();
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_HandoutMaster* default_instance_;
    };

    class CT_NotesMaster: public XSD::ComplexType
    {
    public:
        CT_NotesMaster();
        ~CT_NotesMaster();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_notesStyle() const;
        ns_a::CT_TextListStyle* mutable_notesStyle();
        const ns_a::CT_TextListStyle& get_notesStyle() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesMaster& default_instance();
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_notesStyle;
        ns_a::CT_TextListStyle* m_notesStyle;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_NotesMaster* default_instance_;
    };

    class CT_NotesSlide: public XSD::ComplexType
    {
    public:
        CT_NotesSlide();
        ~CT_NotesSlide();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesSlide& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static CT_NotesSlide* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
    };

    class CT_SlideSyncProperties: public XSD::ComplexType
    {
    public:
        CT_SlideSyncProperties();
        ~CT_SlideSyncProperties();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideSyncProperties& default_instance();
        bool has_serverSldId_attr() const;
        void set_serverSldId_attr(const XSD::string_& _serverSldId_attr);
        const XSD::string_& get_serverSldId_attr() const;
        bool has_serverSldModifiedTime_attr() const;
        void set_serverSldModifiedTime_attr(const XSD::dateTime_& _serverSldModifiedTime_attr);
        const XSD::dateTime_& get_serverSldModifiedTime_attr() const;
        bool has_clientInsertedTime_attr() const;
        void set_clientInsertedTime_attr(const XSD::dateTime_& _clientInsertedTime_attr);
        const XSD::dateTime_& get_clientInsertedTime_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideSyncProperties* default_instance_;
        bool m_has_serverSldId_attr;
        XSD::string_ m_serverSldId_attr;
        bool m_has_serverSldModifiedTime_attr;
        XSD::dateTime_ m_serverSldModifiedTime_attr;
        bool m_has_clientInsertedTime_attr;
        XSD::dateTime_ m_clientInsertedTime_attr;
    };

    class CT_StringTag: public XSD::ComplexType
    {
    public:
        CT_StringTag();
        ~CT_StringTag();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_StringTag& default_instance();
        bool has_name_attr() const;
        void set_name_attr(const XSD::string_& _name_attr);
        const XSD::string_& get_name_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const XSD::string_& _val_attr);
        const XSD::string_& get_val_attr() const;
    protected:
    private:
        static CT_StringTag* default_instance_;
        bool m_has_name_attr;
        XSD::string_ m_name_attr;
        bool m_has_val_attr;
        XSD::string_ m_val_attr;
    };

    class CT_TagList: public XSD::ComplexType
    {
    public:
        CT_TagList();
        ~CT_TagList();
        CT_StringTag* add_tag();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TagList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_tag() const;
            CT_StringTag* mutable_tag();
            const CT_StringTag& get_tag() const;
        protected:
        private:
            bool m_has_tag;
            CT_StringTag* m_tag;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_TagList* default_instance_;
    };

    class CT_NormalViewPortion: public XSD::ComplexType
    {
    public:
        CT_NormalViewPortion();
        ~CT_NormalViewPortion();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NormalViewPortion& default_instance();
        bool has_sz_attr() const;
        void set_sz_attr(const ns_a::ST_PositiveFixedPercentage& _sz_attr);
        const ns_a::ST_PositiveFixedPercentage& get_sz_attr() const;
        bool has_autoAdjust_attr() const;
        void set_autoAdjust_attr(const XSD::boolean_& _autoAdjust_attr);
        const XSD::boolean_& get_autoAdjust_attr() const;
    protected:
    private:
        static CT_NormalViewPortion* default_instance_;
        bool m_has_sz_attr;
        ns_a::ST_PositiveFixedPercentage* m_sz_attr;
        bool m_has_autoAdjust_attr;
        XSD::boolean_ m_autoAdjust_attr;
    };

    class CT_NormalViewProperties: public XSD::ComplexType
    {
    public:
        CT_NormalViewProperties();
        ~CT_NormalViewProperties();
        bool has_restoredLeft() const;
        CT_NormalViewPortion* mutable_restoredLeft();
        const CT_NormalViewPortion& get_restoredLeft() const;
        bool has_restoredTop() const;
        CT_NormalViewPortion* mutable_restoredTop();
        const CT_NormalViewPortion& get_restoredTop() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NormalViewProperties& default_instance();
        bool has_showOutlineIcons_attr() const;
        void set_showOutlineIcons_attr(const XSD::boolean_& _showOutlineIcons_attr);
        const XSD::boolean_& get_showOutlineIcons_attr() const;
        bool has_snapVertSplitter_attr() const;
        void set_snapVertSplitter_attr(const XSD::boolean_& _snapVertSplitter_attr);
        const XSD::boolean_& get_snapVertSplitter_attr() const;
        bool has_vertBarState_attr() const;
        void set_vertBarState_attr(const ST_SplitterBarState& _vertBarState_attr);
        const ST_SplitterBarState& get_vertBarState_attr() const;
        bool has_horzBarState_attr() const;
        void set_horzBarState_attr(const ST_SplitterBarState& _horzBarState_attr);
        const ST_SplitterBarState& get_horzBarState_attr() const;
        bool has_preferSingleView_attr() const;
        void set_preferSingleView_attr(const XSD::boolean_& _preferSingleView_attr);
        const XSD::boolean_& get_preferSingleView_attr() const;
    protected:
    private:
        bool m_has_restoredLeft;
        CT_NormalViewPortion* m_restoredLeft;
        bool m_has_restoredTop;
        CT_NormalViewPortion* m_restoredTop;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_NormalViewProperties* default_instance_;
        bool m_has_showOutlineIcons_attr;
        XSD::boolean_ m_showOutlineIcons_attr;
        bool m_has_snapVertSplitter_attr;
        XSD::boolean_ m_snapVertSplitter_attr;
        bool m_has_vertBarState_attr;
        ST_SplitterBarState* m_vertBarState_attr;
        bool m_has_horzBarState_attr;
        ST_SplitterBarState* m_horzBarState_attr;
        bool m_has_preferSingleView_attr;
        XSD::boolean_ m_preferSingleView_attr;
    };

    class CT_CommonViewProperties: public XSD::ComplexType
    {
    public:
        CT_CommonViewProperties();
        ~CT_CommonViewProperties();
        bool has_scale() const;
        ns_a::CT_Scale2D* mutable_scale();
        const ns_a::CT_Scale2D& get_scale() const;
        bool has_origin() const;
        ns_a::CT_Point2D* mutable_origin();
        const ns_a::CT_Point2D& get_origin() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommonViewProperties& default_instance();
        bool has_varScale_attr() const;
        void set_varScale_attr(const XSD::boolean_& _varScale_attr);
        const XSD::boolean_& get_varScale_attr() const;
    protected:
    private:
        bool m_has_scale;
        ns_a::CT_Scale2D* m_scale;
        bool m_has_origin;
        ns_a::CT_Point2D* m_origin;
        static CT_CommonViewProperties* default_instance_;
        bool m_has_varScale_attr;
        XSD::boolean_ m_varScale_attr;
    };

    class CT_NotesTextViewProperties: public XSD::ComplexType
    {
    public:
        CT_NotesTextViewProperties();
        ~CT_NotesTextViewProperties();
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& get_cViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesTextViewProperties& default_instance();
    protected:
    private:
        bool m_has_cViewPr;
        CT_CommonViewProperties* m_cViewPr;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_NotesTextViewProperties* default_instance_;
    };

    class CT_OutlineViewSlideEntry: public XSD::ComplexType
    {
    public:
        CT_OutlineViewSlideEntry();
        ~CT_OutlineViewSlideEntry();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OutlineViewSlideEntry& default_instance();
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_collapse_attr() const;
        void set_collapse_attr(const XSD::boolean_& _collapse_attr);
        const XSD::boolean_& get_collapse_attr() const;
    protected:
    private:
        static CT_OutlineViewSlideEntry* default_instance_;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_collapse_attr;
        XSD::boolean_ m_collapse_attr;
    };

    class CT_OutlineViewSlideList: public XSD::ComplexType
    {
    public:
        CT_OutlineViewSlideList();
        ~CT_OutlineViewSlideList();
        CT_OutlineViewSlideEntry* add_sld();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OutlineViewSlideList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_sld() const;
            CT_OutlineViewSlideEntry* mutable_sld();
            const CT_OutlineViewSlideEntry& get_sld() const;
        protected:
        private:
            bool m_has_sld;
            CT_OutlineViewSlideEntry* m_sld;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_OutlineViewSlideList* default_instance_;
    };

    class CT_OutlineViewProperties: public XSD::ComplexType
    {
    public:
        CT_OutlineViewProperties();
        ~CT_OutlineViewProperties();
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& get_cViewPr() const;
        bool has_sldLst() const;
        CT_OutlineViewSlideList* mutable_sldLst();
        const CT_OutlineViewSlideList& get_sldLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OutlineViewProperties& default_instance();
    protected:
    private:
        bool m_has_cViewPr;
        CT_CommonViewProperties* m_cViewPr;
        bool m_has_sldLst;
        CT_OutlineViewSlideList* m_sldLst;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_OutlineViewProperties* default_instance_;
    };

    class CT_SlideSorterViewProperties: public XSD::ComplexType
    {
    public:
        CT_SlideSorterViewProperties();
        ~CT_SlideSorterViewProperties();
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& get_cViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideSorterViewProperties& default_instance();
        bool has_showFormatting_attr() const;
        void set_showFormatting_attr(const XSD::boolean_& _showFormatting_attr);
        const XSD::boolean_& get_showFormatting_attr() const;
    protected:
    private:
        bool m_has_cViewPr;
        CT_CommonViewProperties* m_cViewPr;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideSorterViewProperties* default_instance_;
        bool m_has_showFormatting_attr;
        XSD::boolean_ m_showFormatting_attr;
    };

    class CT_Guide: public XSD::ComplexType
    {
    public:
        CT_Guide();
        ~CT_Guide();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Guide& default_instance();
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr);
        const ST_Direction& get_orient_attr() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr);
        const ns_a::ST_Coordinate32& get_pos_attr() const;
    protected:
    private:
        static CT_Guide* default_instance_;
        bool m_has_orient_attr;
        ST_Direction* m_orient_attr;
        bool m_has_pos_attr;
        ns_a::ST_Coordinate32* m_pos_attr;
    };

    class CT_GuideList: public XSD::ComplexType
    {
    public:
        CT_GuideList();
        ~CT_GuideList();
        CT_Guide* add_guide();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GuideList& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_guide() const;
            CT_Guide* mutable_guide();
            const CT_Guide& get_guide() const;
        protected:
        private:
            bool m_has_guide;
            CT_Guide* m_guide;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_GuideList* default_instance_;
    };

    class CT_CommonSlideViewProperties: public XSD::ComplexType
    {
    public:
        CT_CommonSlideViewProperties();
        ~CT_CommonSlideViewProperties();
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& get_cViewPr() const;
        bool has_guideLst() const;
        CT_GuideList* mutable_guideLst();
        const CT_GuideList& get_guideLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CommonSlideViewProperties& default_instance();
        bool has_snapToGrid_attr() const;
        void set_snapToGrid_attr(const XSD::boolean_& _snapToGrid_attr);
        const XSD::boolean_& get_snapToGrid_attr() const;
        bool has_snapToObjects_attr() const;
        void set_snapToObjects_attr(const XSD::boolean_& _snapToObjects_attr);
        const XSD::boolean_& get_snapToObjects_attr() const;
        bool has_showGuides_attr() const;
        void set_showGuides_attr(const XSD::boolean_& _showGuides_attr);
        const XSD::boolean_& get_showGuides_attr() const;
    protected:
    private:
        bool m_has_cViewPr;
        CT_CommonViewProperties* m_cViewPr;
        bool m_has_guideLst;
        CT_GuideList* m_guideLst;
        static CT_CommonSlideViewProperties* default_instance_;
        bool m_has_snapToGrid_attr;
        XSD::boolean_ m_snapToGrid_attr;
        bool m_has_snapToObjects_attr;
        XSD::boolean_ m_snapToObjects_attr;
        bool m_has_showGuides_attr;
        XSD::boolean_ m_showGuides_attr;
    };

    class CT_SlideViewProperties: public XSD::ComplexType
    {
    public:
        CT_SlideViewProperties();
        ~CT_SlideViewProperties();
        bool has_cSldViewPr() const;
        CT_CommonSlideViewProperties* mutable_cSldViewPr();
        const CT_CommonSlideViewProperties& get_cSldViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SlideViewProperties& default_instance();
    protected:
    private:
        bool m_has_cSldViewPr;
        CT_CommonSlideViewProperties* m_cSldViewPr;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_SlideViewProperties* default_instance_;
    };

    class CT_NotesViewProperties: public XSD::ComplexType
    {
    public:
        CT_NotesViewProperties();
        ~CT_NotesViewProperties();
        bool has_cSldViewPr() const;
        CT_CommonSlideViewProperties* mutable_cSldViewPr();
        const CT_CommonSlideViewProperties& get_cSldViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NotesViewProperties& default_instance();
    protected:
    private:
        bool m_has_cSldViewPr;
        CT_CommonSlideViewProperties* m_cSldViewPr;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_NotesViewProperties* default_instance_;
    };

    class CT_ViewProperties: public XSD::ComplexType
    {
    public:
        CT_ViewProperties();
        ~CT_ViewProperties();
        bool has_normalViewPr() const;
        CT_NormalViewProperties* mutable_normalViewPr();
        const CT_NormalViewProperties& get_normalViewPr() const;
        bool has_slideViewPr() const;
        CT_SlideViewProperties* mutable_slideViewPr();
        const CT_SlideViewProperties& get_slideViewPr() const;
        bool has_outlineViewPr() const;
        CT_OutlineViewProperties* mutable_outlineViewPr();
        const CT_OutlineViewProperties& get_outlineViewPr() const;
        bool has_notesTextViewPr() const;
        CT_NotesTextViewProperties* mutable_notesTextViewPr();
        const CT_NotesTextViewProperties& get_notesTextViewPr() const;
        bool has_sorterViewPr() const;
        CT_SlideSorterViewProperties* mutable_sorterViewPr();
        const CT_SlideSorterViewProperties& get_sorterViewPr() const;
        bool has_notesViewPr() const;
        CT_NotesViewProperties* mutable_notesViewPr();
        const CT_NotesViewProperties& get_notesViewPr() const;
        bool has_gridSpacing() const;
        ns_a::CT_PositiveSize2D* mutable_gridSpacing();
        const ns_a::CT_PositiveSize2D& get_gridSpacing() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ViewProperties& default_instance();
        bool has_lastView_attr() const;
        void set_lastView_attr(const ST_ViewType& _lastView_attr);
        const ST_ViewType& get_lastView_attr() const;
        bool has_showComments_attr() const;
        void set_showComments_attr(const XSD::boolean_& _showComments_attr);
        const XSD::boolean_& get_showComments_attr() const;
    protected:
    private:
        bool m_has_normalViewPr;
        CT_NormalViewProperties* m_normalViewPr;
        bool m_has_slideViewPr;
        CT_SlideViewProperties* m_slideViewPr;
        bool m_has_outlineViewPr;
        CT_OutlineViewProperties* m_outlineViewPr;
        bool m_has_notesTextViewPr;
        CT_NotesTextViewProperties* m_notesTextViewPr;
        bool m_has_sorterViewPr;
        CT_SlideSorterViewProperties* m_sorterViewPr;
        bool m_has_notesViewPr;
        CT_NotesViewProperties* m_notesViewPr;
        bool m_has_gridSpacing;
        ns_a::CT_PositiveSize2D* m_gridSpacing;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static CT_ViewProperties* default_instance_;
        bool m_has_lastView_attr;
        ST_ViewType* m_lastView_attr;
        bool m_has_showComments_attr;
        XSD::boolean_ m_showComments_attr;
    };

    class cmAuthorLst_element: public Element
    {
    public:
        cmAuthorLst_element();
        ~cmAuthorLst_element();
        CT_CommentAuthor* add_cmAuthor();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const cmAuthorLst_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_cmAuthor() const;
            CT_CommentAuthor* mutable_cmAuthor();
            const CT_CommentAuthor& get_cmAuthor() const;
        protected:
        private:
            bool m_has_cmAuthor;
            CT_CommentAuthor* m_cmAuthor;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static cmAuthorLst_element* default_instance_;
    };

    class cmLst_element: public Element
    {
    public:
        cmLst_element();
        ~cmLst_element();
        CT_Comment* add_cm();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const cmLst_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_cm() const;
            CT_Comment* mutable_cm();
            const CT_Comment& get_cm() const;
        protected:
        private:
            bool m_has_cm;
            CT_Comment* m_cm;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static cmLst_element* default_instance_;
    };

    class oleObj_element: public Element
    {
    public:
        oleObj_element();
        ~oleObj_element();
        bool has_embed() const;
        CT_OleObjectEmbed* mutable_embed();
        const CT_OleObjectEmbed& get_embed() const;
        bool has_link() const;
        CT_OleObjectLink* mutable_link();
        const CT_OleObjectLink& get_link() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& get_pic() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const oleObj_element& default_instance();
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr);
        const ns_a::ST_ShapeID& get_spid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const XSD::string_& _name_attr);
        const XSD::string_& get_name_attr() const;
        bool has_showAsIcon_attr() const;
        void set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr);
        const XSD::boolean_& get_showAsIcon_attr() const;
        bool has_r_id_attr() const;
        void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
        const ns_r::ST_RelationshipId& get_r_id_attr() const;
        bool has_imgW_attr() const;
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgW_attr() const;
        bool has_imgH_attr() const;
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr);
        const ns_a::ST_PositiveCoordinate32& get_imgH_attr() const;
        bool has_progId_attr() const;
        void set_progId_attr(const XSD::string_& _progId_attr);
        const XSD::string_& get_progId_attr() const;
    protected:
    private:
        bool m_has_embed;
        CT_OleObjectEmbed* m_embed;
        bool m_has_link;
        CT_OleObjectLink* m_link;
        bool m_has_pic;
        CT_Picture* m_pic;
        static oleObj_element* default_instance_;
        bool m_has_spid_attr;
        ns_a::ST_ShapeID* m_spid_attr;
        bool m_has_name_attr;
        XSD::string_ m_name_attr;
        bool m_has_showAsIcon_attr;
        XSD::boolean_ m_showAsIcon_attr;
        bool m_has_r_id_attr;
        ns_r::ST_RelationshipId* m_r_id_attr;
        bool m_has_imgW_attr;
        ns_a::ST_PositiveCoordinate32* m_imgW_attr;
        bool m_has_imgH_attr;
        ns_a::ST_PositiveCoordinate32* m_imgH_attr;
        bool m_has_progId_attr;
        XSD::string_ m_progId_attr;
    };

    class presentation_element: public Element
    {
    public:
        presentation_element();
        ~presentation_element();
        bool has_sldMasterIdLst() const;
        CT_SlideMasterIdList* mutable_sldMasterIdLst();
        const CT_SlideMasterIdList& get_sldMasterIdLst() const;
        bool has_notesMasterIdLst() const;
        CT_NotesMasterIdList* mutable_notesMasterIdLst();
        const CT_NotesMasterIdList& get_notesMasterIdLst() const;
        bool has_handoutMasterIdLst() const;
        CT_HandoutMasterIdList* mutable_handoutMasterIdLst();
        const CT_HandoutMasterIdList& get_handoutMasterIdLst() const;
        bool has_sldIdLst() const;
        CT_SlideIdList* mutable_sldIdLst();
        const CT_SlideIdList& get_sldIdLst() const;
        bool has_sldSz() const;
        CT_SlideSize* mutable_sldSz();
        const CT_SlideSize& get_sldSz() const;
        bool has_notesSz() const;
        ns_a::CT_PositiveSize2D* mutable_notesSz();
        const ns_a::CT_PositiveSize2D& get_notesSz() const;
        bool has_smartTags() const;
        CT_SmartTags* mutable_smartTags();
        const CT_SmartTags& get_smartTags() const;
        bool has_embeddedFontLst() const;
        CT_EmbeddedFontList* mutable_embeddedFontLst();
        const CT_EmbeddedFontList& get_embeddedFontLst() const;
        bool has_custShowLst() const;
        CT_CustomShowList* mutable_custShowLst();
        const CT_CustomShowList& get_custShowLst() const;
        bool has_photoAlbum() const;
        CT_PhotoAlbum* mutable_photoAlbum();
        const CT_PhotoAlbum& get_photoAlbum() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& get_custDataLst() const;
        bool has_kinsoku() const;
        CT_Kinsoku* mutable_kinsoku();
        const CT_Kinsoku& get_kinsoku() const;
        bool has_defaultTextStyle() const;
        ns_a::CT_TextListStyle* mutable_defaultTextStyle();
        const ns_a::CT_TextListStyle& get_defaultTextStyle() const;
        bool has_modifyVerifier() const;
        CT_ModifyVerifier* mutable_modifyVerifier();
        const CT_ModifyVerifier& get_modifyVerifier() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const presentation_element& default_instance();
        bool has_serverZoom_attr() const;
        void set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr);
        const ns_a::ST_Percentage& get_serverZoom_attr() const;
        bool has_firstSlideNum_attr() const;
        void set_firstSlideNum_attr(const XSD::int_& _firstSlideNum_attr);
        const XSD::int_& get_firstSlideNum_attr() const;
        bool has_showSpecialPlsOnTitleSld_attr() const;
        void set_showSpecialPlsOnTitleSld_attr(const XSD::boolean_& _showSpecialPlsOnTitleSld_attr);
        const XSD::boolean_& get_showSpecialPlsOnTitleSld_attr() const;
        bool has_rtl_attr() const;
        void set_rtl_attr(const XSD::boolean_& _rtl_attr);
        const XSD::boolean_& get_rtl_attr() const;
        bool has_removePersonalInfoOnSave_attr() const;
        void set_removePersonalInfoOnSave_attr(const XSD::boolean_& _removePersonalInfoOnSave_attr);
        const XSD::boolean_& get_removePersonalInfoOnSave_attr() const;
        bool has_compatMode_attr() const;
        void set_compatMode_attr(const XSD::boolean_& _compatMode_attr);
        const XSD::boolean_& get_compatMode_attr() const;
        bool has_strictFirstAndLastChars_attr() const;
        void set_strictFirstAndLastChars_attr(const XSD::boolean_& _strictFirstAndLastChars_attr);
        const XSD::boolean_& get_strictFirstAndLastChars_attr() const;
        bool has_embedTrueTypeFonts_attr() const;
        void set_embedTrueTypeFonts_attr(const XSD::boolean_& _embedTrueTypeFonts_attr);
        const XSD::boolean_& get_embedTrueTypeFonts_attr() const;
        bool has_saveSubsetFonts_attr() const;
        void set_saveSubsetFonts_attr(const XSD::boolean_& _saveSubsetFonts_attr);
        const XSD::boolean_& get_saveSubsetFonts_attr() const;
        bool has_autoCompressPictures_attr() const;
        void set_autoCompressPictures_attr(const XSD::boolean_& _autoCompressPictures_attr);
        const XSD::boolean_& get_autoCompressPictures_attr() const;
        bool has_bookmarkIdSeed_attr() const;
        void set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr);
        const ST_BookmarkIdSeed& get_bookmarkIdSeed_attr() const;
        bool has_conformance_attr() const;
        void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr);
        const ns_s::ST_ConformanceClass& get_conformance_attr() const;
    protected:
    private:
        bool m_has_sldMasterIdLst;
        CT_SlideMasterIdList* m_sldMasterIdLst;
        bool m_has_notesMasterIdLst;
        CT_NotesMasterIdList* m_notesMasterIdLst;
        bool m_has_handoutMasterIdLst;
        CT_HandoutMasterIdList* m_handoutMasterIdLst;
        bool m_has_sldIdLst;
        CT_SlideIdList* m_sldIdLst;
        bool m_has_sldSz;
        CT_SlideSize* m_sldSz;
        bool m_has_notesSz;
        ns_a::CT_PositiveSize2D* m_notesSz;
        bool m_has_smartTags;
        CT_SmartTags* m_smartTags;
        bool m_has_embeddedFontLst;
        CT_EmbeddedFontList* m_embeddedFontLst;
        bool m_has_custShowLst;
        CT_CustomShowList* m_custShowLst;
        bool m_has_photoAlbum;
        CT_PhotoAlbum* m_photoAlbum;
        bool m_has_custDataLst;
        CT_CustomerDataList* m_custDataLst;
        bool m_has_kinsoku;
        CT_Kinsoku* m_kinsoku;
        bool m_has_defaultTextStyle;
        ns_a::CT_TextListStyle* m_defaultTextStyle;
        bool m_has_modifyVerifier;
        CT_ModifyVerifier* m_modifyVerifier;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static presentation_element* default_instance_;
        bool m_has_serverZoom_attr;
        ns_a::ST_Percentage* m_serverZoom_attr;
        bool m_has_firstSlideNum_attr;
        XSD::int_ m_firstSlideNum_attr;
        bool m_has_showSpecialPlsOnTitleSld_attr;
        XSD::boolean_ m_showSpecialPlsOnTitleSld_attr;
        bool m_has_rtl_attr;
        XSD::boolean_ m_rtl_attr;
        bool m_has_removePersonalInfoOnSave_attr;
        XSD::boolean_ m_removePersonalInfoOnSave_attr;
        bool m_has_compatMode_attr;
        XSD::boolean_ m_compatMode_attr;
        bool m_has_strictFirstAndLastChars_attr;
        XSD::boolean_ m_strictFirstAndLastChars_attr;
        bool m_has_embedTrueTypeFonts_attr;
        XSD::boolean_ m_embedTrueTypeFonts_attr;
        bool m_has_saveSubsetFonts_attr;
        XSD::boolean_ m_saveSubsetFonts_attr;
        bool m_has_autoCompressPictures_attr;
        XSD::boolean_ m_autoCompressPictures_attr;
        bool m_has_bookmarkIdSeed_attr;
        ST_BookmarkIdSeed* m_bookmarkIdSeed_attr;
        bool m_has_conformance_attr;
        ns_s::ST_ConformanceClass* m_conformance_attr;
    };

    class presentationPr_element: public Element
    {
    public:
        presentationPr_element();
        ~presentationPr_element();
        bool has_htmlPubPr() const;
        CT_HtmlPublishProperties* mutable_htmlPubPr();
        const CT_HtmlPublishProperties& get_htmlPubPr() const;
        bool has_webPr() const;
        CT_WebProperties* mutable_webPr();
        const CT_WebProperties& get_webPr() const;
        bool has_prnPr() const;
        CT_PrintProperties* mutable_prnPr();
        const CT_PrintProperties& get_prnPr() const;
        bool has_showPr() const;
        CT_ShowProperties* mutable_showPr();
        const CT_ShowProperties& get_showPr() const;
        bool has_clrMru() const;
        ns_a::CT_ColorMRU* mutable_clrMru();
        const ns_a::CT_ColorMRU& get_clrMru() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const presentationPr_element& default_instance();
    protected:
    private:
        bool m_has_htmlPubPr;
        CT_HtmlPublishProperties* m_htmlPubPr;
        bool m_has_webPr;
        CT_WebProperties* m_webPr;
        bool m_has_prnPr;
        CT_PrintProperties* m_prnPr;
        bool m_has_showPr;
        CT_ShowProperties* m_showPr;
        bool m_has_clrMru;
        ns_a::CT_ColorMRU* m_clrMru;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static presentationPr_element* default_instance_;
    };

    class sld_element: public Element
    {
    public:
        sld_element();
        ~sld_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const sld_element& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
        bool has_show_attr() const;
        void set_show_attr(const XSD::boolean_& _show_attr);
        const XSD::boolean_& get_show_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static sld_element* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
        bool m_has_show_attr;
        XSD::boolean_ m_show_attr;
    };

    class sldLayout_element: public Element
    {
    public:
        sldLayout_element();
        ~sldLayout_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const sldLayout_element& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
        bool has_matchingName_attr() const;
        void set_matchingName_attr(const XSD::string_& _matchingName_attr);
        const XSD::string_& get_matchingName_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_SlideLayoutType& _type_attr);
        const ST_SlideLayoutType& get_type_attr() const;
        bool has_preserve_attr() const;
        void set_preserve_attr(const XSD::boolean_& _preserve_attr);
        const XSD::boolean_& get_preserve_attr() const;
        bool has_userDrawn_attr() const;
        void set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr);
        const XSD::boolean_& get_userDrawn_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static sldLayout_element* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
        bool m_has_matchingName_attr;
        XSD::string_ m_matchingName_attr;
        bool m_has_type_attr;
        ST_SlideLayoutType* m_type_attr;
        bool m_has_preserve_attr;
        XSD::boolean_ m_preserve_attr;
        bool m_has_userDrawn_attr;
        XSD::boolean_ m_userDrawn_attr;
    };

    class sldMaster_element: public Element
    {
    public:
        sldMaster_element();
        ~sldMaster_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_sldLayoutIdLst() const;
        CT_SlideLayoutIdList* mutable_sldLayoutIdLst();
        const CT_SlideLayoutIdList& get_sldLayoutIdLst() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& get_transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& get_timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_txStyles() const;
        CT_SlideMasterTextStyles* mutable_txStyles();
        const CT_SlideMasterTextStyles& get_txStyles() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const sldMaster_element& default_instance();
        bool has_preserve_attr() const;
        void set_preserve_attr(const XSD::boolean_& _preserve_attr);
        const XSD::boolean_& get_preserve_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_sldLayoutIdLst;
        CT_SlideLayoutIdList* m_sldLayoutIdLst;
        bool m_has_transition;
        CT_SlideTransition* m_transition;
        bool m_has_timing;
        CT_SlideTiming* m_timing;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_txStyles;
        CT_SlideMasterTextStyles* m_txStyles;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static sldMaster_element* default_instance_;
        bool m_has_preserve_attr;
        XSD::boolean_ m_preserve_attr;
    };

    class handoutMaster_element: public Element
    {
    public:
        handoutMaster_element();
        ~handoutMaster_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const handoutMaster_element& default_instance();
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static handoutMaster_element* default_instance_;
    };

    class notesMaster_element: public Element
    {
    public:
        notesMaster_element();
        ~notesMaster_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& get_clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& get_hf() const;
        bool has_notesStyle() const;
        ns_a::CT_TextListStyle* mutable_notesStyle();
        const ns_a::CT_TextListStyle& get_notesStyle() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const notesMaster_element& default_instance();
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMap;
        ns_a::CT_ColorMapping* m_clrMap;
        bool m_has_hf;
        CT_HeaderFooter* m_hf;
        bool m_has_notesStyle;
        ns_a::CT_TextListStyle* m_notesStyle;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static notesMaster_element* default_instance_;
    };

    class notes_element: public Element
    {
    public:
        notes_element();
        ~notes_element();
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& get_cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& get_clrMapOvr() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const notes_element& default_instance();
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr);
        const XSD::boolean_& get_showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr);
        const XSD::boolean_& get_showMasterPhAnim_attr() const;
    protected:
    private:
        bool m_has_cSld;
        CT_CommonSlideData* m_cSld;
        bool m_has_clrMapOvr;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr;
        bool m_has_extLst;
        CT_ExtensionListModify* m_extLst;
        static notes_element* default_instance_;
        bool m_has_showMasterSp_attr;
        XSD::boolean_ m_showMasterSp_attr;
        bool m_has_showMasterPhAnim_attr;
        XSD::boolean_ m_showMasterPhAnim_attr;
    };

    class sldSyncPr_element: public Element
    {
    public:
        sldSyncPr_element();
        ~sldSyncPr_element();
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const sldSyncPr_element& default_instance();
        bool has_serverSldId_attr() const;
        void set_serverSldId_attr(const XSD::string_& _serverSldId_attr);
        const XSD::string_& get_serverSldId_attr() const;
        bool has_serverSldModifiedTime_attr() const;
        void set_serverSldModifiedTime_attr(const XSD::dateTime_& _serverSldModifiedTime_attr);
        const XSD::dateTime_& get_serverSldModifiedTime_attr() const;
        bool has_clientInsertedTime_attr() const;
        void set_clientInsertedTime_attr(const XSD::dateTime_& _clientInsertedTime_attr);
        const XSD::dateTime_& get_clientInsertedTime_attr() const;
    protected:
    private:
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static sldSyncPr_element* default_instance_;
        bool m_has_serverSldId_attr;
        XSD::string_ m_serverSldId_attr;
        bool m_has_serverSldModifiedTime_attr;
        XSD::dateTime_ m_serverSldModifiedTime_attr;
        bool m_has_clientInsertedTime_attr;
        XSD::dateTime_ m_clientInsertedTime_attr;
    };

    class tagLst_element: public Element
    {
    public:
        tagLst_element();
        ~tagLst_element();
        CT_StringTag* add_tag();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const tagLst_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_tag() const;
            CT_StringTag* mutable_tag();
            const CT_StringTag& get_tag() const;
        protected:
        private:
            bool m_has_tag;
            CT_StringTag* m_tag;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static tagLst_element* default_instance_;
    };

    class viewPr_element: public Element
    {
    public:
        viewPr_element();
        ~viewPr_element();
        bool has_normalViewPr() const;
        CT_NormalViewProperties* mutable_normalViewPr();
        const CT_NormalViewProperties& get_normalViewPr() const;
        bool has_slideViewPr() const;
        CT_SlideViewProperties* mutable_slideViewPr();
        const CT_SlideViewProperties& get_slideViewPr() const;
        bool has_outlineViewPr() const;
        CT_OutlineViewProperties* mutable_outlineViewPr();
        const CT_OutlineViewProperties& get_outlineViewPr() const;
        bool has_notesTextViewPr() const;
        CT_NotesTextViewProperties* mutable_notesTextViewPr();
        const CT_NotesTextViewProperties& get_notesTextViewPr() const;
        bool has_sorterViewPr() const;
        CT_SlideSorterViewProperties* mutable_sorterViewPr();
        const CT_SlideSorterViewProperties& get_sorterViewPr() const;
        bool has_notesViewPr() const;
        CT_NotesViewProperties* mutable_notesViewPr();
        const CT_NotesViewProperties& get_notesViewPr() const;
        bool has_gridSpacing() const;
        ns_a::CT_PositiveSize2D* mutable_gridSpacing();
        const ns_a::CT_PositiveSize2D& get_gridSpacing() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& get_extLst() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const viewPr_element& default_instance();
        bool has_lastView_attr() const;
        void set_lastView_attr(const ST_ViewType& _lastView_attr);
        const ST_ViewType& get_lastView_attr() const;
        bool has_showComments_attr() const;
        void set_showComments_attr(const XSD::boolean_& _showComments_attr);
        const XSD::boolean_& get_showComments_attr() const;
    protected:
    private:
        bool m_has_normalViewPr;
        CT_NormalViewProperties* m_normalViewPr;
        bool m_has_slideViewPr;
        CT_SlideViewProperties* m_slideViewPr;
        bool m_has_outlineViewPr;
        CT_OutlineViewProperties* m_outlineViewPr;
        bool m_has_notesTextViewPr;
        CT_NotesTextViewProperties* m_notesTextViewPr;
        bool m_has_sorterViewPr;
        CT_SlideSorterViewProperties* m_sorterViewPr;
        bool m_has_notesViewPr;
        CT_NotesViewProperties* m_notesViewPr;
        bool m_has_gridSpacing;
        ns_a::CT_PositiveSize2D* m_gridSpacing;
        bool m_has_extLst;
        CT_ExtensionList* m_extLst;
        static viewPr_element* default_instance_;
        bool m_has_lastView_attr;
        ST_ViewType* m_lastView_attr;
        bool m_has_showComments_attr;
        XSD::boolean_ m_showComments_attr;
    };

}
#endif