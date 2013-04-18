#ifndef pml_xsd 
#define pml_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_p{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_TransitionSideDirectionType : public XSD::SimpleType{
    public:
        ST_TransitionSideDirectionType();
        ST_TransitionSideDirectionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TransitionSideDirectionType& default_instance() const;
        enum Type{
            _l_ = 1,
            _u_,
            _r_,
            _d_
        }

    private:
        static const string TypeStrList [];
        static ST_TransitionSideDirectionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TransitionCornerDirectionType : public XSD::SimpleType{
    public:
        ST_TransitionCornerDirectionType();
        ST_TransitionCornerDirectionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TransitionCornerDirectionType& default_instance() const;
        enum Type{
            _lu_ = 1,
            _ru_,
            _ld_,
            _rd_
        }

    private:
        static const string TypeStrList [];
        static ST_TransitionCornerDirectionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TransitionInOutDirectionType : public XSD::SimpleType{
    public:
        ST_TransitionInOutDirectionType();
        ST_TransitionInOutDirectionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TransitionInOutDirectionType& default_instance() const;
        enum Type{
            _out_ = 1,
            _in_
        }

    private:
        static const string TypeStrList [];
        static ST_TransitionInOutDirectionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TransitionEightDirectionType : public XSD::SimpleType{
    public:
        bool has_ST_TransitionSideDirectionType() const;
        ST_TransitionSideDirectionType* mutable_ST_TransitionSideDirectionType();
        const ST_TransitionSideDirectionType& ST_TransitionSideDirectionType() const;
        bool has_ST_TransitionCornerDirectionType() const;
        ST_TransitionCornerDirectionType* mutable_ST_TransitionCornerDirectionType();
        const ST_TransitionCornerDirectionType& ST_TransitionCornerDirectionType() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TransitionEightDirectionType& default_instance() const;

    private:
        void clear_ST_TransitionSideDirectionType();
        void clear_ST_TransitionCornerDirectionType();
        bool m_has_ST_TransitionSideDirectionType ;
        ST_TransitionSideDirectionType* m_ST_TransitionSideDirectionType ;
        bool m_has_ST_TransitionCornerDirectionType ;
        ST_TransitionCornerDirectionType* m_ST_TransitionCornerDirectionType ;
        static ST_TransitionEightDirectionType* default_instance_ ;

    }

    class ST_TransitionSpeed : public XSD::SimpleType{
    public:
        ST_TransitionSpeed();
        ST_TransitionSpeed(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TransitionSpeed& default_instance() const;
        enum Type{
            _slow_ = 1,
            _med_,
            _fast_
        }

    private:
        static const string TypeStrList [];
        static ST_TransitionSpeed* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeIndefinite : public XSD::SimpleType{
    public:
        ST_TLTimeIndefinite();
        ST_TLTimeIndefinite(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeIndefinite& default_instance() const;
        enum Type{
            _indefinite_ = 1
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeIndefinite* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTime : public XSD::SimpleType{
    public:
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        bool has_ST_TLTimeIndefinite() const;
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite();
        const ST_TLTimeIndefinite& ST_TLTimeIndefinite() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTime& default_instance() const;

    private:
        void clear_unsignedInt();
        void clear_ST_TLTimeIndefinite();
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;
        bool m_has_ST_TLTimeIndefinite ;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite ;
        static ST_TLTime* default_instance_ ;

    }

    class ST_TLTimeNodeID : public XSD::SimpleType{
    public:
        ST_TLTimeNodeID();
        ST_TLTimeNodeID(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeID& default_instance() const;

    private:
        static ST_TLTimeNodeID* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_IterateType : public XSD::SimpleType{
    public:
        ST_IterateType();
        ST_IterateType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_IterateType& default_instance() const;
        enum Type{
            _el_ = 1,
            _wd_,
            _lt_
        }

    private:
        static const string TypeStrList [];
        static ST_IterateType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLChartSubelementType : public XSD::SimpleType{
    public:
        ST_TLChartSubelementType();
        ST_TLChartSubelementType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLChartSubelementType& default_instance() const;
        enum Type{
            _gridLegend_ = 1,
            _series_,
            _category_,
            _ptInSeries_,
            _ptInCategory_
        }

    private:
        static const string TypeStrList [];
        static ST_TLChartSubelementType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTriggerRuntimeNode : public XSD::SimpleType{
    public:
        ST_TLTriggerRuntimeNode();
        ST_TLTriggerRuntimeNode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTriggerRuntimeNode& default_instance() const;
        enum Type{
            _first_ = 1,
            _last_,
            _all_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTriggerRuntimeNode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTriggerEvent : public XSD::SimpleType{
    public:
        ST_TLTriggerEvent();
        ST_TLTriggerEvent(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTriggerEvent& default_instance() const;
        enum Type{
            _onBegin_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_TLTriggerEvent* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodePresetClassType : public XSD::SimpleType{
    public:
        ST_TLTimeNodePresetClassType();
        ST_TLTimeNodePresetClassType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodePresetClassType& default_instance() const;
        enum Type{
            _entr_ = 1,
            _exit_,
            _emph_,
            _path_,
            _verb_,
            _mediacall_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodePresetClassType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodeRestartType : public XSD::SimpleType{
    public:
        ST_TLTimeNodeRestartType();
        ST_TLTimeNodeRestartType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeRestartType& default_instance() const;
        enum Type{
            _always_ = 1,
            _whenNotActive_,
            _never_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodeRestartType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodeFillType : public XSD::SimpleType{
    public:
        ST_TLTimeNodeFillType();
        ST_TLTimeNodeFillType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeFillType& default_instance() const;
        enum Type{
            _remove_ = 1,
            _freeze_,
            _hold_,
            _transition_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodeFillType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodeSyncType : public XSD::SimpleType{
    public:
        ST_TLTimeNodeSyncType();
        ST_TLTimeNodeSyncType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeSyncType& default_instance() const;
        enum Type{
            _canSlip_ = 1,
            _locked_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodeSyncType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodeMasterRelation : public XSD::SimpleType{
    public:
        ST_TLTimeNodeMasterRelation();
        ST_TLTimeNodeMasterRelation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeMasterRelation& default_instance() const;
        enum Type{
            _sameClick_ = 1,
            _lastClick_,
            _nextClick_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodeMasterRelation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeNodeType : public XSD::SimpleType{
    public:
        ST_TLTimeNodeType();
        ST_TLTimeNodeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeNodeType& default_instance() const;
        enum Type{
            _clickEffect_ = 1,
            _withEffect_,
            _afterEffect_,
            _mainSeq_,
            _interactiveSeq_,
            _clickPar_,
            _withGroup_,
            _afterGroup_,
            _tmRoot_
        }

    private:
        static const string TypeStrList [];
        static ST_TLTimeNodeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLNextActionType : public XSD::SimpleType{
    public:
        ST_TLNextActionType();
        ST_TLNextActionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLNextActionType& default_instance() const;
        enum Type{
            _none_ = 1,
            _seek_
        }

    private:
        static const string TypeStrList [];
        static ST_TLNextActionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLPreviousActionType : public XSD::SimpleType{
    public:
        ST_TLPreviousActionType();
        ST_TLPreviousActionType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLPreviousActionType& default_instance() const;
        enum Type{
            _none_ = 1,
            _skipTimed_
        }

    private:
        static const string TypeStrList [];
        static ST_TLPreviousActionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLBehaviorAdditiveType : public XSD::SimpleType{
    public:
        ST_TLBehaviorAdditiveType();
        ST_TLBehaviorAdditiveType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLBehaviorAdditiveType& default_instance() const;
        enum Type{
            _base_ = 1,
            _sum_,
            _repl_,
            _mult_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_TLBehaviorAdditiveType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLBehaviorAccumulateType : public XSD::SimpleType{
    public:
        ST_TLBehaviorAccumulateType();
        ST_TLBehaviorAccumulateType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLBehaviorAccumulateType& default_instance() const;
        enum Type{
            _none_ = 1,
            _always_
        }

    private:
        static const string TypeStrList [];
        static ST_TLBehaviorAccumulateType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLBehaviorTransformType : public XSD::SimpleType{
    public:
        ST_TLBehaviorTransformType();
        ST_TLBehaviorTransformType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLBehaviorTransformType& default_instance() const;
        enum Type{
            _pt_ = 1,
            _img_
        }

    private:
        static const string TypeStrList [];
        static ST_TLBehaviorTransformType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLBehaviorOverrideType : public XSD::SimpleType{
    public:
        ST_TLBehaviorOverrideType();
        ST_TLBehaviorOverrideType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLBehaviorOverrideType& default_instance() const;
        enum Type{
            _normal_ = 1,
            _childStyle_
        }

    private:
        static const string TypeStrList [];
        static ST_TLBehaviorOverrideType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLTimeAnimateValueTime : public XSD::SimpleType{
    public:
        bool has_ST_PositiveFixedPercentage() const;
        ns_a::ST_PositiveFixedPercentage* mutable_ST_PositiveFixedPercentage();
        const ns_a::ST_PositiveFixedPercentage& ST_PositiveFixedPercentage() const;
        bool has_ST_TLTimeIndefinite() const;
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite();
        const ST_TLTimeIndefinite& ST_TLTimeIndefinite() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLTimeAnimateValueTime& default_instance() const;

    private:
        void clear_ST_PositiveFixedPercentage();
        void clear_ST_TLTimeIndefinite();
        bool m_has_ST_PositiveFixedPercentage ;
        ns_a::ST_PositiveFixedPercentage* m_ST_PositiveFixedPercentage ;
        bool m_has_ST_TLTimeIndefinite ;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite ;
        static ST_TLTimeAnimateValueTime* default_instance_ ;

    }

    class ST_TLAnimateBehaviorCalcMode : public XSD::SimpleType{
    public:
        ST_TLAnimateBehaviorCalcMode();
        ST_TLAnimateBehaviorCalcMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateBehaviorCalcMode& default_instance() const;
        enum Type{
            _discrete_ = 1,
            _lin_,
            _fmla_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateBehaviorCalcMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateBehaviorValueType : public XSD::SimpleType{
    public:
        ST_TLAnimateBehaviorValueType();
        ST_TLAnimateBehaviorValueType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateBehaviorValueType& default_instance() const;
        enum Type{
            _str_ = 1,
            _num_,
            _clr_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateBehaviorValueType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateColorSpace : public XSD::SimpleType{
    public:
        ST_TLAnimateColorSpace();
        ST_TLAnimateColorSpace(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateColorSpace& default_instance() const;
        enum Type{
            _rgb_ = 1,
            _hsl_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateColorSpace* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateColorDirection : public XSD::SimpleType{
    public:
        ST_TLAnimateColorDirection();
        ST_TLAnimateColorDirection(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateColorDirection& default_instance() const;
        enum Type{
            _cw_ = 1,
            _ccw_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateColorDirection* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateEffectTransition : public XSD::SimpleType{
    public:
        ST_TLAnimateEffectTransition();
        ST_TLAnimateEffectTransition(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateEffectTransition& default_instance() const;
        enum Type{
            _in_ = 1,
            _out_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateEffectTransition* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateMotionBehaviorOrigin : public XSD::SimpleType{
    public:
        ST_TLAnimateMotionBehaviorOrigin();
        ST_TLAnimateMotionBehaviorOrigin(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateMotionBehaviorOrigin& default_instance() const;
        enum Type{
            _parent_ = 1,
            _layout_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateMotionBehaviorOrigin* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLAnimateMotionPathEditMode : public XSD::SimpleType{
    public:
        ST_TLAnimateMotionPathEditMode();
        ST_TLAnimateMotionPathEditMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLAnimateMotionPathEditMode& default_instance() const;
        enum Type{
            _relative_ = 1,
            _fixed_
        }

    private:
        static const string TypeStrList [];
        static ST_TLAnimateMotionPathEditMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLCommandType : public XSD::SimpleType{
    public:
        ST_TLCommandType();
        ST_TLCommandType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLCommandType& default_instance() const;
        enum Type{
            _evt_ = 1,
            _call_,
            _verb_
        }

    private:
        static const string TypeStrList [];
        static ST_TLCommandType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLParaBuildType : public XSD::SimpleType{
    public:
        ST_TLParaBuildType();
        ST_TLParaBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLParaBuildType& default_instance() const;
        enum Type{
            _allAtOnce_ = 1,
            _p_,
            _cust_,
            _whole_
        }

    private:
        static const string TypeStrList [];
        static ST_TLParaBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLDiagramBuildType : public XSD::SimpleType{
    public:
        ST_TLDiagramBuildType();
        ST_TLDiagramBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLDiagramBuildType& default_instance() const;
        enum Type{
            _whole_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_TLDiagramBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TLOleChartBuildType : public XSD::SimpleType{
    public:
        ST_TLOleChartBuildType();
        ST_TLOleChartBuildType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TLOleChartBuildType& default_instance() const;
        enum Type{
            _allAtOnce_ = 1,
            _series_,
            _category_,
            _seriesEl_,
            _categoryEl_
        }

    private:
        static const string TypeStrList [];
        static ST_TLOleChartBuildType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Name : public XSD::SimpleType{
    public:
        ST_Name();
        ST_Name(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Name& default_instance() const;

    private:
        static ST_Name* default_instance_ ;
        bool m_has_string ;
        string m_string ;

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
            _horz_ = 1,
            _vert_
        }

    private:
        static const string TypeStrList [];
        static ST_Direction* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Index : public XSD::SimpleType{
    public:
        ST_Index();
        ST_Index(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Index& default_instance() const;

    private:
        static ST_Index* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_OleObjectFollowColorScheme : public XSD::SimpleType{
    public:
        ST_OleObjectFollowColorScheme();
        ST_OleObjectFollowColorScheme(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OleObjectFollowColorScheme& default_instance() const;
        enum Type{
            _none_ = 1,
            _full_,
            _textAndBackground_
        }

    private:
        static const string TypeStrList [];
        static ST_OleObjectFollowColorScheme* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SlideId : public XSD::SimpleType{
    public:
        ST_SlideId();
        ST_SlideId(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SlideId& default_instance() const;

    private:
        static ST_SlideId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SlideMasterId : public XSD::SimpleType{
    public:
        ST_SlideMasterId();
        ST_SlideMasterId(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SlideMasterId& default_instance() const;

    private:
        static ST_SlideMasterId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_PhotoAlbumLayout : public XSD::SimpleType{
    public:
        ST_PhotoAlbumLayout();
        ST_PhotoAlbumLayout(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PhotoAlbumLayout& default_instance() const;
        enum Type{
            _fitToSlide_ = 1,
            _1pic_,
            _2pic_,
            _4pic_,
            _1picTitle_,
            _2picTitle_,
            _4picTitle_
        }

    private:
        static const string TypeStrList [];
        static ST_PhotoAlbumLayout* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PhotoAlbumFrameShape : public XSD::SimpleType{
    public:
        ST_PhotoAlbumFrameShape();
        ST_PhotoAlbumFrameShape(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PhotoAlbumFrameShape& default_instance() const;
        enum Type{
            _frameStyle1_ = 1,
            _frameStyle2_,
            _frameStyle3_,
            _frameStyle4_,
            _frameStyle5_,
            _frameStyle6_,
            _frameStyle7_
        }

    private:
        static const string TypeStrList [];
        static ST_PhotoAlbumFrameShape* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SlideSizeCoordinate : public ST_PositiveCoordinate32{
    public:
        ST_SlideSizeCoordinate(const ns_a::ST_PositiveCoordinate32& _ST_PositiveCoordinate32 );

    private:

    }

    class ST_SlideSizeType : public XSD::SimpleType{
    public:
        ST_SlideSizeType();
        ST_SlideSizeType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SlideSizeType& default_instance() const;
        enum Type{
            _screen4x3_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_SlideSizeType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BookmarkIdSeed : public XSD::SimpleType{
    public:
        ST_BookmarkIdSeed();
        ST_BookmarkIdSeed(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BookmarkIdSeed& default_instance() const;

    private:
        static ST_BookmarkIdSeed* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_WebColorType : public XSD::SimpleType{
    public:
        ST_WebColorType();
        ST_WebColorType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WebColorType& default_instance() const;
        enum Type{
            _none_ = 1,
            _browser_,
            _presentationText_,
            _presentationAccent_,
            _whiteTextOnBlack_,
            _blackTextOnWhite_
        }

    private:
        static const string TypeStrList [];
        static ST_WebColorType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WebScreenSize : public XSD::SimpleType{
    public:
        ST_WebScreenSize();
        ST_WebScreenSize(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WebScreenSize& default_instance() const;
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
            _1800x1400_,
            _1920x1200_
        }

    private:
        static const string TypeStrList [];
        static ST_WebScreenSize* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WebEncoding : public XSD::SimpleType{
    public:
        ST_WebEncoding();
        ST_WebEncoding(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_WebEncoding& default_instance() const;

    private:
        static ST_WebEncoding* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_PrintWhat : public XSD::SimpleType{
    public:
        ST_PrintWhat();
        ST_PrintWhat(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PrintWhat& default_instance() const;
        enum Type{
            _slides_ = 1,
            _handouts1_,
            _handouts2_,
            _handouts3_,
            _handouts4_,
            _handouts6_,
            _handouts9_,
            _notes_,
            _outline_
        }

    private:
        static const string TypeStrList [];
        static ST_PrintWhat* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PrintColorMode : public XSD::SimpleType{
    public:
        ST_PrintColorMode();
        ST_PrintColorMode(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PrintColorMode& default_instance() const;
        enum Type{
            _bw_ = 1,
            _gray_,
            _clr_
        }

    private:
        static const string TypeStrList [];
        static ST_PrintColorMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PlaceholderType : public XSD::SimpleType{
    public:
        ST_PlaceholderType();
        ST_PlaceholderType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PlaceholderType& default_instance() const;
        enum Type{
            _title_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_PlaceholderType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PlaceholderSize : public XSD::SimpleType{
    public:
        ST_PlaceholderSize();
        ST_PlaceholderSize(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_PlaceholderSize& default_instance() const;
        enum Type{
            _full_ = 1,
            _half_,
            _quarter_
        }

    private:
        static const string TypeStrList [];
        static ST_PlaceholderSize* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SlideLayoutType : public XSD::SimpleType{
    public:
        ST_SlideLayoutType();
        ST_SlideLayoutType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SlideLayoutType& default_instance() const;
        enum Type{
            _title_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_SlideLayoutType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SlideLayoutId : public XSD::SimpleType{
    public:
        ST_SlideLayoutId();
        ST_SlideLayoutId(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SlideLayoutId& default_instance() const;

    private:
        static ST_SlideLayoutId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SplitterBarState : public XSD::SimpleType{
    public:
        ST_SplitterBarState();
        ST_SplitterBarState(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SplitterBarState& default_instance() const;
        enum Type{
            _minimized_ = 1,
            _restored_,
            _maximized_
        }

    private:
        static const string TypeStrList [];
        static ST_SplitterBarState* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ViewType : public XSD::SimpleType{
    public:
        ST_ViewType();
        ST_ViewType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ViewType& default_instance() const;
        enum Type{
            _sldView_ = 1,
            _sldMasterView_,
            _notesView_,
            _handoutView_,
            _notesMasterView_,
            _outlineView_,
            _sldSorterView_,
            _sldThumbnailView_
        }

    private:
        static const string TypeStrList [];
        static ST_ViewType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_SideDirectionTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SideDirectionTransition& default_instance() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionSideDirectionType& _dir_attr );
        const ST_TransitionSideDirectionType& dir_attr() const;

    private:
        static CT_SideDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionSideDirectionType* m_dir_attr ;

    }

    class CT_CornerDirectionTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CornerDirectionTransition& default_instance() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionCornerDirectionType& _dir_attr );
        const ST_TransitionCornerDirectionType& dir_attr() const;

    private:
        static CT_CornerDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionCornerDirectionType* m_dir_attr ;

    }

    class CT_EightDirectionTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EightDirectionTransition& default_instance() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionEightDirectionType& _dir_attr );
        const ST_TransitionEightDirectionType& dir_attr() const;

    private:
        static CT_EightDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionEightDirectionType* m_dir_attr ;

    }

    class CT_OrientationTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OrientationTransition& default_instance() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_Direction& _dir_attr );
        const ST_Direction& dir_attr() const;

    private:
        static CT_OrientationTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_Direction* m_dir_attr ;

    }

    class CT_InOutTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_InOutTransition& default_instance() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr );
        const ST_TransitionInOutDirectionType& dir_attr() const;

    private:
        static CT_InOutTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionInOutDirectionType* m_dir_attr ;

    }

    class CT_OptionalBlackTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OptionalBlackTransition& default_instance() const;
        bool has_thruBlk_attr() const;
        void set_thruBlk_attr(const boolean& _thruBlk_attr );
        const boolean& thruBlk_attr() const;

    private:
        static CT_OptionalBlackTransition* default_instance_ ;
        bool m_has_thruBlk_attr ;
        boolean m_thruBlk_attr ;

    }

    class CT_SplitTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SplitTransition& default_instance() const;
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr );
        const ST_Direction& orient_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr );
        const ST_TransitionInOutDirectionType& dir_attr() const;

    private:
        static CT_SplitTransition* default_instance_ ;
        bool m_has_orient_attr ;
        ST_Direction* m_orient_attr ;
        bool m_has_dir_attr ;
        ST_TransitionInOutDirectionType* m_dir_attr ;

    }

    class CT_WheelTransition : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WheelTransition& default_instance() const;
        bool has_spokes_attr() const;
        void set_spokes_attr(const unsignedInt& _spokes_attr );
        const unsignedInt& spokes_attr() const;

    private:
        static CT_WheelTransition* default_instance_ ;
        bool m_has_spokes_attr ;
        unsignedInt m_spokes_attr ;

    }

    class CT_TransitionStartSoundAction : public XSD::ComplexType{
    public:
        bool has_snd() const;
        ns_a::CT_EmbeddedWAVAudioFile* mutable_snd();
        const ns_a::CT_EmbeddedWAVAudioFile& snd() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TransitionStartSoundAction& default_instance() const;
        bool has_loop_attr() const;
        void set_loop_attr(const boolean& _loop_attr );
        const boolean& loop_attr() const;

    private:
        bool m_has_snd ;
        ns_a::CT_EmbeddedWAVAudioFile* m_snd ;
        static CT_TransitionStartSoundAction* default_instance_ ;
        bool m_has_loop_attr ;
        boolean m_loop_attr ;

    }

    class CT_TransitionSoundAction : public XSD::ComplexType{
    public:
        bool has_stSnd() const;
        CT_TransitionStartSoundAction* mutable_stSnd();
        const CT_TransitionStartSoundAction& stSnd() const;
        bool has_endSnd() const;
        CT_Empty* mutable_endSnd();
        const CT_Empty& endSnd() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TransitionSoundAction& default_instance() const;

    private:
        bool m_has_stSnd ;
        CT_TransitionStartSoundAction* m_stSnd ;
        bool m_has_endSnd ;
        CT_Empty* m_endSnd ;
        static CT_TransitionSoundAction* default_instance_ ;

    }

    class CT_SlideTransition : public XSD::ComplexType{
    public:
        bool has_blinds() const;
        CT_OrientationTransition* mutable_blinds();
        const CT_OrientationTransition& blinds() const;
        bool has_checker() const;
        CT_OrientationTransition* mutable_checker();
        const CT_OrientationTransition& checker() const;
        bool has_circle() const;
        CT_Empty* mutable_circle();
        const CT_Empty& circle() const;
        bool has_dissolve() const;
        CT_Empty* mutable_dissolve();
        const CT_Empty& dissolve() const;
        bool has_comb() const;
        CT_OrientationTransition* mutable_comb();
        const CT_OrientationTransition& comb() const;
        bool has_cover() const;
        CT_EightDirectionTransition* mutable_cover();
        const CT_EightDirectionTransition& cover() const;
        bool has_cut() const;
        CT_OptionalBlackTransition* mutable_cut();
        const CT_OptionalBlackTransition& cut() const;
        bool has_diamond() const;
        CT_Empty* mutable_diamond();
        const CT_Empty& diamond() const;
        bool has_fade() const;
        CT_OptionalBlackTransition* mutable_fade();
        const CT_OptionalBlackTransition& fade() const;
        bool has_newsflash() const;
        CT_Empty* mutable_newsflash();
        const CT_Empty& newsflash() const;
        bool has_plus() const;
        CT_Empty* mutable_plus();
        const CT_Empty& plus() const;
        bool has_pull() const;
        CT_EightDirectionTransition* mutable_pull();
        const CT_EightDirectionTransition& pull() const;
        bool has_push() const;
        CT_SideDirectionTransition* mutable_push();
        const CT_SideDirectionTransition& push() const;
        bool has_random() const;
        CT_Empty* mutable_random();
        const CT_Empty& random() const;
        bool has_randomBar() const;
        CT_OrientationTransition* mutable_randomBar();
        const CT_OrientationTransition& randomBar() const;
        bool has_split() const;
        CT_SplitTransition* mutable_split();
        const CT_SplitTransition& split() const;
        bool has_strips() const;
        CT_CornerDirectionTransition* mutable_strips();
        const CT_CornerDirectionTransition& strips() const;
        bool has_wedge() const;
        CT_Empty* mutable_wedge();
        const CT_Empty& wedge() const;
        bool has_wheel() const;
        CT_WheelTransition* mutable_wheel();
        const CT_WheelTransition& wheel() const;
        bool has_wipe() const;
        CT_SideDirectionTransition* mutable_wipe();
        const CT_SideDirectionTransition& wipe() const;
        bool has_zoom() const;
        CT_InOutTransition* mutable_zoom();
        const CT_InOutTransition& zoom() const;
        bool has_sndAc() const;
        CT_TransitionSoundAction* mutable_sndAc();
        const CT_TransitionSoundAction& sndAc() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideTransition& default_instance() const;
        bool has_spd_attr() const;
        void set_spd_attr(const ST_TransitionSpeed& _spd_attr );
        const ST_TransitionSpeed& spd_attr() const;
        bool has_advClick_attr() const;
        void set_advClick_attr(const boolean& _advClick_attr );
        const boolean& advClick_attr() const;
        bool has_advTm_attr() const;
        void set_advTm_attr(const unsignedInt& _advTm_attr );
        const unsignedInt& advTm_attr() const;

    private:
        bool m_has_blinds ;
        CT_OrientationTransition* m_blinds ;
        bool m_has_checker ;
        CT_OrientationTransition* m_checker ;
        bool m_has_circle ;
        CT_Empty* m_circle ;
        bool m_has_dissolve ;
        CT_Empty* m_dissolve ;
        bool m_has_comb ;
        CT_OrientationTransition* m_comb ;
        bool m_has_cover ;
        CT_EightDirectionTransition* m_cover ;
        bool m_has_cut ;
        CT_OptionalBlackTransition* m_cut ;
        bool m_has_diamond ;
        CT_Empty* m_diamond ;
        bool m_has_fade ;
        CT_OptionalBlackTransition* m_fade ;
        bool m_has_newsflash ;
        CT_Empty* m_newsflash ;
        bool m_has_plus ;
        CT_Empty* m_plus ;
        bool m_has_pull ;
        CT_EightDirectionTransition* m_pull ;
        bool m_has_push ;
        CT_SideDirectionTransition* m_push ;
        bool m_has_random ;
        CT_Empty* m_random ;
        bool m_has_randomBar ;
        CT_OrientationTransition* m_randomBar ;
        bool m_has_split ;
        CT_SplitTransition* m_split ;
        bool m_has_strips ;
        CT_CornerDirectionTransition* m_strips ;
        bool m_has_wedge ;
        CT_Empty* m_wedge ;
        bool m_has_wheel ;
        CT_WheelTransition* m_wheel ;
        bool m_has_wipe ;
        CT_SideDirectionTransition* m_wipe ;
        bool m_has_zoom ;
        CT_InOutTransition* m_zoom ;
        bool m_has_sndAc ;
        CT_TransitionSoundAction* m_sndAc ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_SlideTransition* default_instance_ ;
        bool m_has_spd_attr ;
        ST_TransitionSpeed* m_spd_attr ;
        bool m_has_advClick_attr ;
        boolean m_advClick_attr ;
        bool m_has_advTm_attr ;
        unsignedInt m_advTm_attr ;

    }

    class CT_TLIterateIntervalTime : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLIterateIntervalTime& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTime& _val_attr );
        const ST_TLTime& val_attr() const;

    private:
        static CT_TLIterateIntervalTime* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTime* m_val_attr ;

    }

    class CT_TLIterateIntervalPercentage : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLIterateIntervalPercentage& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_a::ST_PositivePercentage& _val_attr );
        const ns_a::ST_PositivePercentage& val_attr() const;

    private:
        static CT_TLIterateIntervalPercentage* default_instance_ ;
        bool m_has_val_attr ;
        ns_a::ST_PositivePercentage* m_val_attr ;

    }

    class CT_TLIterateData : public XSD::ComplexType{
    public:
        bool has_tmAbs() const;
        CT_TLIterateIntervalTime* mutable_tmAbs();
        const CT_TLIterateIntervalTime& tmAbs() const;
        bool has_tmPct() const;
        CT_TLIterateIntervalPercentage* mutable_tmPct();
        const CT_TLIterateIntervalPercentage& tmPct() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLIterateData& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_IterateType& _type_attr );
        const ST_IterateType& type_attr() const;
        bool has_backwards_attr() const;
        void set_backwards_attr(const boolean& _backwards_attr );
        const boolean& backwards_attr() const;

    private:
        bool m_has_tmAbs ;
        CT_TLIterateIntervalTime* m_tmAbs ;
        bool m_has_tmPct ;
        CT_TLIterateIntervalPercentage* m_tmPct ;
        static CT_TLIterateData* default_instance_ ;
        bool m_has_type_attr ;
        ST_IterateType* m_type_attr ;
        bool m_has_backwards_attr ;
        boolean m_backwards_attr ;

    }

    class CT_TLSubShapeId : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLSubShapeId& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr );
        const ns_a::ST_ShapeID& spid_attr() const;

    private:
        static CT_TLSubShapeId* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_ShapeID* m_spid_attr ;

    }

    class CT_TLTextTargetElement : public XSD::ComplexType{
    public:
        bool has_charRg() const;
        CT_IndexRange* mutable_charRg();
        const CT_IndexRange& charRg() const;
        bool has_pRg() const;
        CT_IndexRange* mutable_pRg();
        const CT_IndexRange& pRg() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTextTargetElement& default_instance() const;

    private:
        bool m_has_charRg ;
        CT_IndexRange* m_charRg ;
        bool m_has_pRg ;
        CT_IndexRange* m_pRg ;
        static CT_TLTextTargetElement* default_instance_ ;

    }

    class CT_TLOleChartTargetElement : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLOleChartTargetElement& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TLChartSubelementType& _type_attr );
        const ST_TLChartSubelementType& type_attr() const;
        bool has_lvl_attr() const;
        void set_lvl_attr(const unsignedInt& _lvl_attr );
        const unsignedInt& lvl_attr() const;

    private:
        static CT_TLOleChartTargetElement* default_instance_ ;
        bool m_has_type_attr ;
        ST_TLChartSubelementType* m_type_attr ;
        bool m_has_lvl_attr ;
        unsignedInt m_lvl_attr ;

    }

    class CT_TLShapeTargetElement : public XSD::ComplexType{
    public:
        bool has_bg() const;
        CT_Empty* mutable_bg();
        const CT_Empty& bg() const;
        bool has_subSp() const;
        CT_TLSubShapeId* mutable_subSp();
        const CT_TLSubShapeId& subSp() const;
        bool has_oleChartEl() const;
        CT_TLOleChartTargetElement* mutable_oleChartEl();
        const CT_TLOleChartTargetElement& oleChartEl() const;
        bool has_txEl() const;
        CT_TLTextTargetElement* mutable_txEl();
        const CT_TLTextTargetElement& txEl() const;
        bool has_graphicEl() const;
        ns_a::CT_AnimationElementChoice* mutable_graphicEl();
        const ns_a::CT_AnimationElementChoice& graphicEl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLShapeTargetElement& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr );
        const ns_a::ST_DrawingElementId& spid_attr() const;

    private:
        bool m_has_bg ;
        CT_Empty* m_bg ;
        bool m_has_subSp ;
        CT_TLSubShapeId* m_subSp ;
        bool m_has_oleChartEl ;
        CT_TLOleChartTargetElement* m_oleChartEl ;
        bool m_has_txEl ;
        CT_TLTextTargetElement* m_txEl ;
        bool m_has_graphicEl ;
        ns_a::CT_AnimationElementChoice* m_graphicEl ;
        static CT_TLShapeTargetElement* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_DrawingElementId* m_spid_attr ;

    }

    class CT_TLTimeTargetElement : public XSD::ComplexType{
    public:
        bool has_sldTgt() const;
        CT_Empty* mutable_sldTgt();
        const CT_Empty& sldTgt() const;
        bool has_sndTgt() const;
        ns_a::CT_EmbeddedWAVAudioFile* mutable_sndTgt();
        const ns_a::CT_EmbeddedWAVAudioFile& sndTgt() const;
        bool has_spTgt() const;
        CT_TLShapeTargetElement* mutable_spTgt();
        const CT_TLShapeTargetElement& spTgt() const;
        bool has_inkTgt() const;
        CT_TLSubShapeId* mutable_inkTgt();
        const CT_TLSubShapeId& inkTgt() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeTargetElement& default_instance() const;

    private:
        bool m_has_sldTgt ;
        CT_Empty* m_sldTgt ;
        bool m_has_sndTgt ;
        ns_a::CT_EmbeddedWAVAudioFile* m_sndTgt ;
        bool m_has_spTgt ;
        CT_TLShapeTargetElement* m_spTgt ;
        bool m_has_inkTgt ;
        CT_TLSubShapeId* m_inkTgt ;
        static CT_TLTimeTargetElement* default_instance_ ;

    }

    class CT_TLTriggerTimeNodeID : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTriggerTimeNodeID& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTimeNodeID& _val_attr );
        const ST_TLTimeNodeID& val_attr() const;

    private:
        static CT_TLTriggerTimeNodeID* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTimeNodeID* m_val_attr ;

    }

    class CT_TLTriggerRuntimeNode : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTriggerRuntimeNode& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TLTriggerRuntimeNode& _val_attr );
        const ST_TLTriggerRuntimeNode& val_attr() const;

    private:
        static CT_TLTriggerRuntimeNode* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTriggerRuntimeNode* m_val_attr ;

    }

    class CT_TLTimeCondition : public XSD::ComplexType{
    public:
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& tgtEl() const;
        bool has_tn() const;
        CT_TLTriggerTimeNodeID* mutable_tn();
        const CT_TLTriggerTimeNodeID& tn() const;
        bool has_rtn() const;
        CT_TLTriggerRuntimeNode* mutable_rtn();
        const CT_TLTriggerRuntimeNode& rtn() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeCondition& default_instance() const;
        bool has_evt_attr() const;
        void set_evt_attr(const ST_TLTriggerEvent& _evt_attr );
        const ST_TLTriggerEvent& evt_attr() const;
        bool has_delay_attr() const;
        void set_delay_attr(const ST_TLTime& _delay_attr );
        const ST_TLTime& delay_attr() const;

    private:
        bool m_has_tgtEl ;
        CT_TLTimeTargetElement* m_tgtEl ;
        bool m_has_tn ;
        CT_TLTriggerTimeNodeID* m_tn ;
        bool m_has_rtn ;
        CT_TLTriggerRuntimeNode* m_rtn ;
        static CT_TLTimeCondition* default_instance_ ;
        bool m_has_evt_attr ;
        ST_TLTriggerEvent* m_evt_attr ;
        bool m_has_delay_attr ;
        ST_TLTime* m_delay_attr ;

    }

    class CT_TLTimeConditionList : public XSD::ComplexType{
    public:
        bool has_cond() const;
        CT_TLTimeCondition* mutable_cond();
        const CT_TLTimeCondition& cond() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeConditionList& default_instance() const;

    private:
        bool m_has_cond ;
        CT_TLTimeCondition* m_cond ;
        static CT_TLTimeConditionList* default_instance_ ;

    }

    class CT_TimeNodeList : public XSD::ComplexType{
    public:
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
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TimeNodeList& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_TimeNodeList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_par() const;
            CT_TLTimeNodeParallel* mutable_par();
            const CT_TLTimeNodeParallel& par() const;
            bool has_seq() const;
            CT_TLTimeNodeSequence* mutable_seq();
            const CT_TLTimeNodeSequence& seq() const;
            bool has_excl() const;
            CT_TLTimeNodeExclusive* mutable_excl();
            const CT_TLTimeNodeExclusive& excl() const;
            bool has_anim() const;
            CT_TLAnimateBehavior* mutable_anim();
            const CT_TLAnimateBehavior& anim() const;
            bool has_animClr() const;
            CT_TLAnimateColorBehavior* mutable_animClr();
            const CT_TLAnimateColorBehavior& animClr() const;
            bool has_animEffect() const;
            CT_TLAnimateEffectBehavior* mutable_animEffect();
            const CT_TLAnimateEffectBehavior& animEffect() const;
            bool has_animMotion() const;
            CT_TLAnimateMotionBehavior* mutable_animMotion();
            const CT_TLAnimateMotionBehavior& animMotion() const;
            bool has_animRot() const;
            CT_TLAnimateRotationBehavior* mutable_animRot();
            const CT_TLAnimateRotationBehavior& animRot() const;
            bool has_animScale() const;
            CT_TLAnimateScaleBehavior* mutable_animScale();
            const CT_TLAnimateScaleBehavior& animScale() const;
            bool has_cmd() const;
            CT_TLCommandBehavior* mutable_cmd();
            const CT_TLCommandBehavior& cmd() const;
            bool has_set() const;
            CT_TLSetBehavior* mutable_set();
            const CT_TLSetBehavior& set() const;
            bool has_audio() const;
            CT_TLMediaNodeAudio* mutable_audio();
            const CT_TLMediaNodeAudio& audio() const;
            bool has_video() const;
            CT_TLMediaNodeVideo* mutable_video();
            const CT_TLMediaNodeVideo& video() const;

        private:
            bool m_has_par ;
            CT_TLTimeNodeParallel* m_par ;
            bool m_has_seq ;
            CT_TLTimeNodeSequence* m_seq ;
            bool m_has_excl ;
            CT_TLTimeNodeExclusive* m_excl ;
            bool m_has_anim ;
            CT_TLAnimateBehavior* m_anim ;
            bool m_has_animClr ;
            CT_TLAnimateColorBehavior* m_animClr ;
            bool m_has_animEffect ;
            CT_TLAnimateEffectBehavior* m_animEffect ;
            bool m_has_animMotion ;
            CT_TLAnimateMotionBehavior* m_animMotion ;
            bool m_has_animRot ;
            CT_TLAnimateRotationBehavior* m_animRot ;
            bool m_has_animScale ;
            CT_TLAnimateScaleBehavior* m_animScale ;
            bool m_has_cmd ;
            CT_TLCommandBehavior* m_cmd ;
            bool m_has_set ;
            CT_TLSetBehavior* m_set ;
            bool m_has_audio ;
            CT_TLMediaNodeAudio* m_audio ;
            bool m_has_video ;
            CT_TLMediaNodeVideo* m_video ;

        }


    }

    class CT_TLCommonTimeNodeData : public XSD::ComplexType{
    public:
        bool has_stCondLst() const;
        CT_TLTimeConditionList* mutable_stCondLst();
        const CT_TLTimeConditionList& stCondLst() const;
        bool has_endCondLst() const;
        CT_TLTimeConditionList* mutable_endCondLst();
        const CT_TLTimeConditionList& endCondLst() const;
        bool has_endSync() const;
        CT_TLTimeCondition* mutable_endSync();
        const CT_TLTimeCondition& endSync() const;
        bool has_iterate() const;
        CT_TLIterateData* mutable_iterate();
        const CT_TLIterateData& iterate() const;
        bool has_childTnLst() const;
        CT_TimeNodeList* mutable_childTnLst();
        const CT_TimeNodeList& childTnLst() const;
        bool has_subTnLst() const;
        CT_TimeNodeList* mutable_subTnLst();
        const CT_TimeNodeList& subTnLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLCommonTimeNodeData& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_TLTimeNodeID& _id_attr );
        const ST_TLTimeNodeID& id_attr() const;
        bool has_presetID_attr() const;
        void set_presetID_attr(const int& _presetID_attr );
        const int& presetID_attr() const;
        bool has_presetClass_attr() const;
        void set_presetClass_attr(const ST_TLTimeNodePresetClassType& _presetClass_attr );
        const ST_TLTimeNodePresetClassType& presetClass_attr() const;
        bool has_presetSubtype_attr() const;
        void set_presetSubtype_attr(const int& _presetSubtype_attr );
        const int& presetSubtype_attr() const;
        bool has_dur_attr() const;
        void set_dur_attr(const ST_TLTime& _dur_attr );
        const ST_TLTime& dur_attr() const;
        bool has_repeatCount_attr() const;
        void set_repeatCount_attr(const ST_TLTime& _repeatCount_attr );
        const ST_TLTime& repeatCount_attr() const;
        bool has_repeatDur_attr() const;
        void set_repeatDur_attr(const ST_TLTime& _repeatDur_attr );
        const ST_TLTime& repeatDur_attr() const;
        bool has_spd_attr() const;
        void set_spd_attr(const ns_a::ST_Percentage& _spd_attr );
        const ns_a::ST_Percentage& spd_attr() const;
        bool has_accel_attr() const;
        void set_accel_attr(const ns_a::ST_PositiveFixedPercentage& _accel_attr );
        const ns_a::ST_PositiveFixedPercentage& accel_attr() const;
        bool has_decel_attr() const;
        void set_decel_attr(const ns_a::ST_PositiveFixedPercentage& _decel_attr );
        const ns_a::ST_PositiveFixedPercentage& decel_attr() const;
        bool has_autoRev_attr() const;
        void set_autoRev_attr(const boolean& _autoRev_attr );
        const boolean& autoRev_attr() const;
        bool has_restart_attr() const;
        void set_restart_attr(const ST_TLTimeNodeRestartType& _restart_attr );
        const ST_TLTimeNodeRestartType& restart_attr() const;
        bool has_fill_attr() const;
        void set_fill_attr(const ST_TLTimeNodeFillType& _fill_attr );
        const ST_TLTimeNodeFillType& fill_attr() const;
        bool has_syncBehavior_attr() const;
        void set_syncBehavior_attr(const ST_TLTimeNodeSyncType& _syncBehavior_attr );
        const ST_TLTimeNodeSyncType& syncBehavior_attr() const;
        bool has_tmFilter_attr() const;
        void set_tmFilter_attr(const string& _tmFilter_attr );
        const string& tmFilter_attr() const;
        bool has_evtFilter_attr() const;
        void set_evtFilter_attr(const string& _evtFilter_attr );
        const string& evtFilter_attr() const;
        bool has_display_attr() const;
        void set_display_attr(const boolean& _display_attr );
        const boolean& display_attr() const;
        bool has_masterRel_attr() const;
        void set_masterRel_attr(const ST_TLTimeNodeMasterRelation& _masterRel_attr );
        const ST_TLTimeNodeMasterRelation& masterRel_attr() const;
        bool has_bldLvl_attr() const;
        void set_bldLvl_attr(const int& _bldLvl_attr );
        const int& bldLvl_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const unsignedInt& _grpId_attr );
        const unsignedInt& grpId_attr() const;
        bool has_afterEffect_attr() const;
        void set_afterEffect_attr(const boolean& _afterEffect_attr );
        const boolean& afterEffect_attr() const;
        bool has_nodeType_attr() const;
        void set_nodeType_attr(const ST_TLTimeNodeType& _nodeType_attr );
        const ST_TLTimeNodeType& nodeType_attr() const;
        bool has_nodePh_attr() const;
        void set_nodePh_attr(const boolean& _nodePh_attr );
        const boolean& nodePh_attr() const;

    private:
        bool m_has_stCondLst ;
        CT_TLTimeConditionList* m_stCondLst ;
        bool m_has_endCondLst ;
        CT_TLTimeConditionList* m_endCondLst ;
        bool m_has_endSync ;
        CT_TLTimeCondition* m_endSync ;
        bool m_has_iterate ;
        CT_TLIterateData* m_iterate ;
        bool m_has_childTnLst ;
        CT_TimeNodeList* m_childTnLst ;
        bool m_has_subTnLst ;
        CT_TimeNodeList* m_subTnLst ;
        static CT_TLCommonTimeNodeData* default_instance_ ;
        bool m_has_id_attr ;
        ST_TLTimeNodeID* m_id_attr ;
        bool m_has_presetID_attr ;
        int m_presetID_attr ;
        bool m_has_presetClass_attr ;
        ST_TLTimeNodePresetClassType* m_presetClass_attr ;
        bool m_has_presetSubtype_attr ;
        int m_presetSubtype_attr ;
        bool m_has_dur_attr ;
        ST_TLTime* m_dur_attr ;
        bool m_has_repeatCount_attr ;
        ST_TLTime* m_repeatCount_attr ;
        bool m_has_repeatDur_attr ;
        ST_TLTime* m_repeatDur_attr ;
        bool m_has_spd_attr ;
        ns_a::ST_Percentage* m_spd_attr ;
        bool m_has_accel_attr ;
        ns_a::ST_PositiveFixedPercentage* m_accel_attr ;
        bool m_has_decel_attr ;
        ns_a::ST_PositiveFixedPercentage* m_decel_attr ;
        bool m_has_autoRev_attr ;
        boolean m_autoRev_attr ;
        bool m_has_restart_attr ;
        ST_TLTimeNodeRestartType* m_restart_attr ;
        bool m_has_fill_attr ;
        ST_TLTimeNodeFillType* m_fill_attr ;
        bool m_has_syncBehavior_attr ;
        ST_TLTimeNodeSyncType* m_syncBehavior_attr ;
        bool m_has_tmFilter_attr ;
        string m_tmFilter_attr ;
        bool m_has_evtFilter_attr ;
        string m_evtFilter_attr ;
        bool m_has_display_attr ;
        boolean m_display_attr ;
        bool m_has_masterRel_attr ;
        ST_TLTimeNodeMasterRelation* m_masterRel_attr ;
        bool m_has_bldLvl_attr ;
        int m_bldLvl_attr ;
        bool m_has_grpId_attr ;
        unsignedInt m_grpId_attr ;
        bool m_has_afterEffect_attr ;
        boolean m_afterEffect_attr ;
        bool m_has_nodeType_attr ;
        ST_TLTimeNodeType* m_nodeType_attr ;
        bool m_has_nodePh_attr ;
        boolean m_nodePh_attr ;

    }

    class CT_TLTimeNodeParallel : public XSD::ComplexType{
    public:
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& cTn() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeNodeParallel& default_instance() const;

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        static CT_TLTimeNodeParallel* default_instance_ ;

    }

    class CT_TLTimeNodeSequence : public XSD::ComplexType{
    public:
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& cTn() const;
        bool has_prevCondLst() const;
        CT_TLTimeConditionList* mutable_prevCondLst();
        const CT_TLTimeConditionList& prevCondLst() const;
        bool has_nextCondLst() const;
        CT_TLTimeConditionList* mutable_nextCondLst();
        const CT_TLTimeConditionList& nextCondLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeNodeSequence& default_instance() const;
        bool has_concurrent_attr() const;
        void set_concurrent_attr(const boolean& _concurrent_attr );
        const boolean& concurrent_attr() const;
        bool has_prevAc_attr() const;
        void set_prevAc_attr(const ST_TLPreviousActionType& _prevAc_attr );
        const ST_TLPreviousActionType& prevAc_attr() const;
        bool has_nextAc_attr() const;
        void set_nextAc_attr(const ST_TLNextActionType& _nextAc_attr );
        const ST_TLNextActionType& nextAc_attr() const;

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        bool m_has_prevCondLst ;
        CT_TLTimeConditionList* m_prevCondLst ;
        bool m_has_nextCondLst ;
        CT_TLTimeConditionList* m_nextCondLst ;
        static CT_TLTimeNodeSequence* default_instance_ ;
        bool m_has_concurrent_attr ;
        boolean m_concurrent_attr ;
        bool m_has_prevAc_attr ;
        ST_TLPreviousActionType* m_prevAc_attr ;
        bool m_has_nextAc_attr ;
        ST_TLNextActionType* m_nextAc_attr ;

    }

    class CT_TLTimeNodeExclusive : public XSD::ComplexType{
    public:
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& cTn() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeNodeExclusive& default_instance() const;

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        static CT_TLTimeNodeExclusive* default_instance_ ;

    }

    class CT_TLBehaviorAttributeNameList : public XSD::ComplexType{
    public:
        bool has_attrName() const;
        void set_attrName(const string& _attrName );
        const string& attrName() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLBehaviorAttributeNameList& default_instance() const;

    private:
        bool m_has_attrName ;
        string m_attrName ;
        static CT_TLBehaviorAttributeNameList* default_instance_ ;

    }

    class CT_TLCommonBehaviorData : public XSD::ComplexType{
    public:
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& cTn() const;
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& tgtEl() const;
        bool has_attrNameLst() const;
        CT_TLBehaviorAttributeNameList* mutable_attrNameLst();
        const CT_TLBehaviorAttributeNameList& attrNameLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLCommonBehaviorData& default_instance() const;
        bool has_additive_attr() const;
        void set_additive_attr(const ST_TLBehaviorAdditiveType& _additive_attr );
        const ST_TLBehaviorAdditiveType& additive_attr() const;
        bool has_accumulate_attr() const;
        void set_accumulate_attr(const ST_TLBehaviorAccumulateType& _accumulate_attr );
        const ST_TLBehaviorAccumulateType& accumulate_attr() const;
        bool has_xfrmType_attr() const;
        void set_xfrmType_attr(const ST_TLBehaviorTransformType& _xfrmType_attr );
        const ST_TLBehaviorTransformType& xfrmType_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const string& _from_attr );
        const string& from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const string& _to_attr );
        const string& to_attr() const;
        bool has_by_attr() const;
        void set_by_attr(const string& _by_attr );
        const string& by_attr() const;
        bool has_rctx_attr() const;
        void set_rctx_attr(const string& _rctx_attr );
        const string& rctx_attr() const;
        bool has_override_attr() const;
        void set_override_attr(const ST_TLBehaviorOverrideType& _override_attr );
        const ST_TLBehaviorOverrideType& override_attr() const;

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        bool m_has_tgtEl ;
        CT_TLTimeTargetElement* m_tgtEl ;
        bool m_has_attrNameLst ;
        CT_TLBehaviorAttributeNameList* m_attrNameLst ;
        static CT_TLCommonBehaviorData* default_instance_ ;
        bool m_has_additive_attr ;
        ST_TLBehaviorAdditiveType* m_additive_attr ;
        bool m_has_accumulate_attr ;
        ST_TLBehaviorAccumulateType* m_accumulate_attr ;
        bool m_has_xfrmType_attr ;
        ST_TLBehaviorTransformType* m_xfrmType_attr ;
        bool m_has_from_attr ;
        string m_from_attr ;
        bool m_has_to_attr ;
        string m_to_attr ;
        bool m_has_by_attr ;
        string m_by_attr ;
        bool m_has_rctx_attr ;
        string m_rctx_attr ;
        bool m_has_override_attr ;
        ST_TLBehaviorOverrideType* m_override_attr ;

    }

    class CT_TLAnimVariantBooleanVal : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimVariantBooleanVal& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const boolean& _val_attr );
        const boolean& val_attr() const;

    private:
        static CT_TLAnimVariantBooleanVal* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_TLAnimVariantIntegerVal : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimVariantIntegerVal& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const int& _val_attr );
        const int& val_attr() const;

    private:
        static CT_TLAnimVariantIntegerVal* default_instance_ ;
        bool m_has_val_attr ;
        int m_val_attr ;

    }

    class CT_TLAnimVariantFloatVal : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimVariantFloatVal& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const float& _val_attr );
        const float& val_attr() const;

    private:
        static CT_TLAnimVariantFloatVal* default_instance_ ;
        bool m_has_val_attr ;
        float m_val_attr ;

    }

    class CT_TLAnimVariantStringVal : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimVariantStringVal& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_TLAnimVariantStringVal* default_instance_ ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_TLAnimVariant : public XSD::ComplexType{
    public:
        bool has_boolVal() const;
        CT_TLAnimVariantBooleanVal* mutable_boolVal();
        const CT_TLAnimVariantBooleanVal& boolVal() const;
        bool has_intVal() const;
        CT_TLAnimVariantIntegerVal* mutable_intVal();
        const CT_TLAnimVariantIntegerVal& intVal() const;
        bool has_fltVal() const;
        CT_TLAnimVariantFloatVal* mutable_fltVal();
        const CT_TLAnimVariantFloatVal& fltVal() const;
        bool has_strVal() const;
        CT_TLAnimVariantStringVal* mutable_strVal();
        const CT_TLAnimVariantStringVal& strVal() const;
        bool has_clrVal() const;
        ns_a::CT_Color* mutable_clrVal();
        const ns_a::CT_Color& clrVal() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimVariant& default_instance() const;

    private:
        bool m_has_boolVal ;
        CT_TLAnimVariantBooleanVal* m_boolVal ;
        bool m_has_intVal ;
        CT_TLAnimVariantIntegerVal* m_intVal ;
        bool m_has_fltVal ;
        CT_TLAnimVariantFloatVal* m_fltVal ;
        bool m_has_strVal ;
        CT_TLAnimVariantStringVal* m_strVal ;
        bool m_has_clrVal ;
        ns_a::CT_Color* m_clrVal ;
        static CT_TLAnimVariant* default_instance_ ;

    }

    class CT_TLTimeAnimateValue : public XSD::ComplexType{
    public:
        bool has_val() const;
        CT_TLAnimVariant* mutable_val();
        const CT_TLAnimVariant& val() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeAnimateValue& default_instance() const;
        bool has_tm_attr() const;
        void set_tm_attr(const ST_TLTimeAnimateValueTime& _tm_attr );
        const ST_TLTimeAnimateValueTime& tm_attr() const;
        bool has_fmla_attr() const;
        void set_fmla_attr(const string& _fmla_attr );
        const string& fmla_attr() const;

    private:
        bool m_has_val ;
        CT_TLAnimVariant* m_val ;
        static CT_TLTimeAnimateValue* default_instance_ ;
        bool m_has_tm_attr ;
        ST_TLTimeAnimateValueTime* m_tm_attr ;
        bool m_has_fmla_attr ;
        string m_fmla_attr ;

    }

    class CT_TLTimeAnimateValueList : public XSD::ComplexType{
    public:
        bool has_tav() const;
        CT_TLTimeAnimateValue* mutable_tav();
        const CT_TLTimeAnimateValue& tav() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTimeAnimateValueList& default_instance() const;

    private:
        bool m_has_tav ;
        CT_TLTimeAnimateValue* m_tav ;
        static CT_TLTimeAnimateValueList* default_instance_ ;

    }

    class CT_TLAnimateBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_tavLst() const;
        CT_TLTimeAnimateValueList* mutable_tavLst();
        const CT_TLTimeAnimateValueList& tavLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateBehavior& default_instance() const;
        bool has_by_attr() const;
        void set_by_attr(const string& _by_attr );
        const string& by_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const string& _from_attr );
        const string& from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const string& _to_attr );
        const string& to_attr() const;
        bool has_calcmode_attr() const;
        void set_calcmode_attr(const ST_TLAnimateBehaviorCalcMode& _calcmode_attr );
        const ST_TLAnimateBehaviorCalcMode& calcmode_attr() const;
        bool has_valueType_attr() const;
        void set_valueType_attr(const ST_TLAnimateBehaviorValueType& _valueType_attr );
        const ST_TLAnimateBehaviorValueType& valueType_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_tavLst ;
        CT_TLTimeAnimateValueList* m_tavLst ;
        static CT_TLAnimateBehavior* default_instance_ ;
        bool m_has_by_attr ;
        string m_by_attr ;
        bool m_has_from_attr ;
        string m_from_attr ;
        bool m_has_to_attr ;
        string m_to_attr ;
        bool m_has_calcmode_attr ;
        ST_TLAnimateBehaviorCalcMode* m_calcmode_attr ;
        bool m_has_valueType_attr ;
        ST_TLAnimateBehaviorValueType* m_valueType_attr ;

    }

    class CT_TLByRgbColorTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLByRgbColorTransform& default_instance() const;
        bool has_r_attr() const;
        void set_r_attr(const ns_a::ST_FixedPercentage& _r_attr );
        const ns_a::ST_FixedPercentage& r_attr() const;
        bool has_g_attr() const;
        void set_g_attr(const ns_a::ST_FixedPercentage& _g_attr );
        const ns_a::ST_FixedPercentage& g_attr() const;
        bool has_b_attr() const;
        void set_b_attr(const ns_a::ST_FixedPercentage& _b_attr );
        const ns_a::ST_FixedPercentage& b_attr() const;

    private:
        static CT_TLByRgbColorTransform* default_instance_ ;
        bool m_has_r_attr ;
        ns_a::ST_FixedPercentage* m_r_attr ;
        bool m_has_g_attr ;
        ns_a::ST_FixedPercentage* m_g_attr ;
        bool m_has_b_attr ;
        ns_a::ST_FixedPercentage* m_b_attr ;

    }

    class CT_TLByHslColorTransform : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLByHslColorTransform& default_instance() const;
        bool has_h_attr() const;
        void set_h_attr(const ns_a::ST_Angle& _h_attr );
        const ns_a::ST_Angle& h_attr() const;
        bool has_s_attr() const;
        void set_s_attr(const ns_a::ST_FixedPercentage& _s_attr );
        const ns_a::ST_FixedPercentage& s_attr() const;
        bool has_l_attr() const;
        void set_l_attr(const ns_a::ST_FixedPercentage& _l_attr );
        const ns_a::ST_FixedPercentage& l_attr() const;

    private:
        static CT_TLByHslColorTransform* default_instance_ ;
        bool m_has_h_attr ;
        ns_a::ST_Angle* m_h_attr ;
        bool m_has_s_attr ;
        ns_a::ST_FixedPercentage* m_s_attr ;
        bool m_has_l_attr ;
        ns_a::ST_FixedPercentage* m_l_attr ;

    }

    class CT_TLByAnimateColorTransform : public XSD::ComplexType{
    public:
        bool has_rgb() const;
        CT_TLByRgbColorTransform* mutable_rgb();
        const CT_TLByRgbColorTransform& rgb() const;
        bool has_hsl() const;
        CT_TLByHslColorTransform* mutable_hsl();
        const CT_TLByHslColorTransform& hsl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLByAnimateColorTransform& default_instance() const;

    private:
        bool m_has_rgb ;
        CT_TLByRgbColorTransform* m_rgb ;
        bool m_has_hsl ;
        CT_TLByHslColorTransform* m_hsl ;
        static CT_TLByAnimateColorTransform* default_instance_ ;

    }

    class CT_TLAnimateColorBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_by() const;
        CT_TLByAnimateColorTransform* mutable_by();
        const CT_TLByAnimateColorTransform& by() const;
        bool has_from() const;
        ns_a::CT_Color* mutable_from();
        const ns_a::CT_Color& from() const;
        bool has_to() const;
        ns_a::CT_Color* mutable_to();
        const ns_a::CT_Color& to() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateColorBehavior& default_instance() const;
        bool has_clrSpc_attr() const;
        void set_clrSpc_attr(const ST_TLAnimateColorSpace& _clrSpc_attr );
        const ST_TLAnimateColorSpace& clrSpc_attr() const;
        bool has_dir_attr() const;
        void set_dir_attr(const ST_TLAnimateColorDirection& _dir_attr );
        const ST_TLAnimateColorDirection& dir_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_by ;
        CT_TLByAnimateColorTransform* m_by ;
        bool m_has_from ;
        ns_a::CT_Color* m_from ;
        bool m_has_to ;
        ns_a::CT_Color* m_to ;
        static CT_TLAnimateColorBehavior* default_instance_ ;
        bool m_has_clrSpc_attr ;
        ST_TLAnimateColorSpace* m_clrSpc_attr ;
        bool m_has_dir_attr ;
        ST_TLAnimateColorDirection* m_dir_attr ;

    }

    class CT_TLAnimateEffectBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_progress() const;
        CT_TLAnimVariant* mutable_progress();
        const CT_TLAnimVariant& progress() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateEffectBehavior& default_instance() const;
        bool has_transition_attr() const;
        void set_transition_attr(const ST_TLAnimateEffectTransition& _transition_attr );
        const ST_TLAnimateEffectTransition& transition_attr() const;
        bool has_filter_attr() const;
        void set_filter_attr(const string& _filter_attr );
        const string& filter_attr() const;
        bool has_prLst_attr() const;
        void set_prLst_attr(const string& _prLst_attr );
        const string& prLst_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_progress ;
        CT_TLAnimVariant* m_progress ;
        static CT_TLAnimateEffectBehavior* default_instance_ ;
        bool m_has_transition_attr ;
        ST_TLAnimateEffectTransition* m_transition_attr ;
        bool m_has_filter_attr ;
        string m_filter_attr ;
        bool m_has_prLst_attr ;
        string m_prLst_attr ;

    }

    class CT_TLPoint : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLPoint& default_instance() const;
        bool has_x_attr() const;
        void set_x_attr(const ns_a::ST_Percentage& _x_attr );
        const ns_a::ST_Percentage& x_attr() const;
        bool has_y_attr() const;
        void set_y_attr(const ns_a::ST_Percentage& _y_attr );
        const ns_a::ST_Percentage& y_attr() const;

    private:
        static CT_TLPoint* default_instance_ ;
        bool m_has_x_attr ;
        ns_a::ST_Percentage* m_x_attr ;
        bool m_has_y_attr ;
        ns_a::ST_Percentage* m_y_attr ;

    }

    class CT_TLAnimateMotionBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_by() const;
        CT_TLPoint* mutable_by();
        const CT_TLPoint& by() const;
        bool has_from() const;
        CT_TLPoint* mutable_from();
        const CT_TLPoint& from() const;
        bool has_to() const;
        CT_TLPoint* mutable_to();
        const CT_TLPoint& to() const;
        bool has_rCtr() const;
        CT_TLPoint* mutable_rCtr();
        const CT_TLPoint& rCtr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateMotionBehavior& default_instance() const;
        bool has_origin_attr() const;
        void set_origin_attr(const ST_TLAnimateMotionBehaviorOrigin& _origin_attr );
        const ST_TLAnimateMotionBehaviorOrigin& origin_attr() const;
        bool has_path_attr() const;
        void set_path_attr(const string& _path_attr );
        const string& path_attr() const;
        bool has_pathEditMode_attr() const;
        void set_pathEditMode_attr(const ST_TLAnimateMotionPathEditMode& _pathEditMode_attr );
        const ST_TLAnimateMotionPathEditMode& pathEditMode_attr() const;
        bool has_rAng_attr() const;
        void set_rAng_attr(const ns_a::ST_Angle& _rAng_attr );
        const ns_a::ST_Angle& rAng_attr() const;
        bool has_ptsTypes_attr() const;
        void set_ptsTypes_attr(const string& _ptsTypes_attr );
        const string& ptsTypes_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_by ;
        CT_TLPoint* m_by ;
        bool m_has_from ;
        CT_TLPoint* m_from ;
        bool m_has_to ;
        CT_TLPoint* m_to ;
        bool m_has_rCtr ;
        CT_TLPoint* m_rCtr ;
        static CT_TLAnimateMotionBehavior* default_instance_ ;
        bool m_has_origin_attr ;
        ST_TLAnimateMotionBehaviorOrigin* m_origin_attr ;
        bool m_has_path_attr ;
        string m_path_attr ;
        bool m_has_pathEditMode_attr ;
        ST_TLAnimateMotionPathEditMode* m_pathEditMode_attr ;
        bool m_has_rAng_attr ;
        ns_a::ST_Angle* m_rAng_attr ;
        bool m_has_ptsTypes_attr ;
        string m_ptsTypes_attr ;

    }

    class CT_TLAnimateRotationBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateRotationBehavior& default_instance() const;
        bool has_by_attr() const;
        void set_by_attr(const ns_a::ST_Angle& _by_attr );
        const ns_a::ST_Angle& by_attr() const;
        bool has_from_attr() const;
        void set_from_attr(const ns_a::ST_Angle& _from_attr );
        const ns_a::ST_Angle& from_attr() const;
        bool has_to_attr() const;
        void set_to_attr(const ns_a::ST_Angle& _to_attr );
        const ns_a::ST_Angle& to_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        static CT_TLAnimateRotationBehavior* default_instance_ ;
        bool m_has_by_attr ;
        ns_a::ST_Angle* m_by_attr ;
        bool m_has_from_attr ;
        ns_a::ST_Angle* m_from_attr ;
        bool m_has_to_attr ;
        ns_a::ST_Angle* m_to_attr ;

    }

    class CT_TLAnimateScaleBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_by() const;
        CT_TLPoint* mutable_by();
        const CT_TLPoint& by() const;
        bool has_from() const;
        CT_TLPoint* mutable_from();
        const CT_TLPoint& from() const;
        bool has_to() const;
        CT_TLPoint* mutable_to();
        const CT_TLPoint& to() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLAnimateScaleBehavior& default_instance() const;
        bool has_zoomContents_attr() const;
        void set_zoomContents_attr(const boolean& _zoomContents_attr );
        const boolean& zoomContents_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_by ;
        CT_TLPoint* m_by ;
        bool m_has_from ;
        CT_TLPoint* m_from ;
        bool m_has_to ;
        CT_TLPoint* m_to ;
        static CT_TLAnimateScaleBehavior* default_instance_ ;
        bool m_has_zoomContents_attr ;
        boolean m_zoomContents_attr ;

    }

    class CT_TLCommandBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLCommandBehavior& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_TLCommandType& _type_attr );
        const ST_TLCommandType& type_attr() const;
        bool has_cmd_attr() const;
        void set_cmd_attr(const string& _cmd_attr );
        const string& cmd_attr() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        static CT_TLCommandBehavior* default_instance_ ;
        bool m_has_type_attr ;
        ST_TLCommandType* m_type_attr ;
        bool m_has_cmd_attr ;
        string m_cmd_attr ;

    }

    class CT_TLSetBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr() const;
        CT_TLCommonBehaviorData* mutable_cBhvr();
        const CT_TLCommonBehaviorData& cBhvr() const;
        bool has_to() const;
        CT_TLAnimVariant* mutable_to();
        const CT_TLAnimVariant& to() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLSetBehavior& default_instance() const;

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_to ;
        CT_TLAnimVariant* m_to ;
        static CT_TLSetBehavior* default_instance_ ;

    }

    class CT_TLCommonMediaNodeData : public XSD::ComplexType{
    public:
        bool has_cTn() const;
        CT_TLCommonTimeNodeData* mutable_cTn();
        const CT_TLCommonTimeNodeData& cTn() const;
        bool has_tgtEl() const;
        CT_TLTimeTargetElement* mutable_tgtEl();
        const CT_TLTimeTargetElement& tgtEl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLCommonMediaNodeData& default_instance() const;
        bool has_vol_attr() const;
        void set_vol_attr(const ns_a::ST_PositiveFixedPercentage& _vol_attr );
        const ns_a::ST_PositiveFixedPercentage& vol_attr() const;
        bool has_mute_attr() const;
        void set_mute_attr(const boolean& _mute_attr );
        const boolean& mute_attr() const;
        bool has_numSld_attr() const;
        void set_numSld_attr(const unsignedInt& _numSld_attr );
        const unsignedInt& numSld_attr() const;
        bool has_showWhenStopped_attr() const;
        void set_showWhenStopped_attr(const boolean& _showWhenStopped_attr );
        const boolean& showWhenStopped_attr() const;

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        bool m_has_tgtEl ;
        CT_TLTimeTargetElement* m_tgtEl ;
        static CT_TLCommonMediaNodeData* default_instance_ ;
        bool m_has_vol_attr ;
        ns_a::ST_PositiveFixedPercentage* m_vol_attr ;
        bool m_has_mute_attr ;
        boolean m_mute_attr ;
        bool m_has_numSld_attr ;
        unsignedInt m_numSld_attr ;
        bool m_has_showWhenStopped_attr ;
        boolean m_showWhenStopped_attr ;

    }

    class CT_TLMediaNodeAudio : public XSD::ComplexType{
    public:
        bool has_cMediaNode() const;
        CT_TLCommonMediaNodeData* mutable_cMediaNode();
        const CT_TLCommonMediaNodeData& cMediaNode() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLMediaNodeAudio& default_instance() const;
        bool has_isNarration_attr() const;
        void set_isNarration_attr(const boolean& _isNarration_attr );
        const boolean& isNarration_attr() const;

    private:
        bool m_has_cMediaNode ;
        CT_TLCommonMediaNodeData* m_cMediaNode ;
        static CT_TLMediaNodeAudio* default_instance_ ;
        bool m_has_isNarration_attr ;
        boolean m_isNarration_attr ;

    }

    class CT_TLMediaNodeVideo : public XSD::ComplexType{
    public:
        bool has_cMediaNode() const;
        CT_TLCommonMediaNodeData* mutable_cMediaNode();
        const CT_TLCommonMediaNodeData& cMediaNode() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLMediaNodeVideo& default_instance() const;
        bool has_fullScrn_attr() const;
        void set_fullScrn_attr(const boolean& _fullScrn_attr );
        const boolean& fullScrn_attr() const;

    private:
        bool m_has_cMediaNode ;
        CT_TLCommonMediaNodeData* m_cMediaNode ;
        static CT_TLMediaNodeVideo* default_instance_ ;
        bool m_has_fullScrn_attr ;
        boolean m_fullScrn_attr ;

    }

    class CT_TLTemplate : public XSD::ComplexType{
    public:
        bool has_tnLst() const;
        CT_TimeNodeList* mutable_tnLst();
        const CT_TimeNodeList& tnLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTemplate& default_instance() const;
        bool has_lvl_attr() const;
        void set_lvl_attr(const unsignedInt& _lvl_attr );
        const unsignedInt& lvl_attr() const;

    private:
        bool m_has_tnLst ;
        CT_TimeNodeList* m_tnLst ;
        static CT_TLTemplate* default_instance_ ;
        bool m_has_lvl_attr ;
        unsignedInt m_lvl_attr ;

    }

    class CT_TLTemplateList : public XSD::ComplexType{
    public:
        bool has_tmpl() const;
        CT_TLTemplate* mutable_tmpl();
        const CT_TLTemplate& tmpl() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLTemplateList& default_instance() const;

    private:
        bool m_has_tmpl ;
        CT_TLTemplate* m_tmpl ;
        static CT_TLTemplateList* default_instance_ ;

    }

    class CT_TLBuildParagraph : public XSD::ComplexType{
    public:
        bool has_tmplLst() const;
        CT_TLTemplateList* mutable_tmplLst();
        const CT_TLTemplateList& tmplLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLBuildParagraph& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr );
        const ns_a::ST_DrawingElementId& spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const unsignedInt& _grpId_attr );
        const unsignedInt& grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const boolean& _uiExpand_attr );
        const boolean& uiExpand_attr() const;
        bool has_build_attr() const;
        void set_build_attr(const ST_TLParaBuildType& _build_attr );
        const ST_TLParaBuildType& build_attr() const;
        bool has_bldLvl_attr() const;
        void set_bldLvl_attr(const unsignedInt& _bldLvl_attr );
        const unsignedInt& bldLvl_attr() const;
        bool has_animBg_attr() const;
        void set_animBg_attr(const boolean& _animBg_attr );
        const boolean& animBg_attr() const;
        bool has_autoUpdateAnimBg_attr() const;
        void set_autoUpdateAnimBg_attr(const boolean& _autoUpdateAnimBg_attr );
        const boolean& autoUpdateAnimBg_attr() const;
        bool has_rev_attr() const;
        void set_rev_attr(const boolean& _rev_attr );
        const boolean& rev_attr() const;
        bool has_advAuto_attr() const;
        void set_advAuto_attr(const ST_TLTime& _advAuto_attr );
        const ST_TLTime& advAuto_attr() const;

    private:
        bool m_has_tmplLst ;
        CT_TLTemplateList* m_tmplLst ;
        static CT_TLBuildParagraph* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_DrawingElementId* m_spid_attr ;
        bool m_has_grpId_attr ;
        unsignedInt m_grpId_attr ;
        bool m_has_uiExpand_attr ;
        boolean m_uiExpand_attr ;
        bool m_has_build_attr ;
        ST_TLParaBuildType* m_build_attr ;
        bool m_has_bldLvl_attr ;
        unsignedInt m_bldLvl_attr ;
        bool m_has_animBg_attr ;
        boolean m_animBg_attr ;
        bool m_has_autoUpdateAnimBg_attr ;
        boolean m_autoUpdateAnimBg_attr ;
        bool m_has_rev_attr ;
        boolean m_rev_attr ;
        bool m_has_advAuto_attr ;
        ST_TLTime* m_advAuto_attr ;

    }

    class CT_TLBuildDiagram : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLBuildDiagram& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr );
        const ns_a::ST_DrawingElementId& spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const unsignedInt& _grpId_attr );
        const unsignedInt& grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const boolean& _uiExpand_attr );
        const boolean& uiExpand_attr() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_TLDiagramBuildType& _bld_attr );
        const ST_TLDiagramBuildType& bld_attr() const;

    private:
        static CT_TLBuildDiagram* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_DrawingElementId* m_spid_attr ;
        bool m_has_grpId_attr ;
        unsignedInt m_grpId_attr ;
        bool m_has_uiExpand_attr ;
        boolean m_uiExpand_attr ;
        bool m_has_bld_attr ;
        ST_TLDiagramBuildType* m_bld_attr ;

    }

    class CT_TLOleBuildChart : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLOleBuildChart& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr );
        const ns_a::ST_DrawingElementId& spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const unsignedInt& _grpId_attr );
        const unsignedInt& grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const boolean& _uiExpand_attr );
        const boolean& uiExpand_attr() const;
        bool has_bld_attr() const;
        void set_bld_attr(const ST_TLOleChartBuildType& _bld_attr );
        const ST_TLOleChartBuildType& bld_attr() const;
        bool has_animBg_attr() const;
        void set_animBg_attr(const boolean& _animBg_attr );
        const boolean& animBg_attr() const;

    private:
        static CT_TLOleBuildChart* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_DrawingElementId* m_spid_attr ;
        bool m_has_grpId_attr ;
        unsignedInt m_grpId_attr ;
        bool m_has_uiExpand_attr ;
        boolean m_uiExpand_attr ;
        bool m_has_bld_attr ;
        ST_TLOleChartBuildType* m_bld_attr ;
        bool m_has_animBg_attr ;
        boolean m_animBg_attr ;

    }

    class CT_TLGraphicalObjectBuild : public XSD::ComplexType{
    public:
        bool has_bldAsOne() const;
        CT_Empty* mutable_bldAsOne();
        const CT_Empty& bldAsOne() const;
        bool has_bldSub() const;
        ns_a::CT_AnimationGraphicalObjectBuildProperties* mutable_bldSub();
        const ns_a::CT_AnimationGraphicalObjectBuildProperties& bldSub() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TLGraphicalObjectBuild& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr );
        const ns_a::ST_DrawingElementId& spid_attr() const;
        bool has_grpId_attr() const;
        void set_grpId_attr(const unsignedInt& _grpId_attr );
        const unsignedInt& grpId_attr() const;
        bool has_uiExpand_attr() const;
        void set_uiExpand_attr(const boolean& _uiExpand_attr );
        const boolean& uiExpand_attr() const;

    private:
        bool m_has_bldAsOne ;
        CT_Empty* m_bldAsOne ;
        bool m_has_bldSub ;
        ns_a::CT_AnimationGraphicalObjectBuildProperties* m_bldSub ;
        static CT_TLGraphicalObjectBuild* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_DrawingElementId* m_spid_attr ;
        bool m_has_grpId_attr ;
        unsignedInt m_grpId_attr ;
        bool m_has_uiExpand_attr ;
        boolean m_uiExpand_attr ;

    }

    class CT_BuildList : public XSD::ComplexType{
    public:
        CT_TLBuildParagraph* add_bldP();
        CT_TLBuildDiagram* add_bldDgm();
        CT_TLOleBuildChart* add_bldOleChart();
        CT_TLGraphicalObjectBuild* add_bldGraphic();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BuildList& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_BuildList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_bldP() const;
            CT_TLBuildParagraph* mutable_bldP();
            const CT_TLBuildParagraph& bldP() const;
            bool has_bldDgm() const;
            CT_TLBuildDiagram* mutable_bldDgm();
            const CT_TLBuildDiagram& bldDgm() const;
            bool has_bldOleChart() const;
            CT_TLOleBuildChart* mutable_bldOleChart();
            const CT_TLOleBuildChart& bldOleChart() const;
            bool has_bldGraphic() const;
            CT_TLGraphicalObjectBuild* mutable_bldGraphic();
            const CT_TLGraphicalObjectBuild& bldGraphic() const;

        private:
            bool m_has_bldP ;
            CT_TLBuildParagraph* m_bldP ;
            bool m_has_bldDgm ;
            CT_TLBuildDiagram* m_bldDgm ;
            bool m_has_bldOleChart ;
            CT_TLOleBuildChart* m_bldOleChart ;
            bool m_has_bldGraphic ;
            CT_TLGraphicalObjectBuild* m_bldGraphic ;

        }


    }

    class CT_SlideTiming : public XSD::ComplexType{
    public:
        bool has_tnLst() const;
        CT_TimeNodeList* mutable_tnLst();
        const CT_TimeNodeList& tnLst() const;
        bool has_bldLst() const;
        CT_BuildList* mutable_bldLst();
        const CT_BuildList& bldLst() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideTiming& default_instance() const;

    private:
        bool m_has_tnLst ;
        CT_TimeNodeList* m_tnLst ;
        bool m_has_bldLst ;
        CT_BuildList* m_bldLst ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_SlideTiming* default_instance_ ;

    }

    class CT_Empty : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Empty& default_instance() const;

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_IndexRange : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_IndexRange& default_instance() const;
        bool has_st_attr() const;
        void set_st_attr(const ST_Index& _st_attr );
        const ST_Index& st_attr() const;
        bool has_end_attr() const;
        void set_end_attr(const ST_Index& _end_attr );
        const ST_Index& end_attr() const;

    private:
        static CT_IndexRange* default_instance_ ;
        bool m_has_st_attr ;
        ST_Index* m_st_attr ;
        bool m_has_end_attr ;
        ST_Index* m_end_attr ;

    }

    class CT_SlideRelationshipListEntry : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideRelationshipListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_SlideRelationshipListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_SlideRelationshipList : public XSD::ComplexType{
    public:
        bool has_sld() const;
        CT_SlideRelationshipListEntry* mutable_sld();
        const CT_SlideRelationshipListEntry& sld() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideRelationshipList& default_instance() const;

    private:
        bool m_has_sld ;
        CT_SlideRelationshipListEntry* m_sld ;
        static CT_SlideRelationshipList* default_instance_ ;

    }

    class CT_CustomShowId : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomShowId& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const unsignedInt& _id_attr );
        const unsignedInt& id_attr() const;

    private:
        static CT_CustomShowId* default_instance_ ;
        bool m_has_id_attr ;
        unsignedInt m_id_attr ;

    }

    class CT_CustomerData : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomerData& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_CustomerData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_TagsData : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TagsData& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_TagsData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_CustomerDataList : public XSD::ComplexType{
    public:
        bool has_custData() const;
        CT_CustomerData* mutable_custData();
        const CT_CustomerData& custData() const;
        bool has_tags() const;
        CT_TagsData* mutable_tags();
        const CT_TagsData& tags() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomerDataList& default_instance() const;

    private:
        bool m_has_custData ;
        CT_CustomerData* m_custData ;
        bool m_has_tags ;
        CT_TagsData* m_tags ;
        static CT_CustomerDataList* default_instance_ ;

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

    class CT_ExtensionListModify : public XSD::ComplexType{
    public:
        bool has_ext() const;
        CT_Extension* mutable_ext();
        const CT_Extension& ext() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ExtensionListModify& default_instance() const;
        bool has_mod_attr() const;
        void set_mod_attr(const boolean& _mod_attr );
        const boolean& mod_attr() const;

    private:
        bool m_has_ext ;
        CT_Extension* m_ext ;
        static CT_ExtensionListModify* default_instance_ ;
        bool m_has_mod_attr ;
        boolean m_mod_attr ;

    }

    class CT_CommentAuthor : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommentAuthor& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const unsignedInt& _id_attr );
        const unsignedInt& id_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const ST_Name& _name_attr );
        const ST_Name& name_attr() const;
        bool has_initials_attr() const;
        void set_initials_attr(const ST_Name& _initials_attr );
        const ST_Name& initials_attr() const;
        bool has_lastIdx_attr() const;
        void set_lastIdx_attr(const unsignedInt& _lastIdx_attr );
        const unsignedInt& lastIdx_attr() const;
        bool has_clrIdx_attr() const;
        void set_clrIdx_attr(const unsignedInt& _clrIdx_attr );
        const unsignedInt& clrIdx_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_CommentAuthor* default_instance_ ;
        bool m_has_id_attr ;
        unsignedInt m_id_attr ;
        bool m_has_name_attr ;
        ST_Name* m_name_attr ;
        bool m_has_initials_attr ;
        ST_Name* m_initials_attr ;
        bool m_has_lastIdx_attr ;
        unsignedInt m_lastIdx_attr ;
        bool m_has_clrIdx_attr ;
        unsignedInt m_clrIdx_attr ;

    }

    class CT_CommentAuthorList : public XSD::ComplexType{
    public:
        bool has_cmAuthor() const;
        CT_CommentAuthor* mutable_cmAuthor();
        const CT_CommentAuthor& cmAuthor() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommentAuthorList& default_instance() const;

    private:
        bool m_has_cmAuthor ;
        CT_CommentAuthor* m_cmAuthor ;
        static CT_CommentAuthorList* default_instance_ ;

    }

    class CT_Comment : public XSD::ComplexType{
    public:
        bool has_pos() const;
        ns_a::CT_Point2D* mutable_pos();
        const ns_a::CT_Point2D& pos() const;
        bool has_text() const;
        void set_text(const string& _text );
        const string& text() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Comment& default_instance() const;
        bool has_authorId_attr() const;
        void set_authorId_attr(const unsignedInt& _authorId_attr );
        const unsignedInt& authorId_attr() const;
        bool has_dt_attr() const;
        void set_dt_attr(const dateTime& _dt_attr );
        const dateTime& dt_attr() const;
        bool has_idx_attr() const;
        void set_idx_attr(const ST_Index& _idx_attr );
        const ST_Index& idx_attr() const;

    private:
        bool m_has_pos ;
        ns_a::CT_Point2D* m_pos ;
        bool m_has_text ;
        string m_text ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Comment* default_instance_ ;
        bool m_has_authorId_attr ;
        unsignedInt m_authorId_attr ;
        bool m_has_dt_attr ;
        dateTime m_dt_attr ;
        bool m_has_idx_attr ;
        ST_Index* m_idx_attr ;

    }

    class CT_CommentList : public XSD::ComplexType{
    public:
        bool has_cm() const;
        CT_Comment* mutable_cm();
        const CT_Comment& cm() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommentList& default_instance() const;

    private:
        bool m_has_cm ;
        CT_Comment* m_cm ;
        static CT_CommentList* default_instance_ ;

    }

    class CT_OleObjectEmbed : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OleObjectEmbed& default_instance() const;
        bool has_followColorScheme_attr() const;
        void set_followColorScheme_attr(const ST_OleObjectFollowColorScheme& _followColorScheme_attr );
        const ST_OleObjectFollowColorScheme& followColorScheme_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OleObjectEmbed* default_instance_ ;
        bool m_has_followColorScheme_attr ;
        ST_OleObjectFollowColorScheme* m_followColorScheme_attr ;

    }

    class CT_OleObjectLink : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OleObjectLink& default_instance() const;
        bool has_updateAutomatic_attr() const;
        void set_updateAutomatic_attr(const boolean& _updateAutomatic_attr );
        const boolean& updateAutomatic_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OleObjectLink* default_instance_ ;
        bool m_has_updateAutomatic_attr ;
        boolean m_updateAutomatic_attr ;

    }

    class CT_OleObject : public XSD::ComplexType{
    public:
        bool has_embed() const;
        CT_OleObjectEmbed* mutable_embed();
        const CT_OleObjectEmbed& embed() const;
        bool has_link() const;
        CT_OleObjectLink* mutable_link();
        const CT_OleObjectLink& link() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OleObject& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr );
        const ns_a::ST_ShapeID& spid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_showAsIcon_attr() const;
        void set_showAsIcon_attr(const boolean& _showAsIcon_attr );
        const boolean& showAsIcon_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_imgW_attr() const;
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr );
        const ns_a::ST_PositiveCoordinate32& imgW_attr() const;
        bool has_imgH_attr() const;
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr );
        const ns_a::ST_PositiveCoordinate32& imgH_attr() const;
        bool has_progId_attr() const;
        void set_progId_attr(const string& _progId_attr );
        const string& progId_attr() const;

    private:
        bool m_has_embed ;
        CT_OleObjectEmbed* m_embed ;
        bool m_has_link ;
        CT_OleObjectLink* m_link ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_OleObject* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_ShapeID* m_spid_attr ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_showAsIcon_attr ;
        boolean m_showAsIcon_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_imgW_attr ;
        ns_a::ST_PositiveCoordinate32* m_imgW_attr ;
        bool m_has_imgH_attr ;
        ns_a::ST_PositiveCoordinate32* m_imgH_attr ;
        bool m_has_progId_attr ;
        string m_progId_attr ;

    }

    class CT_Control : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        bool has_pic() const;
        CT_Picture* mutable_pic();
        const CT_Picture& pic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Control& default_instance() const;
        bool has_spid_attr() const;
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr );
        const ns_a::ST_ShapeID& spid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_showAsIcon_attr() const;
        void set_showAsIcon_attr(const boolean& _showAsIcon_attr );
        const boolean& showAsIcon_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_imgW_attr() const;
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr );
        const ns_a::ST_PositiveCoordinate32& imgW_attr() const;
        bool has_imgH_attr() const;
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr );
        const ns_a::ST_PositiveCoordinate32& imgH_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_Control* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_ShapeID* m_spid_attr ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_showAsIcon_attr ;
        boolean m_showAsIcon_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_imgW_attr ;
        ns_a::ST_PositiveCoordinate32* m_imgW_attr ;
        bool m_has_imgH_attr ;
        ns_a::ST_PositiveCoordinate32* m_imgH_attr ;

    }

    class CT_ControlList : public XSD::ComplexType{
    public:
        bool has_control() const;
        CT_Control* mutable_control();
        const CT_Control& control() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ControlList& default_instance() const;

    private:
        bool m_has_control ;
        CT_Control* m_control ;
        static CT_ControlList* default_instance_ ;

    }

    class CT_SlideIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideIdListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideId& _id_attr );
        const ST_SlideId& id_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_SlideId* m_id_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_SlideIdList : public XSD::ComplexType{
    public:
        bool has_sldId() const;
        CT_SlideIdListEntry* mutable_sldId();
        const CT_SlideIdListEntry& sldId() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideIdList& default_instance() const;

    private:
        bool m_has_sldId ;
        CT_SlideIdListEntry* m_sldId ;
        static CT_SlideIdList* default_instance_ ;

    }

    class CT_SlideMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideMasterIdListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideMasterId& _id_attr );
        const ST_SlideMasterId& id_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideMasterIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_SlideMasterId* m_id_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_SlideMasterIdList : public XSD::ComplexType{
    public:
        bool has_sldMasterId() const;
        CT_SlideMasterIdListEntry* mutable_sldMasterId();
        const CT_SlideMasterIdListEntry& sldMasterId() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideMasterIdList& default_instance() const;

    private:
        bool m_has_sldMasterId ;
        CT_SlideMasterIdListEntry* m_sldMasterId ;
        static CT_SlideMasterIdList* default_instance_ ;

    }

    class CT_NotesMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesMasterIdListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesMasterIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_NotesMasterIdList : public XSD::ComplexType{
    public:
        bool has_notesMasterId() const;
        CT_NotesMasterIdListEntry* mutable_notesMasterId();
        const CT_NotesMasterIdListEntry& notesMasterId() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesMasterIdList& default_instance() const;

    private:
        bool m_has_notesMasterId ;
        CT_NotesMasterIdListEntry* m_notesMasterId ;
        static CT_NotesMasterIdList* default_instance_ ;

    }

    class CT_HandoutMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HandoutMasterIdListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_HandoutMasterIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_HandoutMasterIdList : public XSD::ComplexType{
    public:
        bool has_handoutMasterId() const;
        CT_HandoutMasterIdListEntry* mutable_handoutMasterId();
        const CT_HandoutMasterIdListEntry& handoutMasterId() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HandoutMasterIdList& default_instance() const;

    private:
        bool m_has_handoutMasterId ;
        CT_HandoutMasterIdListEntry* m_handoutMasterId ;
        static CT_HandoutMasterIdList* default_instance_ ;

    }

    class CT_EmbeddedFontDataId : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EmbeddedFontDataId& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_EmbeddedFontDataId* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_EmbeddedFontListEntry : public XSD::ComplexType{
    public:
        bool has_font() const;
        ns_a::CT_TextFont* mutable_font();
        const ns_a::CT_TextFont& font() const;
        bool has_regular() const;
        CT_EmbeddedFontDataId* mutable_regular();
        const CT_EmbeddedFontDataId& regular() const;
        bool has_bold() const;
        CT_EmbeddedFontDataId* mutable_bold();
        const CT_EmbeddedFontDataId& bold() const;
        bool has_italic() const;
        CT_EmbeddedFontDataId* mutable_italic();
        const CT_EmbeddedFontDataId& italic() const;
        bool has_boldItalic() const;
        CT_EmbeddedFontDataId* mutable_boldItalic();
        const CT_EmbeddedFontDataId& boldItalic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EmbeddedFontListEntry& default_instance() const;

    private:
        bool m_has_font ;
        ns_a::CT_TextFont* m_font ;
        bool m_has_regular ;
        CT_EmbeddedFontDataId* m_regular ;
        bool m_has_bold ;
        CT_EmbeddedFontDataId* m_bold ;
        bool m_has_italic ;
        CT_EmbeddedFontDataId* m_italic ;
        bool m_has_boldItalic ;
        CT_EmbeddedFontDataId* m_boldItalic ;
        static CT_EmbeddedFontListEntry* default_instance_ ;

    }

    class CT_EmbeddedFontList : public XSD::ComplexType{
    public:
        bool has_embeddedFont() const;
        CT_EmbeddedFontListEntry* mutable_embeddedFont();
        const CT_EmbeddedFontListEntry& embeddedFont() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EmbeddedFontList& default_instance() const;

    private:
        bool m_has_embeddedFont ;
        CT_EmbeddedFontListEntry* m_embeddedFont ;
        static CT_EmbeddedFontList* default_instance_ ;

    }

    class CT_SmartTags : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SmartTags& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        static CT_SmartTags* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_CustomShow : public XSD::ComplexType{
    public:
        bool has_sldLst() const;
        CT_SlideRelationshipList* mutable_sldLst();
        const CT_SlideRelationshipList& sldLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomShow& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const ST_Name& _name_attr );
        const ST_Name& name_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const unsignedInt& _id_attr );
        const unsignedInt& id_attr() const;

    private:
        bool m_has_sldLst ;
        CT_SlideRelationshipList* m_sldLst ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_CustomShow* default_instance_ ;
        bool m_has_name_attr ;
        ST_Name* m_name_attr ;
        bool m_has_id_attr ;
        unsignedInt m_id_attr ;

    }

    class CT_CustomShowList : public XSD::ComplexType{
    public:
        bool has_custShow() const;
        CT_CustomShow* mutable_custShow();
        const CT_CustomShow& custShow() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CustomShowList& default_instance() const;

    private:
        bool m_has_custShow ;
        CT_CustomShow* m_custShow ;
        static CT_CustomShowList* default_instance_ ;

    }

    class CT_PhotoAlbum : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PhotoAlbum& default_instance() const;
        bool has_bw_attr() const;
        void set_bw_attr(const boolean& _bw_attr );
        const boolean& bw_attr() const;
        bool has_showCaptions_attr() const;
        void set_showCaptions_attr(const boolean& _showCaptions_attr );
        const boolean& showCaptions_attr() const;
        bool has_layout_attr() const;
        void set_layout_attr(const ST_PhotoAlbumLayout& _layout_attr );
        const ST_PhotoAlbumLayout& layout_attr() const;
        bool has_frame_attr() const;
        void set_frame_attr(const ST_PhotoAlbumFrameShape& _frame_attr );
        const ST_PhotoAlbumFrameShape& frame_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PhotoAlbum* default_instance_ ;
        bool m_has_bw_attr ;
        boolean m_bw_attr ;
        bool m_has_showCaptions_attr ;
        boolean m_showCaptions_attr ;
        bool m_has_layout_attr ;
        ST_PhotoAlbumLayout* m_layout_attr ;
        bool m_has_frame_attr ;
        ST_PhotoAlbumFrameShape* m_frame_attr ;

    }

    class CT_SlideSize : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideSize& default_instance() const;
        bool has_cx_attr() const;
        void set_cx_attr(const ST_SlideSizeCoordinate& _cx_attr );
        const ST_SlideSizeCoordinate& cx_attr() const;
        bool has_cy_attr() const;
        void set_cy_attr(const ST_SlideSizeCoordinate& _cy_attr );
        const ST_SlideSizeCoordinate& cy_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_SlideSizeType& _type_attr );
        const ST_SlideSizeType& type_attr() const;

    private:
        static CT_SlideSize* default_instance_ ;
        bool m_has_cx_attr ;
        ST_SlideSizeCoordinate* m_cx_attr ;
        bool m_has_cy_attr ;
        ST_SlideSizeCoordinate* m_cy_attr ;
        bool m_has_type_attr ;
        ST_SlideSizeType* m_type_attr ;

    }

    class CT_Kinsoku : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Kinsoku& default_instance() const;
        bool has_lang_attr() const;
        void set_lang_attr(const string& _lang_attr );
        const string& lang_attr() const;
        bool has_invalStChars_attr() const;
        void set_invalStChars_attr(const string& _invalStChars_attr );
        const string& invalStChars_attr() const;
        bool has_invalEndChars_attr() const;
        void set_invalEndChars_attr(const string& _invalEndChars_attr );
        const string& invalEndChars_attr() const;

    private:
        static CT_Kinsoku* default_instance_ ;
        bool m_has_lang_attr ;
        string m_lang_attr ;
        bool m_has_invalStChars_attr ;
        string m_invalStChars_attr ;
        bool m_has_invalEndChars_attr ;
        string m_invalEndChars_attr ;

    }

    class CT_ModifyVerifier : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ModifyVerifier& default_instance() const;
        bool has_algorithmName_attr() const;
        void set_algorithmName_attr(const string& _algorithmName_attr );
        const string& algorithmName_attr() const;
        bool has_hashValue_attr() const;
        void set_hashValue_attr(const base64Binary& _hashValue_attr );
        const base64Binary& hashValue_attr() const;
        bool has_saltValue_attr() const;
        void set_saltValue_attr(const base64Binary& _saltValue_attr );
        const base64Binary& saltValue_attr() const;
        bool has_spinValue_attr() const;
        void set_spinValue_attr(const unsignedInt& _spinValue_attr );
        const unsignedInt& spinValue_attr() const;
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
        void set_cryptAlgorithmSid_attr(const unsignedInt& _cryptAlgorithmSid_attr );
        const unsignedInt& cryptAlgorithmSid_attr() const;
        bool has_spinCount_attr() const;
        void set_spinCount_attr(const unsignedInt& _spinCount_attr );
        const unsignedInt& spinCount_attr() const;
        bool has_saltData_attr() const;
        void set_saltData_attr(const base64Binary& _saltData_attr );
        const base64Binary& saltData_attr() const;
        bool has_hashData_attr() const;
        void set_hashData_attr(const base64Binary& _hashData_attr );
        const base64Binary& hashData_attr() const;
        bool has_cryptProvider_attr() const;
        void set_cryptProvider_attr(const string& _cryptProvider_attr );
        const string& cryptProvider_attr() const;
        bool has_algIdExt_attr() const;
        void set_algIdExt_attr(const unsignedInt& _algIdExt_attr );
        const unsignedInt& algIdExt_attr() const;
        bool has_algIdExtSource_attr() const;
        void set_algIdExtSource_attr(const string& _algIdExtSource_attr );
        const string& algIdExtSource_attr() const;
        bool has_cryptProviderTypeExt_attr() const;
        void set_cryptProviderTypeExt_attr(const unsignedInt& _cryptProviderTypeExt_attr );
        const unsignedInt& cryptProviderTypeExt_attr() const;
        bool has_cryptProviderTypeExtSource_attr() const;
        void set_cryptProviderTypeExtSource_attr(const string& _cryptProviderTypeExtSource_attr );
        const string& cryptProviderTypeExtSource_attr() const;

    private:
        static CT_ModifyVerifier* default_instance_ ;
        bool m_has_algorithmName_attr ;
        string m_algorithmName_attr ;
        bool m_has_hashValue_attr ;
        base64Binary m_hashValue_attr ;
        bool m_has_saltValue_attr ;
        base64Binary m_saltValue_attr ;
        bool m_has_spinValue_attr ;
        unsignedInt m_spinValue_attr ;
        bool m_has_cryptProviderType_attr ;
        ns_s::ST_CryptProv* m_cryptProviderType_attr ;
        bool m_has_cryptAlgorithmClass_attr ;
        ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr ;
        bool m_has_cryptAlgorithmType_attr ;
        ns_s::ST_AlgType* m_cryptAlgorithmType_attr ;
        bool m_has_cryptAlgorithmSid_attr ;
        unsignedInt m_cryptAlgorithmSid_attr ;
        bool m_has_spinCount_attr ;
        unsignedInt m_spinCount_attr ;
        bool m_has_saltData_attr ;
        base64Binary m_saltData_attr ;
        bool m_has_hashData_attr ;
        base64Binary m_hashData_attr ;
        bool m_has_cryptProvider_attr ;
        string m_cryptProvider_attr ;
        bool m_has_algIdExt_attr ;
        unsignedInt m_algIdExt_attr ;
        bool m_has_algIdExtSource_attr ;
        string m_algIdExtSource_attr ;
        bool m_has_cryptProviderTypeExt_attr ;
        unsignedInt m_cryptProviderTypeExt_attr ;
        bool m_has_cryptProviderTypeExtSource_attr ;
        string m_cryptProviderTypeExtSource_attr ;

    }

    class CT_Presentation : public XSD::ComplexType{
    public:
        bool has_sldMasterIdLst() const;
        CT_SlideMasterIdList* mutable_sldMasterIdLst();
        const CT_SlideMasterIdList& sldMasterIdLst() const;
        bool has_notesMasterIdLst() const;
        CT_NotesMasterIdList* mutable_notesMasterIdLst();
        const CT_NotesMasterIdList& notesMasterIdLst() const;
        bool has_handoutMasterIdLst() const;
        CT_HandoutMasterIdList* mutable_handoutMasterIdLst();
        const CT_HandoutMasterIdList& handoutMasterIdLst() const;
        bool has_sldIdLst() const;
        CT_SlideIdList* mutable_sldIdLst();
        const CT_SlideIdList& sldIdLst() const;
        bool has_sldSz() const;
        CT_SlideSize* mutable_sldSz();
        const CT_SlideSize& sldSz() const;
        bool has_notesSz() const;
        ns_a::CT_PositiveSize2D* mutable_notesSz();
        const ns_a::CT_PositiveSize2D& notesSz() const;
        bool has_smartTags() const;
        CT_SmartTags* mutable_smartTags();
        const CT_SmartTags& smartTags() const;
        bool has_embeddedFontLst() const;
        CT_EmbeddedFontList* mutable_embeddedFontLst();
        const CT_EmbeddedFontList& embeddedFontLst() const;
        bool has_custShowLst() const;
        CT_CustomShowList* mutable_custShowLst();
        const CT_CustomShowList& custShowLst() const;
        bool has_photoAlbum() const;
        CT_PhotoAlbum* mutable_photoAlbum();
        const CT_PhotoAlbum& photoAlbum() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& custDataLst() const;
        bool has_kinsoku() const;
        CT_Kinsoku* mutable_kinsoku();
        const CT_Kinsoku& kinsoku() const;
        bool has_defaultTextStyle() const;
        ns_a::CT_TextListStyle* mutable_defaultTextStyle();
        const ns_a::CT_TextListStyle& defaultTextStyle() const;
        bool has_modifyVerifier() const;
        CT_ModifyVerifier* mutable_modifyVerifier();
        const CT_ModifyVerifier& modifyVerifier() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Presentation& default_instance() const;
        bool has_serverZoom_attr() const;
        void set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr );
        const ns_a::ST_Percentage& serverZoom_attr() const;
        bool has_firstSlideNum_attr() const;
        void set_firstSlideNum_attr(const int& _firstSlideNum_attr );
        const int& firstSlideNum_attr() const;
        bool has_showSpecialPlsOnTitleSld_attr() const;
        void set_showSpecialPlsOnTitleSld_attr(const boolean& _showSpecialPlsOnTitleSld_attr );
        const boolean& showSpecialPlsOnTitleSld_attr() const;
        bool has_rtl_attr() const;
        void set_rtl_attr(const boolean& _rtl_attr );
        const boolean& rtl_attr() const;
        bool has_removePersonalInfoOnSave_attr() const;
        void set_removePersonalInfoOnSave_attr(const boolean& _removePersonalInfoOnSave_attr );
        const boolean& removePersonalInfoOnSave_attr() const;
        bool has_compatMode_attr() const;
        void set_compatMode_attr(const boolean& _compatMode_attr );
        const boolean& compatMode_attr() const;
        bool has_strictFirstAndLastChars_attr() const;
        void set_strictFirstAndLastChars_attr(const boolean& _strictFirstAndLastChars_attr );
        const boolean& strictFirstAndLastChars_attr() const;
        bool has_embedTrueTypeFonts_attr() const;
        void set_embedTrueTypeFonts_attr(const boolean& _embedTrueTypeFonts_attr );
        const boolean& embedTrueTypeFonts_attr() const;
        bool has_saveSubsetFonts_attr() const;
        void set_saveSubsetFonts_attr(const boolean& _saveSubsetFonts_attr );
        const boolean& saveSubsetFonts_attr() const;
        bool has_autoCompressPictures_attr() const;
        void set_autoCompressPictures_attr(const boolean& _autoCompressPictures_attr );
        const boolean& autoCompressPictures_attr() const;
        bool has_bookmarkIdSeed_attr() const;
        void set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr );
        const ST_BookmarkIdSeed& bookmarkIdSeed_attr() const;
        bool has_conformance_attr() const;
        void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr );
        const ns_s::ST_ConformanceClass& conformance_attr() const;

    private:
        bool m_has_sldMasterIdLst ;
        CT_SlideMasterIdList* m_sldMasterIdLst ;
        bool m_has_notesMasterIdLst ;
        CT_NotesMasterIdList* m_notesMasterIdLst ;
        bool m_has_handoutMasterIdLst ;
        CT_HandoutMasterIdList* m_handoutMasterIdLst ;
        bool m_has_sldIdLst ;
        CT_SlideIdList* m_sldIdLst ;
        bool m_has_sldSz ;
        CT_SlideSize* m_sldSz ;
        bool m_has_notesSz ;
        ns_a::CT_PositiveSize2D* m_notesSz ;
        bool m_has_smartTags ;
        CT_SmartTags* m_smartTags ;
        bool m_has_embeddedFontLst ;
        CT_EmbeddedFontList* m_embeddedFontLst ;
        bool m_has_custShowLst ;
        CT_CustomShowList* m_custShowLst ;
        bool m_has_photoAlbum ;
        CT_PhotoAlbum* m_photoAlbum ;
        bool m_has_custDataLst ;
        CT_CustomerDataList* m_custDataLst ;
        bool m_has_kinsoku ;
        CT_Kinsoku* m_kinsoku ;
        bool m_has_defaultTextStyle ;
        ns_a::CT_TextListStyle* m_defaultTextStyle ;
        bool m_has_modifyVerifier ;
        CT_ModifyVerifier* m_modifyVerifier ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Presentation* default_instance_ ;
        bool m_has_serverZoom_attr ;
        ns_a::ST_Percentage* m_serverZoom_attr ;
        bool m_has_firstSlideNum_attr ;
        int m_firstSlideNum_attr ;
        bool m_has_showSpecialPlsOnTitleSld_attr ;
        boolean m_showSpecialPlsOnTitleSld_attr ;
        bool m_has_rtl_attr ;
        boolean m_rtl_attr ;
        bool m_has_removePersonalInfoOnSave_attr ;
        boolean m_removePersonalInfoOnSave_attr ;
        bool m_has_compatMode_attr ;
        boolean m_compatMode_attr ;
        bool m_has_strictFirstAndLastChars_attr ;
        boolean m_strictFirstAndLastChars_attr ;
        bool m_has_embedTrueTypeFonts_attr ;
        boolean m_embedTrueTypeFonts_attr ;
        bool m_has_saveSubsetFonts_attr ;
        boolean m_saveSubsetFonts_attr ;
        bool m_has_autoCompressPictures_attr ;
        boolean m_autoCompressPictures_attr ;
        bool m_has_bookmarkIdSeed_attr ;
        ST_BookmarkIdSeed* m_bookmarkIdSeed_attr ;
        bool m_has_conformance_attr ;
        ns_s::ST_ConformanceClass* m_conformance_attr ;

    }

    class CT_HtmlPublishProperties : public XSD::ComplexType{
    public:
        bool has_sldAll() const;
        CT_Empty* mutable_sldAll();
        const CT_Empty& sldAll() const;
        bool has_sldRg() const;
        CT_IndexRange* mutable_sldRg();
        const CT_IndexRange& sldRg() const;
        bool has_custShow() const;
        CT_CustomShowId* mutable_custShow();
        const CT_CustomShowId& custShow() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HtmlPublishProperties& default_instance() const;
        bool has_showSpeakerNotes_attr() const;
        void set_showSpeakerNotes_attr(const boolean& _showSpeakerNotes_attr );
        const boolean& showSpeakerNotes_attr() const;
        bool has_target_attr() const;
        void set_target_attr(const string& _target_attr );
        const string& target_attr() const;
        bool has_title_attr() const;
        void set_title_attr(const string& _title_attr );
        const string& title_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_sldAll ;
        CT_Empty* m_sldAll ;
        bool m_has_sldRg ;
        CT_IndexRange* m_sldRg ;
        bool m_has_custShow ;
        CT_CustomShowId* m_custShow ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_HtmlPublishProperties* default_instance_ ;
        bool m_has_showSpeakerNotes_attr ;
        boolean m_showSpeakerNotes_attr ;
        bool m_has_target_attr ;
        string m_target_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_WebProperties : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_WebProperties& default_instance() const;
        bool has_showAnimation_attr() const;
        void set_showAnimation_attr(const boolean& _showAnimation_attr );
        const boolean& showAnimation_attr() const;
        bool has_resizeGraphics_attr() const;
        void set_resizeGraphics_attr(const boolean& _resizeGraphics_attr );
        const boolean& resizeGraphics_attr() const;
        bool has_allowPng_attr() const;
        void set_allowPng_attr(const boolean& _allowPng_attr );
        const boolean& allowPng_attr() const;
        bool has_relyOnVml_attr() const;
        void set_relyOnVml_attr(const boolean& _relyOnVml_attr );
        const boolean& relyOnVml_attr() const;
        bool has_organizeInFolders_attr() const;
        void set_organizeInFolders_attr(const boolean& _organizeInFolders_attr );
        const boolean& organizeInFolders_attr() const;
        bool has_useLongFilenames_attr() const;
        void set_useLongFilenames_attr(const boolean& _useLongFilenames_attr );
        const boolean& useLongFilenames_attr() const;
        bool has_imgSz_attr() const;
        void set_imgSz_attr(const ST_WebScreenSize& _imgSz_attr );
        const ST_WebScreenSize& imgSz_attr() const;
        bool has_encoding_attr() const;
        void set_encoding_attr(const ST_WebEncoding& _encoding_attr );
        const ST_WebEncoding& encoding_attr() const;
        bool has_clr_attr() const;
        void set_clr_attr(const ST_WebColorType& _clr_attr );
        const ST_WebColorType& clr_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_WebProperties* default_instance_ ;
        bool m_has_showAnimation_attr ;
        boolean m_showAnimation_attr ;
        bool m_has_resizeGraphics_attr ;
        boolean m_resizeGraphics_attr ;
        bool m_has_allowPng_attr ;
        boolean m_allowPng_attr ;
        bool m_has_relyOnVml_attr ;
        boolean m_relyOnVml_attr ;
        bool m_has_organizeInFolders_attr ;
        boolean m_organizeInFolders_attr ;
        bool m_has_useLongFilenames_attr ;
        boolean m_useLongFilenames_attr ;
        bool m_has_imgSz_attr ;
        ST_WebScreenSize* m_imgSz_attr ;
        bool m_has_encoding_attr ;
        ST_WebEncoding* m_encoding_attr ;
        bool m_has_clr_attr ;
        ST_WebColorType* m_clr_attr ;

    }

    class CT_PrintProperties : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PrintProperties& default_instance() const;
        bool has_prnWhat_attr() const;
        void set_prnWhat_attr(const ST_PrintWhat& _prnWhat_attr );
        const ST_PrintWhat& prnWhat_attr() const;
        bool has_clrMode_attr() const;
        void set_clrMode_attr(const ST_PrintColorMode& _clrMode_attr );
        const ST_PrintColorMode& clrMode_attr() const;
        bool has_hiddenSlides_attr() const;
        void set_hiddenSlides_attr(const boolean& _hiddenSlides_attr );
        const boolean& hiddenSlides_attr() const;
        bool has_scaleToFitPaper_attr() const;
        void set_scaleToFitPaper_attr(const boolean& _scaleToFitPaper_attr );
        const boolean& scaleToFitPaper_attr() const;
        bool has_frameSlides_attr() const;
        void set_frameSlides_attr(const boolean& _frameSlides_attr );
        const boolean& frameSlides_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PrintProperties* default_instance_ ;
        bool m_has_prnWhat_attr ;
        ST_PrintWhat* m_prnWhat_attr ;
        bool m_has_clrMode_attr ;
        ST_PrintColorMode* m_clrMode_attr ;
        bool m_has_hiddenSlides_attr ;
        boolean m_hiddenSlides_attr ;
        bool m_has_scaleToFitPaper_attr ;
        boolean m_scaleToFitPaper_attr ;
        bool m_has_frameSlides_attr ;
        boolean m_frameSlides_attr ;

    }

    class CT_ShowInfoBrowse : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShowInfoBrowse& default_instance() const;
        bool has_showScrollbar_attr() const;
        void set_showScrollbar_attr(const boolean& _showScrollbar_attr );
        const boolean& showScrollbar_attr() const;

    private:
        static CT_ShowInfoBrowse* default_instance_ ;
        bool m_has_showScrollbar_attr ;
        boolean m_showScrollbar_attr ;

    }

    class CT_ShowInfoKiosk : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShowInfoKiosk& default_instance() const;
        bool has_restart_attr() const;
        void set_restart_attr(const unsignedInt& _restart_attr );
        const unsignedInt& restart_attr() const;

    private:
        static CT_ShowInfoKiosk* default_instance_ ;
        bool m_has_restart_attr ;
        unsignedInt m_restart_attr ;

    }

    class CT_ShowProperties : public XSD::ComplexType{
    public:
        bool has_present() const;
        CT_Empty* mutable_present();
        const CT_Empty& present() const;
        bool has_browse() const;
        CT_ShowInfoBrowse* mutable_browse();
        const CT_ShowInfoBrowse& browse() const;
        bool has_kiosk() const;
        CT_ShowInfoKiosk* mutable_kiosk();
        const CT_ShowInfoKiosk& kiosk() const;
        bool has_sldAll() const;
        CT_Empty* mutable_sldAll();
        const CT_Empty& sldAll() const;
        bool has_sldRg() const;
        CT_IndexRange* mutable_sldRg();
        const CT_IndexRange& sldRg() const;
        bool has_custShow() const;
        CT_CustomShowId* mutable_custShow();
        const CT_CustomShowId& custShow() const;
        bool has_penClr() const;
        ns_a::CT_Color* mutable_penClr();
        const ns_a::CT_Color& penClr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShowProperties& default_instance() const;
        bool has_loop_attr() const;
        void set_loop_attr(const boolean& _loop_attr );
        const boolean& loop_attr() const;
        bool has_showNarration_attr() const;
        void set_showNarration_attr(const boolean& _showNarration_attr );
        const boolean& showNarration_attr() const;
        bool has_showAnimation_attr() const;
        void set_showAnimation_attr(const boolean& _showAnimation_attr );
        const boolean& showAnimation_attr() const;
        bool has_useTimings_attr() const;
        void set_useTimings_attr(const boolean& _useTimings_attr );
        const boolean& useTimings_attr() const;

    private:
        bool m_has_present ;
        CT_Empty* m_present ;
        bool m_has_browse ;
        CT_ShowInfoBrowse* m_browse ;
        bool m_has_kiosk ;
        CT_ShowInfoKiosk* m_kiosk ;
        bool m_has_sldAll ;
        CT_Empty* m_sldAll ;
        bool m_has_sldRg ;
        CT_IndexRange* m_sldRg ;
        bool m_has_custShow ;
        CT_CustomShowId* m_custShow ;
        bool m_has_penClr ;
        ns_a::CT_Color* m_penClr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ShowProperties* default_instance_ ;
        bool m_has_loop_attr ;
        boolean m_loop_attr ;
        bool m_has_showNarration_attr ;
        boolean m_showNarration_attr ;
        bool m_has_showAnimation_attr ;
        boolean m_showAnimation_attr ;
        bool m_has_useTimings_attr ;
        boolean m_useTimings_attr ;

    }

    class CT_PresentationProperties : public XSD::ComplexType{
    public:
        bool has_htmlPubPr() const;
        CT_HtmlPublishProperties* mutable_htmlPubPr();
        const CT_HtmlPublishProperties& htmlPubPr() const;
        bool has_webPr() const;
        CT_WebProperties* mutable_webPr();
        const CT_WebProperties& webPr() const;
        bool has_prnPr() const;
        CT_PrintProperties* mutable_prnPr();
        const CT_PrintProperties& prnPr() const;
        bool has_showPr() const;
        CT_ShowProperties* mutable_showPr();
        const CT_ShowProperties& showPr() const;
        bool has_clrMru() const;
        ns_a::CT_ColorMRU* mutable_clrMru();
        const ns_a::CT_ColorMRU& clrMru() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PresentationProperties& default_instance() const;

    private:
        bool m_has_htmlPubPr ;
        CT_HtmlPublishProperties* m_htmlPubPr ;
        bool m_has_webPr ;
        CT_WebProperties* m_webPr ;
        bool m_has_prnPr ;
        CT_PrintProperties* m_prnPr ;
        bool m_has_showPr ;
        CT_ShowProperties* m_showPr ;
        bool m_has_clrMru ;
        ns_a::CT_ColorMRU* m_clrMru ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PresentationProperties* default_instance_ ;

    }

    class CT_HeaderFooter : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HeaderFooter& default_instance() const;
        bool has_sldNum_attr() const;
        void set_sldNum_attr(const boolean& _sldNum_attr );
        const boolean& sldNum_attr() const;
        bool has_hdr_attr() const;
        void set_hdr_attr(const boolean& _hdr_attr );
        const boolean& hdr_attr() const;
        bool has_ftr_attr() const;
        void set_ftr_attr(const boolean& _ftr_attr );
        const boolean& ftr_attr() const;
        bool has_dt_attr() const;
        void set_dt_attr(const boolean& _dt_attr );
        const boolean& dt_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_HeaderFooter* default_instance_ ;
        bool m_has_sldNum_attr ;
        boolean m_sldNum_attr ;
        bool m_has_hdr_attr ;
        boolean m_hdr_attr ;
        bool m_has_ftr_attr ;
        boolean m_ftr_attr ;
        bool m_has_dt_attr ;
        boolean m_dt_attr ;

    }

    class CT_Placeholder : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Placeholder& default_instance() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_PlaceholderType& _type_attr );
        const ST_PlaceholderType& type_attr() const;
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr );
        const ST_Direction& orient_attr() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ST_PlaceholderSize& _sz_attr );
        const ST_PlaceholderSize& sz_attr() const;
        bool has_idx_attr() const;
        void set_idx_attr(const unsignedInt& _idx_attr );
        const unsignedInt& idx_attr() const;
        bool has_hasCustomPrompt_attr() const;
        void set_hasCustomPrompt_attr(const boolean& _hasCustomPrompt_attr );
        const boolean& hasCustomPrompt_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Placeholder* default_instance_ ;
        bool m_has_type_attr ;
        ST_PlaceholderType* m_type_attr ;
        bool m_has_orient_attr ;
        ST_Direction* m_orient_attr ;
        bool m_has_sz_attr ;
        ST_PlaceholderSize* m_sz_attr ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;
        bool m_has_hasCustomPrompt_attr ;
        boolean m_hasCustomPrompt_attr ;

    }

    class CT_ApplicationNonVisualDrawingProps : public XSD::ComplexType{
    public:
        bool has_ph() const;
        CT_Placeholder* mutable_ph();
        const CT_Placeholder& ph() const;
        bool has_audioCd() const;
        CT_AudioCD* mutable_audioCd();
        const CT_AudioCD& audioCd() const;
        bool has_wavAudioFile() const;
        CT_EmbeddedWAVAudioFile* mutable_wavAudioFile();
        const CT_EmbeddedWAVAudioFile& wavAudioFile() const;
        bool has_audioFile() const;
        CT_AudioFile* mutable_audioFile();
        const CT_AudioFile& audioFile() const;
        bool has_videoFile() const;
        CT_VideoFile* mutable_videoFile();
        const CT_VideoFile& videoFile() const;
        bool has_quickTimeFile() const;
        CT_QuickTimeFile* mutable_quickTimeFile();
        const CT_QuickTimeFile& quickTimeFile() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& custDataLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ApplicationNonVisualDrawingProps& default_instance() const;
        bool has_isPhoto_attr() const;
        void set_isPhoto_attr(const boolean& _isPhoto_attr );
        const boolean& isPhoto_attr() const;
        bool has_userDrawn_attr() const;
        void set_userDrawn_attr(const boolean& _userDrawn_attr );
        const boolean& userDrawn_attr() const;

    private:
        bool m_has_ph ;
        CT_Placeholder* m_ph ;
        bool m_has_audioCd ;
        CT_AudioCD* m_audioCd ;
        bool m_has_wavAudioFile ;
        CT_EmbeddedWAVAudioFile* m_wavAudioFile ;
        bool m_has_audioFile ;
        CT_AudioFile* m_audioFile ;
        bool m_has_videoFile ;
        CT_VideoFile* m_videoFile ;
        bool m_has_quickTimeFile ;
        CT_QuickTimeFile* m_quickTimeFile ;
        bool m_has_custDataLst ;
        CT_CustomerDataList* m_custDataLst ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ApplicationNonVisualDrawingProps* default_instance_ ;
        bool m_has_isPhoto_attr ;
        boolean m_isPhoto_attr ;
        bool m_has_userDrawn_attr ;
        boolean m_userDrawn_attr ;

    }

    class CT_ShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvSpPr() const;
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr();
        const ns_a::CT_NonVisualDrawingShapeProps& cNvSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& nvPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        bool m_has_nvPr ;
        CT_ApplicationNonVisualDrawingProps* m_nvPr ;
        static CT_ShapeNonVisual* default_instance_ ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        bool has_nvSpPr() const;
        CT_ShapeNonVisual* mutable_nvSpPr();
        const CT_ShapeNonVisual& nvSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_txBody() const;
        ns_a::CT_TextBody* mutable_txBody();
        const ns_a::CT_TextBody& txBody() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shape& default_instance() const;
        bool has_useBgFill_attr() const;
        void set_useBgFill_attr(const boolean& _useBgFill_attr );
        const boolean& useBgFill_attr() const;

    private:
        bool m_has_nvSpPr ;
        CT_ShapeNonVisual* m_nvSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_txBody ;
        ns_a::CT_TextBody* m_txBody ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Shape* default_instance_ ;
        bool m_has_useBgFill_attr ;
        boolean m_useBgFill_attr ;

    }

    class CT_ConnectorNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvCxnSpPr() const;
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr();
        const ns_a::CT_NonVisualConnectorProperties& cNvCxnSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& nvPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ConnectorNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvCxnSpPr ;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCxnSpPr ;
        bool m_has_nvPr ;
        CT_ApplicationNonVisualDrawingProps* m_nvPr ;
        static CT_ConnectorNonVisual* default_instance_ ;

    }

    class CT_Connector : public XSD::ComplexType{
    public:
        bool has_nvCxnSpPr() const;
        CT_ConnectorNonVisual* mutable_nvCxnSpPr();
        const CT_ConnectorNonVisual& nvCxnSpPr() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Connector& default_instance() const;

    private:
        bool m_has_nvCxnSpPr ;
        CT_ConnectorNonVisual* m_nvCxnSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Connector* default_instance_ ;

    }

    class CT_PictureNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvPicPr() const;
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr();
        const ns_a::CT_NonVisualPictureProperties& cNvPicPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& nvPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PictureNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvPicPr ;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr ;
        bool m_has_nvPr ;
        CT_ApplicationNonVisualDrawingProps* m_nvPr ;
        static CT_PictureNonVisual* default_instance_ ;

    }

    class CT_Picture : public XSD::ComplexType{
    public:
        bool has_nvPicPr() const;
        CT_PictureNonVisual* mutable_nvPicPr();
        const CT_PictureNonVisual& nvPicPr() const;
        bool has_blipFill() const;
        ns_a::CT_BlipFillProperties* mutable_blipFill();
        const ns_a::CT_BlipFillProperties& blipFill() const;
        bool has_spPr() const;
        ns_a::CT_ShapeProperties* mutable_spPr();
        const ns_a::CT_ShapeProperties& spPr() const;
        bool has_style() const;
        ns_a::CT_ShapeStyle* mutable_style();
        const ns_a::CT_ShapeStyle& style() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Picture& default_instance() const;

    private:
        bool m_has_nvPicPr ;
        CT_PictureNonVisual* m_nvPicPr ;
        bool m_has_blipFill ;
        ns_a::CT_BlipFillProperties* m_blipFill ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Picture* default_instance_ ;

    }

    class CT_GraphicalObjectFrameNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGraphicFramePr() const;
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr();
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& nvPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectFrameNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        bool m_has_nvPr ;
        CT_ApplicationNonVisualDrawingProps* m_nvPr ;
        static CT_GraphicalObjectFrameNonVisual* default_instance_ ;

    }

    class CT_GraphicalObjectFrame : public XSD::ComplexType{
    public:
        bool has_nvGraphicFramePr() const;
        CT_GraphicalObjectFrameNonVisual* mutable_nvGraphicFramePr();
        const CT_GraphicalObjectFrameNonVisual& nvGraphicFramePr() const;
        bool has_xfrm() const;
        ns_a::CT_Transform2D* mutable_xfrm();
        const ns_a::CT_Transform2D& xfrm() const;
        bool has_graphic() const;
        CT_GraphicalObject* mutable_graphic();
        const CT_GraphicalObject& graphic() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GraphicalObjectFrame& default_instance() const;
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr );
        const ns_a::ST_BlackWhiteMode& bwMode_attr() const;

    private:
        bool m_has_nvGraphicFramePr ;
        CT_GraphicalObjectFrameNonVisual* m_nvGraphicFramePr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_GraphicalObjectFrame* default_instance_ ;
        bool m_has_bwMode_attr ;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr ;

    }

    class CT_GroupShapeNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr() const;
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
        const ns_a::CT_NonVisualDrawingProps& cNvPr() const;
        bool has_cNvGrpSpPr() const;
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr();
        const ns_a::CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr() const;
        bool has_nvPr() const;
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
        const CT_ApplicationNonVisualDrawingProps& nvPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupShapeNonVisual& default_instance() const;

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        bool m_has_nvPr ;
        CT_ApplicationNonVisualDrawingProps* m_nvPr ;
        static CT_GroupShapeNonVisual* default_instance_ ;

    }

    class CT_GroupShape : public XSD::ComplexType{
    public:
        bool has_nvGrpSpPr() const;
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr();
        const CT_GroupShapeNonVisual& nvGrpSpPr() const;
        bool has_grpSpPr() const;
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr();
        const ns_a::CT_GroupShapeProperties& grpSpPr() const;
        CT_Shape* add_sp();
        CT_GroupShape* add_grpSp();
        CT_GraphicalObjectFrame* add_graphicFrame();
        CT_Connector* add_cxnSp();
        CT_Picture* add_pic();
        CT_Rel* add_contentPart();
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupShape& default_instance() const;

    private:
        bool m_has_nvGrpSpPr ;
        CT_GroupShapeNonVisual* m_nvGrpSpPr ;
        bool m_has_grpSpPr ;
        ns_a::CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_GroupShape* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_sp() const;
            CT_Shape* mutable_sp();
            const CT_Shape& sp() const;
            bool has_grpSp() const;
            CT_GroupShape* mutable_grpSp();
            const CT_GroupShape& grpSp() const;
            bool has_graphicFrame() const;
            CT_GraphicalObjectFrame* mutable_graphicFrame();
            const CT_GraphicalObjectFrame& graphicFrame() const;
            bool has_cxnSp() const;
            CT_Connector* mutable_cxnSp();
            const CT_Connector& cxnSp() const;
            bool has_pic() const;
            CT_Picture* mutable_pic();
            const CT_Picture& pic() const;
            bool has_contentPart() const;
            CT_Rel* mutable_contentPart();
            const CT_Rel& contentPart() const;

        private:
            bool m_has_sp ;
            CT_Shape* m_sp ;
            bool m_has_grpSp ;
            CT_GroupShape* m_grpSp ;
            bool m_has_graphicFrame ;
            CT_GraphicalObjectFrame* m_graphicFrame ;
            bool m_has_cxnSp ;
            CT_Connector* m_cxnSp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;
            bool m_has_contentPart ;
            CT_Rel* m_contentPart ;

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

    class CT_BackgroundProperties : public XSD::ComplexType{
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
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BackgroundProperties& default_instance() const;
        bool has_shadeToTitle_attr() const;
        void set_shadeToTitle_attr(const boolean& _shadeToTitle_attr );
        const boolean& shadeToTitle_attr() const;

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
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BackgroundProperties* default_instance_ ;
        bool m_has_shadeToTitle_attr ;
        boolean m_shadeToTitle_attr ;

    }

    class CT_Background : public XSD::ComplexType{
    public:
        bool has_bgPr() const;
        CT_BackgroundProperties* mutable_bgPr();
        const CT_BackgroundProperties& bgPr() const;
        bool has_bgRef() const;
        ns_a::CT_StyleMatrixReference* mutable_bgRef();
        const ns_a::CT_StyleMatrixReference& bgRef() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Background& default_instance() const;
        bool has_bwMode_attr() const;
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr );
        const ns_a::ST_BlackWhiteMode& bwMode_attr() const;

    private:
        bool m_has_bgPr ;
        CT_BackgroundProperties* m_bgPr ;
        bool m_has_bgRef ;
        ns_a::CT_StyleMatrixReference* m_bgRef ;
        static CT_Background* default_instance_ ;
        bool m_has_bwMode_attr ;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr ;

    }

    class CT_CommonSlideData : public XSD::ComplexType{
    public:
        bool has_bg() const;
        CT_Background* mutable_bg();
        const CT_Background& bg() const;
        bool has_spTree() const;
        CT_GroupShape* mutable_spTree();
        const CT_GroupShape& spTree() const;
        bool has_custDataLst() const;
        CT_CustomerDataList* mutable_custDataLst();
        const CT_CustomerDataList& custDataLst() const;
        bool has_controls() const;
        CT_ControlList* mutable_controls();
        const CT_ControlList& controls() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommonSlideData& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;

    private:
        bool m_has_bg ;
        CT_Background* m_bg ;
        bool m_has_spTree ;
        CT_GroupShape* m_spTree ;
        bool m_has_custDataLst ;
        CT_CustomerDataList* m_custDataLst ;
        bool m_has_controls ;
        CT_ControlList* m_controls ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_CommonSlideData* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;

    }

    class CT_Slide : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& timing() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Slide& default_instance() const;
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr );
        const boolean& showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr );
        const boolean& showMasterPhAnim_attr() const;
        bool has_show_attr() const;
        void set_show_attr(const boolean& _show_attr );
        const boolean& show_attr() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMapOvr ;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr ;
        bool m_has_transition ;
        CT_SlideTransition* m_transition ;
        bool m_has_timing ;
        CT_SlideTiming* m_timing ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_Slide* default_instance_ ;
        bool m_has_showMasterSp_attr ;
        boolean m_showMasterSp_attr ;
        bool m_has_showMasterPhAnim_attr ;
        boolean m_showMasterPhAnim_attr ;
        bool m_has_show_attr ;
        boolean m_show_attr ;

    }

    class CT_SlideLayout : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& clrMapOvr() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideLayout& default_instance() const;
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr );
        const boolean& showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr );
        const boolean& showMasterPhAnim_attr() const;
        bool has_matchingName_attr() const;
        void set_matchingName_attr(const string& _matchingName_attr );
        const string& matchingName_attr() const;
        bool has_type_attr() const;
        void set_type_attr(const ST_SlideLayoutType& _type_attr );
        const ST_SlideLayoutType& type_attr() const;
        bool has_preserve_attr() const;
        void set_preserve_attr(const boolean& _preserve_attr );
        const boolean& preserve_attr() const;
        bool has_userDrawn_attr() const;
        void set_userDrawn_attr(const boolean& _userDrawn_attr );
        const boolean& userDrawn_attr() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMapOvr ;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr ;
        bool m_has_transition ;
        CT_SlideTransition* m_transition ;
        bool m_has_timing ;
        CT_SlideTiming* m_timing ;
        bool m_has_hf ;
        CT_HeaderFooter* m_hf ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_SlideLayout* default_instance_ ;
        bool m_has_showMasterSp_attr ;
        boolean m_showMasterSp_attr ;
        bool m_has_showMasterPhAnim_attr ;
        boolean m_showMasterPhAnim_attr ;
        bool m_has_matchingName_attr ;
        string m_matchingName_attr ;
        bool m_has_type_attr ;
        ST_SlideLayoutType* m_type_attr ;
        bool m_has_preserve_attr ;
        boolean m_preserve_attr ;
        bool m_has_userDrawn_attr ;
        boolean m_userDrawn_attr ;

    }

    class CT_SlideMasterTextStyles : public XSD::ComplexType{
    public:
        bool has_titleStyle() const;
        ns_a::CT_TextListStyle* mutable_titleStyle();
        const ns_a::CT_TextListStyle& titleStyle() const;
        bool has_bodyStyle() const;
        ns_a::CT_TextListStyle* mutable_bodyStyle();
        const ns_a::CT_TextListStyle& bodyStyle() const;
        bool has_otherStyle() const;
        ns_a::CT_TextListStyle* mutable_otherStyle();
        const ns_a::CT_TextListStyle& otherStyle() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideMasterTextStyles& default_instance() const;

    private:
        bool m_has_titleStyle ;
        ns_a::CT_TextListStyle* m_titleStyle ;
        bool m_has_bodyStyle ;
        ns_a::CT_TextListStyle* m_bodyStyle ;
        bool m_has_otherStyle ;
        ns_a::CT_TextListStyle* m_otherStyle ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideMasterTextStyles* default_instance_ ;

    }

    class CT_SlideLayoutIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideLayoutIdListEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_SlideLayoutId& _id_attr );
        const ST_SlideLayoutId& id_attr() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideLayoutIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_SlideLayoutId* m_id_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_SlideLayoutIdList : public XSD::ComplexType{
    public:
        bool has_sldLayoutId() const;
        CT_SlideLayoutIdListEntry* mutable_sldLayoutId();
        const CT_SlideLayoutIdListEntry& sldLayoutId() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideLayoutIdList& default_instance() const;

    private:
        bool m_has_sldLayoutId ;
        CT_SlideLayoutIdListEntry* m_sldLayoutId ;
        static CT_SlideLayoutIdList* default_instance_ ;

    }

    class CT_SlideMaster : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& clrMap() const;
        bool has_sldLayoutIdLst() const;
        CT_SlideLayoutIdList* mutable_sldLayoutIdLst();
        const CT_SlideLayoutIdList& sldLayoutIdLst() const;
        bool has_transition() const;
        CT_SlideTransition* mutable_transition();
        const CT_SlideTransition& transition() const;
        bool has_timing() const;
        CT_SlideTiming* mutable_timing();
        const CT_SlideTiming& timing() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& hf() const;
        bool has_txStyles() const;
        CT_SlideMasterTextStyles* mutable_txStyles();
        const CT_SlideMasterTextStyles& txStyles() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideMaster& default_instance() const;
        bool has_preserve_attr() const;
        void set_preserve_attr(const boolean& _preserve_attr );
        const boolean& preserve_attr() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMap ;
        ns_a::CT_ColorMapping* m_clrMap ;
        bool m_has_sldLayoutIdLst ;
        CT_SlideLayoutIdList* m_sldLayoutIdLst ;
        bool m_has_transition ;
        CT_SlideTransition* m_transition ;
        bool m_has_timing ;
        CT_SlideTiming* m_timing ;
        bool m_has_hf ;
        CT_HeaderFooter* m_hf ;
        bool m_has_txStyles ;
        CT_SlideMasterTextStyles* m_txStyles ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_SlideMaster* default_instance_ ;
        bool m_has_preserve_attr ;
        boolean m_preserve_attr ;

    }

    class CT_HandoutMaster : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& hf() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_HandoutMaster& default_instance() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMap ;
        ns_a::CT_ColorMapping* m_clrMap ;
        bool m_has_hf ;
        CT_HeaderFooter* m_hf ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_HandoutMaster* default_instance_ ;

    }

    class CT_NotesMaster : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMap() const;
        ns_a::CT_ColorMapping* mutable_clrMap();
        const ns_a::CT_ColorMapping& clrMap() const;
        bool has_hf() const;
        CT_HeaderFooter* mutable_hf();
        const CT_HeaderFooter& hf() const;
        bool has_notesStyle() const;
        ns_a::CT_TextListStyle* mutable_notesStyle();
        const ns_a::CT_TextListStyle& notesStyle() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesMaster& default_instance() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMap ;
        ns_a::CT_ColorMapping* m_clrMap ;
        bool m_has_hf ;
        CT_HeaderFooter* m_hf ;
        bool m_has_notesStyle ;
        ns_a::CT_TextListStyle* m_notesStyle ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_NotesMaster* default_instance_ ;

    }

    class CT_NotesSlide : public XSD::ComplexType{
    public:
        bool has_cSld() const;
        CT_CommonSlideData* mutable_cSld();
        const CT_CommonSlideData& cSld() const;
        bool has_clrMapOvr() const;
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr();
        const ns_a::CT_ColorMappingOverride& clrMapOvr() const;
        bool has_extLst() const;
        CT_ExtensionListModify* mutable_extLst();
        const CT_ExtensionListModify& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesSlide& default_instance() const;
        bool has_showMasterSp_attr() const;
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr );
        const boolean& showMasterSp_attr() const;
        bool has_showMasterPhAnim_attr() const;
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr );
        const boolean& showMasterPhAnim_attr() const;

    private:
        bool m_has_cSld ;
        CT_CommonSlideData* m_cSld ;
        bool m_has_clrMapOvr ;
        ns_a::CT_ColorMappingOverride* m_clrMapOvr ;
        bool m_has_extLst ;
        CT_ExtensionListModify* m_extLst ;
        static CT_NotesSlide* default_instance_ ;
        bool m_has_showMasterSp_attr ;
        boolean m_showMasterSp_attr ;
        bool m_has_showMasterPhAnim_attr ;
        boolean m_showMasterPhAnim_attr ;

    }

    class CT_SlideSyncProperties : public XSD::ComplexType{
    public:
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideSyncProperties& default_instance() const;
        bool has_serverSldId_attr() const;
        void set_serverSldId_attr(const string& _serverSldId_attr );
        const string& serverSldId_attr() const;
        bool has_serverSldModifiedTime_attr() const;
        void set_serverSldModifiedTime_attr(const dateTime& _serverSldModifiedTime_attr );
        const dateTime& serverSldModifiedTime_attr() const;
        bool has_clientInsertedTime_attr() const;
        void set_clientInsertedTime_attr(const dateTime& _clientInsertedTime_attr );
        const dateTime& clientInsertedTime_attr() const;

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideSyncProperties* default_instance_ ;
        bool m_has_serverSldId_attr ;
        string m_serverSldId_attr ;
        bool m_has_serverSldModifiedTime_attr ;
        dateTime m_serverSldModifiedTime_attr ;
        bool m_has_clientInsertedTime_attr ;
        dateTime m_clientInsertedTime_attr ;

    }

    class CT_StringTag : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_StringTag& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;

    private:
        static CT_StringTag* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_TagList : public XSD::ComplexType{
    public:
        bool has_tag() const;
        CT_StringTag* mutable_tag();
        const CT_StringTag& tag() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TagList& default_instance() const;

    private:
        bool m_has_tag ;
        CT_StringTag* m_tag ;
        static CT_TagList* default_instance_ ;

    }

    class CT_NormalViewPortion : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NormalViewPortion& default_instance() const;
        bool has_sz_attr() const;
        void set_sz_attr(const ns_a::ST_PositiveFixedPercentage& _sz_attr );
        const ns_a::ST_PositiveFixedPercentage& sz_attr() const;
        bool has_autoAdjust_attr() const;
        void set_autoAdjust_attr(const boolean& _autoAdjust_attr );
        const boolean& autoAdjust_attr() const;

    private:
        static CT_NormalViewPortion* default_instance_ ;
        bool m_has_sz_attr ;
        ns_a::ST_PositiveFixedPercentage* m_sz_attr ;
        bool m_has_autoAdjust_attr ;
        boolean m_autoAdjust_attr ;

    }

    class CT_NormalViewProperties : public XSD::ComplexType{
    public:
        bool has_restoredLeft() const;
        CT_NormalViewPortion* mutable_restoredLeft();
        const CT_NormalViewPortion& restoredLeft() const;
        bool has_restoredTop() const;
        CT_NormalViewPortion* mutable_restoredTop();
        const CT_NormalViewPortion& restoredTop() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NormalViewProperties& default_instance() const;
        bool has_showOutlineIcons_attr() const;
        void set_showOutlineIcons_attr(const boolean& _showOutlineIcons_attr );
        const boolean& showOutlineIcons_attr() const;
        bool has_snapVertSplitter_attr() const;
        void set_snapVertSplitter_attr(const boolean& _snapVertSplitter_attr );
        const boolean& snapVertSplitter_attr() const;
        bool has_vertBarState_attr() const;
        void set_vertBarState_attr(const ST_SplitterBarState& _vertBarState_attr );
        const ST_SplitterBarState& vertBarState_attr() const;
        bool has_horzBarState_attr() const;
        void set_horzBarState_attr(const ST_SplitterBarState& _horzBarState_attr );
        const ST_SplitterBarState& horzBarState_attr() const;
        bool has_preferSingleView_attr() const;
        void set_preferSingleView_attr(const boolean& _preferSingleView_attr );
        const boolean& preferSingleView_attr() const;

    private:
        bool m_has_restoredLeft ;
        CT_NormalViewPortion* m_restoredLeft ;
        bool m_has_restoredTop ;
        CT_NormalViewPortion* m_restoredTop ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NormalViewProperties* default_instance_ ;
        bool m_has_showOutlineIcons_attr ;
        boolean m_showOutlineIcons_attr ;
        bool m_has_snapVertSplitter_attr ;
        boolean m_snapVertSplitter_attr ;
        bool m_has_vertBarState_attr ;
        ST_SplitterBarState* m_vertBarState_attr ;
        bool m_has_horzBarState_attr ;
        ST_SplitterBarState* m_horzBarState_attr ;
        bool m_has_preferSingleView_attr ;
        boolean m_preferSingleView_attr ;

    }

    class CT_CommonViewProperties : public XSD::ComplexType{
    public:
        bool has_scale() const;
        ns_a::CT_Scale2D* mutable_scale();
        const ns_a::CT_Scale2D& scale() const;
        bool has_origin() const;
        ns_a::CT_Point2D* mutable_origin();
        const ns_a::CT_Point2D& origin() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommonViewProperties& default_instance() const;
        bool has_varScale_attr() const;
        void set_varScale_attr(const boolean& _varScale_attr );
        const boolean& varScale_attr() const;

    private:
        bool m_has_scale ;
        ns_a::CT_Scale2D* m_scale ;
        bool m_has_origin ;
        ns_a::CT_Point2D* m_origin ;
        static CT_CommonViewProperties* default_instance_ ;
        bool m_has_varScale_attr ;
        boolean m_varScale_attr ;

    }

    class CT_NotesTextViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& cViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesTextViewProperties& default_instance() const;

    private:
        bool m_has_cViewPr ;
        CT_CommonViewProperties* m_cViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesTextViewProperties* default_instance_ ;

    }

    class CT_OutlineViewSlideEntry : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OutlineViewSlideEntry& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const ST_RelationshipId& _id_attr );
        const ST_RelationshipId& id_attr() const;
        bool has_collapse_attr() const;
        void set_collapse_attr(const boolean& _collapse_attr );
        const boolean& collapse_attr() const;

    private:
        static CT_OutlineViewSlideEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_collapse_attr ;
        boolean m_collapse_attr ;

    }

    class CT_OutlineViewSlideList : public XSD::ComplexType{
    public:
        bool has_sld() const;
        CT_OutlineViewSlideEntry* mutable_sld();
        const CT_OutlineViewSlideEntry& sld() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OutlineViewSlideList& default_instance() const;

    private:
        bool m_has_sld ;
        CT_OutlineViewSlideEntry* m_sld ;
        static CT_OutlineViewSlideList* default_instance_ ;

    }

    class CT_OutlineViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& cViewPr() const;
        bool has_sldLst() const;
        CT_OutlineViewSlideList* mutable_sldLst();
        const CT_OutlineViewSlideList& sldLst() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OutlineViewProperties& default_instance() const;

    private:
        bool m_has_cViewPr ;
        CT_CommonViewProperties* m_cViewPr ;
        bool m_has_sldLst ;
        CT_OutlineViewSlideList* m_sldLst ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OutlineViewProperties* default_instance_ ;

    }

    class CT_SlideSorterViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& cViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideSorterViewProperties& default_instance() const;
        bool has_showFormatting_attr() const;
        void set_showFormatting_attr(const boolean& _showFormatting_attr );
        const boolean& showFormatting_attr() const;

    private:
        bool m_has_cViewPr ;
        CT_CommonViewProperties* m_cViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideSorterViewProperties* default_instance_ ;
        bool m_has_showFormatting_attr ;
        boolean m_showFormatting_attr ;

    }

    class CT_Guide : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Guide& default_instance() const;
        bool has_orient_attr() const;
        void set_orient_attr(const ST_Direction& _orient_attr );
        const ST_Direction& orient_attr() const;
        bool has_pos_attr() const;
        void set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr );
        const ns_a::ST_Coordinate32& pos_attr() const;

    private:
        static CT_Guide* default_instance_ ;
        bool m_has_orient_attr ;
        ST_Direction* m_orient_attr ;
        bool m_has_pos_attr ;
        ns_a::ST_Coordinate32* m_pos_attr ;

    }

    class CT_GuideList : public XSD::ComplexType{
    public:
        bool has_guide() const;
        CT_Guide* mutable_guide();
        const CT_Guide& guide() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GuideList& default_instance() const;

    private:
        bool m_has_guide ;
        CT_Guide* m_guide ;
        static CT_GuideList* default_instance_ ;

    }

    class CT_CommonSlideViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr() const;
        CT_CommonViewProperties* mutable_cViewPr();
        const CT_CommonViewProperties& cViewPr() const;
        bool has_guideLst() const;
        CT_GuideList* mutable_guideLst();
        const CT_GuideList& guideLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CommonSlideViewProperties& default_instance() const;
        bool has_snapToGrid_attr() const;
        void set_snapToGrid_attr(const boolean& _snapToGrid_attr );
        const boolean& snapToGrid_attr() const;
        bool has_snapToObjects_attr() const;
        void set_snapToObjects_attr(const boolean& _snapToObjects_attr );
        const boolean& snapToObjects_attr() const;
        bool has_showGuides_attr() const;
        void set_showGuides_attr(const boolean& _showGuides_attr );
        const boolean& showGuides_attr() const;

    private:
        bool m_has_cViewPr ;
        CT_CommonViewProperties* m_cViewPr ;
        bool m_has_guideLst ;
        CT_GuideList* m_guideLst ;
        static CT_CommonSlideViewProperties* default_instance_ ;
        bool m_has_snapToGrid_attr ;
        boolean m_snapToGrid_attr ;
        bool m_has_snapToObjects_attr ;
        boolean m_snapToObjects_attr ;
        bool m_has_showGuides_attr ;
        boolean m_showGuides_attr ;

    }

    class CT_SlideViewProperties : public XSD::ComplexType{
    public:
        bool has_cSldViewPr() const;
        CT_CommonSlideViewProperties* mutable_cSldViewPr();
        const CT_CommonSlideViewProperties& cSldViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SlideViewProperties& default_instance() const;

    private:
        bool m_has_cSldViewPr ;
        CT_CommonSlideViewProperties* m_cSldViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideViewProperties* default_instance_ ;

    }

    class CT_NotesViewProperties : public XSD::ComplexType{
    public:
        bool has_cSldViewPr() const;
        CT_CommonSlideViewProperties* mutable_cSldViewPr();
        const CT_CommonSlideViewProperties& cSldViewPr() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NotesViewProperties& default_instance() const;

    private:
        bool m_has_cSldViewPr ;
        CT_CommonSlideViewProperties* m_cSldViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesViewProperties* default_instance_ ;

    }

    class CT_ViewProperties : public XSD::ComplexType{
    public:
        bool has_normalViewPr() const;
        CT_NormalViewProperties* mutable_normalViewPr();
        const CT_NormalViewProperties& normalViewPr() const;
        bool has_slideViewPr() const;
        CT_SlideViewProperties* mutable_slideViewPr();
        const CT_SlideViewProperties& slideViewPr() const;
        bool has_outlineViewPr() const;
        CT_OutlineViewProperties* mutable_outlineViewPr();
        const CT_OutlineViewProperties& outlineViewPr() const;
        bool has_notesTextViewPr() const;
        CT_NotesTextViewProperties* mutable_notesTextViewPr();
        const CT_NotesTextViewProperties& notesTextViewPr() const;
        bool has_sorterViewPr() const;
        CT_SlideSorterViewProperties* mutable_sorterViewPr();
        const CT_SlideSorterViewProperties& sorterViewPr() const;
        bool has_notesViewPr() const;
        CT_NotesViewProperties* mutable_notesViewPr();
        const CT_NotesViewProperties& notesViewPr() const;
        bool has_gridSpacing() const;
        ns_a::CT_PositiveSize2D* mutable_gridSpacing();
        const ns_a::CT_PositiveSize2D& gridSpacing() const;
        bool has_extLst() const;
        CT_ExtensionList* mutable_extLst();
        const CT_ExtensionList& extLst() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ViewProperties& default_instance() const;
        bool has_lastView_attr() const;
        void set_lastView_attr(const ST_ViewType& _lastView_attr );
        const ST_ViewType& lastView_attr() const;
        bool has_showComments_attr() const;
        void set_showComments_attr(const boolean& _showComments_attr );
        const boolean& showComments_attr() const;

    private:
        bool m_has_normalViewPr ;
        CT_NormalViewProperties* m_normalViewPr ;
        bool m_has_slideViewPr ;
        CT_SlideViewProperties* m_slideViewPr ;
        bool m_has_outlineViewPr ;
        CT_OutlineViewProperties* m_outlineViewPr ;
        bool m_has_notesTextViewPr ;
        CT_NotesTextViewProperties* m_notesTextViewPr ;
        bool m_has_sorterViewPr ;
        CT_SlideSorterViewProperties* m_sorterViewPr ;
        bool m_has_notesViewPr ;
        CT_NotesViewProperties* m_notesViewPr ;
        bool m_has_gridSpacing ;
        ns_a::CT_PositiveSize2D* m_gridSpacing ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ViewProperties* default_instance_ ;
        bool m_has_lastView_attr ;
        ST_ViewType* m_lastView_attr ;
        bool m_has_showComments_attr ;
        boolean m_showComments_attr ;

    }

    class cmAuthorLst : public CT_CommentAuthorList : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class cmLst : public CT_CommentList : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oleObj : public CT_OleObject : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class presentation : public CT_Presentation : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class presentationPr : public CT_PresentationProperties : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class sld : public CT_Slide : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class sldLayout : public CT_SlideLayout : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class sldMaster : public CT_SlideMaster : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class handoutMaster : public CT_HandoutMaster : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class notesMaster : public CT_NotesMaster : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class notes : public CT_NotesSlide : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class sldSyncPr : public CT_SlideSyncProperties : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class tagLst : public CT_TagList : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class viewPr : public CT_ViewProperties : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}