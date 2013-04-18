#include "pml_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        ST_TransitionSideDirectionType(){
            m_has_type = false

        }
        ST_TransitionSideDirectionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TransitionSideDirectionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TransitionSideDirectionType& default_instance(){

    if (!ST_TransitionSideDirectionType::default_instance_)
    {
        ST_TransitionSideDirectionType::default_instance_ = new ST_TransitionSideDirectionType();
    }
    return *ST_TransitionSideDirectionType::default_instance_;

        }
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
        ST_TransitionCornerDirectionType(){
            m_has_type = false

        }
        ST_TransitionCornerDirectionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TransitionCornerDirectionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TransitionCornerDirectionType& default_instance(){

    if (!ST_TransitionCornerDirectionType::default_instance_)
    {
        ST_TransitionCornerDirectionType::default_instance_ = new ST_TransitionCornerDirectionType();
    }
    return *ST_TransitionCornerDirectionType::default_instance_;

        }
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
        ST_TransitionInOutDirectionType(){
            m_has_type = false

        }
        ST_TransitionInOutDirectionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TransitionInOutDirectionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TransitionInOutDirectionType& default_instance(){

    if (!ST_TransitionInOutDirectionType::default_instance_)
    {
        ST_TransitionInOutDirectionType::default_instance_ = new ST_TransitionInOutDirectionType();
    }
    return *ST_TransitionInOutDirectionType::default_instance_;

        }
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
        bool has_ST_TransitionSideDirectionType(){

            return m_has_ST_TransitionSideDirectionType;
        
        }
        ST_TransitionSideDirectionType* mutable_ST_TransitionSideDirectionType(){

            clear_ST_TransitionCornerDirectionType();
            m_has_ST_TransitionSideDirectionType = true;
            if (!m_ST_TransitionSideDirectionType)
            {
                m_ST_TransitionSideDirectionType = new ST_TransitionSideDirectionType();
            }
            return m_ST_TransitionSideDirectionType;
        
        }
        const ST_TransitionSideDirectionType& ST_TransitionSideDirectionType(){

            if (m_ST_TransitionSideDirectionType)
            {
                return *m_ST_TransitionSideDirectionType;
            }

            return ST_TransitionSideDirectionType::default_instance();
        
        }
        bool has_ST_TransitionCornerDirectionType(){

            return m_has_ST_TransitionCornerDirectionType;
        
        }
        ST_TransitionCornerDirectionType* mutable_ST_TransitionCornerDirectionType(){

            clear_ST_TransitionSideDirectionType();
            m_has_ST_TransitionCornerDirectionType = true;
            if (!m_ST_TransitionCornerDirectionType)
            {
                m_ST_TransitionCornerDirectionType = new ST_TransitionCornerDirectionType();
            }
            return m_ST_TransitionCornerDirectionType;
        
        }
        const ST_TransitionCornerDirectionType& ST_TransitionCornerDirectionType(){

            if (m_ST_TransitionCornerDirectionType)
            {
                return *m_ST_TransitionCornerDirectionType;
            }

            return ST_TransitionCornerDirectionType::default_instance();
        
        }
        void clear(){
clear_ST_TransitionSideDirectionType();
clear_ST_TransitionCornerDirectionType();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_TransitionSideDirectionType)
        {
            m_ST_TransitionSideDirectionType->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TransitionCornerDirectionType)
        {
            m_ST_TransitionCornerDirectionType->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_TransitionEightDirectionType& default_instance(){

    if (!ST_TransitionEightDirectionType::default_instance_)
    {
        ST_TransitionEightDirectionType::default_instance_ = new ST_TransitionEightDirectionType();
    }
    return *ST_TransitionEightDirectionType::default_instance_;

        }

    private:
        void clear_ST_TransitionSideDirectionType(){

            m_has_ST_TransitionSideDirectionType = false;
            if (m_ST_TransitionSideDirectionType)
            {
                delete m_ST_TransitionSideDirectionType;
                m_ST_TransitionSideDirectionType = NULL;
            }
        
        }
        void clear_ST_TransitionCornerDirectionType(){

            m_has_ST_TransitionCornerDirectionType = false;
            if (m_ST_TransitionCornerDirectionType)
            {
                delete m_ST_TransitionCornerDirectionType;
                m_ST_TransitionCornerDirectionType = NULL;
            }
        
        }
        bool m_has_ST_TransitionSideDirectionType ;
        ST_TransitionSideDirectionType* m_ST_TransitionSideDirectionType ;
        bool m_has_ST_TransitionCornerDirectionType ;
        ST_TransitionCornerDirectionType* m_ST_TransitionCornerDirectionType ;
        static ST_TransitionEightDirectionType* default_instance_ ;

    }

    class ST_TransitionSpeed : public XSD::SimpleType{
    public:
        ST_TransitionSpeed(){
            m_has_type = false

        }
        ST_TransitionSpeed(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TransitionSpeed::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TransitionSpeed& default_instance(){

    if (!ST_TransitionSpeed::default_instance_)
    {
        ST_TransitionSpeed::default_instance_ = new ST_TransitionSpeed();
    }
    return *ST_TransitionSpeed::default_instance_;

        }
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
        ST_TLTimeIndefinite(){
            m_has_type = false

        }
        ST_TLTimeIndefinite(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeIndefinite::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeIndefinite& default_instance(){

    if (!ST_TLTimeIndefinite::default_instance_)
    {
        ST_TLTimeIndefinite::default_instance_ = new ST_TLTimeIndefinite();
    }
    return *ST_TLTimeIndefinite::default_instance_;

        }
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
        bool has_unsignedInt(){

            return m_has_unsignedInt;
        
        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

            clear_ST_TLTimeIndefinite();
            m_has_unsignedInt = true;
            m_unsignedInt = _unsignedInt;
        
        }
        const unsignedInt& unsignedInt(){

            return m_unsignedInt;
        
        }
        bool has_ST_TLTimeIndefinite(){

            return m_has_ST_TLTimeIndefinite;
        
        }
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite(){

            clear_unsignedInt();
            m_has_ST_TLTimeIndefinite = true;
            if (!m_ST_TLTimeIndefinite)
            {
                m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite();
            }
            return m_ST_TLTimeIndefinite;
        
        }
        const ST_TLTimeIndefinite& ST_TLTimeIndefinite(){

            if (m_ST_TLTimeIndefinite)
            {
                return *m_ST_TLTimeIndefinite;
            }

            return ST_TLTimeIndefinite::default_instance();
        
        }
        void clear(){
clear_unsignedInt();
clear_ST_TLTimeIndefinite();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_unsignedInt)
        {
            _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
            return;
        }

        if (m_has_ST_TLTimeIndefinite)
        {
            m_ST_TLTimeIndefinite->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_TLTime& default_instance(){

    if (!ST_TLTime::default_instance_)
    {
        ST_TLTime::default_instance_ = new ST_TLTime();
    }
    return *ST_TLTime::default_instance_;

        }

    private:
        void clear_unsignedInt(){

            m_has_unsignedInt = false;
            m_unsignedInt = 0;
        
        }
        void clear_ST_TLTimeIndefinite(){

            m_has_ST_TLTimeIndefinite = false;
            if (m_ST_TLTimeIndefinite)
            {
                delete m_ST_TLTimeIndefinite;
                m_ST_TLTimeIndefinite = NULL;
            }
        
        }
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;
        bool m_has_ST_TLTimeIndefinite ;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite ;
        static ST_TLTime* default_instance_ ;

    }

    class ST_TLTimeNodeID : public XSD::SimpleType{
    public:
        ST_TLTimeNodeID(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_TLTimeNodeID(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_TLTimeNodeID& default_instance(){

    if (!ST_TLTimeNodeID::default_instance_)
    {
        ST_TLTimeNodeID::default_instance_ = new ST_TLTimeNodeID();
    }
    return *ST_TLTimeNodeID::default_instance_;

        }

    private:
        static ST_TLTimeNodeID* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_IterateType : public XSD::SimpleType{
    public:
        ST_IterateType(){
            m_has_type = false

        }
        ST_IterateType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_IterateType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_IterateType& default_instance(){

    if (!ST_IterateType::default_instance_)
    {
        ST_IterateType::default_instance_ = new ST_IterateType();
    }
    return *ST_IterateType::default_instance_;

        }
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
        ST_TLChartSubelementType(){
            m_has_type = false

        }
        ST_TLChartSubelementType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLChartSubelementType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLChartSubelementType& default_instance(){

    if (!ST_TLChartSubelementType::default_instance_)
    {
        ST_TLChartSubelementType::default_instance_ = new ST_TLChartSubelementType();
    }
    return *ST_TLChartSubelementType::default_instance_;

        }
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
        ST_TLTriggerRuntimeNode(){
            m_has_type = false

        }
        ST_TLTriggerRuntimeNode(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTriggerRuntimeNode::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTriggerRuntimeNode& default_instance(){

    if (!ST_TLTriggerRuntimeNode::default_instance_)
    {
        ST_TLTriggerRuntimeNode::default_instance_ = new ST_TLTriggerRuntimeNode();
    }
    return *ST_TLTriggerRuntimeNode::default_instance_;

        }
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
        ST_TLTriggerEvent(){
            m_has_type = false

        }
        ST_TLTriggerEvent(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTriggerEvent::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTriggerEvent& default_instance(){

    if (!ST_TLTriggerEvent::default_instance_)
    {
        ST_TLTriggerEvent::default_instance_ = new ST_TLTriggerEvent();
    }
    return *ST_TLTriggerEvent::default_instance_;

        }
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
        ST_TLTimeNodePresetClassType(){
            m_has_type = false

        }
        ST_TLTimeNodePresetClassType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodePresetClassType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodePresetClassType& default_instance(){

    if (!ST_TLTimeNodePresetClassType::default_instance_)
    {
        ST_TLTimeNodePresetClassType::default_instance_ = new ST_TLTimeNodePresetClassType();
    }
    return *ST_TLTimeNodePresetClassType::default_instance_;

        }
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
        ST_TLTimeNodeRestartType(){
            m_has_type = false

        }
        ST_TLTimeNodeRestartType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodeRestartType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodeRestartType& default_instance(){

    if (!ST_TLTimeNodeRestartType::default_instance_)
    {
        ST_TLTimeNodeRestartType::default_instance_ = new ST_TLTimeNodeRestartType();
    }
    return *ST_TLTimeNodeRestartType::default_instance_;

        }
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
        ST_TLTimeNodeFillType(){
            m_has_type = false

        }
        ST_TLTimeNodeFillType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodeFillType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodeFillType& default_instance(){

    if (!ST_TLTimeNodeFillType::default_instance_)
    {
        ST_TLTimeNodeFillType::default_instance_ = new ST_TLTimeNodeFillType();
    }
    return *ST_TLTimeNodeFillType::default_instance_;

        }
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
        ST_TLTimeNodeSyncType(){
            m_has_type = false

        }
        ST_TLTimeNodeSyncType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodeSyncType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodeSyncType& default_instance(){

    if (!ST_TLTimeNodeSyncType::default_instance_)
    {
        ST_TLTimeNodeSyncType::default_instance_ = new ST_TLTimeNodeSyncType();
    }
    return *ST_TLTimeNodeSyncType::default_instance_;

        }
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
        ST_TLTimeNodeMasterRelation(){
            m_has_type = false

        }
        ST_TLTimeNodeMasterRelation(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodeMasterRelation::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodeMasterRelation& default_instance(){

    if (!ST_TLTimeNodeMasterRelation::default_instance_)
    {
        ST_TLTimeNodeMasterRelation::default_instance_ = new ST_TLTimeNodeMasterRelation();
    }
    return *ST_TLTimeNodeMasterRelation::default_instance_;

        }
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
        ST_TLTimeNodeType(){
            m_has_type = false

        }
        ST_TLTimeNodeType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLTimeNodeType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLTimeNodeType& default_instance(){

    if (!ST_TLTimeNodeType::default_instance_)
    {
        ST_TLTimeNodeType::default_instance_ = new ST_TLTimeNodeType();
    }
    return *ST_TLTimeNodeType::default_instance_;

        }
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
        ST_TLNextActionType(){
            m_has_type = false

        }
        ST_TLNextActionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLNextActionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLNextActionType& default_instance(){

    if (!ST_TLNextActionType::default_instance_)
    {
        ST_TLNextActionType::default_instance_ = new ST_TLNextActionType();
    }
    return *ST_TLNextActionType::default_instance_;

        }
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
        ST_TLPreviousActionType(){
            m_has_type = false

        }
        ST_TLPreviousActionType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLPreviousActionType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLPreviousActionType& default_instance(){

    if (!ST_TLPreviousActionType::default_instance_)
    {
        ST_TLPreviousActionType::default_instance_ = new ST_TLPreviousActionType();
    }
    return *ST_TLPreviousActionType::default_instance_;

        }
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
        ST_TLBehaviorAdditiveType(){
            m_has_type = false

        }
        ST_TLBehaviorAdditiveType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLBehaviorAdditiveType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLBehaviorAdditiveType& default_instance(){

    if (!ST_TLBehaviorAdditiveType::default_instance_)
    {
        ST_TLBehaviorAdditiveType::default_instance_ = new ST_TLBehaviorAdditiveType();
    }
    return *ST_TLBehaviorAdditiveType::default_instance_;

        }
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
        ST_TLBehaviorAccumulateType(){
            m_has_type = false

        }
        ST_TLBehaviorAccumulateType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLBehaviorAccumulateType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLBehaviorAccumulateType& default_instance(){

    if (!ST_TLBehaviorAccumulateType::default_instance_)
    {
        ST_TLBehaviorAccumulateType::default_instance_ = new ST_TLBehaviorAccumulateType();
    }
    return *ST_TLBehaviorAccumulateType::default_instance_;

        }
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
        ST_TLBehaviorTransformType(){
            m_has_type = false

        }
        ST_TLBehaviorTransformType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLBehaviorTransformType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLBehaviorTransformType& default_instance(){

    if (!ST_TLBehaviorTransformType::default_instance_)
    {
        ST_TLBehaviorTransformType::default_instance_ = new ST_TLBehaviorTransformType();
    }
    return *ST_TLBehaviorTransformType::default_instance_;

        }
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
        ST_TLBehaviorOverrideType(){
            m_has_type = false

        }
        ST_TLBehaviorOverrideType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLBehaviorOverrideType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLBehaviorOverrideType& default_instance(){

    if (!ST_TLBehaviorOverrideType::default_instance_)
    {
        ST_TLBehaviorOverrideType::default_instance_ = new ST_TLBehaviorOverrideType();
    }
    return *ST_TLBehaviorOverrideType::default_instance_;

        }
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
        bool has_ST_PositiveFixedPercentage(){

            return m_has_ST_PositiveFixedPercentage;
        
        }
        ns_a::ST_PositiveFixedPercentage* mutable_ST_PositiveFixedPercentage(){

            clear_ST_TLTimeIndefinite();
            m_has_ST_PositiveFixedPercentage = true;
            if (!m_ST_PositiveFixedPercentage)
            {
                m_ST_PositiveFixedPercentage = new ns_a::ST_PositiveFixedPercentage();
            }
            return m_ST_PositiveFixedPercentage;
        
        }
        const ns_a::ST_PositiveFixedPercentage& ST_PositiveFixedPercentage(){

            if (m_ST_PositiveFixedPercentage)
            {
                return *m_ST_PositiveFixedPercentage;
            }

            return ns_a::ST_PositiveFixedPercentage::default_instance();
        
        }
        bool has_ST_TLTimeIndefinite(){

            return m_has_ST_TLTimeIndefinite;
        
        }
        ST_TLTimeIndefinite* mutable_ST_TLTimeIndefinite(){

            clear_ST_PositiveFixedPercentage();
            m_has_ST_TLTimeIndefinite = true;
            if (!m_ST_TLTimeIndefinite)
            {
                m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite();
            }
            return m_ST_TLTimeIndefinite;
        
        }
        const ST_TLTimeIndefinite& ST_TLTimeIndefinite(){

            if (m_ST_TLTimeIndefinite)
            {
                return *m_ST_TLTimeIndefinite;
            }

            return ST_TLTimeIndefinite::default_instance();
        
        }
        void clear(){
clear_ST_PositiveFixedPercentage();
clear_ST_TLTimeIndefinite();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_PositiveFixedPercentage)
        {
            m_ST_PositiveFixedPercentage->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_TLTimeIndefinite)
        {
            m_ST_TLTimeIndefinite->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_TLTimeAnimateValueTime& default_instance(){

    if (!ST_TLTimeAnimateValueTime::default_instance_)
    {
        ST_TLTimeAnimateValueTime::default_instance_ = new ST_TLTimeAnimateValueTime();
    }
    return *ST_TLTimeAnimateValueTime::default_instance_;

        }

    private:
        void clear_ST_PositiveFixedPercentage(){

            m_has_ST_PositiveFixedPercentage = false;
            if (m_ST_PositiveFixedPercentage)
            {
                delete m_ST_PositiveFixedPercentage;
                m_ST_PositiveFixedPercentage = NULL;
            }
        
        }
        void clear_ST_TLTimeIndefinite(){

            m_has_ST_TLTimeIndefinite = false;
            if (m_ST_TLTimeIndefinite)
            {
                delete m_ST_TLTimeIndefinite;
                m_ST_TLTimeIndefinite = NULL;
            }
        
        }
        bool m_has_ST_PositiveFixedPercentage ;
        ns_a::ST_PositiveFixedPercentage* m_ST_PositiveFixedPercentage ;
        bool m_has_ST_TLTimeIndefinite ;
        ST_TLTimeIndefinite* m_ST_TLTimeIndefinite ;
        static ST_TLTimeAnimateValueTime* default_instance_ ;

    }

    class ST_TLAnimateBehaviorCalcMode : public XSD::SimpleType{
    public:
        ST_TLAnimateBehaviorCalcMode(){
            m_has_type = false

        }
        ST_TLAnimateBehaviorCalcMode(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateBehaviorCalcMode::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateBehaviorCalcMode& default_instance(){

    if (!ST_TLAnimateBehaviorCalcMode::default_instance_)
    {
        ST_TLAnimateBehaviorCalcMode::default_instance_ = new ST_TLAnimateBehaviorCalcMode();
    }
    return *ST_TLAnimateBehaviorCalcMode::default_instance_;

        }
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
        ST_TLAnimateBehaviorValueType(){
            m_has_type = false

        }
        ST_TLAnimateBehaviorValueType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateBehaviorValueType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateBehaviorValueType& default_instance(){

    if (!ST_TLAnimateBehaviorValueType::default_instance_)
    {
        ST_TLAnimateBehaviorValueType::default_instance_ = new ST_TLAnimateBehaviorValueType();
    }
    return *ST_TLAnimateBehaviorValueType::default_instance_;

        }
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
        ST_TLAnimateColorSpace(){
            m_has_type = false

        }
        ST_TLAnimateColorSpace(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateColorSpace::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateColorSpace& default_instance(){

    if (!ST_TLAnimateColorSpace::default_instance_)
    {
        ST_TLAnimateColorSpace::default_instance_ = new ST_TLAnimateColorSpace();
    }
    return *ST_TLAnimateColorSpace::default_instance_;

        }
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
        ST_TLAnimateColorDirection(){
            m_has_type = false

        }
        ST_TLAnimateColorDirection(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateColorDirection::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateColorDirection& default_instance(){

    if (!ST_TLAnimateColorDirection::default_instance_)
    {
        ST_TLAnimateColorDirection::default_instance_ = new ST_TLAnimateColorDirection();
    }
    return *ST_TLAnimateColorDirection::default_instance_;

        }
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
        ST_TLAnimateEffectTransition(){
            m_has_type = false

        }
        ST_TLAnimateEffectTransition(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateEffectTransition::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateEffectTransition& default_instance(){

    if (!ST_TLAnimateEffectTransition::default_instance_)
    {
        ST_TLAnimateEffectTransition::default_instance_ = new ST_TLAnimateEffectTransition();
    }
    return *ST_TLAnimateEffectTransition::default_instance_;

        }
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
        ST_TLAnimateMotionBehaviorOrigin(){
            m_has_type = false

        }
        ST_TLAnimateMotionBehaviorOrigin(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateMotionBehaviorOrigin::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateMotionBehaviorOrigin& default_instance(){

    if (!ST_TLAnimateMotionBehaviorOrigin::default_instance_)
    {
        ST_TLAnimateMotionBehaviorOrigin::default_instance_ = new ST_TLAnimateMotionBehaviorOrigin();
    }
    return *ST_TLAnimateMotionBehaviorOrigin::default_instance_;

        }
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
        ST_TLAnimateMotionPathEditMode(){
            m_has_type = false

        }
        ST_TLAnimateMotionPathEditMode(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLAnimateMotionPathEditMode::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLAnimateMotionPathEditMode& default_instance(){

    if (!ST_TLAnimateMotionPathEditMode::default_instance_)
    {
        ST_TLAnimateMotionPathEditMode::default_instance_ = new ST_TLAnimateMotionPathEditMode();
    }
    return *ST_TLAnimateMotionPathEditMode::default_instance_;

        }
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
        ST_TLCommandType(){
            m_has_type = false

        }
        ST_TLCommandType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLCommandType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLCommandType& default_instance(){

    if (!ST_TLCommandType::default_instance_)
    {
        ST_TLCommandType::default_instance_ = new ST_TLCommandType();
    }
    return *ST_TLCommandType::default_instance_;

        }
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
        ST_TLParaBuildType(){
            m_has_type = false

        }
        ST_TLParaBuildType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLParaBuildType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLParaBuildType& default_instance(){

    if (!ST_TLParaBuildType::default_instance_)
    {
        ST_TLParaBuildType::default_instance_ = new ST_TLParaBuildType();
    }
    return *ST_TLParaBuildType::default_instance_;

        }
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
        ST_TLDiagramBuildType(){
            m_has_type = false

        }
        ST_TLDiagramBuildType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLDiagramBuildType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLDiagramBuildType& default_instance(){

    if (!ST_TLDiagramBuildType::default_instance_)
    {
        ST_TLDiagramBuildType::default_instance_ = new ST_TLDiagramBuildType();
    }
    return *ST_TLDiagramBuildType::default_instance_;

        }
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
        ST_TLOleChartBuildType(){
            m_has_type = false

        }
        ST_TLOleChartBuildType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_TLOleChartBuildType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_TLOleChartBuildType& default_instance(){

    if (!ST_TLOleChartBuildType::default_instance_)
    {
        ST_TLOleChartBuildType::default_instance_ = new ST_TLOleChartBuildType();
    }
    return *ST_TLOleChartBuildType::default_instance_;

        }
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
        ST_Name(){
            m_has_string = false
            m_string = 

        }
        ST_Name(const XSD::string& _string ){
            m_has_string = true
            m_string = _string

        }
        bool has_string(){

    return m_has_string;

        }
        void set_string(const string& _string ){

    m_has_string = true;
    m_string = _string;

        }
        const string& string(){

    return m_string;

        }
        void clear(){

    m_has_string = false;
    m_string.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_string)
    {
        _outStream << _attrName << \=\\ << m_string << \\\;;
    }

        }
        const ST_Name& default_instance(){

    if (!ST_Name::default_instance_)
    {
        ST_Name::default_instance_ = new ST_Name();
    }
    return *ST_Name::default_instance_;

        }

    private:
        static ST_Name* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Direction : public XSD::SimpleType{
    public:
        ST_Direction(){
            m_has_type = false

        }
        ST_Direction(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_Direction::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_Direction& default_instance(){

    if (!ST_Direction::default_instance_)
    {
        ST_Direction::default_instance_ = new ST_Direction();
    }
    return *ST_Direction::default_instance_;

        }
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
        ST_Index(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_Index(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_Index& default_instance(){

    if (!ST_Index::default_instance_)
    {
        ST_Index::default_instance_ = new ST_Index();
    }
    return *ST_Index::default_instance_;

        }

    private:
        static ST_Index* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_OleObjectFollowColorScheme : public XSD::SimpleType{
    public:
        ST_OleObjectFollowColorScheme(){
            m_has_type = false

        }
        ST_OleObjectFollowColorScheme(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_OleObjectFollowColorScheme::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_OleObjectFollowColorScheme& default_instance(){

    if (!ST_OleObjectFollowColorScheme::default_instance_)
    {
        ST_OleObjectFollowColorScheme::default_instance_ = new ST_OleObjectFollowColorScheme();
    }
    return *ST_OleObjectFollowColorScheme::default_instance_;

        }
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
        ST_SlideId(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_SlideId(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_SlideId& default_instance(){

    if (!ST_SlideId::default_instance_)
    {
        ST_SlideId::default_instance_ = new ST_SlideId();
    }
    return *ST_SlideId::default_instance_;

        }

    private:
        static ST_SlideId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SlideMasterId : public XSD::SimpleType{
    public:
        ST_SlideMasterId(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_SlideMasterId(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_SlideMasterId& default_instance(){

    if (!ST_SlideMasterId::default_instance_)
    {
        ST_SlideMasterId::default_instance_ = new ST_SlideMasterId();
    }
    return *ST_SlideMasterId::default_instance_;

        }

    private:
        static ST_SlideMasterId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_PhotoAlbumLayout : public XSD::SimpleType{
    public:
        ST_PhotoAlbumLayout(){
            m_has_type = false

        }
        ST_PhotoAlbumLayout(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PhotoAlbumLayout::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PhotoAlbumLayout& default_instance(){

    if (!ST_PhotoAlbumLayout::default_instance_)
    {
        ST_PhotoAlbumLayout::default_instance_ = new ST_PhotoAlbumLayout();
    }
    return *ST_PhotoAlbumLayout::default_instance_;

        }
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
        ST_PhotoAlbumFrameShape(){
            m_has_type = false

        }
        ST_PhotoAlbumFrameShape(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PhotoAlbumFrameShape::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PhotoAlbumFrameShape& default_instance(){

    if (!ST_PhotoAlbumFrameShape::default_instance_)
    {
        ST_PhotoAlbumFrameShape::default_instance_ = new ST_PhotoAlbumFrameShape();
    }
    return *ST_PhotoAlbumFrameShape::default_instance_;

        }
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
        ST_SlideSizeCoordinate(const ns_a::ST_PositiveCoordinate32& _ST_PositiveCoordinate32 ){

        }

    private:

    }

    class ST_SlideSizeType : public XSD::SimpleType{
    public:
        ST_SlideSizeType(){
            m_has_type = false

        }
        ST_SlideSizeType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_SlideSizeType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_SlideSizeType& default_instance(){

    if (!ST_SlideSizeType::default_instance_)
    {
        ST_SlideSizeType::default_instance_ = new ST_SlideSizeType();
    }
    return *ST_SlideSizeType::default_instance_;

        }
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
        ST_BookmarkIdSeed(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_BookmarkIdSeed(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_BookmarkIdSeed& default_instance(){

    if (!ST_BookmarkIdSeed::default_instance_)
    {
        ST_BookmarkIdSeed::default_instance_ = new ST_BookmarkIdSeed();
    }
    return *ST_BookmarkIdSeed::default_instance_;

        }

    private:
        static ST_BookmarkIdSeed* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_WebColorType : public XSD::SimpleType{
    public:
        ST_WebColorType(){
            m_has_type = false

        }
        ST_WebColorType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_WebColorType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_WebColorType& default_instance(){

    if (!ST_WebColorType::default_instance_)
    {
        ST_WebColorType::default_instance_ = new ST_WebColorType();
    }
    return *ST_WebColorType::default_instance_;

        }
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
        ST_WebScreenSize(){
            m_has_type = false

        }
        ST_WebScreenSize(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_WebScreenSize::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_WebScreenSize& default_instance(){

    if (!ST_WebScreenSize::default_instance_)
    {
        ST_WebScreenSize::default_instance_ = new ST_WebScreenSize();
    }
    return *ST_WebScreenSize::default_instance_;

        }
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
        ST_WebEncoding(){
            m_has_string = false
            m_string = 

        }
        ST_WebEncoding(const XSD::string& _string ){
            m_has_string = true
            m_string = _string

        }
        bool has_string(){

    return m_has_string;

        }
        void set_string(const string& _string ){

    m_has_string = true;
    m_string = _string;

        }
        const string& string(){

    return m_string;

        }
        void clear(){

    m_has_string = false;
    m_string.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_string)
    {
        _outStream << _attrName << \=\\ << m_string << \\\;;
    }

        }
        const ST_WebEncoding& default_instance(){

    if (!ST_WebEncoding::default_instance_)
    {
        ST_WebEncoding::default_instance_ = new ST_WebEncoding();
    }
    return *ST_WebEncoding::default_instance_;

        }

    private:
        static ST_WebEncoding* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_PrintWhat : public XSD::SimpleType{
    public:
        ST_PrintWhat(){
            m_has_type = false

        }
        ST_PrintWhat(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PrintWhat::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PrintWhat& default_instance(){

    if (!ST_PrintWhat::default_instance_)
    {
        ST_PrintWhat::default_instance_ = new ST_PrintWhat();
    }
    return *ST_PrintWhat::default_instance_;

        }
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
        ST_PrintColorMode(){
            m_has_type = false

        }
        ST_PrintColorMode(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PrintColorMode::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PrintColorMode& default_instance(){

    if (!ST_PrintColorMode::default_instance_)
    {
        ST_PrintColorMode::default_instance_ = new ST_PrintColorMode();
    }
    return *ST_PrintColorMode::default_instance_;

        }
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
        ST_PlaceholderType(){
            m_has_type = false

        }
        ST_PlaceholderType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PlaceholderType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PlaceholderType& default_instance(){

    if (!ST_PlaceholderType::default_instance_)
    {
        ST_PlaceholderType::default_instance_ = new ST_PlaceholderType();
    }
    return *ST_PlaceholderType::default_instance_;

        }
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
        ST_PlaceholderSize(){
            m_has_type = false

        }
        ST_PlaceholderSize(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_PlaceholderSize::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_PlaceholderSize& default_instance(){

    if (!ST_PlaceholderSize::default_instance_)
    {
        ST_PlaceholderSize::default_instance_ = new ST_PlaceholderSize();
    }
    return *ST_PlaceholderSize::default_instance_;

        }
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
        ST_SlideLayoutType(){
            m_has_type = false

        }
        ST_SlideLayoutType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_SlideLayoutType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_SlideLayoutType& default_instance(){

    if (!ST_SlideLayoutType::default_instance_)
    {
        ST_SlideLayoutType::default_instance_ = new ST_SlideLayoutType();
    }
    return *ST_SlideLayoutType::default_instance_;

        }
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
        ST_SlideLayoutId(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_SlideLayoutId(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_SlideLayoutId& default_instance(){

    if (!ST_SlideLayoutId::default_instance_)
    {
        ST_SlideLayoutId::default_instance_ = new ST_SlideLayoutId();
    }
    return *ST_SlideLayoutId::default_instance_;

        }

    private:
        static ST_SlideLayoutId* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SplitterBarState : public XSD::SimpleType{
    public:
        ST_SplitterBarState(){
            m_has_type = false

        }
        ST_SplitterBarState(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_SplitterBarState::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_SplitterBarState& default_instance(){

    if (!ST_SplitterBarState::default_instance_)
    {
        ST_SplitterBarState::default_instance_ = new ST_SplitterBarState();
    }
    return *ST_SplitterBarState::default_instance_;

        }
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
        ST_ViewType(){
            m_has_type = false

        }
        ST_ViewType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ViewType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ViewType& default_instance(){

    if (!ST_ViewType::default_instance_)
    {
        ST_ViewType::default_instance_ = new ST_ViewType();
    }
    return *ST_ViewType::default_instance_;

        }
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
        void clear(){

                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SideDirectionTransition& default_instance(){

    if (!CT_SideDirectionTransition::default_instance_)
    {
        CT_SideDirectionTransition::default_instance_ = new CT_SideDirectionTransition();
    }
    return *CT_SideDirectionTransition::default_instance_;

        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TransitionSideDirectionType& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TransitionSideDirectionType(_dir_attr);
        
        }
        const ST_TransitionSideDirectionType& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TransitionSideDirectionType::default_instance();
        
        }

    private:
        static CT_SideDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionSideDirectionType* m_dir_attr ;

    }

    class CT_CornerDirectionTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CornerDirectionTransition& default_instance(){

    if (!CT_CornerDirectionTransition::default_instance_)
    {
        CT_CornerDirectionTransition::default_instance_ = new CT_CornerDirectionTransition();
    }
    return *CT_CornerDirectionTransition::default_instance_;

        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TransitionCornerDirectionType& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TransitionCornerDirectionType(_dir_attr);
        
        }
        const ST_TransitionCornerDirectionType& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TransitionCornerDirectionType::default_instance();
        
        }

    private:
        static CT_CornerDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionCornerDirectionType* m_dir_attr ;

    }

    class CT_EightDirectionTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EightDirectionTransition& default_instance(){

    if (!CT_EightDirectionTransition::default_instance_)
    {
        CT_EightDirectionTransition::default_instance_ = new CT_EightDirectionTransition();
    }
    return *CT_EightDirectionTransition::default_instance_;

        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TransitionEightDirectionType& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TransitionEightDirectionType(_dir_attr);
        
        }
        const ST_TransitionEightDirectionType& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TransitionEightDirectionType::default_instance();
        
        }

    private:
        static CT_EightDirectionTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionEightDirectionType* m_dir_attr ;

    }

    class CT_OrientationTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OrientationTransition& default_instance(){

    if (!CT_OrientationTransition::default_instance_)
    {
        CT_OrientationTransition::default_instance_ = new CT_OrientationTransition();
    }
    return *CT_OrientationTransition::default_instance_;

        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_Direction& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_Direction(_dir_attr);
        
        }
        const ST_Direction& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_Direction::default_instance();
        
        }

    private:
        static CT_OrientationTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_Direction* m_dir_attr ;

    }

    class CT_InOutTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_InOutTransition& default_instance(){

    if (!CT_InOutTransition::default_instance_)
    {
        CT_InOutTransition::default_instance_ = new CT_InOutTransition();
    }
    return *CT_InOutTransition::default_instance_;

        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TransitionInOutDirectionType(_dir_attr);
        
        }
        const ST_TransitionInOutDirectionType& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TransitionInOutDirectionType::default_instance();
        
        }

    private:
        static CT_InOutTransition* default_instance_ ;
        bool m_has_dir_attr ;
        ST_TransitionInOutDirectionType* m_dir_attr ;

    }

    class CT_OptionalBlackTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_thruBlk_attr = false;
                m_thruBlk_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_thruBlk_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OptionalBlackTransition& default_instance(){

    if (!CT_OptionalBlackTransition::default_instance_)
    {
        CT_OptionalBlackTransition::default_instance_ = new CT_OptionalBlackTransition();
    }
    return *CT_OptionalBlackTransition::default_instance_;

        }
        bool has_thruBlk_attr(){

            return m_has_thruBlk_attr;
        
        }
        void set_thruBlk_attr(const boolean& _thruBlk_attr ){

        m_has_thruBlk_attr = true;
        m_thruBlk_attr = _thruBlk_attr;
        
        }
        const boolean& thruBlk_attr(){

            return type: oolean\nname: \m_thruBlk_attr\n;
        
        }

    private:
        static CT_OptionalBlackTransition* default_instance_ ;
        bool m_has_thruBlk_attr ;
        boolean m_thruBlk_attr ;

    }

    class CT_SplitTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_orient_attr = false;
                
        if (m_orient_attr)
        {
            delete m_orient_attr;
            m_orient_attr = NULL;
        }
    
            
                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_orient_attr->toXml(_attrName, _outStream);
m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SplitTransition& default_instance(){

    if (!CT_SplitTransition::default_instance_)
    {
        CT_SplitTransition::default_instance_ = new CT_SplitTransition();
    }
    return *CT_SplitTransition::default_instance_;

        }
        bool has_orient_attr(){

            return m_has_orient_attr;
        
        }
        void set_orient_attr(const ST_Direction& _orient_attr ){

            m_has_orient_attr = true;
            m_orient_attr = new ST_Direction(_orient_attr);
        
        }
        const ST_Direction& orient_attr(){

            if (m_orient_attr)
            {
                return *m_orient_attr;
            }
            return ST_Direction::default_instance();
        
        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TransitionInOutDirectionType(_dir_attr);
        
        }
        const ST_TransitionInOutDirectionType& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TransitionInOutDirectionType::default_instance();
        
        }

    private:
        static CT_SplitTransition* default_instance_ ;
        bool m_has_orient_attr ;
        ST_Direction* m_orient_attr ;
        bool m_has_dir_attr ;
        ST_TransitionInOutDirectionType* m_dir_attr ;

    }

    class CT_WheelTransition : public XSD::ComplexType{
    public:
        void clear(){

                m_has_spokes_attr = false;
                m_spokes_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_spokes_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WheelTransition& default_instance(){

    if (!CT_WheelTransition::default_instance_)
    {
        CT_WheelTransition::default_instance_ = new CT_WheelTransition();
    }
    return *CT_WheelTransition::default_instance_;

        }
        bool has_spokes_attr(){

            return m_has_spokes_attr;
        
        }
        void set_spokes_attr(const unsignedInt& _spokes_attr ){

        m_has_spokes_attr = true;
        m_spokes_attr = _spokes_attr;
        
        }
        const unsignedInt& spokes_attr(){

            return type: \unsignedInt\nname: \m_spokes_attr\n;
        
        }

    private:
        static CT_WheelTransition* default_instance_ ;
        bool m_has_spokes_attr ;
        unsignedInt m_spokes_attr ;

    }

    class CT_TransitionStartSoundAction : public XSD::ComplexType{
    public:
        bool has_snd(){

            return m_has_snd;
        
        }
        ns_a::CT_EmbeddedWAVAudioFile* mutable_snd(){

                m_has_snd = true;
                if (!m_snd)
                {
                    m_snd = new ns_a::CT_EmbeddedWAVAudioFile();
                }
                return m_snd;
            
        }
        const ns_a::CT_EmbeddedWAVAudioFile& snd(){

            if (m_snd)
            {
                return *m_snd;
            }
            return ns_a::CT_EmbeddedWAVAudioFile::default_instance();
        
        }
        void clear(){

                m_has_loop_attr = false;
                m_loop_attr = false;
            
                m_has_snd = false;
                
        if (m_snd)
        {
            delete m_snd;
            m_snd = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_loop_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_snd)
                {
                    m_snd->toXml(snd, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TransitionStartSoundAction& default_instance(){

    if (!CT_TransitionStartSoundAction::default_instance_)
    {
        CT_TransitionStartSoundAction::default_instance_ = new CT_TransitionStartSoundAction();
    }
    return *CT_TransitionStartSoundAction::default_instance_;

        }
        bool has_loop_attr(){

            return m_has_loop_attr;
        
        }
        void set_loop_attr(const boolean& _loop_attr ){

        m_has_loop_attr = true;
        m_loop_attr = _loop_attr;
        
        }
        const boolean& loop_attr(){

            return type: oolean\nname: \m_loop_attr\n;
        
        }

    private:
        bool m_has_snd ;
        ns_a::CT_EmbeddedWAVAudioFile* m_snd ;
        static CT_TransitionStartSoundAction* default_instance_ ;
        bool m_has_loop_attr ;
        boolean m_loop_attr ;

    }

    class CT_TransitionSoundAction : public XSD::ComplexType{
    public:
        bool has_stSnd(){

            return m_has_stSnd;
        
        }
        CT_TransitionStartSoundAction* mutable_stSnd(){

                
                m_has_endSnd = false;
                
        if (m_endSnd)
        {
            delete m_endSnd;
            m_endSnd = NULL;
        }
    ;
            
                m_has_stSnd = true;
                if (!m_stSnd)
                {
                    m_stSnd = new CT_TransitionStartSoundAction();
                }
                return m_stSnd;
            
        }
        const CT_TransitionStartSoundAction& stSnd(){

            if (m_stSnd)
            {
                return *m_stSnd;
            }
            return CT_TransitionStartSoundAction::default_instance();
        
        }
        bool has_endSnd(){

            return m_has_endSnd;
        
        }
        CT_Empty* mutable_endSnd(){

                
                m_has_stSnd = false;
                
        if (m_stSnd)
        {
            delete m_stSnd;
            m_stSnd = NULL;
        }
    ;
            
                m_has_endSnd = true;
                if (!m_endSnd)
                {
                    m_endSnd = new CT_Empty();
                }
                return m_endSnd;
            
        }
        const CT_Empty& endSnd(){

            if (m_endSnd)
            {
                return *m_endSnd;
            }
            return CT_Empty::default_instance();
        
        }
        void clear(){

                m_has_stSnd = false;
                
        if (m_stSnd)
        {
            delete m_stSnd;
            m_stSnd = NULL;
        }
    
            
                m_has_endSnd = false;
                
        if (m_endSnd)
        {
            delete m_endSnd;
            m_endSnd = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_stSnd)
                {
                    m_stSnd->toXml(stSnd, _outStream);;
                }
            
                if (m_has_endSnd)
                {
                    m_stSnd->toXml(endSnd, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TransitionSoundAction& default_instance(){

    if (!CT_TransitionSoundAction::default_instance_)
    {
        CT_TransitionSoundAction::default_instance_ = new CT_TransitionSoundAction();
    }
    return *CT_TransitionSoundAction::default_instance_;

        }

    private:
        bool m_has_stSnd ;
        CT_TransitionStartSoundAction* m_stSnd ;
        bool m_has_endSnd ;
        CT_Empty* m_endSnd ;
        static CT_TransitionSoundAction* default_instance_ ;

    }

    class CT_SlideTransition : public XSD::ComplexType{
    public:
        bool has_blinds(){

            return m_has_blinds;
        
        }
        CT_OrientationTransition* mutable_blinds(){

                
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_blinds = true;
                if (!m_blinds)
                {
                    m_blinds = new CT_OrientationTransition();
                }
                return m_blinds;
            
        }
        const CT_OrientationTransition& blinds(){

            if (m_blinds)
            {
                return *m_blinds;
            }
            return CT_OrientationTransition::default_instance();
        
        }
        bool has_checker(){

            return m_has_checker;
        
        }
        CT_OrientationTransition* mutable_checker(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_checker = true;
                if (!m_checker)
                {
                    m_checker = new CT_OrientationTransition();
                }
                return m_checker;
            
        }
        const CT_OrientationTransition& checker(){

            if (m_checker)
            {
                return *m_checker;
            }
            return CT_OrientationTransition::default_instance();
        
        }
        bool has_circle(){

            return m_has_circle;
        
        }
        CT_Empty* mutable_circle(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_circle = true;
                if (!m_circle)
                {
                    m_circle = new CT_Empty();
                }
                return m_circle;
            
        }
        const CT_Empty& circle(){

            if (m_circle)
            {
                return *m_circle;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_dissolve(){

            return m_has_dissolve;
        
        }
        CT_Empty* mutable_dissolve(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_dissolve = true;
                if (!m_dissolve)
                {
                    m_dissolve = new CT_Empty();
                }
                return m_dissolve;
            
        }
        const CT_Empty& dissolve(){

            if (m_dissolve)
            {
                return *m_dissolve;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_comb(){

            return m_has_comb;
        
        }
        CT_OrientationTransition* mutable_comb(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_comb = true;
                if (!m_comb)
                {
                    m_comb = new CT_OrientationTransition();
                }
                return m_comb;
            
        }
        const CT_OrientationTransition& comb(){

            if (m_comb)
            {
                return *m_comb;
            }
            return CT_OrientationTransition::default_instance();
        
        }
        bool has_cover(){

            return m_has_cover;
        
        }
        CT_EightDirectionTransition* mutable_cover(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_cover = true;
                if (!m_cover)
                {
                    m_cover = new CT_EightDirectionTransition();
                }
                return m_cover;
            
        }
        const CT_EightDirectionTransition& cover(){

            if (m_cover)
            {
                return *m_cover;
            }
            return CT_EightDirectionTransition::default_instance();
        
        }
        bool has_cut(){

            return m_has_cut;
        
        }
        CT_OptionalBlackTransition* mutable_cut(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_cut = true;
                if (!m_cut)
                {
                    m_cut = new CT_OptionalBlackTransition();
                }
                return m_cut;
            
        }
        const CT_OptionalBlackTransition& cut(){

            if (m_cut)
            {
                return *m_cut;
            }
            return CT_OptionalBlackTransition::default_instance();
        
        }
        bool has_diamond(){

            return m_has_diamond;
        
        }
        CT_Empty* mutable_diamond(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_diamond = true;
                if (!m_diamond)
                {
                    m_diamond = new CT_Empty();
                }
                return m_diamond;
            
        }
        const CT_Empty& diamond(){

            if (m_diamond)
            {
                return *m_diamond;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_fade(){

            return m_has_fade;
        
        }
        CT_OptionalBlackTransition* mutable_fade(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_fade = true;
                if (!m_fade)
                {
                    m_fade = new CT_OptionalBlackTransition();
                }
                return m_fade;
            
        }
        const CT_OptionalBlackTransition& fade(){

            if (m_fade)
            {
                return *m_fade;
            }
            return CT_OptionalBlackTransition::default_instance();
        
        }
        bool has_newsflash(){

            return m_has_newsflash;
        
        }
        CT_Empty* mutable_newsflash(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_newsflash = true;
                if (!m_newsflash)
                {
                    m_newsflash = new CT_Empty();
                }
                return m_newsflash;
            
        }
        const CT_Empty& newsflash(){

            if (m_newsflash)
            {
                return *m_newsflash;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_plus(){

            return m_has_plus;
        
        }
        CT_Empty* mutable_plus(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_plus = true;
                if (!m_plus)
                {
                    m_plus = new CT_Empty();
                }
                return m_plus;
            
        }
        const CT_Empty& plus(){

            if (m_plus)
            {
                return *m_plus;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_pull(){

            return m_has_pull;
        
        }
        CT_EightDirectionTransition* mutable_pull(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_pull = true;
                if (!m_pull)
                {
                    m_pull = new CT_EightDirectionTransition();
                }
                return m_pull;
            
        }
        const CT_EightDirectionTransition& pull(){

            if (m_pull)
            {
                return *m_pull;
            }
            return CT_EightDirectionTransition::default_instance();
        
        }
        bool has_push(){

            return m_has_push;
        
        }
        CT_SideDirectionTransition* mutable_push(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_push = true;
                if (!m_push)
                {
                    m_push = new CT_SideDirectionTransition();
                }
                return m_push;
            
        }
        const CT_SideDirectionTransition& push(){

            if (m_push)
            {
                return *m_push;
            }
            return CT_SideDirectionTransition::default_instance();
        
        }
        bool has_random(){

            return m_has_random;
        
        }
        CT_Empty* mutable_random(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_random = true;
                if (!m_random)
                {
                    m_random = new CT_Empty();
                }
                return m_random;
            
        }
        const CT_Empty& random(){

            if (m_random)
            {
                return *m_random;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_randomBar(){

            return m_has_randomBar;
        
        }
        CT_OrientationTransition* mutable_randomBar(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_randomBar = true;
                if (!m_randomBar)
                {
                    m_randomBar = new CT_OrientationTransition();
                }
                return m_randomBar;
            
        }
        const CT_OrientationTransition& randomBar(){

            if (m_randomBar)
            {
                return *m_randomBar;
            }
            return CT_OrientationTransition::default_instance();
        
        }
        bool has_split(){

            return m_has_split;
        
        }
        CT_SplitTransition* mutable_split(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_split = true;
                if (!m_split)
                {
                    m_split = new CT_SplitTransition();
                }
                return m_split;
            
        }
        const CT_SplitTransition& split(){

            if (m_split)
            {
                return *m_split;
            }
            return CT_SplitTransition::default_instance();
        
        }
        bool has_strips(){

            return m_has_strips;
        
        }
        CT_CornerDirectionTransition* mutable_strips(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_strips = true;
                if (!m_strips)
                {
                    m_strips = new CT_CornerDirectionTransition();
                }
                return m_strips;
            
        }
        const CT_CornerDirectionTransition& strips(){

            if (m_strips)
            {
                return *m_strips;
            }
            return CT_CornerDirectionTransition::default_instance();
        
        }
        bool has_wedge(){

            return m_has_wedge;
        
        }
        CT_Empty* mutable_wedge(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_wedge = true;
                if (!m_wedge)
                {
                    m_wedge = new CT_Empty();
                }
                return m_wedge;
            
        }
        const CT_Empty& wedge(){

            if (m_wedge)
            {
                return *m_wedge;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_wheel(){

            return m_has_wheel;
        
        }
        CT_WheelTransition* mutable_wheel(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_wheel = true;
                if (!m_wheel)
                {
                    m_wheel = new CT_WheelTransition();
                }
                return m_wheel;
            
        }
        const CT_WheelTransition& wheel(){

            if (m_wheel)
            {
                return *m_wheel;
            }
            return CT_WheelTransition::default_instance();
        
        }
        bool has_wipe(){

            return m_has_wipe;
        
        }
        CT_SideDirectionTransition* mutable_wipe(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    ;
            
                m_has_wipe = true;
                if (!m_wipe)
                {
                    m_wipe = new CT_SideDirectionTransition();
                }
                return m_wipe;
            
        }
        const CT_SideDirectionTransition& wipe(){

            if (m_wipe)
            {
                return *m_wipe;
            }
            return CT_SideDirectionTransition::default_instance();
        
        }
        bool has_zoom(){

            return m_has_zoom;
        
        }
        CT_InOutTransition* mutable_zoom(){

                
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    ;
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    ;
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    ;
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    ;
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    ;
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    ;
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    ;
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    ;
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    ;
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    ;
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    ;
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    ;
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    ;
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    ;
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    ;
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    ;
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    ;
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    ;
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    ;
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    ;
            
                m_has_zoom = true;
                if (!m_zoom)
                {
                    m_zoom = new CT_InOutTransition();
                }
                return m_zoom;
            
        }
        const CT_InOutTransition& zoom(){

            if (m_zoom)
            {
                return *m_zoom;
            }
            return CT_InOutTransition::default_instance();
        
        }
        bool has_sndAc(){

            return m_has_sndAc;
        
        }
        CT_TransitionSoundAction* mutable_sndAc(){

                m_has_sndAc = true;
                if (!m_sndAc)
                {
                    m_sndAc = new CT_TransitionSoundAction();
                }
                return m_sndAc;
            
        }
        const CT_TransitionSoundAction& sndAc(){

            if (m_sndAc)
            {
                return *m_sndAc;
            }
            return CT_TransitionSoundAction::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_spd_attr = false;
                
        if (m_spd_attr)
        {
            delete m_spd_attr;
            m_spd_attr = NULL;
        }
    
            
                m_has_advClick_attr = false;
                m_advClick_attr = false;
            
                m_has_advTm_attr = false;
                m_advTm_attr = 0;
            
                m_has_blinds = false;
                
        if (m_blinds)
        {
            delete m_blinds;
            m_blinds = NULL;
        }
    
            
                m_has_checker = false;
                
        if (m_checker)
        {
            delete m_checker;
            m_checker = NULL;
        }
    
            
                m_has_circle = false;
                
        if (m_circle)
        {
            delete m_circle;
            m_circle = NULL;
        }
    
            
                m_has_dissolve = false;
                
        if (m_dissolve)
        {
            delete m_dissolve;
            m_dissolve = NULL;
        }
    
            
                m_has_comb = false;
                
        if (m_comb)
        {
            delete m_comb;
            m_comb = NULL;
        }
    
            
                m_has_cover = false;
                
        if (m_cover)
        {
            delete m_cover;
            m_cover = NULL;
        }
    
            
                m_has_cut = false;
                
        if (m_cut)
        {
            delete m_cut;
            m_cut = NULL;
        }
    
            
                m_has_diamond = false;
                
        if (m_diamond)
        {
            delete m_diamond;
            m_diamond = NULL;
        }
    
            
                m_has_fade = false;
                
        if (m_fade)
        {
            delete m_fade;
            m_fade = NULL;
        }
    
            
                m_has_newsflash = false;
                
        if (m_newsflash)
        {
            delete m_newsflash;
            m_newsflash = NULL;
        }
    
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    
            
                m_has_pull = false;
                
        if (m_pull)
        {
            delete m_pull;
            m_pull = NULL;
        }
    
            
                m_has_push = false;
                
        if (m_push)
        {
            delete m_push;
            m_push = NULL;
        }
    
            
                m_has_random = false;
                
        if (m_random)
        {
            delete m_random;
            m_random = NULL;
        }
    
            
                m_has_randomBar = false;
                
        if (m_randomBar)
        {
            delete m_randomBar;
            m_randomBar = NULL;
        }
    
            
                m_has_split = false;
                
        if (m_split)
        {
            delete m_split;
            m_split = NULL;
        }
    
            
                m_has_strips = false;
                
        if (m_strips)
        {
            delete m_strips;
            m_strips = NULL;
        }
    
            
                m_has_wedge = false;
                
        if (m_wedge)
        {
            delete m_wedge;
            m_wedge = NULL;
        }
    
            
                m_has_wheel = false;
                
        if (m_wheel)
        {
            delete m_wheel;
            m_wheel = NULL;
        }
    
            
                m_has_wipe = false;
                
        if (m_wipe)
        {
            delete m_wipe;
            m_wipe = NULL;
        }
    
            
                m_has_zoom = false;
                
        if (m_zoom)
        {
            delete m_zoom;
            m_zoom = NULL;
        }
    
             
                m_has_sndAc = false;
                
        if (m_sndAc)
        {
            delete m_sndAc;
            m_sndAc = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spd_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_advClick_attr) << \\\;
_outStream << _attrName << \=\\ << m_advTm_attr << \\\;
        _outStream << \>\;
    
                if (m_has_blinds)
                {
                    m_blinds->toXml(blinds, _outStream);;
                }
            
                if (m_has_checker)
                {
                    m_blinds->toXml(checker, _outStream);;
                }
            
                if (m_has_circle)
                {
                    m_blinds->toXml(circle, _outStream);;
                }
            
                if (m_has_dissolve)
                {
                    m_blinds->toXml(dissolve, _outStream);;
                }
            
                if (m_has_comb)
                {
                    m_blinds->toXml(comb, _outStream);;
                }
            
                if (m_has_cover)
                {
                    m_blinds->toXml(cover, _outStream);;
                }
            
                if (m_has_cut)
                {
                    m_blinds->toXml(cut, _outStream);;
                }
            
                if (m_has_diamond)
                {
                    m_blinds->toXml(diamond, _outStream);;
                }
            
                if (m_has_fade)
                {
                    m_blinds->toXml(fade, _outStream);;
                }
            
                if (m_has_newsflash)
                {
                    m_blinds->toXml(newsflash, _outStream);;
                }
            
                if (m_has_plus)
                {
                    m_blinds->toXml(plus, _outStream);;
                }
            
                if (m_has_pull)
                {
                    m_blinds->toXml(pull, _outStream);;
                }
            
                if (m_has_push)
                {
                    m_blinds->toXml(push, _outStream);;
                }
            
                if (m_has_random)
                {
                    m_blinds->toXml(random, _outStream);;
                }
            
                if (m_has_randomBar)
                {
                    m_blinds->toXml(randomBar, _outStream);;
                }
            
                if (m_has_split)
                {
                    m_blinds->toXml(split, _outStream);;
                }
            
                if (m_has_strips)
                {
                    m_blinds->toXml(strips, _outStream);;
                }
            
                if (m_has_wedge)
                {
                    m_blinds->toXml(wedge, _outStream);;
                }
            
                if (m_has_wheel)
                {
                    m_blinds->toXml(wheel, _outStream);;
                }
            
                if (m_has_wipe)
                {
                    m_blinds->toXml(wipe, _outStream);;
                }
            
                if (m_has_zoom)
                {
                    m_blinds->toXml(zoom, _outStream);;
                }
             
                if (m_has_sndAc)
                {
                    m_sndAc->toXml(sndAc, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_sndAc->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideTransition& default_instance(){

    if (!CT_SlideTransition::default_instance_)
    {
        CT_SlideTransition::default_instance_ = new CT_SlideTransition();
    }
    return *CT_SlideTransition::default_instance_;

        }
        bool has_spd_attr(){

            return m_has_spd_attr;
        
        }
        void set_spd_attr(const ST_TransitionSpeed& _spd_attr ){

            m_has_spd_attr = true;
            m_spd_attr = new ST_TransitionSpeed(_spd_attr);
        
        }
        const ST_TransitionSpeed& spd_attr(){

            if (m_spd_attr)
            {
                return *m_spd_attr;
            }
            return ST_TransitionSpeed::default_instance();
        
        }
        bool has_advClick_attr(){

            return m_has_advClick_attr;
        
        }
        void set_advClick_attr(const boolean& _advClick_attr ){

        m_has_advClick_attr = true;
        m_advClick_attr = _advClick_attr;
        
        }
        const boolean& advClick_attr(){

            return type: oolean\nname: \m_advClick_attr\n;
        
        }
        bool has_advTm_attr(){

            return m_has_advTm_attr;
        
        }
        void set_advTm_attr(const unsignedInt& _advTm_attr ){

        m_has_advTm_attr = true;
        m_advTm_attr = _advTm_attr;
        
        }
        const unsignedInt& advTm_attr(){

            return type: \unsignedInt\nname: \m_advTm_attr\n;
        
        }

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
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_val_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLIterateIntervalTime& default_instance(){

    if (!CT_TLIterateIntervalTime::default_instance_)
    {
        CT_TLIterateIntervalTime::default_instance_ = new CT_TLIterateIntervalTime();
    }
    return *CT_TLIterateIntervalTime::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TLTime& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TLTime(_val_attr);
        
        }
        const ST_TLTime& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TLTime::default_instance();
        
        }

    private:
        static CT_TLIterateIntervalTime* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTime* m_val_attr ;

    }

    class CT_TLIterateIntervalPercentage : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_val_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLIterateIntervalPercentage& default_instance(){

    if (!CT_TLIterateIntervalPercentage::default_instance_)
    {
        CT_TLIterateIntervalPercentage::default_instance_ = new CT_TLIterateIntervalPercentage();
    }
    return *CT_TLIterateIntervalPercentage::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ns_a::ST_PositivePercentage& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ns_a::ST_PositivePercentage(_val_attr);
        
        }
        const ns_a::ST_PositivePercentage& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ns_a::ST_PositivePercentage::default_instance();
        
        }

    private:
        static CT_TLIterateIntervalPercentage* default_instance_ ;
        bool m_has_val_attr ;
        ns_a::ST_PositivePercentage* m_val_attr ;

    }

    class CT_TLIterateData : public XSD::ComplexType{
    public:
        bool has_tmAbs(){

            return m_has_tmAbs;
        
        }
        CT_TLIterateIntervalTime* mutable_tmAbs(){

                
                m_has_tmPct = false;
                
        if (m_tmPct)
        {
            delete m_tmPct;
            m_tmPct = NULL;
        }
    ;
            
                m_has_tmAbs = true;
                if (!m_tmAbs)
                {
                    m_tmAbs = new CT_TLIterateIntervalTime();
                }
                return m_tmAbs;
            
        }
        const CT_TLIterateIntervalTime& tmAbs(){

            if (m_tmAbs)
            {
                return *m_tmAbs;
            }
            return CT_TLIterateIntervalTime::default_instance();
        
        }
        bool has_tmPct(){

            return m_has_tmPct;
        
        }
        CT_TLIterateIntervalPercentage* mutable_tmPct(){

                
                m_has_tmAbs = false;
                
        if (m_tmAbs)
        {
            delete m_tmAbs;
            m_tmAbs = NULL;
        }
    ;
            
                m_has_tmPct = true;
                if (!m_tmPct)
                {
                    m_tmPct = new CT_TLIterateIntervalPercentage();
                }
                return m_tmPct;
            
        }
        const CT_TLIterateIntervalPercentage& tmPct(){

            if (m_tmPct)
            {
                return *m_tmPct;
            }
            return CT_TLIterateIntervalPercentage::default_instance();
        
        }
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_backwards_attr = false;
                m_backwards_attr = false;
            
                m_has_tmAbs = false;
                
        if (m_tmAbs)
        {
            delete m_tmAbs;
            m_tmAbs = NULL;
        }
    
            
                m_has_tmPct = false;
                
        if (m_tmPct)
        {
            delete m_tmPct;
            m_tmPct = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_backwards_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_tmAbs)
                {
                    m_tmAbs->toXml(tmAbs, _outStream);;
                }
            
                if (m_has_tmPct)
                {
                    m_tmAbs->toXml(tmPct, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLIterateData& default_instance(){

    if (!CT_TLIterateData::default_instance_)
    {
        CT_TLIterateData::default_instance_ = new CT_TLIterateData();
    }
    return *CT_TLIterateData::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_IterateType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_IterateType(_type_attr);
        
        }
        const ST_IterateType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_IterateType::default_instance();
        
        }
        bool has_backwards_attr(){

            return m_has_backwards_attr;
        
        }
        void set_backwards_attr(const boolean& _backwards_attr ){

        m_has_backwards_attr = true;
        m_backwards_attr = _backwards_attr;
        
        }
        const boolean& backwards_attr(){

            return type: oolean\nname: \m_backwards_attr\n;
        
        }

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
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLSubShapeId& default_instance(){

    if (!CT_TLSubShapeId::default_instance_)
    {
        CT_TLSubShapeId::default_instance_ = new CT_TLSubShapeId();
    }
    return *CT_TLSubShapeId::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
        
        }
        const ns_a::ST_ShapeID& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_ShapeID::default_instance();
        
        }

    private:
        static CT_TLSubShapeId* default_instance_ ;
        bool m_has_spid_attr ;
        ns_a::ST_ShapeID* m_spid_attr ;

    }

    class CT_TLTextTargetElement : public XSD::ComplexType{
    public:
        bool has_charRg(){

            return m_has_charRg;
        
        }
        CT_IndexRange* mutable_charRg(){

                
                m_has_pRg = false;
                
        if (m_pRg)
        {
            delete m_pRg;
            m_pRg = NULL;
        }
    ;
            
                m_has_charRg = true;
                if (!m_charRg)
                {
                    m_charRg = new CT_IndexRange();
                }
                return m_charRg;
            
        }
        const CT_IndexRange& charRg(){

            if (m_charRg)
            {
                return *m_charRg;
            }
            return CT_IndexRange::default_instance();
        
        }
        bool has_pRg(){

            return m_has_pRg;
        
        }
        CT_IndexRange* mutable_pRg(){

                
                m_has_charRg = false;
                
        if (m_charRg)
        {
            delete m_charRg;
            m_charRg = NULL;
        }
    ;
            
                m_has_pRg = true;
                if (!m_pRg)
                {
                    m_pRg = new CT_IndexRange();
                }
                return m_pRg;
            
        }
        const CT_IndexRange& pRg(){

            if (m_pRg)
            {
                return *m_pRg;
            }
            return CT_IndexRange::default_instance();
        
        }
        void clear(){

                m_has_charRg = false;
                
        if (m_charRg)
        {
            delete m_charRg;
            m_charRg = NULL;
        }
    
            
                m_has_pRg = false;
                
        if (m_pRg)
        {
            delete m_pRg;
            m_pRg = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_charRg)
                {
                    m_charRg->toXml(charRg, _outStream);;
                }
            
                if (m_has_pRg)
                {
                    m_charRg->toXml(pRg, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTextTargetElement& default_instance(){

    if (!CT_TLTextTargetElement::default_instance_)
    {
        CT_TLTextTargetElement::default_instance_ = new CT_TLTextTargetElement();
    }
    return *CT_TLTextTargetElement::default_instance_;

        }

    private:
        bool m_has_charRg ;
        CT_IndexRange* m_charRg ;
        bool m_has_pRg ;
        CT_IndexRange* m_pRg ;
        static CT_TLTextTargetElement* default_instance_ ;

    }

    class CT_TLOleChartTargetElement : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_lvl_attr = false;
                m_lvl_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_lvl_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLOleChartTargetElement& default_instance(){

    if (!CT_TLOleChartTargetElement::default_instance_)
    {
        CT_TLOleChartTargetElement::default_instance_ = new CT_TLOleChartTargetElement();
    }
    return *CT_TLOleChartTargetElement::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_TLChartSubelementType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_TLChartSubelementType(_type_attr);
        
        }
        const ST_TLChartSubelementType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_TLChartSubelementType::default_instance();
        
        }
        bool has_lvl_attr(){

            return m_has_lvl_attr;
        
        }
        void set_lvl_attr(const unsignedInt& _lvl_attr ){

        m_has_lvl_attr = true;
        m_lvl_attr = _lvl_attr;
        
        }
        const unsignedInt& lvl_attr(){

            return type: \unsignedInt\nname: \m_lvl_attr\n;
        
        }

    private:
        static CT_TLOleChartTargetElement* default_instance_ ;
        bool m_has_type_attr ;
        ST_TLChartSubelementType* m_type_attr ;
        bool m_has_lvl_attr ;
        unsignedInt m_lvl_attr ;

    }

    class CT_TLShapeTargetElement : public XSD::ComplexType{
    public:
        bool has_bg(){

            return m_has_bg;
        
        }
        CT_Empty* mutable_bg(){

                
                m_has_subSp = false;
                
        if (m_subSp)
        {
            delete m_subSp;
            m_subSp = NULL;
        }
    ;
            
                m_has_oleChartEl = false;
                
        if (m_oleChartEl)
        {
            delete m_oleChartEl;
            m_oleChartEl = NULL;
        }
    ;
            
                m_has_txEl = false;
                
        if (m_txEl)
        {
            delete m_txEl;
            m_txEl = NULL;
        }
    ;
            
                m_has_graphicEl = false;
                
        if (m_graphicEl)
        {
            delete m_graphicEl;
            m_graphicEl = NULL;
        }
    ;
            
                m_has_bg = true;
                if (!m_bg)
                {
                    m_bg = new CT_Empty();
                }
                return m_bg;
            
        }
        const CT_Empty& bg(){

            if (m_bg)
            {
                return *m_bg;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_subSp(){

            return m_has_subSp;
        
        }
        CT_TLSubShapeId* mutable_subSp(){

                
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    ;
            
                m_has_oleChartEl = false;
                
        if (m_oleChartEl)
        {
            delete m_oleChartEl;
            m_oleChartEl = NULL;
        }
    ;
            
                m_has_txEl = false;
                
        if (m_txEl)
        {
            delete m_txEl;
            m_txEl = NULL;
        }
    ;
            
                m_has_graphicEl = false;
                
        if (m_graphicEl)
        {
            delete m_graphicEl;
            m_graphicEl = NULL;
        }
    ;
            
                m_has_subSp = true;
                if (!m_subSp)
                {
                    m_subSp = new CT_TLSubShapeId();
                }
                return m_subSp;
            
        }
        const CT_TLSubShapeId& subSp(){

            if (m_subSp)
            {
                return *m_subSp;
            }
            return CT_TLSubShapeId::default_instance();
        
        }
        bool has_oleChartEl(){

            return m_has_oleChartEl;
        
        }
        CT_TLOleChartTargetElement* mutable_oleChartEl(){

                
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    ;
            
                m_has_subSp = false;
                
        if (m_subSp)
        {
            delete m_subSp;
            m_subSp = NULL;
        }
    ;
            
                m_has_txEl = false;
                
        if (m_txEl)
        {
            delete m_txEl;
            m_txEl = NULL;
        }
    ;
            
                m_has_graphicEl = false;
                
        if (m_graphicEl)
        {
            delete m_graphicEl;
            m_graphicEl = NULL;
        }
    ;
            
                m_has_oleChartEl = true;
                if (!m_oleChartEl)
                {
                    m_oleChartEl = new CT_TLOleChartTargetElement();
                }
                return m_oleChartEl;
            
        }
        const CT_TLOleChartTargetElement& oleChartEl(){

            if (m_oleChartEl)
            {
                return *m_oleChartEl;
            }
            return CT_TLOleChartTargetElement::default_instance();
        
        }
        bool has_txEl(){

            return m_has_txEl;
        
        }
        CT_TLTextTargetElement* mutable_txEl(){

                
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    ;
            
                m_has_subSp = false;
                
        if (m_subSp)
        {
            delete m_subSp;
            m_subSp = NULL;
        }
    ;
            
                m_has_oleChartEl = false;
                
        if (m_oleChartEl)
        {
            delete m_oleChartEl;
            m_oleChartEl = NULL;
        }
    ;
            
                m_has_graphicEl = false;
                
        if (m_graphicEl)
        {
            delete m_graphicEl;
            m_graphicEl = NULL;
        }
    ;
            
                m_has_txEl = true;
                if (!m_txEl)
                {
                    m_txEl = new CT_TLTextTargetElement();
                }
                return m_txEl;
            
        }
        const CT_TLTextTargetElement& txEl(){

            if (m_txEl)
            {
                return *m_txEl;
            }
            return CT_TLTextTargetElement::default_instance();
        
        }
        bool has_graphicEl(){

            return m_has_graphicEl;
        
        }
        ns_a::CT_AnimationElementChoice* mutable_graphicEl(){

                
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    ;
            
                m_has_subSp = false;
                
        if (m_subSp)
        {
            delete m_subSp;
            m_subSp = NULL;
        }
    ;
            
                m_has_oleChartEl = false;
                
        if (m_oleChartEl)
        {
            delete m_oleChartEl;
            m_oleChartEl = NULL;
        }
    ;
            
                m_has_txEl = false;
                
        if (m_txEl)
        {
            delete m_txEl;
            m_txEl = NULL;
        }
    ;
            
                m_has_graphicEl = true;
                if (!m_graphicEl)
                {
                    m_graphicEl = new ns_a::CT_AnimationElementChoice();
                }
                return m_graphicEl;
            
        }
        const ns_a::CT_AnimationElementChoice& graphicEl(){

            if (m_graphicEl)
            {
                return *m_graphicEl;
            }
            return ns_a::CT_AnimationElementChoice::default_instance();
        
        }
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    
            
                m_has_subSp = false;
                
        if (m_subSp)
        {
            delete m_subSp;
            m_subSp = NULL;
        }
    
            
                m_has_oleChartEl = false;
                
        if (m_oleChartEl)
        {
            delete m_oleChartEl;
            m_oleChartEl = NULL;
        }
    
            
                m_has_txEl = false;
                
        if (m_txEl)
        {
            delete m_txEl;
            m_txEl = NULL;
        }
    
            
                m_has_graphicEl = false;
                
        if (m_graphicEl)
        {
            delete m_graphicEl;
            m_graphicEl = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_bg)
                {
                    m_bg->toXml(bg, _outStream);;
                }
            
                if (m_has_subSp)
                {
                    m_bg->toXml(subSp, _outStream);;
                }
            
                if (m_has_oleChartEl)
                {
                    m_bg->toXml(oleChartEl, _outStream);;
                }
            
                if (m_has_txEl)
                {
                    m_bg->toXml(txEl, _outStream);;
                }
            
                if (m_has_graphicEl)
                {
                    m_bg->toXml(graphicEl, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLShapeTargetElement& default_instance(){

    if (!CT_TLShapeTargetElement::default_instance_)
    {
        CT_TLShapeTargetElement::default_instance_ = new CT_TLShapeTargetElement();
    }
    return *CT_TLShapeTargetElement::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
        
        }
        const ns_a::ST_DrawingElementId& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_DrawingElementId::default_instance();
        
        }

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
        bool has_sldTgt(){

            return m_has_sldTgt;
        
        }
        CT_Empty* mutable_sldTgt(){

                
                m_has_sndTgt = false;
                
        if (m_sndTgt)
        {
            delete m_sndTgt;
            m_sndTgt = NULL;
        }
    ;
            
                m_has_spTgt = false;
                
        if (m_spTgt)
        {
            delete m_spTgt;
            m_spTgt = NULL;
        }
    ;
            
                m_has_inkTgt = false;
                
        if (m_inkTgt)
        {
            delete m_inkTgt;
            m_inkTgt = NULL;
        }
    ;
            
                m_has_sldTgt = true;
                if (!m_sldTgt)
                {
                    m_sldTgt = new CT_Empty();
                }
                return m_sldTgt;
            
        }
        const CT_Empty& sldTgt(){

            if (m_sldTgt)
            {
                return *m_sldTgt;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_sndTgt(){

            return m_has_sndTgt;
        
        }
        ns_a::CT_EmbeddedWAVAudioFile* mutable_sndTgt(){

                
                m_has_sldTgt = false;
                
        if (m_sldTgt)
        {
            delete m_sldTgt;
            m_sldTgt = NULL;
        }
    ;
            
                m_has_spTgt = false;
                
        if (m_spTgt)
        {
            delete m_spTgt;
            m_spTgt = NULL;
        }
    ;
            
                m_has_inkTgt = false;
                
        if (m_inkTgt)
        {
            delete m_inkTgt;
            m_inkTgt = NULL;
        }
    ;
            
                m_has_sndTgt = true;
                if (!m_sndTgt)
                {
                    m_sndTgt = new ns_a::CT_EmbeddedWAVAudioFile();
                }
                return m_sndTgt;
            
        }
        const ns_a::CT_EmbeddedWAVAudioFile& sndTgt(){

            if (m_sndTgt)
            {
                return *m_sndTgt;
            }
            return ns_a::CT_EmbeddedWAVAudioFile::default_instance();
        
        }
        bool has_spTgt(){

            return m_has_spTgt;
        
        }
        CT_TLShapeTargetElement* mutable_spTgt(){

                
                m_has_sldTgt = false;
                
        if (m_sldTgt)
        {
            delete m_sldTgt;
            m_sldTgt = NULL;
        }
    ;
            
                m_has_sndTgt = false;
                
        if (m_sndTgt)
        {
            delete m_sndTgt;
            m_sndTgt = NULL;
        }
    ;
            
                m_has_inkTgt = false;
                
        if (m_inkTgt)
        {
            delete m_inkTgt;
            m_inkTgt = NULL;
        }
    ;
            
                m_has_spTgt = true;
                if (!m_spTgt)
                {
                    m_spTgt = new CT_TLShapeTargetElement();
                }
                return m_spTgt;
            
        }
        const CT_TLShapeTargetElement& spTgt(){

            if (m_spTgt)
            {
                return *m_spTgt;
            }
            return CT_TLShapeTargetElement::default_instance();
        
        }
        bool has_inkTgt(){

            return m_has_inkTgt;
        
        }
        CT_TLSubShapeId* mutable_inkTgt(){

                
                m_has_sldTgt = false;
                
        if (m_sldTgt)
        {
            delete m_sldTgt;
            m_sldTgt = NULL;
        }
    ;
            
                m_has_sndTgt = false;
                
        if (m_sndTgt)
        {
            delete m_sndTgt;
            m_sndTgt = NULL;
        }
    ;
            
                m_has_spTgt = false;
                
        if (m_spTgt)
        {
            delete m_spTgt;
            m_spTgt = NULL;
        }
    ;
            
                m_has_inkTgt = true;
                if (!m_inkTgt)
                {
                    m_inkTgt = new CT_TLSubShapeId();
                }
                return m_inkTgt;
            
        }
        const CT_TLSubShapeId& inkTgt(){

            if (m_inkTgt)
            {
                return *m_inkTgt;
            }
            return CT_TLSubShapeId::default_instance();
        
        }
        void clear(){

                m_has_sldTgt = false;
                
        if (m_sldTgt)
        {
            delete m_sldTgt;
            m_sldTgt = NULL;
        }
    
            
                m_has_sndTgt = false;
                
        if (m_sndTgt)
        {
            delete m_sndTgt;
            m_sndTgt = NULL;
        }
    
            
                m_has_spTgt = false;
                
        if (m_spTgt)
        {
            delete m_spTgt;
            m_spTgt = NULL;
        }
    
            
                m_has_inkTgt = false;
                
        if (m_inkTgt)
        {
            delete m_inkTgt;
            m_inkTgt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sldTgt)
                {
                    m_sldTgt->toXml(sldTgt, _outStream);;
                }
            
                if (m_has_sndTgt)
                {
                    m_sldTgt->toXml(sndTgt, _outStream);;
                }
            
                if (m_has_spTgt)
                {
                    m_sldTgt->toXml(spTgt, _outStream);;
                }
            
                if (m_has_inkTgt)
                {
                    m_sldTgt->toXml(inkTgt, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeTargetElement& default_instance(){

    if (!CT_TLTimeTargetElement::default_instance_)
    {
        CT_TLTimeTargetElement::default_instance_ = new CT_TLTimeTargetElement();
    }
    return *CT_TLTimeTargetElement::default_instance_;

        }

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
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_val_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTriggerTimeNodeID& default_instance(){

    if (!CT_TLTriggerTimeNodeID::default_instance_)
    {
        CT_TLTriggerTimeNodeID::default_instance_ = new CT_TLTriggerTimeNodeID();
    }
    return *CT_TLTriggerTimeNodeID::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TLTimeNodeID& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TLTimeNodeID(_val_attr);
        
        }
        const ST_TLTimeNodeID& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TLTimeNodeID::default_instance();
        
        }

    private:
        static CT_TLTriggerTimeNodeID* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTimeNodeID* m_val_attr ;

    }

    class CT_TLTriggerRuntimeNode : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_val_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTriggerRuntimeNode& default_instance(){

    if (!CT_TLTriggerRuntimeNode::default_instance_)
    {
        CT_TLTriggerRuntimeNode::default_instance_ = new CT_TLTriggerRuntimeNode();
    }
    return *CT_TLTriggerRuntimeNode::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TLTriggerRuntimeNode& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TLTriggerRuntimeNode(_val_attr);
        
        }
        const ST_TLTriggerRuntimeNode& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TLTriggerRuntimeNode::default_instance();
        
        }

    private:
        static CT_TLTriggerRuntimeNode* default_instance_ ;
        bool m_has_val_attr ;
        ST_TLTriggerRuntimeNode* m_val_attr ;

    }

    class CT_TLTimeCondition : public XSD::ComplexType{
    public:
        bool has_tgtEl(){

            return m_has_tgtEl;
        
        }
        CT_TLTimeTargetElement* mutable_tgtEl(){

                
                m_has_tn = false;
                
        if (m_tn)
        {
            delete m_tn;
            m_tn = NULL;
        }
    ;
            
                m_has_rtn = false;
                
        if (m_rtn)
        {
            delete m_rtn;
            m_rtn = NULL;
        }
    ;
            
                m_has_tgtEl = true;
                if (!m_tgtEl)
                {
                    m_tgtEl = new CT_TLTimeTargetElement();
                }
                return m_tgtEl;
            
        }
        const CT_TLTimeTargetElement& tgtEl(){

            if (m_tgtEl)
            {
                return *m_tgtEl;
            }
            return CT_TLTimeTargetElement::default_instance();
        
        }
        bool has_tn(){

            return m_has_tn;
        
        }
        CT_TLTriggerTimeNodeID* mutable_tn(){

                
                m_has_tgtEl = false;
                
        if (m_tgtEl)
        {
            delete m_tgtEl;
            m_tgtEl = NULL;
        }
    ;
            
                m_has_rtn = false;
                
        if (m_rtn)
        {
            delete m_rtn;
            m_rtn = NULL;
        }
    ;
            
                m_has_tn = true;
                if (!m_tn)
                {
                    m_tn = new CT_TLTriggerTimeNodeID();
                }
                return m_tn;
            
        }
        const CT_TLTriggerTimeNodeID& tn(){

            if (m_tn)
            {
                return *m_tn;
            }
            return CT_TLTriggerTimeNodeID::default_instance();
        
        }
        bool has_rtn(){

            return m_has_rtn;
        
        }
        CT_TLTriggerRuntimeNode* mutable_rtn(){

                
                m_has_tgtEl = false;
                
        if (m_tgtEl)
        {
            delete m_tgtEl;
            m_tgtEl = NULL;
        }
    ;
            
                m_has_tn = false;
                
        if (m_tn)
        {
            delete m_tn;
            m_tn = NULL;
        }
    ;
            
                m_has_rtn = true;
                if (!m_rtn)
                {
                    m_rtn = new CT_TLTriggerRuntimeNode();
                }
                return m_rtn;
            
        }
        const CT_TLTriggerRuntimeNode& rtn(){

            if (m_rtn)
            {
                return *m_rtn;
            }
            return CT_TLTriggerRuntimeNode::default_instance();
        
        }
        void clear(){

                m_has_evt_attr = false;
                
        if (m_evt_attr)
        {
            delete m_evt_attr;
            m_evt_attr = NULL;
        }
    
            
                m_has_delay_attr = false;
                
        if (m_delay_attr)
        {
            delete m_delay_attr;
            m_delay_attr = NULL;
        }
    
            
                m_has_tgtEl = false;
                
        if (m_tgtEl)
        {
            delete m_tgtEl;
            m_tgtEl = NULL;
        }
    
            
                m_has_tn = false;
                
        if (m_tn)
        {
            delete m_tn;
            m_tn = NULL;
        }
    
            
                m_has_rtn = false;
                
        if (m_rtn)
        {
            delete m_rtn;
            m_rtn = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_evt_attr->toXml(_attrName, _outStream);
m_delay_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_tgtEl)
                {
                    m_tgtEl->toXml(tgtEl, _outStream);;
                }
            
                if (m_has_tn)
                {
                    m_tgtEl->toXml(tn, _outStream);;
                }
            
                if (m_has_rtn)
                {
                    m_tgtEl->toXml(rtn, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeCondition& default_instance(){

    if (!CT_TLTimeCondition::default_instance_)
    {
        CT_TLTimeCondition::default_instance_ = new CT_TLTimeCondition();
    }
    return *CT_TLTimeCondition::default_instance_;

        }
        bool has_evt_attr(){

            return m_has_evt_attr;
        
        }
        void set_evt_attr(const ST_TLTriggerEvent& _evt_attr ){

            m_has_evt_attr = true;
            m_evt_attr = new ST_TLTriggerEvent(_evt_attr);
        
        }
        const ST_TLTriggerEvent& evt_attr(){

            if (m_evt_attr)
            {
                return *m_evt_attr;
            }
            return ST_TLTriggerEvent::default_instance();
        
        }
        bool has_delay_attr(){

            return m_has_delay_attr;
        
        }
        void set_delay_attr(const ST_TLTime& _delay_attr ){

            m_has_delay_attr = true;
            m_delay_attr = new ST_TLTime(_delay_attr);
        
        }
        const ST_TLTime& delay_attr(){

            if (m_delay_attr)
            {
                return *m_delay_attr;
            }
            return ST_TLTime::default_instance();
        
        }

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
        bool has_cond(){

            return m_has_cond;
        
        }
        CT_TLTimeCondition* mutable_cond(){

                m_has_cond = true;
                if (!m_cond)
                {
                    m_cond = new CT_TLTimeCondition();
                }
                return m_cond;
            
        }
        const CT_TLTimeCondition& cond(){

            if (m_cond)
            {
                return *m_cond;
            }
            return CT_TLTimeCondition::default_instance();
        
        }
        void clear(){

                m_has_cond = false;
                
        if (m_cond)
        {
            delete m_cond;
            m_cond = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cond)
                {
                    m_cond->toXml(cond, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeConditionList& default_instance(){

    if (!CT_TLTimeConditionList::default_instance_)
    {
        CT_TLTimeConditionList::default_instance_ = new CT_TLTimeConditionList();
    }
    return *CT_TLTimeConditionList::default_instance_;

        }

    private:
        bool m_has_cond ;
        CT_TLTimeCondition* m_cond ;
        static CT_TLTimeConditionList* default_instance_ ;

    }

    class CT_TimeNodeList : public XSD::ComplexType{
    public:
        CT_TLTimeNodeParallel* add_par(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLTimeNodeParallel* pNewChild = pChildGroup->mutable_par();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLTimeNodeSequence* add_seq(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLTimeNodeSequence* pNewChild = pChildGroup->mutable_seq();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLTimeNodeExclusive* add_excl(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLTimeNodeExclusive* pNewChild = pChildGroup->mutable_excl();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateBehavior* add_anim(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateBehavior* pNewChild = pChildGroup->mutable_anim();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateColorBehavior* add_animClr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateColorBehavior* pNewChild = pChildGroup->mutable_animClr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateEffectBehavior* add_animEffect(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateEffectBehavior* pNewChild = pChildGroup->mutable_animEffect();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateMotionBehavior* add_animMotion(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateMotionBehavior* pNewChild = pChildGroup->mutable_animMotion();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateRotationBehavior* add_animRot(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateRotationBehavior* pNewChild = pChildGroup->mutable_animRot();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLAnimateScaleBehavior* add_animScale(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLAnimateScaleBehavior* pNewChild = pChildGroup->mutable_animScale();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLCommandBehavior* add_cmd(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLCommandBehavior* pNewChild = pChildGroup->mutable_cmd();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLSetBehavior* add_set(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLSetBehavior* pNewChild = pChildGroup->mutable_set();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLMediaNodeAudio* add_audio(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLMediaNodeAudio* pNewChild = pChildGroup->mutable_audio();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLMediaNodeVideo* add_video(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLMediaNodeVideo* pNewChild = pChildGroup->mutable_video();
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
            if ((*iter)->has_par())
            {
                (*iter)->toXml(par, _outStream);
            }
            else if ((*iter)->has_seq())
            {
                (*iter)->toXml(seq, _outStream);
            }
            else if ((*iter)->has_excl())
            {
                (*iter)->toXml(excl, _outStream);
            }
            else if ((*iter)->has_anim())
            {
                (*iter)->toXml(anim, _outStream);
            }
            else if ((*iter)->has_animClr())
            {
                (*iter)->toXml(animClr, _outStream);
            }
            else if ((*iter)->has_animEffect())
            {
                (*iter)->toXml(animEffect, _outStream);
            }
            else if ((*iter)->has_animMotion())
            {
                (*iter)->toXml(animMotion, _outStream);
            }
            else if ((*iter)->has_animRot())
            {
                (*iter)->toXml(animRot, _outStream);
            }
            else if ((*iter)->has_animScale())
            {
                (*iter)->toXml(animScale, _outStream);
            }
            else if ((*iter)->has_cmd())
            {
                (*iter)->toXml(cmd, _outStream);
            }
            else if ((*iter)->has_set())
            {
                (*iter)->toXml(set, _outStream);
            }
            else if ((*iter)->has_audio())
            {
                (*iter)->toXml(audio, _outStream);
            }
            else if ((*iter)->has_video())
            {
                (*iter)->toXml(video, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TimeNodeList& default_instance(){

    if (!CT_TimeNodeList::default_instance_)
    {
        CT_TimeNodeList::default_instance_ = new CT_TimeNodeList();
    }
    return *CT_TimeNodeList::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_TimeNodeList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_par(){

            return m_has_par;
        
            }
            CT_TLTimeNodeParallel* mutable_par(){

                
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_par = true;
                if (!m_par)
                {
                    m_par = new CT_TLTimeNodeParallel();
                }
                return m_par;
            
            }
            const CT_TLTimeNodeParallel& par(){

            if (m_par)
            {
                return *m_par;
            }
            return CT_TLTimeNodeParallel::default_instance();
        
            }
            bool has_seq(){

            return m_has_seq;
        
            }
            CT_TLTimeNodeSequence* mutable_seq(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_seq = true;
                if (!m_seq)
                {
                    m_seq = new CT_TLTimeNodeSequence();
                }
                return m_seq;
            
            }
            const CT_TLTimeNodeSequence& seq(){

            if (m_seq)
            {
                return *m_seq;
            }
            return CT_TLTimeNodeSequence::default_instance();
        
            }
            bool has_excl(){

            return m_has_excl;
        
            }
            CT_TLTimeNodeExclusive* mutable_excl(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_excl = true;
                if (!m_excl)
                {
                    m_excl = new CT_TLTimeNodeExclusive();
                }
                return m_excl;
            
            }
            const CT_TLTimeNodeExclusive& excl(){

            if (m_excl)
            {
                return *m_excl;
            }
            return CT_TLTimeNodeExclusive::default_instance();
        
            }
            bool has_anim(){

            return m_has_anim;
        
            }
            CT_TLAnimateBehavior* mutable_anim(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_anim = true;
                if (!m_anim)
                {
                    m_anim = new CT_TLAnimateBehavior();
                }
                return m_anim;
            
            }
            const CT_TLAnimateBehavior& anim(){

            if (m_anim)
            {
                return *m_anim;
            }
            return CT_TLAnimateBehavior::default_instance();
        
            }
            bool has_animClr(){

            return m_has_animClr;
        
            }
            CT_TLAnimateColorBehavior* mutable_animClr(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_animClr = true;
                if (!m_animClr)
                {
                    m_animClr = new CT_TLAnimateColorBehavior();
                }
                return m_animClr;
            
            }
            const CT_TLAnimateColorBehavior& animClr(){

            if (m_animClr)
            {
                return *m_animClr;
            }
            return CT_TLAnimateColorBehavior::default_instance();
        
            }
            bool has_animEffect(){

            return m_has_animEffect;
        
            }
            CT_TLAnimateEffectBehavior* mutable_animEffect(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_animEffect = true;
                if (!m_animEffect)
                {
                    m_animEffect = new CT_TLAnimateEffectBehavior();
                }
                return m_animEffect;
            
            }
            const CT_TLAnimateEffectBehavior& animEffect(){

            if (m_animEffect)
            {
                return *m_animEffect;
            }
            return CT_TLAnimateEffectBehavior::default_instance();
        
            }
            bool has_animMotion(){

            return m_has_animMotion;
        
            }
            CT_TLAnimateMotionBehavior* mutable_animMotion(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_animMotion = true;
                if (!m_animMotion)
                {
                    m_animMotion = new CT_TLAnimateMotionBehavior();
                }
                return m_animMotion;
            
            }
            const CT_TLAnimateMotionBehavior& animMotion(){

            if (m_animMotion)
            {
                return *m_animMotion;
            }
            return CT_TLAnimateMotionBehavior::default_instance();
        
            }
            bool has_animRot(){

            return m_has_animRot;
        
            }
            CT_TLAnimateRotationBehavior* mutable_animRot(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_animRot = true;
                if (!m_animRot)
                {
                    m_animRot = new CT_TLAnimateRotationBehavior();
                }
                return m_animRot;
            
            }
            const CT_TLAnimateRotationBehavior& animRot(){

            if (m_animRot)
            {
                return *m_animRot;
            }
            return CT_TLAnimateRotationBehavior::default_instance();
        
            }
            bool has_animScale(){

            return m_has_animScale;
        
            }
            CT_TLAnimateScaleBehavior* mutable_animScale(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_animScale = true;
                if (!m_animScale)
                {
                    m_animScale = new CT_TLAnimateScaleBehavior();
                }
                return m_animScale;
            
            }
            const CT_TLAnimateScaleBehavior& animScale(){

            if (m_animScale)
            {
                return *m_animScale;
            }
            return CT_TLAnimateScaleBehavior::default_instance();
        
            }
            bool has_cmd(){

            return m_has_cmd;
        
            }
            CT_TLCommandBehavior* mutable_cmd(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_cmd = true;
                if (!m_cmd)
                {
                    m_cmd = new CT_TLCommandBehavior();
                }
                return m_cmd;
            
            }
            const CT_TLCommandBehavior& cmd(){

            if (m_cmd)
            {
                return *m_cmd;
            }
            return CT_TLCommandBehavior::default_instance();
        
            }
            bool has_set(){

            return m_has_set;
        
            }
            CT_TLSetBehavior* mutable_set(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_set = true;
                if (!m_set)
                {
                    m_set = new CT_TLSetBehavior();
                }
                return m_set;
            
            }
            const CT_TLSetBehavior& set(){

            if (m_set)
            {
                return *m_set;
            }
            return CT_TLSetBehavior::default_instance();
        
            }
            bool has_audio(){

            return m_has_audio;
        
            }
            CT_TLMediaNodeAudio* mutable_audio(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_video = false;
                
        if (m_video)
        {
            delete m_video;
            m_video = NULL;
        }
    ;
            
                m_has_audio = true;
                if (!m_audio)
                {
                    m_audio = new CT_TLMediaNodeAudio();
                }
                return m_audio;
            
            }
            const CT_TLMediaNodeAudio& audio(){

            if (m_audio)
            {
                return *m_audio;
            }
            return CT_TLMediaNodeAudio::default_instance();
        
            }
            bool has_video(){

            return m_has_video;
        
            }
            CT_TLMediaNodeVideo* mutable_video(){

                
                m_has_par = false;
                
        if (m_par)
        {
            delete m_par;
            m_par = NULL;
        }
    ;
            
                m_has_seq = false;
                
        if (m_seq)
        {
            delete m_seq;
            m_seq = NULL;
        }
    ;
            
                m_has_excl = false;
                
        if (m_excl)
        {
            delete m_excl;
            m_excl = NULL;
        }
    ;
            
                m_has_anim = false;
                
        if (m_anim)
        {
            delete m_anim;
            m_anim = NULL;
        }
    ;
            
                m_has_animClr = false;
                
        if (m_animClr)
        {
            delete m_animClr;
            m_animClr = NULL;
        }
    ;
            
                m_has_animEffect = false;
                
        if (m_animEffect)
        {
            delete m_animEffect;
            m_animEffect = NULL;
        }
    ;
            
                m_has_animMotion = false;
                
        if (m_animMotion)
        {
            delete m_animMotion;
            m_animMotion = NULL;
        }
    ;
            
                m_has_animRot = false;
                
        if (m_animRot)
        {
            delete m_animRot;
            m_animRot = NULL;
        }
    ;
            
                m_has_animScale = false;
                
        if (m_animScale)
        {
            delete m_animScale;
            m_animScale = NULL;
        }
    ;
            
                m_has_cmd = false;
                
        if (m_cmd)
        {
            delete m_cmd;
            m_cmd = NULL;
        }
    ;
            
                m_has_set = false;
                
        if (m_set)
        {
            delete m_set;
            m_set = NULL;
        }
    ;
            
                m_has_audio = false;
                
        if (m_audio)
        {
            delete m_audio;
            m_audio = NULL;
        }
    ;
            
                m_has_video = true;
                if (!m_video)
                {
                    m_video = new CT_TLMediaNodeVideo();
                }
                return m_video;
            
            }
            const CT_TLMediaNodeVideo& video(){

            if (m_video)
            {
                return *m_video;
            }
            return CT_TLMediaNodeVideo::default_instance();
        
            }

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
        bool has_stCondLst(){

            return m_has_stCondLst;
        
        }
        CT_TLTimeConditionList* mutable_stCondLst(){

                m_has_stCondLst = true;
                if (!m_stCondLst)
                {
                    m_stCondLst = new CT_TLTimeConditionList();
                }
                return m_stCondLst;
            
        }
        const CT_TLTimeConditionList& stCondLst(){

            if (m_stCondLst)
            {
                return *m_stCondLst;
            }
            return CT_TLTimeConditionList::default_instance();
        
        }
        bool has_endCondLst(){

            return m_has_endCondLst;
        
        }
        CT_TLTimeConditionList* mutable_endCondLst(){

                m_has_endCondLst = true;
                if (!m_endCondLst)
                {
                    m_endCondLst = new CT_TLTimeConditionList();
                }
                return m_endCondLst;
            
        }
        const CT_TLTimeConditionList& endCondLst(){

            if (m_endCondLst)
            {
                return *m_endCondLst;
            }
            return CT_TLTimeConditionList::default_instance();
        
        }
        bool has_endSync(){

            return m_has_endSync;
        
        }
        CT_TLTimeCondition* mutable_endSync(){

                m_has_endSync = true;
                if (!m_endSync)
                {
                    m_endSync = new CT_TLTimeCondition();
                }
                return m_endSync;
            
        }
        const CT_TLTimeCondition& endSync(){

            if (m_endSync)
            {
                return *m_endSync;
            }
            return CT_TLTimeCondition::default_instance();
        
        }
        bool has_iterate(){

            return m_has_iterate;
        
        }
        CT_TLIterateData* mutable_iterate(){

                m_has_iterate = true;
                if (!m_iterate)
                {
                    m_iterate = new CT_TLIterateData();
                }
                return m_iterate;
            
        }
        const CT_TLIterateData& iterate(){

            if (m_iterate)
            {
                return *m_iterate;
            }
            return CT_TLIterateData::default_instance();
        
        }
        bool has_childTnLst(){

            return m_has_childTnLst;
        
        }
        CT_TimeNodeList* mutable_childTnLst(){

                m_has_childTnLst = true;
                if (!m_childTnLst)
                {
                    m_childTnLst = new CT_TimeNodeList();
                }
                return m_childTnLst;
            
        }
        const CT_TimeNodeList& childTnLst(){

            if (m_childTnLst)
            {
                return *m_childTnLst;
            }
            return CT_TimeNodeList::default_instance();
        
        }
        bool has_subTnLst(){

            return m_has_subTnLst;
        
        }
        CT_TimeNodeList* mutable_subTnLst(){

                m_has_subTnLst = true;
                if (!m_subTnLst)
                {
                    m_subTnLst = new CT_TimeNodeList();
                }
                return m_subTnLst;
            
        }
        const CT_TimeNodeList& subTnLst(){

            if (m_subTnLst)
            {
                return *m_subTnLst;
            }
            return CT_TimeNodeList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_presetID_attr = false;
                m_presetID_attr = 0;
            
                m_has_presetClass_attr = false;
                
        if (m_presetClass_attr)
        {
            delete m_presetClass_attr;
            m_presetClass_attr = NULL;
        }
    
            
                m_has_presetSubtype_attr = false;
                m_presetSubtype_attr = 0;
            
                m_has_dur_attr = false;
                
        if (m_dur_attr)
        {
            delete m_dur_attr;
            m_dur_attr = NULL;
        }
    
            
                m_has_repeatCount_attr = false;
                
        if (m_repeatCount_attr)
        {
            delete m_repeatCount_attr;
            m_repeatCount_attr = NULL;
        }
    
            
                m_has_repeatDur_attr = false;
                
        if (m_repeatDur_attr)
        {
            delete m_repeatDur_attr;
            m_repeatDur_attr = NULL;
        }
    
            
                m_has_spd_attr = false;
                
        if (m_spd_attr)
        {
            delete m_spd_attr;
            m_spd_attr = NULL;
        }
    
            
                m_has_accel_attr = false;
                
        if (m_accel_attr)
        {
            delete m_accel_attr;
            m_accel_attr = NULL;
        }
    
            
                m_has_decel_attr = false;
                
        if (m_decel_attr)
        {
            delete m_decel_attr;
            m_decel_attr = NULL;
        }
    
            
                m_has_autoRev_attr = false;
                m_autoRev_attr = false;
            
                m_has_restart_attr = false;
                
        if (m_restart_attr)
        {
            delete m_restart_attr;
            m_restart_attr = NULL;
        }
    
            
                m_has_fill_attr = false;
                
        if (m_fill_attr)
        {
            delete m_fill_attr;
            m_fill_attr = NULL;
        }
    
            
                m_has_syncBehavior_attr = false;
                
        if (m_syncBehavior_attr)
        {
            delete m_syncBehavior_attr;
            m_syncBehavior_attr = NULL;
        }
    
            
                m_has_tmFilter_attr = false;
                m_tmFilter_attr.clear();
            
                m_has_evtFilter_attr = false;
                m_evtFilter_attr.clear();
            
                m_has_display_attr = false;
                m_display_attr = false;
            
                m_has_masterRel_attr = false;
                
        if (m_masterRel_attr)
        {
            delete m_masterRel_attr;
            m_masterRel_attr = NULL;
        }
    
            
                m_has_bldLvl_attr = false;
                m_bldLvl_attr = 0;
            
                m_has_grpId_attr = false;
                m_grpId_attr = 0;
            
                m_has_afterEffect_attr = false;
                m_afterEffect_attr = false;
            
                m_has_nodeType_attr = false;
                
        if (m_nodeType_attr)
        {
            delete m_nodeType_attr;
            m_nodeType_attr = NULL;
        }
    
            
                m_has_nodePh_attr = false;
                m_nodePh_attr = false;
            
                m_has_stCondLst = false;
                
        if (m_stCondLst)
        {
            delete m_stCondLst;
            m_stCondLst = NULL;
        }
    
            
                m_has_endCondLst = false;
                
        if (m_endCondLst)
        {
            delete m_endCondLst;
            m_endCondLst = NULL;
        }
    
            
                m_has_endSync = false;
                
        if (m_endSync)
        {
            delete m_endSync;
            m_endSync = NULL;
        }
    
            
                m_has_iterate = false;
                
        if (m_iterate)
        {
            delete m_iterate;
            m_iterate = NULL;
        }
    
            
                m_has_childTnLst = false;
                
        if (m_childTnLst)
        {
            delete m_childTnLst;
            m_childTnLst = NULL;
        }
    
            
                m_has_subTnLst = false;
                
        if (m_subTnLst)
        {
            delete m_subTnLst;
            m_subTnLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_presetID_attr << \\\;
m_presetClass_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_presetSubtype_attr << \\\;
m_dur_attr->toXml(_attrName, _outStream);
m_repeatCount_attr->toXml(_attrName, _outStream);
m_repeatDur_attr->toXml(_attrName, _outStream);
m_spd_attr->toXml(_attrName, _outStream);
m_accel_attr->toXml(_attrName, _outStream);
m_decel_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_autoRev_attr) << \\\;
m_restart_attr->toXml(_attrName, _outStream);
m_fill_attr->toXml(_attrName, _outStream);
m_syncBehavior_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_tmFilter_attr << \\\;
_outStream << _attrName << \=\\ << m_evtFilter_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_display_attr) << \\\;
m_masterRel_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_bldLvl_attr << \\\;
_outStream << _attrName << \=\\ << m_grpId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_afterEffect_attr) << \\\;
m_nodeType_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_nodePh_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_stCondLst)
                {
                    m_stCondLst->toXml(stCondLst, _outStream);;
                }
            
                if (m_has_endCondLst)
                {
                    m_stCondLst->toXml(endCondLst, _outStream);;
                }
            
                if (m_has_endSync)
                {
                    m_stCondLst->toXml(endSync, _outStream);;
                }
            
                if (m_has_iterate)
                {
                    m_stCondLst->toXml(iterate, _outStream);;
                }
            
                if (m_has_childTnLst)
                {
                    m_stCondLst->toXml(childTnLst, _outStream);;
                }
            
                if (m_has_subTnLst)
                {
                    m_stCondLst->toXml(subTnLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLCommonTimeNodeData& default_instance(){

    if (!CT_TLCommonTimeNodeData::default_instance_)
    {
        CT_TLCommonTimeNodeData::default_instance_ = new CT_TLCommonTimeNodeData();
    }
    return *CT_TLCommonTimeNodeData::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_TLTimeNodeID& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_TLTimeNodeID(_id_attr);
        
        }
        const ST_TLTimeNodeID& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_TLTimeNodeID::default_instance();
        
        }
        bool has_presetID_attr(){

            return m_has_presetID_attr;
        
        }
        void set_presetID_attr(const int& _presetID_attr ){

        m_has_presetID_attr = true;
        m_presetID_attr = _presetID_attr;
        
        }
        const int& presetID_attr(){

            return type: \int\nname: \m_presetID_attr\n;
        
        }
        bool has_presetClass_attr(){

            return m_has_presetClass_attr;
        
        }
        void set_presetClass_attr(const ST_TLTimeNodePresetClassType& _presetClass_attr ){

            m_has_presetClass_attr = true;
            m_presetClass_attr = new ST_TLTimeNodePresetClassType(_presetClass_attr);
        
        }
        const ST_TLTimeNodePresetClassType& presetClass_attr(){

            if (m_presetClass_attr)
            {
                return *m_presetClass_attr;
            }
            return ST_TLTimeNodePresetClassType::default_instance();
        
        }
        bool has_presetSubtype_attr(){

            return m_has_presetSubtype_attr;
        
        }
        void set_presetSubtype_attr(const int& _presetSubtype_attr ){

        m_has_presetSubtype_attr = true;
        m_presetSubtype_attr = _presetSubtype_attr;
        
        }
        const int& presetSubtype_attr(){

            return type: \int\nname: \m_presetSubtype_attr\n;
        
        }
        bool has_dur_attr(){

            return m_has_dur_attr;
        
        }
        void set_dur_attr(const ST_TLTime& _dur_attr ){

            m_has_dur_attr = true;
            m_dur_attr = new ST_TLTime(_dur_attr);
        
        }
        const ST_TLTime& dur_attr(){

            if (m_dur_attr)
            {
                return *m_dur_attr;
            }
            return ST_TLTime::default_instance();
        
        }
        bool has_repeatCount_attr(){

            return m_has_repeatCount_attr;
        
        }
        void set_repeatCount_attr(const ST_TLTime& _repeatCount_attr ){

            m_has_repeatCount_attr = true;
            m_repeatCount_attr = new ST_TLTime(_repeatCount_attr);
        
        }
        const ST_TLTime& repeatCount_attr(){

            if (m_repeatCount_attr)
            {
                return *m_repeatCount_attr;
            }
            return ST_TLTime::default_instance();
        
        }
        bool has_repeatDur_attr(){

            return m_has_repeatDur_attr;
        
        }
        void set_repeatDur_attr(const ST_TLTime& _repeatDur_attr ){

            m_has_repeatDur_attr = true;
            m_repeatDur_attr = new ST_TLTime(_repeatDur_attr);
        
        }
        const ST_TLTime& repeatDur_attr(){

            if (m_repeatDur_attr)
            {
                return *m_repeatDur_attr;
            }
            return ST_TLTime::default_instance();
        
        }
        bool has_spd_attr(){

            return m_has_spd_attr;
        
        }
        void set_spd_attr(const ns_a::ST_Percentage& _spd_attr ){

            m_has_spd_attr = true;
            m_spd_attr = new ns_a::ST_Percentage(_spd_attr);
        
        }
        const ns_a::ST_Percentage& spd_attr(){

            if (m_spd_attr)
            {
                return *m_spd_attr;
            }
            return ns_a::ST_Percentage::default_instance();
        
        }
        bool has_accel_attr(){

            return m_has_accel_attr;
        
        }
        void set_accel_attr(const ns_a::ST_PositiveFixedPercentage& _accel_attr ){

            m_has_accel_attr = true;
            m_accel_attr = new ns_a::ST_PositiveFixedPercentage(_accel_attr);
        
        }
        const ns_a::ST_PositiveFixedPercentage& accel_attr(){

            if (m_accel_attr)
            {
                return *m_accel_attr;
            }
            return ns_a::ST_PositiveFixedPercentage::default_instance();
        
        }
        bool has_decel_attr(){

            return m_has_decel_attr;
        
        }
        void set_decel_attr(const ns_a::ST_PositiveFixedPercentage& _decel_attr ){

            m_has_decel_attr = true;
            m_decel_attr = new ns_a::ST_PositiveFixedPercentage(_decel_attr);
        
        }
        const ns_a::ST_PositiveFixedPercentage& decel_attr(){

            if (m_decel_attr)
            {
                return *m_decel_attr;
            }
            return ns_a::ST_PositiveFixedPercentage::default_instance();
        
        }
        bool has_autoRev_attr(){

            return m_has_autoRev_attr;
        
        }
        void set_autoRev_attr(const boolean& _autoRev_attr ){

        m_has_autoRev_attr = true;
        m_autoRev_attr = _autoRev_attr;
        
        }
        const boolean& autoRev_attr(){

            return type: oolean\nname: \m_autoRev_attr\n;
        
        }
        bool has_restart_attr(){

            return m_has_restart_attr;
        
        }
        void set_restart_attr(const ST_TLTimeNodeRestartType& _restart_attr ){

            m_has_restart_attr = true;
            m_restart_attr = new ST_TLTimeNodeRestartType(_restart_attr);
        
        }
        const ST_TLTimeNodeRestartType& restart_attr(){

            if (m_restart_attr)
            {
                return *m_restart_attr;
            }
            return ST_TLTimeNodeRestartType::default_instance();
        
        }
        bool has_fill_attr(){

            return m_has_fill_attr;
        
        }
        void set_fill_attr(const ST_TLTimeNodeFillType& _fill_attr ){

            m_has_fill_attr = true;
            m_fill_attr = new ST_TLTimeNodeFillType(_fill_attr);
        
        }
        const ST_TLTimeNodeFillType& fill_attr(){

            if (m_fill_attr)
            {
                return *m_fill_attr;
            }
            return ST_TLTimeNodeFillType::default_instance();
        
        }
        bool has_syncBehavior_attr(){

            return m_has_syncBehavior_attr;
        
        }
        void set_syncBehavior_attr(const ST_TLTimeNodeSyncType& _syncBehavior_attr ){

            m_has_syncBehavior_attr = true;
            m_syncBehavior_attr = new ST_TLTimeNodeSyncType(_syncBehavior_attr);
        
        }
        const ST_TLTimeNodeSyncType& syncBehavior_attr(){

            if (m_syncBehavior_attr)
            {
                return *m_syncBehavior_attr;
            }
            return ST_TLTimeNodeSyncType::default_instance();
        
        }
        bool has_tmFilter_attr(){

            return m_has_tmFilter_attr;
        
        }
        void set_tmFilter_attr(const string& _tmFilter_attr ){

        m_has_tmFilter_attr = true;
        m_tmFilter_attr = _tmFilter_attr;
        
        }
        const string& tmFilter_attr(){

            return type: \string\nname: \m_tmFilter_attr\n;
        
        }
        bool has_evtFilter_attr(){

            return m_has_evtFilter_attr;
        
        }
        void set_evtFilter_attr(const string& _evtFilter_attr ){

        m_has_evtFilter_attr = true;
        m_evtFilter_attr = _evtFilter_attr;
        
        }
        const string& evtFilter_attr(){

            return type: \string\nname: \m_evtFilter_attr\n;
        
        }
        bool has_display_attr(){

            return m_has_display_attr;
        
        }
        void set_display_attr(const boolean& _display_attr ){

        m_has_display_attr = true;
        m_display_attr = _display_attr;
        
        }
        const boolean& display_attr(){

            return type: oolean\nname: \m_display_attr\n;
        
        }
        bool has_masterRel_attr(){

            return m_has_masterRel_attr;
        
        }
        void set_masterRel_attr(const ST_TLTimeNodeMasterRelation& _masterRel_attr ){

            m_has_masterRel_attr = true;
            m_masterRel_attr = new ST_TLTimeNodeMasterRelation(_masterRel_attr);
        
        }
        const ST_TLTimeNodeMasterRelation& masterRel_attr(){

            if (m_masterRel_attr)
            {
                return *m_masterRel_attr;
            }
            return ST_TLTimeNodeMasterRelation::default_instance();
        
        }
        bool has_bldLvl_attr(){

            return m_has_bldLvl_attr;
        
        }
        void set_bldLvl_attr(const int& _bldLvl_attr ){

        m_has_bldLvl_attr = true;
        m_bldLvl_attr = _bldLvl_attr;
        
        }
        const int& bldLvl_attr(){

            return type: \int\nname: \m_bldLvl_attr\n;
        
        }
        bool has_grpId_attr(){

            return m_has_grpId_attr;
        
        }
        void set_grpId_attr(const unsignedInt& _grpId_attr ){

        m_has_grpId_attr = true;
        m_grpId_attr = _grpId_attr;
        
        }
        const unsignedInt& grpId_attr(){

            return type: \unsignedInt\nname: \m_grpId_attr\n;
        
        }
        bool has_afterEffect_attr(){

            return m_has_afterEffect_attr;
        
        }
        void set_afterEffect_attr(const boolean& _afterEffect_attr ){

        m_has_afterEffect_attr = true;
        m_afterEffect_attr = _afterEffect_attr;
        
        }
        const boolean& afterEffect_attr(){

            return type: oolean\nname: \m_afterEffect_attr\n;
        
        }
        bool has_nodeType_attr(){

            return m_has_nodeType_attr;
        
        }
        void set_nodeType_attr(const ST_TLTimeNodeType& _nodeType_attr ){

            m_has_nodeType_attr = true;
            m_nodeType_attr = new ST_TLTimeNodeType(_nodeType_attr);
        
        }
        const ST_TLTimeNodeType& nodeType_attr(){

            if (m_nodeType_attr)
            {
                return *m_nodeType_attr;
            }
            return ST_TLTimeNodeType::default_instance();
        
        }
        bool has_nodePh_attr(){

            return m_has_nodePh_attr;
        
        }
        void set_nodePh_attr(const boolean& _nodePh_attr ){

        m_has_nodePh_attr = true;
        m_nodePh_attr = _nodePh_attr;
        
        }
        const boolean& nodePh_attr(){

            return type: oolean\nname: \m_nodePh_attr\n;
        
        }

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
        bool has_cTn(){

            return m_has_cTn;
        
        }
        CT_TLCommonTimeNodeData* mutable_cTn(){

                m_has_cTn = true;
                if (!m_cTn)
                {
                    m_cTn = new CT_TLCommonTimeNodeData();
                }
                return m_cTn;
            
        }
        const CT_TLCommonTimeNodeData& cTn(){

            if (m_cTn)
            {
                return *m_cTn;
            }
            return CT_TLCommonTimeNodeData::default_instance();
        
        }
        void clear(){

                m_has_cTn = false;
                
        if (m_cTn)
        {
            delete m_cTn;
            m_cTn = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cTn)
                {
                    m_cTn->toXml(cTn, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeNodeParallel& default_instance(){

    if (!CT_TLTimeNodeParallel::default_instance_)
    {
        CT_TLTimeNodeParallel::default_instance_ = new CT_TLTimeNodeParallel();
    }
    return *CT_TLTimeNodeParallel::default_instance_;

        }

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        static CT_TLTimeNodeParallel* default_instance_ ;

    }

    class CT_TLTimeNodeSequence : public XSD::ComplexType{
    public:
        bool has_cTn(){

            return m_has_cTn;
        
        }
        CT_TLCommonTimeNodeData* mutable_cTn(){

                m_has_cTn = true;
                if (!m_cTn)
                {
                    m_cTn = new CT_TLCommonTimeNodeData();
                }
                return m_cTn;
            
        }
        const CT_TLCommonTimeNodeData& cTn(){

            if (m_cTn)
            {
                return *m_cTn;
            }
            return CT_TLCommonTimeNodeData::default_instance();
        
        }
        bool has_prevCondLst(){

            return m_has_prevCondLst;
        
        }
        CT_TLTimeConditionList* mutable_prevCondLst(){

                m_has_prevCondLst = true;
                if (!m_prevCondLst)
                {
                    m_prevCondLst = new CT_TLTimeConditionList();
                }
                return m_prevCondLst;
            
        }
        const CT_TLTimeConditionList& prevCondLst(){

            if (m_prevCondLst)
            {
                return *m_prevCondLst;
            }
            return CT_TLTimeConditionList::default_instance();
        
        }
        bool has_nextCondLst(){

            return m_has_nextCondLst;
        
        }
        CT_TLTimeConditionList* mutable_nextCondLst(){

                m_has_nextCondLst = true;
                if (!m_nextCondLst)
                {
                    m_nextCondLst = new CT_TLTimeConditionList();
                }
                return m_nextCondLst;
            
        }
        const CT_TLTimeConditionList& nextCondLst(){

            if (m_nextCondLst)
            {
                return *m_nextCondLst;
            }
            return CT_TLTimeConditionList::default_instance();
        
        }
        void clear(){

                m_has_concurrent_attr = false;
                m_concurrent_attr = false;
            
                m_has_prevAc_attr = false;
                
        if (m_prevAc_attr)
        {
            delete m_prevAc_attr;
            m_prevAc_attr = NULL;
        }
    
            
                m_has_nextAc_attr = false;
                
        if (m_nextAc_attr)
        {
            delete m_nextAc_attr;
            m_nextAc_attr = NULL;
        }
    
            
                m_has_cTn = false;
                
        if (m_cTn)
        {
            delete m_cTn;
            m_cTn = NULL;
        }
    
            
                m_has_prevCondLst = false;
                
        if (m_prevCondLst)
        {
            delete m_prevCondLst;
            m_prevCondLst = NULL;
        }
    
            
                m_has_nextCondLst = false;
                
        if (m_nextCondLst)
        {
            delete m_nextCondLst;
            m_nextCondLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_concurrent_attr) << \\\;
m_prevAc_attr->toXml(_attrName, _outStream);
m_nextAc_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_cTn)
                {
                    m_cTn->toXml(cTn, _outStream);;
                }
            
                if (m_has_prevCondLst)
                {
                    m_cTn->toXml(prevCondLst, _outStream);;
                }
            
                if (m_has_nextCondLst)
                {
                    m_cTn->toXml(nextCondLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeNodeSequence& default_instance(){

    if (!CT_TLTimeNodeSequence::default_instance_)
    {
        CT_TLTimeNodeSequence::default_instance_ = new CT_TLTimeNodeSequence();
    }
    return *CT_TLTimeNodeSequence::default_instance_;

        }
        bool has_concurrent_attr(){

            return m_has_concurrent_attr;
        
        }
        void set_concurrent_attr(const boolean& _concurrent_attr ){

        m_has_concurrent_attr = true;
        m_concurrent_attr = _concurrent_attr;
        
        }
        const boolean& concurrent_attr(){

            return type: oolean\nname: \m_concurrent_attr\n;
        
        }
        bool has_prevAc_attr(){

            return m_has_prevAc_attr;
        
        }
        void set_prevAc_attr(const ST_TLPreviousActionType& _prevAc_attr ){

            m_has_prevAc_attr = true;
            m_prevAc_attr = new ST_TLPreviousActionType(_prevAc_attr);
        
        }
        const ST_TLPreviousActionType& prevAc_attr(){

            if (m_prevAc_attr)
            {
                return *m_prevAc_attr;
            }
            return ST_TLPreviousActionType::default_instance();
        
        }
        bool has_nextAc_attr(){

            return m_has_nextAc_attr;
        
        }
        void set_nextAc_attr(const ST_TLNextActionType& _nextAc_attr ){

            m_has_nextAc_attr = true;
            m_nextAc_attr = new ST_TLNextActionType(_nextAc_attr);
        
        }
        const ST_TLNextActionType& nextAc_attr(){

            if (m_nextAc_attr)
            {
                return *m_nextAc_attr;
            }
            return ST_TLNextActionType::default_instance();
        
        }

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
        bool has_cTn(){

            return m_has_cTn;
        
        }
        CT_TLCommonTimeNodeData* mutable_cTn(){

                m_has_cTn = true;
                if (!m_cTn)
                {
                    m_cTn = new CT_TLCommonTimeNodeData();
                }
                return m_cTn;
            
        }
        const CT_TLCommonTimeNodeData& cTn(){

            if (m_cTn)
            {
                return *m_cTn;
            }
            return CT_TLCommonTimeNodeData::default_instance();
        
        }
        void clear(){

                m_has_cTn = false;
                
        if (m_cTn)
        {
            delete m_cTn;
            m_cTn = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cTn)
                {
                    m_cTn->toXml(cTn, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeNodeExclusive& default_instance(){

    if (!CT_TLTimeNodeExclusive::default_instance_)
    {
        CT_TLTimeNodeExclusive::default_instance_ = new CT_TLTimeNodeExclusive();
    }
    return *CT_TLTimeNodeExclusive::default_instance_;

        }

    private:
        bool m_has_cTn ;
        CT_TLCommonTimeNodeData* m_cTn ;
        static CT_TLTimeNodeExclusive* default_instance_ ;

    }

    class CT_TLBehaviorAttributeNameList : public XSD::ComplexType{
    public:
        bool has_attrName(){

        return m_has_attrName;
    
        }
        void set_attrName(const string& _attrName ){

            m_has_attrName = true;
            string = _attrName;
            
        }
        const string& attrName(){

        return type: \string\nname: \m_attrName\n;
    
        }
        void clear(){

                m_has_attrName = false;
                m_attrName.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_attrName)
                {
                    _outStream << \<attrName>\ << m_attrName << \</attrName>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLBehaviorAttributeNameList& default_instance(){

    if (!CT_TLBehaviorAttributeNameList::default_instance_)
    {
        CT_TLBehaviorAttributeNameList::default_instance_ = new CT_TLBehaviorAttributeNameList();
    }
    return *CT_TLBehaviorAttributeNameList::default_instance_;

        }

    private:
        bool m_has_attrName ;
        string m_attrName ;
        static CT_TLBehaviorAttributeNameList* default_instance_ ;

    }

    class CT_TLCommonBehaviorData : public XSD::ComplexType{
    public:
        bool has_cTn(){

            return m_has_cTn;
        
        }
        CT_TLCommonTimeNodeData* mutable_cTn(){

                m_has_cTn = true;
                if (!m_cTn)
                {
                    m_cTn = new CT_TLCommonTimeNodeData();
                }
                return m_cTn;
            
        }
        const CT_TLCommonTimeNodeData& cTn(){

            if (m_cTn)
            {
                return *m_cTn;
            }
            return CT_TLCommonTimeNodeData::default_instance();
        
        }
        bool has_tgtEl(){

            return m_has_tgtEl;
        
        }
        CT_TLTimeTargetElement* mutable_tgtEl(){

                m_has_tgtEl = true;
                if (!m_tgtEl)
                {
                    m_tgtEl = new CT_TLTimeTargetElement();
                }
                return m_tgtEl;
            
        }
        const CT_TLTimeTargetElement& tgtEl(){

            if (m_tgtEl)
            {
                return *m_tgtEl;
            }
            return CT_TLTimeTargetElement::default_instance();
        
        }
        bool has_attrNameLst(){

            return m_has_attrNameLst;
        
        }
        CT_TLBehaviorAttributeNameList* mutable_attrNameLst(){

                m_has_attrNameLst = true;
                if (!m_attrNameLst)
                {
                    m_attrNameLst = new CT_TLBehaviorAttributeNameList();
                }
                return m_attrNameLst;
            
        }
        const CT_TLBehaviorAttributeNameList& attrNameLst(){

            if (m_attrNameLst)
            {
                return *m_attrNameLst;
            }
            return CT_TLBehaviorAttributeNameList::default_instance();
        
        }
        void clear(){

                m_has_additive_attr = false;
                
        if (m_additive_attr)
        {
            delete m_additive_attr;
            m_additive_attr = NULL;
        }
    
            
                m_has_accumulate_attr = false;
                
        if (m_accumulate_attr)
        {
            delete m_accumulate_attr;
            m_accumulate_attr = NULL;
        }
    
            
                m_has_xfrmType_attr = false;
                
        if (m_xfrmType_attr)
        {
            delete m_xfrmType_attr;
            m_xfrmType_attr = NULL;
        }
    
            
                m_has_from_attr = false;
                m_from_attr.clear();
            
                m_has_to_attr = false;
                m_to_attr.clear();
            
                m_has_by_attr = false;
                m_by_attr.clear();
            
                m_has_rctx_attr = false;
                m_rctx_attr.clear();
            
                m_has_override_attr = false;
                
        if (m_override_attr)
        {
            delete m_override_attr;
            m_override_attr = NULL;
        }
    
            
                m_has_cTn = false;
                
        if (m_cTn)
        {
            delete m_cTn;
            m_cTn = NULL;
        }
    
            
                m_has_tgtEl = false;
                
        if (m_tgtEl)
        {
            delete m_tgtEl;
            m_tgtEl = NULL;
        }
    
            
                m_has_attrNameLst = false;
                
        if (m_attrNameLst)
        {
            delete m_attrNameLst;
            m_attrNameLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_additive_attr->toXml(_attrName, _outStream);
m_accumulate_attr->toXml(_attrName, _outStream);
m_xfrmType_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_from_attr << \\\;
_outStream << _attrName << \=\\ << m_to_attr << \\\;
_outStream << _attrName << \=\\ << m_by_attr << \\\;
_outStream << _attrName << \=\\ << m_rctx_attr << \\\;
m_override_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_cTn)
                {
                    m_cTn->toXml(cTn, _outStream);;
                }
            
                if (m_has_tgtEl)
                {
                    m_cTn->toXml(tgtEl, _outStream);;
                }
            
                if (m_has_attrNameLst)
                {
                    m_cTn->toXml(attrNameLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLCommonBehaviorData& default_instance(){

    if (!CT_TLCommonBehaviorData::default_instance_)
    {
        CT_TLCommonBehaviorData::default_instance_ = new CT_TLCommonBehaviorData();
    }
    return *CT_TLCommonBehaviorData::default_instance_;

        }
        bool has_additive_attr(){

            return m_has_additive_attr;
        
        }
        void set_additive_attr(const ST_TLBehaviorAdditiveType& _additive_attr ){

            m_has_additive_attr = true;
            m_additive_attr = new ST_TLBehaviorAdditiveType(_additive_attr);
        
        }
        const ST_TLBehaviorAdditiveType& additive_attr(){

            if (m_additive_attr)
            {
                return *m_additive_attr;
            }
            return ST_TLBehaviorAdditiveType::default_instance();
        
        }
        bool has_accumulate_attr(){

            return m_has_accumulate_attr;
        
        }
        void set_accumulate_attr(const ST_TLBehaviorAccumulateType& _accumulate_attr ){

            m_has_accumulate_attr = true;
            m_accumulate_attr = new ST_TLBehaviorAccumulateType(_accumulate_attr);
        
        }
        const ST_TLBehaviorAccumulateType& accumulate_attr(){

            if (m_accumulate_attr)
            {
                return *m_accumulate_attr;
            }
            return ST_TLBehaviorAccumulateType::default_instance();
        
        }
        bool has_xfrmType_attr(){

            return m_has_xfrmType_attr;
        
        }
        void set_xfrmType_attr(const ST_TLBehaviorTransformType& _xfrmType_attr ){

            m_has_xfrmType_attr = true;
            m_xfrmType_attr = new ST_TLBehaviorTransformType(_xfrmType_attr);
        
        }
        const ST_TLBehaviorTransformType& xfrmType_attr(){

            if (m_xfrmType_attr)
            {
                return *m_xfrmType_attr;
            }
            return ST_TLBehaviorTransformType::default_instance();
        
        }
        bool has_from_attr(){

            return m_has_from_attr;
        
        }
        void set_from_attr(const string& _from_attr ){

        m_has_from_attr = true;
        m_from_attr = _from_attr;
        
        }
        const string& from_attr(){

            return type: \string\nname: \m_from_attr\n;
        
        }
        bool has_to_attr(){

            return m_has_to_attr;
        
        }
        void set_to_attr(const string& _to_attr ){

        m_has_to_attr = true;
        m_to_attr = _to_attr;
        
        }
        const string& to_attr(){

            return type: \string\nname: \m_to_attr\n;
        
        }
        bool has_by_attr(){

            return m_has_by_attr;
        
        }
        void set_by_attr(const string& _by_attr ){

        m_has_by_attr = true;
        m_by_attr = _by_attr;
        
        }
        const string& by_attr(){

            return type: \string\nname: \m_by_attr\n;
        
        }
        bool has_rctx_attr(){

            return m_has_rctx_attr;
        
        }
        void set_rctx_attr(const string& _rctx_attr ){

        m_has_rctx_attr = true;
        m_rctx_attr = _rctx_attr;
        
        }
        const string& rctx_attr(){

            return type: \string\nname: \m_rctx_attr\n;
        
        }
        bool has_override_attr(){

            return m_has_override_attr;
        
        }
        void set_override_attr(const ST_TLBehaviorOverrideType& _override_attr ){

            m_has_override_attr = true;
            m_override_attr = new ST_TLBehaviorOverrideType(_override_attr);
        
        }
        const ST_TLBehaviorOverrideType& override_attr(){

            if (m_override_attr)
            {
                return *m_override_attr;
            }
            return ST_TLBehaviorOverrideType::default_instance();
        
        }

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
        void clear(){

                m_has_val_attr = false;
                m_val_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_val_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimVariantBooleanVal& default_instance(){

    if (!CT_TLAnimVariantBooleanVal::default_instance_)
    {
        CT_TLAnimVariantBooleanVal::default_instance_ = new CT_TLAnimVariantBooleanVal();
    }
    return *CT_TLAnimVariantBooleanVal::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const boolean& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const boolean& val_attr(){

            return type: oolean\nname: \m_val_attr\n;
        
        }

    private:
        static CT_TLAnimVariantBooleanVal* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_TLAnimVariantIntegerVal : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimVariantIntegerVal& default_instance(){

    if (!CT_TLAnimVariantIntegerVal::default_instance_)
    {
        CT_TLAnimVariantIntegerVal::default_instance_ = new CT_TLAnimVariantIntegerVal();
    }
    return *CT_TLAnimVariantIntegerVal::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const int& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const int& val_attr(){

            return type: \int\nname: \m_val_attr\n;
        
        }

    private:
        static CT_TLAnimVariantIntegerVal* default_instance_ ;
        bool m_has_val_attr ;
        int m_val_attr ;

    }

    class CT_TLAnimVariantFloatVal : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimVariantFloatVal& default_instance(){

    if (!CT_TLAnimVariantFloatVal::default_instance_)
    {
        CT_TLAnimVariantFloatVal::default_instance_ = new CT_TLAnimVariantFloatVal();
    }
    return *CT_TLAnimVariantFloatVal::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const float& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const float& val_attr(){

            return type: loat\nname: \m_val_attr\n;
        
        }

    private:
        static CT_TLAnimVariantFloatVal* default_instance_ ;
        bool m_has_val_attr ;
        float m_val_attr ;

    }

    class CT_TLAnimVariantStringVal : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimVariantStringVal& default_instance(){

    if (!CT_TLAnimVariantStringVal::default_instance_)
    {
        CT_TLAnimVariantStringVal::default_instance_ = new CT_TLAnimVariantStringVal();
    }
    return *CT_TLAnimVariantStringVal::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_TLAnimVariantStringVal* default_instance_ ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_TLAnimVariant : public XSD::ComplexType{
    public:
        bool has_boolVal(){

            return m_has_boolVal;
        
        }
        CT_TLAnimVariantBooleanVal* mutable_boolVal(){

                
                m_has_intVal = false;
                
        if (m_intVal)
        {
            delete m_intVal;
            m_intVal = NULL;
        }
    ;
            
                m_has_fltVal = false;
                
        if (m_fltVal)
        {
            delete m_fltVal;
            m_fltVal = NULL;
        }
    ;
            
                m_has_strVal = false;
                
        if (m_strVal)
        {
            delete m_strVal;
            m_strVal = NULL;
        }
    ;
            
                m_has_clrVal = false;
                
        if (m_clrVal)
        {
            delete m_clrVal;
            m_clrVal = NULL;
        }
    ;
            
                m_has_boolVal = true;
                if (!m_boolVal)
                {
                    m_boolVal = new CT_TLAnimVariantBooleanVal();
                }
                return m_boolVal;
            
        }
        const CT_TLAnimVariantBooleanVal& boolVal(){

            if (m_boolVal)
            {
                return *m_boolVal;
            }
            return CT_TLAnimVariantBooleanVal::default_instance();
        
        }
        bool has_intVal(){

            return m_has_intVal;
        
        }
        CT_TLAnimVariantIntegerVal* mutable_intVal(){

                
                m_has_boolVal = false;
                
        if (m_boolVal)
        {
            delete m_boolVal;
            m_boolVal = NULL;
        }
    ;
            
                m_has_fltVal = false;
                
        if (m_fltVal)
        {
            delete m_fltVal;
            m_fltVal = NULL;
        }
    ;
            
                m_has_strVal = false;
                
        if (m_strVal)
        {
            delete m_strVal;
            m_strVal = NULL;
        }
    ;
            
                m_has_clrVal = false;
                
        if (m_clrVal)
        {
            delete m_clrVal;
            m_clrVal = NULL;
        }
    ;
            
                m_has_intVal = true;
                if (!m_intVal)
                {
                    m_intVal = new CT_TLAnimVariantIntegerVal();
                }
                return m_intVal;
            
        }
        const CT_TLAnimVariantIntegerVal& intVal(){

            if (m_intVal)
            {
                return *m_intVal;
            }
            return CT_TLAnimVariantIntegerVal::default_instance();
        
        }
        bool has_fltVal(){

            return m_has_fltVal;
        
        }
        CT_TLAnimVariantFloatVal* mutable_fltVal(){

                
                m_has_boolVal = false;
                
        if (m_boolVal)
        {
            delete m_boolVal;
            m_boolVal = NULL;
        }
    ;
            
                m_has_intVal = false;
                
        if (m_intVal)
        {
            delete m_intVal;
            m_intVal = NULL;
        }
    ;
            
                m_has_strVal = false;
                
        if (m_strVal)
        {
            delete m_strVal;
            m_strVal = NULL;
        }
    ;
            
                m_has_clrVal = false;
                
        if (m_clrVal)
        {
            delete m_clrVal;
            m_clrVal = NULL;
        }
    ;
            
                m_has_fltVal = true;
                if (!m_fltVal)
                {
                    m_fltVal = new CT_TLAnimVariantFloatVal();
                }
                return m_fltVal;
            
        }
        const CT_TLAnimVariantFloatVal& fltVal(){

            if (m_fltVal)
            {
                return *m_fltVal;
            }
            return CT_TLAnimVariantFloatVal::default_instance();
        
        }
        bool has_strVal(){

            return m_has_strVal;
        
        }
        CT_TLAnimVariantStringVal* mutable_strVal(){

                
                m_has_boolVal = false;
                
        if (m_boolVal)
        {
            delete m_boolVal;
            m_boolVal = NULL;
        }
    ;
            
                m_has_intVal = false;
                
        if (m_intVal)
        {
            delete m_intVal;
            m_intVal = NULL;
        }
    ;
            
                m_has_fltVal = false;
                
        if (m_fltVal)
        {
            delete m_fltVal;
            m_fltVal = NULL;
        }
    ;
            
                m_has_clrVal = false;
                
        if (m_clrVal)
        {
            delete m_clrVal;
            m_clrVal = NULL;
        }
    ;
            
                m_has_strVal = true;
                if (!m_strVal)
                {
                    m_strVal = new CT_TLAnimVariantStringVal();
                }
                return m_strVal;
            
        }
        const CT_TLAnimVariantStringVal& strVal(){

            if (m_strVal)
            {
                return *m_strVal;
            }
            return CT_TLAnimVariantStringVal::default_instance();
        
        }
        bool has_clrVal(){

            return m_has_clrVal;
        
        }
        ns_a::CT_Color* mutable_clrVal(){

                
                m_has_boolVal = false;
                
        if (m_boolVal)
        {
            delete m_boolVal;
            m_boolVal = NULL;
        }
    ;
            
                m_has_intVal = false;
                
        if (m_intVal)
        {
            delete m_intVal;
            m_intVal = NULL;
        }
    ;
            
                m_has_fltVal = false;
                
        if (m_fltVal)
        {
            delete m_fltVal;
            m_fltVal = NULL;
        }
    ;
            
                m_has_strVal = false;
                
        if (m_strVal)
        {
            delete m_strVal;
            m_strVal = NULL;
        }
    ;
            
                m_has_clrVal = true;
                if (!m_clrVal)
                {
                    m_clrVal = new ns_a::CT_Color();
                }
                return m_clrVal;
            
        }
        const ns_a::CT_Color& clrVal(){

            if (m_clrVal)
            {
                return *m_clrVal;
            }
            return ns_a::CT_Color::default_instance();
        
        }
        void clear(){

                m_has_boolVal = false;
                
        if (m_boolVal)
        {
            delete m_boolVal;
            m_boolVal = NULL;
        }
    
            
                m_has_intVal = false;
                
        if (m_intVal)
        {
            delete m_intVal;
            m_intVal = NULL;
        }
    
            
                m_has_fltVal = false;
                
        if (m_fltVal)
        {
            delete m_fltVal;
            m_fltVal = NULL;
        }
    
            
                m_has_strVal = false;
                
        if (m_strVal)
        {
            delete m_strVal;
            m_strVal = NULL;
        }
    
            
                m_has_clrVal = false;
                
        if (m_clrVal)
        {
            delete m_clrVal;
            m_clrVal = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_boolVal)
                {
                    m_boolVal->toXml(boolVal, _outStream);;
                }
            
                if (m_has_intVal)
                {
                    m_boolVal->toXml(intVal, _outStream);;
                }
            
                if (m_has_fltVal)
                {
                    m_boolVal->toXml(fltVal, _outStream);;
                }
            
                if (m_has_strVal)
                {
                    m_boolVal->toXml(strVal, _outStream);;
                }
            
                if (m_has_clrVal)
                {
                    m_boolVal->toXml(clrVal, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimVariant& default_instance(){

    if (!CT_TLAnimVariant::default_instance_)
    {
        CT_TLAnimVariant::default_instance_ = new CT_TLAnimVariant();
    }
    return *CT_TLAnimVariant::default_instance_;

        }

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
        bool has_val(){

            return m_has_val;
        
        }
        CT_TLAnimVariant* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_TLAnimVariant();
                }
                return m_val;
            
        }
        const CT_TLAnimVariant& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_TLAnimVariant::default_instance();
        
        }
        void clear(){

                m_has_tm_attr = false;
                
        if (m_tm_attr)
        {
            delete m_tm_attr;
            m_tm_attr = NULL;
        }
    
            
                m_has_fmla_attr = false;
                m_fmla_attr.clear();
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_tm_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_fmla_attr << \\\;
        _outStream << \>\;
    
                if (m_has_val)
                {
                    m_val->toXml(val, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeAnimateValue& default_instance(){

    if (!CT_TLTimeAnimateValue::default_instance_)
    {
        CT_TLTimeAnimateValue::default_instance_ = new CT_TLTimeAnimateValue();
    }
    return *CT_TLTimeAnimateValue::default_instance_;

        }
        bool has_tm_attr(){

            return m_has_tm_attr;
        
        }
        void set_tm_attr(const ST_TLTimeAnimateValueTime& _tm_attr ){

            m_has_tm_attr = true;
            m_tm_attr = new ST_TLTimeAnimateValueTime(_tm_attr);
        
        }
        const ST_TLTimeAnimateValueTime& tm_attr(){

            if (m_tm_attr)
            {
                return *m_tm_attr;
            }
            return ST_TLTimeAnimateValueTime::default_instance();
        
        }
        bool has_fmla_attr(){

            return m_has_fmla_attr;
        
        }
        void set_fmla_attr(const string& _fmla_attr ){

        m_has_fmla_attr = true;
        m_fmla_attr = _fmla_attr;
        
        }
        const string& fmla_attr(){

            return type: \string\nname: \m_fmla_attr\n;
        
        }

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
        bool has_tav(){

            return m_has_tav;
        
        }
        CT_TLTimeAnimateValue* mutable_tav(){

                m_has_tav = true;
                if (!m_tav)
                {
                    m_tav = new CT_TLTimeAnimateValue();
                }
                return m_tav;
            
        }
        const CT_TLTimeAnimateValue& tav(){

            if (m_tav)
            {
                return *m_tav;
            }
            return CT_TLTimeAnimateValue::default_instance();
        
        }
        void clear(){

                m_has_tav = false;
                
        if (m_tav)
        {
            delete m_tav;
            m_tav = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_tav)
                {
                    m_tav->toXml(tav, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTimeAnimateValueList& default_instance(){

    if (!CT_TLTimeAnimateValueList::default_instance_)
    {
        CT_TLTimeAnimateValueList::default_instance_ = new CT_TLTimeAnimateValueList();
    }
    return *CT_TLTimeAnimateValueList::default_instance_;

        }

    private:
        bool m_has_tav ;
        CT_TLTimeAnimateValue* m_tav ;
        static CT_TLTimeAnimateValueList* default_instance_ ;

    }

    class CT_TLAnimateBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_tavLst(){

            return m_has_tavLst;
        
        }
        CT_TLTimeAnimateValueList* mutable_tavLst(){

                m_has_tavLst = true;
                if (!m_tavLst)
                {
                    m_tavLst = new CT_TLTimeAnimateValueList();
                }
                return m_tavLst;
            
        }
        const CT_TLTimeAnimateValueList& tavLst(){

            if (m_tavLst)
            {
                return *m_tavLst;
            }
            return CT_TLTimeAnimateValueList::default_instance();
        
        }
        void clear(){

                m_has_by_attr = false;
                m_by_attr.clear();
            
                m_has_from_attr = false;
                m_from_attr.clear();
            
                m_has_to_attr = false;
                m_to_attr.clear();
            
                m_has_calcmode_attr = false;
                
        if (m_calcmode_attr)
        {
            delete m_calcmode_attr;
            m_calcmode_attr = NULL;
        }
    
            
                m_has_valueType_attr = false;
                
        if (m_valueType_attr)
        {
            delete m_valueType_attr;
            m_valueType_attr = NULL;
        }
    
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_tavLst = false;
                
        if (m_tavLst)
        {
            delete m_tavLst;
            m_tavLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_by_attr << \\\;
_outStream << _attrName << \=\\ << m_from_attr << \\\;
_outStream << _attrName << \=\\ << m_to_attr << \\\;
m_calcmode_attr->toXml(_attrName, _outStream);
m_valueType_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_tavLst)
                {
                    m_cBhvr->toXml(tavLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateBehavior& default_instance(){

    if (!CT_TLAnimateBehavior::default_instance_)
    {
        CT_TLAnimateBehavior::default_instance_ = new CT_TLAnimateBehavior();
    }
    return *CT_TLAnimateBehavior::default_instance_;

        }
        bool has_by_attr(){

            return m_has_by_attr;
        
        }
        void set_by_attr(const string& _by_attr ){

        m_has_by_attr = true;
        m_by_attr = _by_attr;
        
        }
        const string& by_attr(){

            return type: \string\nname: \m_by_attr\n;
        
        }
        bool has_from_attr(){

            return m_has_from_attr;
        
        }
        void set_from_attr(const string& _from_attr ){

        m_has_from_attr = true;
        m_from_attr = _from_attr;
        
        }
        const string& from_attr(){

            return type: \string\nname: \m_from_attr\n;
        
        }
        bool has_to_attr(){

            return m_has_to_attr;
        
        }
        void set_to_attr(const string& _to_attr ){

        m_has_to_attr = true;
        m_to_attr = _to_attr;
        
        }
        const string& to_attr(){

            return type: \string\nname: \m_to_attr\n;
        
        }
        bool has_calcmode_attr(){

            return m_has_calcmode_attr;
        
        }
        void set_calcmode_attr(const ST_TLAnimateBehaviorCalcMode& _calcmode_attr ){

            m_has_calcmode_attr = true;
            m_calcmode_attr = new ST_TLAnimateBehaviorCalcMode(_calcmode_attr);
        
        }
        const ST_TLAnimateBehaviorCalcMode& calcmode_attr(){

            if (m_calcmode_attr)
            {
                return *m_calcmode_attr;
            }
            return ST_TLAnimateBehaviorCalcMode::default_instance();
        
        }
        bool has_valueType_attr(){

            return m_has_valueType_attr;
        
        }
        void set_valueType_attr(const ST_TLAnimateBehaviorValueType& _valueType_attr ){

            m_has_valueType_attr = true;
            m_valueType_attr = new ST_TLAnimateBehaviorValueType(_valueType_attr);
        
        }
        const ST_TLAnimateBehaviorValueType& valueType_attr(){

            if (m_valueType_attr)
            {
                return *m_valueType_attr;
            }
            return ST_TLAnimateBehaviorValueType::default_instance();
        
        }

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
        void clear(){

                m_has_r_attr = false;
                
        if (m_r_attr)
        {
            delete m_r_attr;
            m_r_attr = NULL;
        }
    
            
                m_has_g_attr = false;
                
        if (m_g_attr)
        {
            delete m_g_attr;
            m_g_attr = NULL;
        }
    
            
                m_has_b_attr = false;
                
        if (m_b_attr)
        {
            delete m_b_attr;
            m_b_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_r_attr->toXml(_attrName, _outStream);
m_g_attr->toXml(_attrName, _outStream);
m_b_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLByRgbColorTransform& default_instance(){

    if (!CT_TLByRgbColorTransform::default_instance_)
    {
        CT_TLByRgbColorTransform::default_instance_ = new CT_TLByRgbColorTransform();
    }
    return *CT_TLByRgbColorTransform::default_instance_;

        }
        bool has_r_attr(){

            return m_has_r_attr;
        
        }
        void set_r_attr(const ns_a::ST_FixedPercentage& _r_attr ){

            m_has_r_attr = true;
            m_r_attr = new ns_a::ST_FixedPercentage(_r_attr);
        
        }
        const ns_a::ST_FixedPercentage& r_attr(){

            if (m_r_attr)
            {
                return *m_r_attr;
            }
            return ns_a::ST_FixedPercentage::default_instance();
        
        }
        bool has_g_attr(){

            return m_has_g_attr;
        
        }
        void set_g_attr(const ns_a::ST_FixedPercentage& _g_attr ){

            m_has_g_attr = true;
            m_g_attr = new ns_a::ST_FixedPercentage(_g_attr);
        
        }
        const ns_a::ST_FixedPercentage& g_attr(){

            if (m_g_attr)
            {
                return *m_g_attr;
            }
            return ns_a::ST_FixedPercentage::default_instance();
        
        }
        bool has_b_attr(){

            return m_has_b_attr;
        
        }
        void set_b_attr(const ns_a::ST_FixedPercentage& _b_attr ){

            m_has_b_attr = true;
            m_b_attr = new ns_a::ST_FixedPercentage(_b_attr);
        
        }
        const ns_a::ST_FixedPercentage& b_attr(){

            if (m_b_attr)
            {
                return *m_b_attr;
            }
            return ns_a::ST_FixedPercentage::default_instance();
        
        }

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
        void clear(){

                m_has_h_attr = false;
                
        if (m_h_attr)
        {
            delete m_h_attr;
            m_h_attr = NULL;
        }
    
            
                m_has_s_attr = false;
                
        if (m_s_attr)
        {
            delete m_s_attr;
            m_s_attr = NULL;
        }
    
            
                m_has_l_attr = false;
                
        if (m_l_attr)
        {
            delete m_l_attr;
            m_l_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_h_attr->toXml(_attrName, _outStream);
m_s_attr->toXml(_attrName, _outStream);
m_l_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLByHslColorTransform& default_instance(){

    if (!CT_TLByHslColorTransform::default_instance_)
    {
        CT_TLByHslColorTransform::default_instance_ = new CT_TLByHslColorTransform();
    }
    return *CT_TLByHslColorTransform::default_instance_;

        }
        bool has_h_attr(){

            return m_has_h_attr;
        
        }
        void set_h_attr(const ns_a::ST_Angle& _h_attr ){

            m_has_h_attr = true;
            m_h_attr = new ns_a::ST_Angle(_h_attr);
        
        }
        const ns_a::ST_Angle& h_attr(){

            if (m_h_attr)
            {
                return *m_h_attr;
            }
            return ns_a::ST_Angle::default_instance();
        
        }
        bool has_s_attr(){

            return m_has_s_attr;
        
        }
        void set_s_attr(const ns_a::ST_FixedPercentage& _s_attr ){

            m_has_s_attr = true;
            m_s_attr = new ns_a::ST_FixedPercentage(_s_attr);
        
        }
        const ns_a::ST_FixedPercentage& s_attr(){

            if (m_s_attr)
            {
                return *m_s_attr;
            }
            return ns_a::ST_FixedPercentage::default_instance();
        
        }
        bool has_l_attr(){

            return m_has_l_attr;
        
        }
        void set_l_attr(const ns_a::ST_FixedPercentage& _l_attr ){

            m_has_l_attr = true;
            m_l_attr = new ns_a::ST_FixedPercentage(_l_attr);
        
        }
        const ns_a::ST_FixedPercentage& l_attr(){

            if (m_l_attr)
            {
                return *m_l_attr;
            }
            return ns_a::ST_FixedPercentage::default_instance();
        
        }

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
        bool has_rgb(){

            return m_has_rgb;
        
        }
        CT_TLByRgbColorTransform* mutable_rgb(){

                
                m_has_hsl = false;
                
        if (m_hsl)
        {
            delete m_hsl;
            m_hsl = NULL;
        }
    ;
            
                m_has_rgb = true;
                if (!m_rgb)
                {
                    m_rgb = new CT_TLByRgbColorTransform();
                }
                return m_rgb;
            
        }
        const CT_TLByRgbColorTransform& rgb(){

            if (m_rgb)
            {
                return *m_rgb;
            }
            return CT_TLByRgbColorTransform::default_instance();
        
        }
        bool has_hsl(){

            return m_has_hsl;
        
        }
        CT_TLByHslColorTransform* mutable_hsl(){

                
                m_has_rgb = false;
                
        if (m_rgb)
        {
            delete m_rgb;
            m_rgb = NULL;
        }
    ;
            
                m_has_hsl = true;
                if (!m_hsl)
                {
                    m_hsl = new CT_TLByHslColorTransform();
                }
                return m_hsl;
            
        }
        const CT_TLByHslColorTransform& hsl(){

            if (m_hsl)
            {
                return *m_hsl;
            }
            return CT_TLByHslColorTransform::default_instance();
        
        }
        void clear(){

                m_has_rgb = false;
                
        if (m_rgb)
        {
            delete m_rgb;
            m_rgb = NULL;
        }
    
            
                m_has_hsl = false;
                
        if (m_hsl)
        {
            delete m_hsl;
            m_hsl = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_rgb)
                {
                    m_rgb->toXml(rgb, _outStream);;
                }
            
                if (m_has_hsl)
                {
                    m_rgb->toXml(hsl, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLByAnimateColorTransform& default_instance(){

    if (!CT_TLByAnimateColorTransform::default_instance_)
    {
        CT_TLByAnimateColorTransform::default_instance_ = new CT_TLByAnimateColorTransform();
    }
    return *CT_TLByAnimateColorTransform::default_instance_;

        }

    private:
        bool m_has_rgb ;
        CT_TLByRgbColorTransform* m_rgb ;
        bool m_has_hsl ;
        CT_TLByHslColorTransform* m_hsl ;
        static CT_TLByAnimateColorTransform* default_instance_ ;

    }

    class CT_TLAnimateColorBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_by(){

            return m_has_by;
        
        }
        CT_TLByAnimateColorTransform* mutable_by(){

                m_has_by = true;
                if (!m_by)
                {
                    m_by = new CT_TLByAnimateColorTransform();
                }
                return m_by;
            
        }
        const CT_TLByAnimateColorTransform& by(){

            if (m_by)
            {
                return *m_by;
            }
            return CT_TLByAnimateColorTransform::default_instance();
        
        }
        bool has_from(){

            return m_has_from;
        
        }
        ns_a::CT_Color* mutable_from(){

                m_has_from = true;
                if (!m_from)
                {
                    m_from = new ns_a::CT_Color();
                }
                return m_from;
            
        }
        const ns_a::CT_Color& from(){

            if (m_from)
            {
                return *m_from;
            }
            return ns_a::CT_Color::default_instance();
        
        }
        bool has_to(){

            return m_has_to;
        
        }
        ns_a::CT_Color* mutable_to(){

                m_has_to = true;
                if (!m_to)
                {
                    m_to = new ns_a::CT_Color();
                }
                return m_to;
            
        }
        const ns_a::CT_Color& to(){

            if (m_to)
            {
                return *m_to;
            }
            return ns_a::CT_Color::default_instance();
        
        }
        void clear(){

                m_has_clrSpc_attr = false;
                
        if (m_clrSpc_attr)
        {
            delete m_clrSpc_attr;
            m_clrSpc_attr = NULL;
        }
    
            
                m_has_dir_attr = false;
                
        if (m_dir_attr)
        {
            delete m_dir_attr;
            m_dir_attr = NULL;
        }
    
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_by = false;
                
        if (m_by)
        {
            delete m_by;
            m_by = NULL;
        }
    
            
                m_has_from = false;
                
        if (m_from)
        {
            delete m_from;
            m_from = NULL;
        }
    
            
                m_has_to = false;
                
        if (m_to)
        {
            delete m_to;
            m_to = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_clrSpc_attr->toXml(_attrName, _outStream);
m_dir_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_by)
                {
                    m_cBhvr->toXml(by, _outStream);;
                }
            
                if (m_has_from)
                {
                    m_cBhvr->toXml(from, _outStream);;
                }
            
                if (m_has_to)
                {
                    m_cBhvr->toXml(to, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateColorBehavior& default_instance(){

    if (!CT_TLAnimateColorBehavior::default_instance_)
    {
        CT_TLAnimateColorBehavior::default_instance_ = new CT_TLAnimateColorBehavior();
    }
    return *CT_TLAnimateColorBehavior::default_instance_;

        }
        bool has_clrSpc_attr(){

            return m_has_clrSpc_attr;
        
        }
        void set_clrSpc_attr(const ST_TLAnimateColorSpace& _clrSpc_attr ){

            m_has_clrSpc_attr = true;
            m_clrSpc_attr = new ST_TLAnimateColorSpace(_clrSpc_attr);
        
        }
        const ST_TLAnimateColorSpace& clrSpc_attr(){

            if (m_clrSpc_attr)
            {
                return *m_clrSpc_attr;
            }
            return ST_TLAnimateColorSpace::default_instance();
        
        }
        bool has_dir_attr(){

            return m_has_dir_attr;
        
        }
        void set_dir_attr(const ST_TLAnimateColorDirection& _dir_attr ){

            m_has_dir_attr = true;
            m_dir_attr = new ST_TLAnimateColorDirection(_dir_attr);
        
        }
        const ST_TLAnimateColorDirection& dir_attr(){

            if (m_dir_attr)
            {
                return *m_dir_attr;
            }
            return ST_TLAnimateColorDirection::default_instance();
        
        }

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
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_progress(){

            return m_has_progress;
        
        }
        CT_TLAnimVariant* mutable_progress(){

                m_has_progress = true;
                if (!m_progress)
                {
                    m_progress = new CT_TLAnimVariant();
                }
                return m_progress;
            
        }
        const CT_TLAnimVariant& progress(){

            if (m_progress)
            {
                return *m_progress;
            }
            return CT_TLAnimVariant::default_instance();
        
        }
        void clear(){

                m_has_transition_attr = false;
                
        if (m_transition_attr)
        {
            delete m_transition_attr;
            m_transition_attr = NULL;
        }
    
            
                m_has_filter_attr = false;
                m_filter_attr.clear();
            
                m_has_prLst_attr = false;
                m_prLst_attr.clear();
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_progress = false;
                
        if (m_progress)
        {
            delete m_progress;
            m_progress = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_transition_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_filter_attr << \\\;
_outStream << _attrName << \=\\ << m_prLst_attr << \\\;
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_progress)
                {
                    m_cBhvr->toXml(progress, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateEffectBehavior& default_instance(){

    if (!CT_TLAnimateEffectBehavior::default_instance_)
    {
        CT_TLAnimateEffectBehavior::default_instance_ = new CT_TLAnimateEffectBehavior();
    }
    return *CT_TLAnimateEffectBehavior::default_instance_;

        }
        bool has_transition_attr(){

            return m_has_transition_attr;
        
        }
        void set_transition_attr(const ST_TLAnimateEffectTransition& _transition_attr ){

            m_has_transition_attr = true;
            m_transition_attr = new ST_TLAnimateEffectTransition(_transition_attr);
        
        }
        const ST_TLAnimateEffectTransition& transition_attr(){

            if (m_transition_attr)
            {
                return *m_transition_attr;
            }
            return ST_TLAnimateEffectTransition::default_instance();
        
        }
        bool has_filter_attr(){

            return m_has_filter_attr;
        
        }
        void set_filter_attr(const string& _filter_attr ){

        m_has_filter_attr = true;
        m_filter_attr = _filter_attr;
        
        }
        const string& filter_attr(){

            return type: \string\nname: \m_filter_attr\n;
        
        }
        bool has_prLst_attr(){

            return m_has_prLst_attr;
        
        }
        void set_prLst_attr(const string& _prLst_attr ){

        m_has_prLst_attr = true;
        m_prLst_attr = _prLst_attr;
        
        }
        const string& prLst_attr(){

            return type: \string\nname: \m_prLst_attr\n;
        
        }

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
        void clear(){

                m_has_x_attr = false;
                
        if (m_x_attr)
        {
            delete m_x_attr;
            m_x_attr = NULL;
        }
    
            
                m_has_y_attr = false;
                
        if (m_y_attr)
        {
            delete m_y_attr;
            m_y_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_x_attr->toXml(_attrName, _outStream);
m_y_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLPoint& default_instance(){

    if (!CT_TLPoint::default_instance_)
    {
        CT_TLPoint::default_instance_ = new CT_TLPoint();
    }
    return *CT_TLPoint::default_instance_;

        }
        bool has_x_attr(){

            return m_has_x_attr;
        
        }
        void set_x_attr(const ns_a::ST_Percentage& _x_attr ){

            m_has_x_attr = true;
            m_x_attr = new ns_a::ST_Percentage(_x_attr);
        
        }
        const ns_a::ST_Percentage& x_attr(){

            if (m_x_attr)
            {
                return *m_x_attr;
            }
            return ns_a::ST_Percentage::default_instance();
        
        }
        bool has_y_attr(){

            return m_has_y_attr;
        
        }
        void set_y_attr(const ns_a::ST_Percentage& _y_attr ){

            m_has_y_attr = true;
            m_y_attr = new ns_a::ST_Percentage(_y_attr);
        
        }
        const ns_a::ST_Percentage& y_attr(){

            if (m_y_attr)
            {
                return *m_y_attr;
            }
            return ns_a::ST_Percentage::default_instance();
        
        }

    private:
        static CT_TLPoint* default_instance_ ;
        bool m_has_x_attr ;
        ns_a::ST_Percentage* m_x_attr ;
        bool m_has_y_attr ;
        ns_a::ST_Percentage* m_y_attr ;

    }

    class CT_TLAnimateMotionBehavior : public XSD::ComplexType{
    public:
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_by(){

            return m_has_by;
        
        }
        CT_TLPoint* mutable_by(){

                m_has_by = true;
                if (!m_by)
                {
                    m_by = new CT_TLPoint();
                }
                return m_by;
            
        }
        const CT_TLPoint& by(){

            if (m_by)
            {
                return *m_by;
            }
            return CT_TLPoint::default_instance();
        
        }
        bool has_from(){

            return m_has_from;
        
        }
        CT_TLPoint* mutable_from(){

                m_has_from = true;
                if (!m_from)
                {
                    m_from = new CT_TLPoint();
                }
                return m_from;
            
        }
        const CT_TLPoint& from(){

            if (m_from)
            {
                return *m_from;
            }
            return CT_TLPoint::default_instance();
        
        }
        bool has_to(){

            return m_has_to;
        
        }
        CT_TLPoint* mutable_to(){

                m_has_to = true;
                if (!m_to)
                {
                    m_to = new CT_TLPoint();
                }
                return m_to;
            
        }
        const CT_TLPoint& to(){

            if (m_to)
            {
                return *m_to;
            }
            return CT_TLPoint::default_instance();
        
        }
        bool has_rCtr(){

            return m_has_rCtr;
        
        }
        CT_TLPoint* mutable_rCtr(){

                m_has_rCtr = true;
                if (!m_rCtr)
                {
                    m_rCtr = new CT_TLPoint();
                }
                return m_rCtr;
            
        }
        const CT_TLPoint& rCtr(){

            if (m_rCtr)
            {
                return *m_rCtr;
            }
            return CT_TLPoint::default_instance();
        
        }
        void clear(){

                m_has_origin_attr = false;
                
        if (m_origin_attr)
        {
            delete m_origin_attr;
            m_origin_attr = NULL;
        }
    
            
                m_has_path_attr = false;
                m_path_attr.clear();
            
                m_has_pathEditMode_attr = false;
                
        if (m_pathEditMode_attr)
        {
            delete m_pathEditMode_attr;
            m_pathEditMode_attr = NULL;
        }
    
            
                m_has_rAng_attr = false;
                
        if (m_rAng_attr)
        {
            delete m_rAng_attr;
            m_rAng_attr = NULL;
        }
    
            
                m_has_ptsTypes_attr = false;
                m_ptsTypes_attr.clear();
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_by = false;
                
        if (m_by)
        {
            delete m_by;
            m_by = NULL;
        }
    
            
                m_has_from = false;
                
        if (m_from)
        {
            delete m_from;
            m_from = NULL;
        }
    
            
                m_has_to = false;
                
        if (m_to)
        {
            delete m_to;
            m_to = NULL;
        }
    
            
                m_has_rCtr = false;
                
        if (m_rCtr)
        {
            delete m_rCtr;
            m_rCtr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_origin_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_path_attr << \\\;
m_pathEditMode_attr->toXml(_attrName, _outStream);
m_rAng_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_ptsTypes_attr << \\\;
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_by)
                {
                    m_cBhvr->toXml(by, _outStream);;
                }
            
                if (m_has_from)
                {
                    m_cBhvr->toXml(from, _outStream);;
                }
            
                if (m_has_to)
                {
                    m_cBhvr->toXml(to, _outStream);;
                }
            
                if (m_has_rCtr)
                {
                    m_cBhvr->toXml(rCtr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateMotionBehavior& default_instance(){

    if (!CT_TLAnimateMotionBehavior::default_instance_)
    {
        CT_TLAnimateMotionBehavior::default_instance_ = new CT_TLAnimateMotionBehavior();
    }
    return *CT_TLAnimateMotionBehavior::default_instance_;

        }
        bool has_origin_attr(){

            return m_has_origin_attr;
        
        }
        void set_origin_attr(const ST_TLAnimateMotionBehaviorOrigin& _origin_attr ){

            m_has_origin_attr = true;
            m_origin_attr = new ST_TLAnimateMotionBehaviorOrigin(_origin_attr);
        
        }
        const ST_TLAnimateMotionBehaviorOrigin& origin_attr(){

            if (m_origin_attr)
            {
                return *m_origin_attr;
            }
            return ST_TLAnimateMotionBehaviorOrigin::default_instance();
        
        }
        bool has_path_attr(){

            return m_has_path_attr;
        
        }
        void set_path_attr(const string& _path_attr ){

        m_has_path_attr = true;
        m_path_attr = _path_attr;
        
        }
        const string& path_attr(){

            return type: \string\nname: \m_path_attr\n;
        
        }
        bool has_pathEditMode_attr(){

            return m_has_pathEditMode_attr;
        
        }
        void set_pathEditMode_attr(const ST_TLAnimateMotionPathEditMode& _pathEditMode_attr ){

            m_has_pathEditMode_attr = true;
            m_pathEditMode_attr = new ST_TLAnimateMotionPathEditMode(_pathEditMode_attr);
        
        }
        const ST_TLAnimateMotionPathEditMode& pathEditMode_attr(){

            if (m_pathEditMode_attr)
            {
                return *m_pathEditMode_attr;
            }
            return ST_TLAnimateMotionPathEditMode::default_instance();
        
        }
        bool has_rAng_attr(){

            return m_has_rAng_attr;
        
        }
        void set_rAng_attr(const ns_a::ST_Angle& _rAng_attr ){

            m_has_rAng_attr = true;
            m_rAng_attr = new ns_a::ST_Angle(_rAng_attr);
        
        }
        const ns_a::ST_Angle& rAng_attr(){

            if (m_rAng_attr)
            {
                return *m_rAng_attr;
            }
            return ns_a::ST_Angle::default_instance();
        
        }
        bool has_ptsTypes_attr(){

            return m_has_ptsTypes_attr;
        
        }
        void set_ptsTypes_attr(const string& _ptsTypes_attr ){

        m_has_ptsTypes_attr = true;
        m_ptsTypes_attr = _ptsTypes_attr;
        
        }
        const string& ptsTypes_attr(){

            return type: \string\nname: \m_ptsTypes_attr\n;
        
        }

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
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        void clear(){

                m_has_by_attr = false;
                
        if (m_by_attr)
        {
            delete m_by_attr;
            m_by_attr = NULL;
        }
    
            
                m_has_from_attr = false;
                
        if (m_from_attr)
        {
            delete m_from_attr;
            m_from_attr = NULL;
        }
    
            
                m_has_to_attr = false;
                
        if (m_to_attr)
        {
            delete m_to_attr;
            m_to_attr = NULL;
        }
    
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_by_attr->toXml(_attrName, _outStream);
m_from_attr->toXml(_attrName, _outStream);
m_to_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateRotationBehavior& default_instance(){

    if (!CT_TLAnimateRotationBehavior::default_instance_)
    {
        CT_TLAnimateRotationBehavior::default_instance_ = new CT_TLAnimateRotationBehavior();
    }
    return *CT_TLAnimateRotationBehavior::default_instance_;

        }
        bool has_by_attr(){

            return m_has_by_attr;
        
        }
        void set_by_attr(const ns_a::ST_Angle& _by_attr ){

            m_has_by_attr = true;
            m_by_attr = new ns_a::ST_Angle(_by_attr);
        
        }
        const ns_a::ST_Angle& by_attr(){

            if (m_by_attr)
            {
                return *m_by_attr;
            }
            return ns_a::ST_Angle::default_instance();
        
        }
        bool has_from_attr(){

            return m_has_from_attr;
        
        }
        void set_from_attr(const ns_a::ST_Angle& _from_attr ){

            m_has_from_attr = true;
            m_from_attr = new ns_a::ST_Angle(_from_attr);
        
        }
        const ns_a::ST_Angle& from_attr(){

            if (m_from_attr)
            {
                return *m_from_attr;
            }
            return ns_a::ST_Angle::default_instance();
        
        }
        bool has_to_attr(){

            return m_has_to_attr;
        
        }
        void set_to_attr(const ns_a::ST_Angle& _to_attr ){

            m_has_to_attr = true;
            m_to_attr = new ns_a::ST_Angle(_to_attr);
        
        }
        const ns_a::ST_Angle& to_attr(){

            if (m_to_attr)
            {
                return *m_to_attr;
            }
            return ns_a::ST_Angle::default_instance();
        
        }

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
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_by(){

            return m_has_by;
        
        }
        CT_TLPoint* mutable_by(){

                m_has_by = true;
                if (!m_by)
                {
                    m_by = new CT_TLPoint();
                }
                return m_by;
            
        }
        const CT_TLPoint& by(){

            if (m_by)
            {
                return *m_by;
            }
            return CT_TLPoint::default_instance();
        
        }
        bool has_from(){

            return m_has_from;
        
        }
        CT_TLPoint* mutable_from(){

                m_has_from = true;
                if (!m_from)
                {
                    m_from = new CT_TLPoint();
                }
                return m_from;
            
        }
        const CT_TLPoint& from(){

            if (m_from)
            {
                return *m_from;
            }
            return CT_TLPoint::default_instance();
        
        }
        bool has_to(){

            return m_has_to;
        
        }
        CT_TLPoint* mutable_to(){

                m_has_to = true;
                if (!m_to)
                {
                    m_to = new CT_TLPoint();
                }
                return m_to;
            
        }
        const CT_TLPoint& to(){

            if (m_to)
            {
                return *m_to;
            }
            return CT_TLPoint::default_instance();
        
        }
        void clear(){

                m_has_zoomContents_attr = false;
                m_zoomContents_attr = false;
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_by = false;
                
        if (m_by)
        {
            delete m_by;
            m_by = NULL;
        }
    
            
                m_has_from = false;
                
        if (m_from)
        {
            delete m_from;
            m_from = NULL;
        }
    
            
                m_has_to = false;
                
        if (m_to)
        {
            delete m_to;
            m_to = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_zoomContents_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_by)
                {
                    m_cBhvr->toXml(by, _outStream);;
                }
            
                if (m_has_from)
                {
                    m_cBhvr->toXml(from, _outStream);;
                }
            
                if (m_has_to)
                {
                    m_cBhvr->toXml(to, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLAnimateScaleBehavior& default_instance(){

    if (!CT_TLAnimateScaleBehavior::default_instance_)
    {
        CT_TLAnimateScaleBehavior::default_instance_ = new CT_TLAnimateScaleBehavior();
    }
    return *CT_TLAnimateScaleBehavior::default_instance_;

        }
        bool has_zoomContents_attr(){

            return m_has_zoomContents_attr;
        
        }
        void set_zoomContents_attr(const boolean& _zoomContents_attr ){

        m_has_zoomContents_attr = true;
        m_zoomContents_attr = _zoomContents_attr;
        
        }
        const boolean& zoomContents_attr(){

            return type: oolean\nname: \m_zoomContents_attr\n;
        
        }

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
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_cmd_attr = false;
                m_cmd_attr.clear();
            
                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_cmd_attr << \\\;
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLCommandBehavior& default_instance(){

    if (!CT_TLCommandBehavior::default_instance_)
    {
        CT_TLCommandBehavior::default_instance_ = new CT_TLCommandBehavior();
    }
    return *CT_TLCommandBehavior::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_TLCommandType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_TLCommandType(_type_attr);
        
        }
        const ST_TLCommandType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_TLCommandType::default_instance();
        
        }
        bool has_cmd_attr(){

            return m_has_cmd_attr;
        
        }
        void set_cmd_attr(const string& _cmd_attr ){

        m_has_cmd_attr = true;
        m_cmd_attr = _cmd_attr;
        
        }
        const string& cmd_attr(){

            return type: \string\nname: \m_cmd_attr\n;
        
        }

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
        bool has_cBhvr(){

            return m_has_cBhvr;
        
        }
        CT_TLCommonBehaviorData* mutable_cBhvr(){

                m_has_cBhvr = true;
                if (!m_cBhvr)
                {
                    m_cBhvr = new CT_TLCommonBehaviorData();
                }
                return m_cBhvr;
            
        }
        const CT_TLCommonBehaviorData& cBhvr(){

            if (m_cBhvr)
            {
                return *m_cBhvr;
            }
            return CT_TLCommonBehaviorData::default_instance();
        
        }
        bool has_to(){

            return m_has_to;
        
        }
        CT_TLAnimVariant* mutable_to(){

                m_has_to = true;
                if (!m_to)
                {
                    m_to = new CT_TLAnimVariant();
                }
                return m_to;
            
        }
        const CT_TLAnimVariant& to(){

            if (m_to)
            {
                return *m_to;
            }
            return CT_TLAnimVariant::default_instance();
        
        }
        void clear(){

                m_has_cBhvr = false;
                
        if (m_cBhvr)
        {
            delete m_cBhvr;
            m_cBhvr = NULL;
        }
    
            
                m_has_to = false;
                
        if (m_to)
        {
            delete m_to;
            m_to = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cBhvr)
                {
                    m_cBhvr->toXml(cBhvr, _outStream);;
                }
            
                if (m_has_to)
                {
                    m_cBhvr->toXml(to, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLSetBehavior& default_instance(){

    if (!CT_TLSetBehavior::default_instance_)
    {
        CT_TLSetBehavior::default_instance_ = new CT_TLSetBehavior();
    }
    return *CT_TLSetBehavior::default_instance_;

        }

    private:
        bool m_has_cBhvr ;
        CT_TLCommonBehaviorData* m_cBhvr ;
        bool m_has_to ;
        CT_TLAnimVariant* m_to ;
        static CT_TLSetBehavior* default_instance_ ;

    }

    class CT_TLCommonMediaNodeData : public XSD::ComplexType{
    public:
        bool has_cTn(){

            return m_has_cTn;
        
        }
        CT_TLCommonTimeNodeData* mutable_cTn(){

                m_has_cTn = true;
                if (!m_cTn)
                {
                    m_cTn = new CT_TLCommonTimeNodeData();
                }
                return m_cTn;
            
        }
        const CT_TLCommonTimeNodeData& cTn(){

            if (m_cTn)
            {
                return *m_cTn;
            }
            return CT_TLCommonTimeNodeData::default_instance();
        
        }
        bool has_tgtEl(){

            return m_has_tgtEl;
        
        }
        CT_TLTimeTargetElement* mutable_tgtEl(){

                m_has_tgtEl = true;
                if (!m_tgtEl)
                {
                    m_tgtEl = new CT_TLTimeTargetElement();
                }
                return m_tgtEl;
            
        }
        const CT_TLTimeTargetElement& tgtEl(){

            if (m_tgtEl)
            {
                return *m_tgtEl;
            }
            return CT_TLTimeTargetElement::default_instance();
        
        }
        void clear(){

                m_has_vol_attr = false;
                
        if (m_vol_attr)
        {
            delete m_vol_attr;
            m_vol_attr = NULL;
        }
    
            
                m_has_mute_attr = false;
                m_mute_attr = false;
            
                m_has_numSld_attr = false;
                m_numSld_attr = 0;
            
                m_has_showWhenStopped_attr = false;
                m_showWhenStopped_attr = false;
            
                m_has_cTn = false;
                
        if (m_cTn)
        {
            delete m_cTn;
            m_cTn = NULL;
        }
    
            
                m_has_tgtEl = false;
                
        if (m_tgtEl)
        {
            delete m_tgtEl;
            m_tgtEl = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_vol_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_mute_attr) << \\\;
_outStream << _attrName << \=\\ << m_numSld_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showWhenStopped_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cTn)
                {
                    m_cTn->toXml(cTn, _outStream);;
                }
            
                if (m_has_tgtEl)
                {
                    m_cTn->toXml(tgtEl, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLCommonMediaNodeData& default_instance(){

    if (!CT_TLCommonMediaNodeData::default_instance_)
    {
        CT_TLCommonMediaNodeData::default_instance_ = new CT_TLCommonMediaNodeData();
    }
    return *CT_TLCommonMediaNodeData::default_instance_;

        }
        bool has_vol_attr(){

            return m_has_vol_attr;
        
        }
        void set_vol_attr(const ns_a::ST_PositiveFixedPercentage& _vol_attr ){

            m_has_vol_attr = true;
            m_vol_attr = new ns_a::ST_PositiveFixedPercentage(_vol_attr);
        
        }
        const ns_a::ST_PositiveFixedPercentage& vol_attr(){

            if (m_vol_attr)
            {
                return *m_vol_attr;
            }
            return ns_a::ST_PositiveFixedPercentage::default_instance();
        
        }
        bool has_mute_attr(){

            return m_has_mute_attr;
        
        }
        void set_mute_attr(const boolean& _mute_attr ){

        m_has_mute_attr = true;
        m_mute_attr = _mute_attr;
        
        }
        const boolean& mute_attr(){

            return type: oolean\nname: \m_mute_attr\n;
        
        }
        bool has_numSld_attr(){

            return m_has_numSld_attr;
        
        }
        void set_numSld_attr(const unsignedInt& _numSld_attr ){

        m_has_numSld_attr = true;
        m_numSld_attr = _numSld_attr;
        
        }
        const unsignedInt& numSld_attr(){

            return type: \unsignedInt\nname: \m_numSld_attr\n;
        
        }
        bool has_showWhenStopped_attr(){

            return m_has_showWhenStopped_attr;
        
        }
        void set_showWhenStopped_attr(const boolean& _showWhenStopped_attr ){

        m_has_showWhenStopped_attr = true;
        m_showWhenStopped_attr = _showWhenStopped_attr;
        
        }
        const boolean& showWhenStopped_attr(){

            return type: oolean\nname: \m_showWhenStopped_attr\n;
        
        }

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
        bool has_cMediaNode(){

            return m_has_cMediaNode;
        
        }
        CT_TLCommonMediaNodeData* mutable_cMediaNode(){

                m_has_cMediaNode = true;
                if (!m_cMediaNode)
                {
                    m_cMediaNode = new CT_TLCommonMediaNodeData();
                }
                return m_cMediaNode;
            
        }
        const CT_TLCommonMediaNodeData& cMediaNode(){

            if (m_cMediaNode)
            {
                return *m_cMediaNode;
            }
            return CT_TLCommonMediaNodeData::default_instance();
        
        }
        void clear(){

                m_has_isNarration_attr = false;
                m_isNarration_attr = false;
            
                m_has_cMediaNode = false;
                
        if (m_cMediaNode)
        {
            delete m_cMediaNode;
            m_cMediaNode = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_isNarration_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cMediaNode)
                {
                    m_cMediaNode->toXml(cMediaNode, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLMediaNodeAudio& default_instance(){

    if (!CT_TLMediaNodeAudio::default_instance_)
    {
        CT_TLMediaNodeAudio::default_instance_ = new CT_TLMediaNodeAudio();
    }
    return *CT_TLMediaNodeAudio::default_instance_;

        }
        bool has_isNarration_attr(){

            return m_has_isNarration_attr;
        
        }
        void set_isNarration_attr(const boolean& _isNarration_attr ){

        m_has_isNarration_attr = true;
        m_isNarration_attr = _isNarration_attr;
        
        }
        const boolean& isNarration_attr(){

            return type: oolean\nname: \m_isNarration_attr\n;
        
        }

    private:
        bool m_has_cMediaNode ;
        CT_TLCommonMediaNodeData* m_cMediaNode ;
        static CT_TLMediaNodeAudio* default_instance_ ;
        bool m_has_isNarration_attr ;
        boolean m_isNarration_attr ;

    }

    class CT_TLMediaNodeVideo : public XSD::ComplexType{
    public:
        bool has_cMediaNode(){

            return m_has_cMediaNode;
        
        }
        CT_TLCommonMediaNodeData* mutable_cMediaNode(){

                m_has_cMediaNode = true;
                if (!m_cMediaNode)
                {
                    m_cMediaNode = new CT_TLCommonMediaNodeData();
                }
                return m_cMediaNode;
            
        }
        const CT_TLCommonMediaNodeData& cMediaNode(){

            if (m_cMediaNode)
            {
                return *m_cMediaNode;
            }
            return CT_TLCommonMediaNodeData::default_instance();
        
        }
        void clear(){

                m_has_fullScrn_attr = false;
                m_fullScrn_attr = false;
            
                m_has_cMediaNode = false;
                
        if (m_cMediaNode)
        {
            delete m_cMediaNode;
            m_cMediaNode = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_fullScrn_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cMediaNode)
                {
                    m_cMediaNode->toXml(cMediaNode, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLMediaNodeVideo& default_instance(){

    if (!CT_TLMediaNodeVideo::default_instance_)
    {
        CT_TLMediaNodeVideo::default_instance_ = new CT_TLMediaNodeVideo();
    }
    return *CT_TLMediaNodeVideo::default_instance_;

        }
        bool has_fullScrn_attr(){

            return m_has_fullScrn_attr;
        
        }
        void set_fullScrn_attr(const boolean& _fullScrn_attr ){

        m_has_fullScrn_attr = true;
        m_fullScrn_attr = _fullScrn_attr;
        
        }
        const boolean& fullScrn_attr(){

            return type: oolean\nname: \m_fullScrn_attr\n;
        
        }

    private:
        bool m_has_cMediaNode ;
        CT_TLCommonMediaNodeData* m_cMediaNode ;
        static CT_TLMediaNodeVideo* default_instance_ ;
        bool m_has_fullScrn_attr ;
        boolean m_fullScrn_attr ;

    }

    class CT_TLTemplate : public XSD::ComplexType{
    public:
        bool has_tnLst(){

            return m_has_tnLst;
        
        }
        CT_TimeNodeList* mutable_tnLst(){

                m_has_tnLst = true;
                if (!m_tnLst)
                {
                    m_tnLst = new CT_TimeNodeList();
                }
                return m_tnLst;
            
        }
        const CT_TimeNodeList& tnLst(){

            if (m_tnLst)
            {
                return *m_tnLst;
            }
            return CT_TimeNodeList::default_instance();
        
        }
        void clear(){

                m_has_lvl_attr = false;
                m_lvl_attr = 0;
            
                m_has_tnLst = false;
                
        if (m_tnLst)
        {
            delete m_tnLst;
            m_tnLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lvl_attr << \\\;
        _outStream << \>\;
    
                if (m_has_tnLst)
                {
                    m_tnLst->toXml(tnLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTemplate& default_instance(){

    if (!CT_TLTemplate::default_instance_)
    {
        CT_TLTemplate::default_instance_ = new CT_TLTemplate();
    }
    return *CT_TLTemplate::default_instance_;

        }
        bool has_lvl_attr(){

            return m_has_lvl_attr;
        
        }
        void set_lvl_attr(const unsignedInt& _lvl_attr ){

        m_has_lvl_attr = true;
        m_lvl_attr = _lvl_attr;
        
        }
        const unsignedInt& lvl_attr(){

            return type: \unsignedInt\nname: \m_lvl_attr\n;
        
        }

    private:
        bool m_has_tnLst ;
        CT_TimeNodeList* m_tnLst ;
        static CT_TLTemplate* default_instance_ ;
        bool m_has_lvl_attr ;
        unsignedInt m_lvl_attr ;

    }

    class CT_TLTemplateList : public XSD::ComplexType{
    public:
        bool has_tmpl(){

            return m_has_tmpl;
        
        }
        CT_TLTemplate* mutable_tmpl(){

                m_has_tmpl = true;
                if (!m_tmpl)
                {
                    m_tmpl = new CT_TLTemplate();
                }
                return m_tmpl;
            
        }
        const CT_TLTemplate& tmpl(){

            if (m_tmpl)
            {
                return *m_tmpl;
            }
            return CT_TLTemplate::default_instance();
        
        }
        void clear(){

                m_has_tmpl = false;
                
        if (m_tmpl)
        {
            delete m_tmpl;
            m_tmpl = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_tmpl)
                {
                    m_tmpl->toXml(tmpl, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLTemplateList& default_instance(){

    if (!CT_TLTemplateList::default_instance_)
    {
        CT_TLTemplateList::default_instance_ = new CT_TLTemplateList();
    }
    return *CT_TLTemplateList::default_instance_;

        }

    private:
        bool m_has_tmpl ;
        CT_TLTemplate* m_tmpl ;
        static CT_TLTemplateList* default_instance_ ;

    }

    class CT_TLBuildParagraph : public XSD::ComplexType{
    public:
        bool has_tmplLst(){

            return m_has_tmplLst;
        
        }
        CT_TLTemplateList* mutable_tmplLst(){

                m_has_tmplLst = true;
                if (!m_tmplLst)
                {
                    m_tmplLst = new CT_TLTemplateList();
                }
                return m_tmplLst;
            
        }
        const CT_TLTemplateList& tmplLst(){

            if (m_tmplLst)
            {
                return *m_tmplLst;
            }
            return CT_TLTemplateList::default_instance();
        
        }
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_grpId_attr = false;
                m_grpId_attr = 0;
            
                m_has_uiExpand_attr = false;
                m_uiExpand_attr = false;
            
                m_has_build_attr = false;
                
        if (m_build_attr)
        {
            delete m_build_attr;
            m_build_attr = NULL;
        }
    
            
                m_has_bldLvl_attr = false;
                m_bldLvl_attr = 0;
            
                m_has_animBg_attr = false;
                m_animBg_attr = false;
            
                m_has_autoUpdateAnimBg_attr = false;
                m_autoUpdateAnimBg_attr = false;
            
                m_has_rev_attr = false;
                m_rev_attr = false;
            
                m_has_advAuto_attr = false;
                
        if (m_advAuto_attr)
        {
            delete m_advAuto_attr;
            m_advAuto_attr = NULL;
        }
    
            
                m_has_tmplLst = false;
                
        if (m_tmplLst)
        {
            delete m_tmplLst;
            m_tmplLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_grpId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_uiExpand_attr) << \\\;
m_build_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_bldLvl_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_animBg_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_autoUpdateAnimBg_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_rev_attr) << \\\;
m_advAuto_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_tmplLst)
                {
                    m_tmplLst->toXml(tmplLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLBuildParagraph& default_instance(){

    if (!CT_TLBuildParagraph::default_instance_)
    {
        CT_TLBuildParagraph::default_instance_ = new CT_TLBuildParagraph();
    }
    return *CT_TLBuildParagraph::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
        
        }
        const ns_a::ST_DrawingElementId& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_DrawingElementId::default_instance();
        
        }
        bool has_grpId_attr(){

            return m_has_grpId_attr;
        
        }
        void set_grpId_attr(const unsignedInt& _grpId_attr ){

        m_has_grpId_attr = true;
        m_grpId_attr = _grpId_attr;
        
        }
        const unsignedInt& grpId_attr(){

            return type: \unsignedInt\nname: \m_grpId_attr\n;
        
        }
        bool has_uiExpand_attr(){

            return m_has_uiExpand_attr;
        
        }
        void set_uiExpand_attr(const boolean& _uiExpand_attr ){

        m_has_uiExpand_attr = true;
        m_uiExpand_attr = _uiExpand_attr;
        
        }
        const boolean& uiExpand_attr(){

            return type: oolean\nname: \m_uiExpand_attr\n;
        
        }
        bool has_build_attr(){

            return m_has_build_attr;
        
        }
        void set_build_attr(const ST_TLParaBuildType& _build_attr ){

            m_has_build_attr = true;
            m_build_attr = new ST_TLParaBuildType(_build_attr);
        
        }
        const ST_TLParaBuildType& build_attr(){

            if (m_build_attr)
            {
                return *m_build_attr;
            }
            return ST_TLParaBuildType::default_instance();
        
        }
        bool has_bldLvl_attr(){

            return m_has_bldLvl_attr;
        
        }
        void set_bldLvl_attr(const unsignedInt& _bldLvl_attr ){

        m_has_bldLvl_attr = true;
        m_bldLvl_attr = _bldLvl_attr;
        
        }
        const unsignedInt& bldLvl_attr(){

            return type: \unsignedInt\nname: \m_bldLvl_attr\n;
        
        }
        bool has_animBg_attr(){

            return m_has_animBg_attr;
        
        }
        void set_animBg_attr(const boolean& _animBg_attr ){

        m_has_animBg_attr = true;
        m_animBg_attr = _animBg_attr;
        
        }
        const boolean& animBg_attr(){

            return type: oolean\nname: \m_animBg_attr\n;
        
        }
        bool has_autoUpdateAnimBg_attr(){

            return m_has_autoUpdateAnimBg_attr;
        
        }
        void set_autoUpdateAnimBg_attr(const boolean& _autoUpdateAnimBg_attr ){

        m_has_autoUpdateAnimBg_attr = true;
        m_autoUpdateAnimBg_attr = _autoUpdateAnimBg_attr;
        
        }
        const boolean& autoUpdateAnimBg_attr(){

            return type: oolean\nname: \m_autoUpdateAnimBg_attr\n;
        
        }
        bool has_rev_attr(){

            return m_has_rev_attr;
        
        }
        void set_rev_attr(const boolean& _rev_attr ){

        m_has_rev_attr = true;
        m_rev_attr = _rev_attr;
        
        }
        const boolean& rev_attr(){

            return type: oolean\nname: \m_rev_attr\n;
        
        }
        bool has_advAuto_attr(){

            return m_has_advAuto_attr;
        
        }
        void set_advAuto_attr(const ST_TLTime& _advAuto_attr ){

            m_has_advAuto_attr = true;
            m_advAuto_attr = new ST_TLTime(_advAuto_attr);
        
        }
        const ST_TLTime& advAuto_attr(){

            if (m_advAuto_attr)
            {
                return *m_advAuto_attr;
            }
            return ST_TLTime::default_instance();
        
        }

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
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_grpId_attr = false;
                m_grpId_attr = 0;
            
                m_has_uiExpand_attr = false;
                m_uiExpand_attr = false;
            
                m_has_bld_attr = false;
                
        if (m_bld_attr)
        {
            delete m_bld_attr;
            m_bld_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_grpId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_uiExpand_attr) << \\\;
m_bld_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLBuildDiagram& default_instance(){

    if (!CT_TLBuildDiagram::default_instance_)
    {
        CT_TLBuildDiagram::default_instance_ = new CT_TLBuildDiagram();
    }
    return *CT_TLBuildDiagram::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
        
        }
        const ns_a::ST_DrawingElementId& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_DrawingElementId::default_instance();
        
        }
        bool has_grpId_attr(){

            return m_has_grpId_attr;
        
        }
        void set_grpId_attr(const unsignedInt& _grpId_attr ){

        m_has_grpId_attr = true;
        m_grpId_attr = _grpId_attr;
        
        }
        const unsignedInt& grpId_attr(){

            return type: \unsignedInt\nname: \m_grpId_attr\n;
        
        }
        bool has_uiExpand_attr(){

            return m_has_uiExpand_attr;
        
        }
        void set_uiExpand_attr(const boolean& _uiExpand_attr ){

        m_has_uiExpand_attr = true;
        m_uiExpand_attr = _uiExpand_attr;
        
        }
        const boolean& uiExpand_attr(){

            return type: oolean\nname: \m_uiExpand_attr\n;
        
        }
        bool has_bld_attr(){

            return m_has_bld_attr;
        
        }
        void set_bld_attr(const ST_TLDiagramBuildType& _bld_attr ){

            m_has_bld_attr = true;
            m_bld_attr = new ST_TLDiagramBuildType(_bld_attr);
        
        }
        const ST_TLDiagramBuildType& bld_attr(){

            if (m_bld_attr)
            {
                return *m_bld_attr;
            }
            return ST_TLDiagramBuildType::default_instance();
        
        }

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
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_grpId_attr = false;
                m_grpId_attr = 0;
            
                m_has_uiExpand_attr = false;
                m_uiExpand_attr = false;
            
                m_has_bld_attr = false;
                
        if (m_bld_attr)
        {
            delete m_bld_attr;
            m_bld_attr = NULL;
        }
    
            
                m_has_animBg_attr = false;
                m_animBg_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_grpId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_uiExpand_attr) << \\\;
m_bld_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_animBg_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLOleBuildChart& default_instance(){

    if (!CT_TLOleBuildChart::default_instance_)
    {
        CT_TLOleBuildChart::default_instance_ = new CT_TLOleBuildChart();
    }
    return *CT_TLOleBuildChart::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
        
        }
        const ns_a::ST_DrawingElementId& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_DrawingElementId::default_instance();
        
        }
        bool has_grpId_attr(){

            return m_has_grpId_attr;
        
        }
        void set_grpId_attr(const unsignedInt& _grpId_attr ){

        m_has_grpId_attr = true;
        m_grpId_attr = _grpId_attr;
        
        }
        const unsignedInt& grpId_attr(){

            return type: \unsignedInt\nname: \m_grpId_attr\n;
        
        }
        bool has_uiExpand_attr(){

            return m_has_uiExpand_attr;
        
        }
        void set_uiExpand_attr(const boolean& _uiExpand_attr ){

        m_has_uiExpand_attr = true;
        m_uiExpand_attr = _uiExpand_attr;
        
        }
        const boolean& uiExpand_attr(){

            return type: oolean\nname: \m_uiExpand_attr\n;
        
        }
        bool has_bld_attr(){

            return m_has_bld_attr;
        
        }
        void set_bld_attr(const ST_TLOleChartBuildType& _bld_attr ){

            m_has_bld_attr = true;
            m_bld_attr = new ST_TLOleChartBuildType(_bld_attr);
        
        }
        const ST_TLOleChartBuildType& bld_attr(){

            if (m_bld_attr)
            {
                return *m_bld_attr;
            }
            return ST_TLOleChartBuildType::default_instance();
        
        }
        bool has_animBg_attr(){

            return m_has_animBg_attr;
        
        }
        void set_animBg_attr(const boolean& _animBg_attr ){

        m_has_animBg_attr = true;
        m_animBg_attr = _animBg_attr;
        
        }
        const boolean& animBg_attr(){

            return type: oolean\nname: \m_animBg_attr\n;
        
        }

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
        bool has_bldAsOne(){

            return m_has_bldAsOne;
        
        }
        CT_Empty* mutable_bldAsOne(){

                
                m_has_bldSub = false;
                
        if (m_bldSub)
        {
            delete m_bldSub;
            m_bldSub = NULL;
        }
    ;
            
                m_has_bldAsOne = true;
                if (!m_bldAsOne)
                {
                    m_bldAsOne = new CT_Empty();
                }
                return m_bldAsOne;
            
        }
        const CT_Empty& bldAsOne(){

            if (m_bldAsOne)
            {
                return *m_bldAsOne;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_bldSub(){

            return m_has_bldSub;
        
        }
        ns_a::CT_AnimationGraphicalObjectBuildProperties* mutable_bldSub(){

                
                m_has_bldAsOne = false;
                
        if (m_bldAsOne)
        {
            delete m_bldAsOne;
            m_bldAsOne = NULL;
        }
    ;
            
                m_has_bldSub = true;
                if (!m_bldSub)
                {
                    m_bldSub = new ns_a::CT_AnimationGraphicalObjectBuildProperties();
                }
                return m_bldSub;
            
        }
        const ns_a::CT_AnimationGraphicalObjectBuildProperties& bldSub(){

            if (m_bldSub)
            {
                return *m_bldSub;
            }
            return ns_a::CT_AnimationGraphicalObjectBuildProperties::default_instance();
        
        }
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_grpId_attr = false;
                m_grpId_attr = 0;
            
                m_has_uiExpand_attr = false;
                m_uiExpand_attr = false;
            
                m_has_bldAsOne = false;
                
        if (m_bldAsOne)
        {
            delete m_bldAsOne;
            m_bldAsOne = NULL;
        }
    
            
                m_has_bldSub = false;
                
        if (m_bldSub)
        {
            delete m_bldSub;
            m_bldSub = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_grpId_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_uiExpand_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_bldAsOne)
                {
                    m_bldAsOne->toXml(bldAsOne, _outStream);;
                }
            
                if (m_has_bldSub)
                {
                    m_bldAsOne->toXml(bldSub, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TLGraphicalObjectBuild& default_instance(){

    if (!CT_TLGraphicalObjectBuild::default_instance_)
    {
        CT_TLGraphicalObjectBuild::default_instance_ = new CT_TLGraphicalObjectBuild();
    }
    return *CT_TLGraphicalObjectBuild::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
        
        }
        const ns_a::ST_DrawingElementId& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_DrawingElementId::default_instance();
        
        }
        bool has_grpId_attr(){

            return m_has_grpId_attr;
        
        }
        void set_grpId_attr(const unsignedInt& _grpId_attr ){

        m_has_grpId_attr = true;
        m_grpId_attr = _grpId_attr;
        
        }
        const unsignedInt& grpId_attr(){

            return type: \unsignedInt\nname: \m_grpId_attr\n;
        
        }
        bool has_uiExpand_attr(){

            return m_has_uiExpand_attr;
        
        }
        void set_uiExpand_attr(const boolean& _uiExpand_attr ){

        m_has_uiExpand_attr = true;
        m_uiExpand_attr = _uiExpand_attr;
        
        }
        const boolean& uiExpand_attr(){

            return type: oolean\nname: \m_uiExpand_attr\n;
        
        }

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
        CT_TLBuildParagraph* add_bldP(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLBuildParagraph* pNewChild = pChildGroup->mutable_bldP();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLBuildDiagram* add_bldDgm(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLBuildDiagram* pNewChild = pChildGroup->mutable_bldDgm();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLOleBuildChart* add_bldOleChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLOleBuildChart* pNewChild = pChildGroup->mutable_bldOleChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_TLGraphicalObjectBuild* add_bldGraphic(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_TLGraphicalObjectBuild* pNewChild = pChildGroup->mutable_bldGraphic();
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
            if ((*iter)->has_bldP())
            {
                (*iter)->toXml(bldP, _outStream);
            }
            else if ((*iter)->has_bldDgm())
            {
                (*iter)->toXml(bldDgm, _outStream);
            }
            else if ((*iter)->has_bldOleChart())
            {
                (*iter)->toXml(bldOleChart, _outStream);
            }
            else if ((*iter)->has_bldGraphic())
            {
                (*iter)->toXml(bldGraphic, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BuildList& default_instance(){

    if (!CT_BuildList::default_instance_)
    {
        CT_BuildList::default_instance_ = new CT_BuildList();
    }
    return *CT_BuildList::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_BuildList* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_bldP(){

            return m_has_bldP;
        
            }
            CT_TLBuildParagraph* mutable_bldP(){

                
                m_has_bldDgm = false;
                
        if (m_bldDgm)
        {
            delete m_bldDgm;
            m_bldDgm = NULL;
        }
    ;
            
                m_has_bldOleChart = false;
                
        if (m_bldOleChart)
        {
            delete m_bldOleChart;
            m_bldOleChart = NULL;
        }
    ;
            
                m_has_bldGraphic = false;
                
        if (m_bldGraphic)
        {
            delete m_bldGraphic;
            m_bldGraphic = NULL;
        }
    ;
            
                m_has_bldP = true;
                if (!m_bldP)
                {
                    m_bldP = new CT_TLBuildParagraph();
                }
                return m_bldP;
            
            }
            const CT_TLBuildParagraph& bldP(){

            if (m_bldP)
            {
                return *m_bldP;
            }
            return CT_TLBuildParagraph::default_instance();
        
            }
            bool has_bldDgm(){

            return m_has_bldDgm;
        
            }
            CT_TLBuildDiagram* mutable_bldDgm(){

                
                m_has_bldP = false;
                
        if (m_bldP)
        {
            delete m_bldP;
            m_bldP = NULL;
        }
    ;
            
                m_has_bldOleChart = false;
                
        if (m_bldOleChart)
        {
            delete m_bldOleChart;
            m_bldOleChart = NULL;
        }
    ;
            
                m_has_bldGraphic = false;
                
        if (m_bldGraphic)
        {
            delete m_bldGraphic;
            m_bldGraphic = NULL;
        }
    ;
            
                m_has_bldDgm = true;
                if (!m_bldDgm)
                {
                    m_bldDgm = new CT_TLBuildDiagram();
                }
                return m_bldDgm;
            
            }
            const CT_TLBuildDiagram& bldDgm(){

            if (m_bldDgm)
            {
                return *m_bldDgm;
            }
            return CT_TLBuildDiagram::default_instance();
        
            }
            bool has_bldOleChart(){

            return m_has_bldOleChart;
        
            }
            CT_TLOleBuildChart* mutable_bldOleChart(){

                
                m_has_bldP = false;
                
        if (m_bldP)
        {
            delete m_bldP;
            m_bldP = NULL;
        }
    ;
            
                m_has_bldDgm = false;
                
        if (m_bldDgm)
        {
            delete m_bldDgm;
            m_bldDgm = NULL;
        }
    ;
            
                m_has_bldGraphic = false;
                
        if (m_bldGraphic)
        {
            delete m_bldGraphic;
            m_bldGraphic = NULL;
        }
    ;
            
                m_has_bldOleChart = true;
                if (!m_bldOleChart)
                {
                    m_bldOleChart = new CT_TLOleBuildChart();
                }
                return m_bldOleChart;
            
            }
            const CT_TLOleBuildChart& bldOleChart(){

            if (m_bldOleChart)
            {
                return *m_bldOleChart;
            }
            return CT_TLOleBuildChart::default_instance();
        
            }
            bool has_bldGraphic(){

            return m_has_bldGraphic;
        
            }
            CT_TLGraphicalObjectBuild* mutable_bldGraphic(){

                
                m_has_bldP = false;
                
        if (m_bldP)
        {
            delete m_bldP;
            m_bldP = NULL;
        }
    ;
            
                m_has_bldDgm = false;
                
        if (m_bldDgm)
        {
            delete m_bldDgm;
            m_bldDgm = NULL;
        }
    ;
            
                m_has_bldOleChart = false;
                
        if (m_bldOleChart)
        {
            delete m_bldOleChart;
            m_bldOleChart = NULL;
        }
    ;
            
                m_has_bldGraphic = true;
                if (!m_bldGraphic)
                {
                    m_bldGraphic = new CT_TLGraphicalObjectBuild();
                }
                return m_bldGraphic;
            
            }
            const CT_TLGraphicalObjectBuild& bldGraphic(){

            if (m_bldGraphic)
            {
                return *m_bldGraphic;
            }
            return CT_TLGraphicalObjectBuild::default_instance();
        
            }

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
        bool has_tnLst(){

            return m_has_tnLst;
        
        }
        CT_TimeNodeList* mutable_tnLst(){

                m_has_tnLst = true;
                if (!m_tnLst)
                {
                    m_tnLst = new CT_TimeNodeList();
                }
                return m_tnLst;
            
        }
        const CT_TimeNodeList& tnLst(){

            if (m_tnLst)
            {
                return *m_tnLst;
            }
            return CT_TimeNodeList::default_instance();
        
        }
        bool has_bldLst(){

            return m_has_bldLst;
        
        }
        CT_BuildList* mutable_bldLst(){

                m_has_bldLst = true;
                if (!m_bldLst)
                {
                    m_bldLst = new CT_BuildList();
                }
                return m_bldLst;
            
        }
        const CT_BuildList& bldLst(){

            if (m_bldLst)
            {
                return *m_bldLst;
            }
            return CT_BuildList::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_tnLst = false;
                
        if (m_tnLst)
        {
            delete m_tnLst;
            m_tnLst = NULL;
        }
    
            
                m_has_bldLst = false;
                
        if (m_bldLst)
        {
            delete m_bldLst;
            m_bldLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_tnLst)
                {
                    m_tnLst->toXml(tnLst, _outStream);;
                }
            
                if (m_has_bldLst)
                {
                    m_tnLst->toXml(bldLst, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_tnLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideTiming& default_instance(){

    if (!CT_SlideTiming::default_instance_)
    {
        CT_SlideTiming::default_instance_ = new CT_SlideTiming();
    }
    return *CT_SlideTiming::default_instance_;

        }

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
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Empty& default_instance(){

    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;

        }

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_IndexRange : public XSD::ComplexType{
    public:
        void clear(){

                m_has_st_attr = false;
                
        if (m_st_attr)
        {
            delete m_st_attr;
            m_st_attr = NULL;
        }
    
            
                m_has_end_attr = false;
                
        if (m_end_attr)
        {
            delete m_end_attr;
            m_end_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_st_attr->toXml(_attrName, _outStream);
m_end_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_IndexRange& default_instance(){

    if (!CT_IndexRange::default_instance_)
    {
        CT_IndexRange::default_instance_ = new CT_IndexRange();
    }
    return *CT_IndexRange::default_instance_;

        }
        bool has_st_attr(){

            return m_has_st_attr;
        
        }
        void set_st_attr(const ST_Index& _st_attr ){

            m_has_st_attr = true;
            m_st_attr = new ST_Index(_st_attr);
        
        }
        const ST_Index& st_attr(){

            if (m_st_attr)
            {
                return *m_st_attr;
            }
            return ST_Index::default_instance();
        
        }
        bool has_end_attr(){

            return m_has_end_attr;
        
        }
        void set_end_attr(const ST_Index& _end_attr ){

            m_has_end_attr = true;
            m_end_attr = new ST_Index(_end_attr);
        
        }
        const ST_Index& end_attr(){

            if (m_end_attr)
            {
                return *m_end_attr;
            }
            return ST_Index::default_instance();
        
        }

    private:
        static CT_IndexRange* default_instance_ ;
        bool m_has_st_attr ;
        ST_Index* m_st_attr ;
        bool m_has_end_attr ;
        ST_Index* m_end_attr ;

    }

    class CT_SlideRelationshipListEntry : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideRelationshipListEntry& default_instance(){

    if (!CT_SlideRelationshipListEntry::default_instance_)
    {
        CT_SlideRelationshipListEntry::default_instance_ = new CT_SlideRelationshipListEntry();
    }
    return *CT_SlideRelationshipListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_SlideRelationshipListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_SlideRelationshipList : public XSD::ComplexType{
    public:
        bool has_sld(){

            return m_has_sld;
        
        }
        CT_SlideRelationshipListEntry* mutable_sld(){

                m_has_sld = true;
                if (!m_sld)
                {
                    m_sld = new CT_SlideRelationshipListEntry();
                }
                return m_sld;
            
        }
        const CT_SlideRelationshipListEntry& sld(){

            if (m_sld)
            {
                return *m_sld;
            }
            return CT_SlideRelationshipListEntry::default_instance();
        
        }
        void clear(){

                m_has_sld = false;
                
        if (m_sld)
        {
            delete m_sld;
            m_sld = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sld)
                {
                    m_sld->toXml(sld, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideRelationshipList& default_instance(){

    if (!CT_SlideRelationshipList::default_instance_)
    {
        CT_SlideRelationshipList::default_instance_ = new CT_SlideRelationshipList();
    }
    return *CT_SlideRelationshipList::default_instance_;

        }

    private:
        bool m_has_sld ;
        CT_SlideRelationshipListEntry* m_sld ;
        static CT_SlideRelationshipList* default_instance_ ;

    }

    class CT_CustomShowId : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                m_id_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustomShowId& default_instance(){

    if (!CT_CustomShowId::default_instance_)
    {
        CT_CustomShowId::default_instance_ = new CT_CustomShowId();
    }
    return *CT_CustomShowId::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const unsignedInt& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const unsignedInt& id_attr(){

            return type: \unsignedInt\nname: \m_id_attr\n;
        
        }

    private:
        static CT_CustomShowId* default_instance_ ;
        bool m_has_id_attr ;
        unsignedInt m_id_attr ;

    }

    class CT_CustomerData : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustomerData& default_instance(){

    if (!CT_CustomerData::default_instance_)
    {
        CT_CustomerData::default_instance_ = new CT_CustomerData();
    }
    return *CT_CustomerData::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_CustomerData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_TagsData : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TagsData& default_instance(){

    if (!CT_TagsData::default_instance_)
    {
        CT_TagsData::default_instance_ = new CT_TagsData();
    }
    return *CT_TagsData::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_TagsData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_CustomerDataList : public XSD::ComplexType{
    public:
        bool has_custData(){

            return m_has_custData;
        
        }
        CT_CustomerData* mutable_custData(){

                m_has_custData = true;
                if (!m_custData)
                {
                    m_custData = new CT_CustomerData();
                }
                return m_custData;
            
        }
        const CT_CustomerData& custData(){

            if (m_custData)
            {
                return *m_custData;
            }
            return CT_CustomerData::default_instance();
        
        }
        bool has_tags(){

            return m_has_tags;
        
        }
        CT_TagsData* mutable_tags(){

                m_has_tags = true;
                if (!m_tags)
                {
                    m_tags = new CT_TagsData();
                }
                return m_tags;
            
        }
        const CT_TagsData& tags(){

            if (m_tags)
            {
                return *m_tags;
            }
            return CT_TagsData::default_instance();
        
        }
        void clear(){

                m_has_custData = false;
                
        if (m_custData)
        {
            delete m_custData;
            m_custData = NULL;
        }
    
            
                m_has_tags = false;
                
        if (m_tags)
        {
            delete m_tags;
            m_tags = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_custData)
                {
                    m_custData->toXml(custData, _outStream);;
                }
            
                if (m_has_tags)
                {
                    m_custData->toXml(tags, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustomerDataList& default_instance(){

    if (!CT_CustomerDataList::default_instance_)
    {
        CT_CustomerDataList::default_instance_ = new CT_CustomerDataList();
    }
    return *CT_CustomerDataList::default_instance_;

        }

    private:
        bool m_has_custData ;
        CT_CustomerData* m_custData ;
        bool m_has_tags ;
        CT_TagsData* m_tags ;
        static CT_CustomerDataList* default_instance_ ;

    }

    class CT_Extension : public XSD::ComplexType{
    public:
        void clear(){

                m_has_uri_attr = false;
                m_uri_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Extension& default_instance(){

    if (!CT_Extension::default_instance_)
    {
        CT_Extension::default_instance_ = new CT_Extension();
    }
    return *CT_Extension::default_instance_;

        }
        bool has_uri_attr(){

            return m_has_uri_attr;
        
        }
        void set_uri_attr(const token& _uri_attr ){

        m_has_uri_attr = true;
        m_uri_attr = _uri_attr;
        
        }
        const token& uri_attr(){

            return type: 	oken\nname: \m_uri_attr\n;
        
        }

    private:
        static CT_Extension* default_instance_ ;
        bool m_has_uri_attr ;
        token m_uri_attr ;

    }

    class CT_ExtensionList : public XSD::ComplexType{
    public:
        bool has_ext(){

            return m_has_ext;
        
        }
        CT_Extension* mutable_ext(){

                m_has_ext = true;
                if (!m_ext)
                {
                    m_ext = new CT_Extension();
                }
                return m_ext;
            
        }
        const CT_Extension& ext(){

            if (m_ext)
            {
                return *m_ext;
            }
            return CT_Extension::default_instance();
        
        }
        void clear(){

                m_has_ext = false;
                
        if (m_ext)
        {
            delete m_ext;
            m_ext = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ext)
                {
                    m_ext->toXml(ext, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ExtensionList& default_instance(){

    if (!CT_ExtensionList::default_instance_)
    {
        CT_ExtensionList::default_instance_ = new CT_ExtensionList();
    }
    return *CT_ExtensionList::default_instance_;

        }

    private:
        bool m_has_ext ;
        CT_Extension* m_ext ;
        static CT_ExtensionList* default_instance_ ;

    }

    class CT_ExtensionListModify : public XSD::ComplexType{
    public:
        bool has_ext(){

            return m_has_ext;
        
        }
        CT_Extension* mutable_ext(){

                m_has_ext = true;
                if (!m_ext)
                {
                    m_ext = new CT_Extension();
                }
                return m_ext;
            
        }
        const CT_Extension& ext(){

            if (m_ext)
            {
                return *m_ext;
            }
            return CT_Extension::default_instance();
        
        }
        void clear(){

                m_has_mod_attr = false;
                m_mod_attr = false;
            
                m_has_ext = false;
                
        if (m_ext)
        {
            delete m_ext;
            m_ext = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_mod_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_ext)
                {
                    m_ext->toXml(ext, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ExtensionListModify& default_instance(){

    if (!CT_ExtensionListModify::default_instance_)
    {
        CT_ExtensionListModify::default_instance_ = new CT_ExtensionListModify();
    }
    return *CT_ExtensionListModify::default_instance_;

        }
        bool has_mod_attr(){

            return m_has_mod_attr;
        
        }
        void set_mod_attr(const boolean& _mod_attr ){

        m_has_mod_attr = true;
        m_mod_attr = _mod_attr;
        
        }
        const boolean& mod_attr(){

            return type: oolean\nname: \m_mod_attr\n;
        
        }

    private:
        bool m_has_ext ;
        CT_Extension* m_ext ;
        static CT_ExtensionListModify* default_instance_ ;
        bool m_has_mod_attr ;
        boolean m_mod_attr ;

    }

    class CT_CommentAuthor : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                m_id_attr = 0;
            
                m_has_name_attr = false;
                
        if (m_name_attr)
        {
            delete m_name_attr;
            m_name_attr = NULL;
        }
    
            
                m_has_initials_attr = false;
                
        if (m_initials_attr)
        {
            delete m_initials_attr;
            m_initials_attr = NULL;
        }
    
            
                m_has_lastIdx_attr = false;
                m_lastIdx_attr = 0;
            
                m_has_clrIdx_attr = false;
                m_clrIdx_attr = 0;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
m_name_attr->toXml(_attrName, _outStream);
m_initials_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_lastIdx_attr << \\\;
_outStream << _attrName << \=\\ << m_clrIdx_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommentAuthor& default_instance(){

    if (!CT_CommentAuthor::default_instance_)
    {
        CT_CommentAuthor::default_instance_ = new CT_CommentAuthor();
    }
    return *CT_CommentAuthor::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const unsignedInt& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const unsignedInt& id_attr(){

            return type: \unsignedInt\nname: \m_id_attr\n;
        
        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const ST_Name& _name_attr ){

            m_has_name_attr = true;
            m_name_attr = new ST_Name(_name_attr);
        
        }
        const ST_Name& name_attr(){

            if (m_name_attr)
            {
                return *m_name_attr;
            }
            return ST_Name::default_instance();
        
        }
        bool has_initials_attr(){

            return m_has_initials_attr;
        
        }
        void set_initials_attr(const ST_Name& _initials_attr ){

            m_has_initials_attr = true;
            m_initials_attr = new ST_Name(_initials_attr);
        
        }
        const ST_Name& initials_attr(){

            if (m_initials_attr)
            {
                return *m_initials_attr;
            }
            return ST_Name::default_instance();
        
        }
        bool has_lastIdx_attr(){

            return m_has_lastIdx_attr;
        
        }
        void set_lastIdx_attr(const unsignedInt& _lastIdx_attr ){

        m_has_lastIdx_attr = true;
        m_lastIdx_attr = _lastIdx_attr;
        
        }
        const unsignedInt& lastIdx_attr(){

            return type: \unsignedInt\nname: \m_lastIdx_attr\n;
        
        }
        bool has_clrIdx_attr(){

            return m_has_clrIdx_attr;
        
        }
        void set_clrIdx_attr(const unsignedInt& _clrIdx_attr ){

        m_has_clrIdx_attr = true;
        m_clrIdx_attr = _clrIdx_attr;
        
        }
        const unsignedInt& clrIdx_attr(){

            return type: \unsignedInt\nname: \m_clrIdx_attr\n;
        
        }

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
        bool has_cmAuthor(){

            return m_has_cmAuthor;
        
        }
        CT_CommentAuthor* mutable_cmAuthor(){

                m_has_cmAuthor = true;
                if (!m_cmAuthor)
                {
                    m_cmAuthor = new CT_CommentAuthor();
                }
                return m_cmAuthor;
            
        }
        const CT_CommentAuthor& cmAuthor(){

            if (m_cmAuthor)
            {
                return *m_cmAuthor;
            }
            return CT_CommentAuthor::default_instance();
        
        }
        void clear(){

                m_has_cmAuthor = false;
                
        if (m_cmAuthor)
        {
            delete m_cmAuthor;
            m_cmAuthor = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cmAuthor)
                {
                    m_cmAuthor->toXml(cmAuthor, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommentAuthorList& default_instance(){

    if (!CT_CommentAuthorList::default_instance_)
    {
        CT_CommentAuthorList::default_instance_ = new CT_CommentAuthorList();
    }
    return *CT_CommentAuthorList::default_instance_;

        }

    private:
        bool m_has_cmAuthor ;
        CT_CommentAuthor* m_cmAuthor ;
        static CT_CommentAuthorList* default_instance_ ;

    }

    class CT_Comment : public XSD::ComplexType{
    public:
        bool has_pos(){

            return m_has_pos;
        
        }
        ns_a::CT_Point2D* mutable_pos(){

                m_has_pos = true;
                if (!m_pos)
                {
                    m_pos = new ns_a::CT_Point2D();
                }
                return m_pos;
            
        }
        const ns_a::CT_Point2D& pos(){

            if (m_pos)
            {
                return *m_pos;
            }
            return ns_a::CT_Point2D::default_instance();
        
        }
        bool has_text(){

        return m_has_text;
    
        }
        void set_text(const string& _text ){

            m_has_text = true;
            string = _text;
            
        }
        const string& text(){

        return type: \string\nname: \m_text\n;
    
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_authorId_attr = false;
                m_authorId_attr = 0;
            
                m_has_dt_attr = false;
                m_dt_attr.clear();
            
                m_has_idx_attr = false;
                
        if (m_idx_attr)
        {
            delete m_idx_attr;
            m_idx_attr = NULL;
        }
    
            
                m_has_pos = false;
                
        if (m_pos)
        {
            delete m_pos;
            m_pos = NULL;
        }
    
            
                m_has_text = false;
                m_text.clear();
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_authorId_attr << \\\;
_outStream << _attrName << \=\\ << m_dt_attr << \\\;
m_idx_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_pos)
                {
                    m_pos->toXml(pos, _outStream);;
                }
            
                if (m_has_text)
                {
                    _outStream << \<text>\ << m_pos << \</text>\;;
                }
            
                if (m_has_extLst)
                {
                    m_pos->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Comment& default_instance(){

    if (!CT_Comment::default_instance_)
    {
        CT_Comment::default_instance_ = new CT_Comment();
    }
    return *CT_Comment::default_instance_;

        }
        bool has_authorId_attr(){

            return m_has_authorId_attr;
        
        }
        void set_authorId_attr(const unsignedInt& _authorId_attr ){

        m_has_authorId_attr = true;
        m_authorId_attr = _authorId_attr;
        
        }
        const unsignedInt& authorId_attr(){

            return type: \unsignedInt\nname: \m_authorId_attr\n;
        
        }
        bool has_dt_attr(){

            return m_has_dt_attr;
        
        }
        void set_dt_attr(const dateTime& _dt_attr ){

        m_has_dt_attr = true;
        m_dt_attr = _dt_attr;
        
        }
        const dateTime& dt_attr(){

            return type: \dateTime\nname: \m_dt_attr\n;
        
        }
        bool has_idx_attr(){

            return m_has_idx_attr;
        
        }
        void set_idx_attr(const ST_Index& _idx_attr ){

            m_has_idx_attr = true;
            m_idx_attr = new ST_Index(_idx_attr);
        
        }
        const ST_Index& idx_attr(){

            if (m_idx_attr)
            {
                return *m_idx_attr;
            }
            return ST_Index::default_instance();
        
        }

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
        bool has_cm(){

            return m_has_cm;
        
        }
        CT_Comment* mutable_cm(){

                m_has_cm = true;
                if (!m_cm)
                {
                    m_cm = new CT_Comment();
                }
                return m_cm;
            
        }
        const CT_Comment& cm(){

            if (m_cm)
            {
                return *m_cm;
            }
            return CT_Comment::default_instance();
        
        }
        void clear(){

                m_has_cm = false;
                
        if (m_cm)
        {
            delete m_cm;
            m_cm = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cm)
                {
                    m_cm->toXml(cm, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommentList& default_instance(){

    if (!CT_CommentList::default_instance_)
    {
        CT_CommentList::default_instance_ = new CT_CommentList();
    }
    return *CT_CommentList::default_instance_;

        }

    private:
        bool m_has_cm ;
        CT_Comment* m_cm ;
        static CT_CommentList* default_instance_ ;

    }

    class CT_OleObjectEmbed : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_followColorScheme_attr = false;
                
        if (m_followColorScheme_attr)
        {
            delete m_followColorScheme_attr;
            m_followColorScheme_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_followColorScheme_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OleObjectEmbed& default_instance(){

    if (!CT_OleObjectEmbed::default_instance_)
    {
        CT_OleObjectEmbed::default_instance_ = new CT_OleObjectEmbed();
    }
    return *CT_OleObjectEmbed::default_instance_;

        }
        bool has_followColorScheme_attr(){

            return m_has_followColorScheme_attr;
        
        }
        void set_followColorScheme_attr(const ST_OleObjectFollowColorScheme& _followColorScheme_attr ){

            m_has_followColorScheme_attr = true;
            m_followColorScheme_attr = new ST_OleObjectFollowColorScheme(_followColorScheme_attr);
        
        }
        const ST_OleObjectFollowColorScheme& followColorScheme_attr(){

            if (m_followColorScheme_attr)
            {
                return *m_followColorScheme_attr;
            }
            return ST_OleObjectFollowColorScheme::default_instance();
        
        }

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OleObjectEmbed* default_instance_ ;
        bool m_has_followColorScheme_attr ;
        ST_OleObjectFollowColorScheme* m_followColorScheme_attr ;

    }

    class CT_OleObjectLink : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_updateAutomatic_attr = false;
                m_updateAutomatic_attr = false;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_updateAutomatic_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OleObjectLink& default_instance(){

    if (!CT_OleObjectLink::default_instance_)
    {
        CT_OleObjectLink::default_instance_ = new CT_OleObjectLink();
    }
    return *CT_OleObjectLink::default_instance_;

        }
        bool has_updateAutomatic_attr(){

            return m_has_updateAutomatic_attr;
        
        }
        void set_updateAutomatic_attr(const boolean& _updateAutomatic_attr ){

        m_has_updateAutomatic_attr = true;
        m_updateAutomatic_attr = _updateAutomatic_attr;
        
        }
        const boolean& updateAutomatic_attr(){

            return type: oolean\nname: \m_updateAutomatic_attr\n;
        
        }

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OleObjectLink* default_instance_ ;
        bool m_has_updateAutomatic_attr ;
        boolean m_updateAutomatic_attr ;

    }

    class CT_OleObject : public XSD::ComplexType{
    public:
        bool has_embed(){

            return m_has_embed;
        
        }
        CT_OleObjectEmbed* mutable_embed(){

                
                m_has_link = false;
                
        if (m_link)
        {
            delete m_link;
            m_link = NULL;
        }
    ;
            
                m_has_embed = true;
                if (!m_embed)
                {
                    m_embed = new CT_OleObjectEmbed();
                }
                return m_embed;
            
        }
        const CT_OleObjectEmbed& embed(){

            if (m_embed)
            {
                return *m_embed;
            }
            return CT_OleObjectEmbed::default_instance();
        
        }
        bool has_link(){

            return m_has_link;
        
        }
        CT_OleObjectLink* mutable_link(){

                
                m_has_embed = false;
                
        if (m_embed)
        {
            delete m_embed;
            m_embed = NULL;
        }
    ;
            
                m_has_link = true;
                if (!m_link)
                {
                    m_link = new CT_OleObjectLink();
                }
                return m_link;
            
        }
        const CT_OleObjectLink& link(){

            if (m_link)
            {
                return *m_link;
            }
            return CT_OleObjectLink::default_instance();
        
        }
        bool has_pic(){

            return m_has_pic;
        
        }
        CT_Picture* mutable_pic(){

                m_has_pic = true;
                if (!m_pic)
                {
                    m_pic = new CT_Picture();
                }
                return m_pic;
            
        }
        const CT_Picture& pic(){

            if (m_pic)
            {
                return *m_pic;
            }
            return CT_Picture::default_instance();
        
        }
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_showAsIcon_attr = false;
                m_showAsIcon_attr = false;
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_imgW_attr = false;
                
        if (m_imgW_attr)
        {
            delete m_imgW_attr;
            m_imgW_attr = NULL;
        }
    
            
                m_has_imgH_attr = false;
                
        if (m_imgH_attr)
        {
            delete m_imgH_attr;
            m_imgH_attr = NULL;
        }
    
            
                m_has_progId_attr = false;
                m_progId_attr.clear();
            
                m_has_embed = false;
                
        if (m_embed)
        {
            delete m_embed;
            m_embed = NULL;
        }
    
            
                m_has_link = false;
                
        if (m_link)
        {
            delete m_link;
            m_link = NULL;
        }
    
             
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showAsIcon_attr) << \\\;
m_id_attr->toXml(_attrName, _outStream);
m_imgW_attr->toXml(_attrName, _outStream);
m_imgH_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_progId_attr << \\\;
        _outStream << \>\;
    
                if (m_has_embed)
                {
                    m_embed->toXml(embed, _outStream);;
                }
            
                if (m_has_link)
                {
                    m_embed->toXml(link, _outStream);;
                }
             
                if (m_has_pic)
                {
                    m_pic->toXml(pic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OleObject& default_instance(){

    if (!CT_OleObject::default_instance_)
    {
        CT_OleObject::default_instance_ = new CT_OleObject();
    }
    return *CT_OleObject::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
        
        }
        const ns_a::ST_ShapeID& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_ShapeID::default_instance();
        
        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_showAsIcon_attr(){

            return m_has_showAsIcon_attr;
        
        }
        void set_showAsIcon_attr(const boolean& _showAsIcon_attr ){

        m_has_showAsIcon_attr = true;
        m_showAsIcon_attr = _showAsIcon_attr;
        
        }
        const boolean& showAsIcon_attr(){

            return type: oolean\nname: \m_showAsIcon_attr\n;
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_imgW_attr(){

            return m_has_imgW_attr;
        
        }
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr ){

            m_has_imgW_attr = true;
            m_imgW_attr = new ns_a::ST_PositiveCoordinate32(_imgW_attr);
        
        }
        const ns_a::ST_PositiveCoordinate32& imgW_attr(){

            if (m_imgW_attr)
            {
                return *m_imgW_attr;
            }
            return ns_a::ST_PositiveCoordinate32::default_instance();
        
        }
        bool has_imgH_attr(){

            return m_has_imgH_attr;
        
        }
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr ){

            m_has_imgH_attr = true;
            m_imgH_attr = new ns_a::ST_PositiveCoordinate32(_imgH_attr);
        
        }
        const ns_a::ST_PositiveCoordinate32& imgH_attr(){

            if (m_imgH_attr)
            {
                return *m_imgH_attr;
            }
            return ns_a::ST_PositiveCoordinate32::default_instance();
        
        }
        bool has_progId_attr(){

            return m_has_progId_attr;
        
        }
        void set_progId_attr(const string& _progId_attr ){

        m_has_progId_attr = true;
        m_progId_attr = _progId_attr;
        
        }
        const string& progId_attr(){

            return type: \string\nname: \m_progId_attr\n;
        
        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        bool has_pic(){

            return m_has_pic;
        
        }
        CT_Picture* mutable_pic(){

                m_has_pic = true;
                if (!m_pic)
                {
                    m_pic = new CT_Picture();
                }
                return m_pic;
            
        }
        const CT_Picture& pic(){

            if (m_pic)
            {
                return *m_pic;
            }
            return CT_Picture::default_instance();
        
        }
        void clear(){

                m_has_spid_attr = false;
                
        if (m_spid_attr)
        {
            delete m_spid_attr;
            m_spid_attr = NULL;
        }
    
            
                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_showAsIcon_attr = false;
                m_showAsIcon_attr = false;
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_imgW_attr = false;
                
        if (m_imgW_attr)
        {
            delete m_imgW_attr;
            m_imgW_attr = NULL;
        }
    
            
                m_has_imgH_attr = false;
                
        if (m_imgH_attr)
        {
            delete m_imgH_attr;
            m_imgH_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_spid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showAsIcon_attr) << \\\;
m_id_attr->toXml(_attrName, _outStream);
m_imgW_attr->toXml(_attrName, _outStream);
m_imgH_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
                if (m_has_pic)
                {
                    m_extLst->toXml(pic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Control& default_instance(){

    if (!CT_Control::default_instance_)
    {
        CT_Control::default_instance_ = new CT_Control();
    }
    return *CT_Control::default_instance_;

        }
        bool has_spid_attr(){

            return m_has_spid_attr;
        
        }
        void set_spid_attr(const ns_a::ST_ShapeID& _spid_attr ){

            m_has_spid_attr = true;
            m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
        
        }
        const ns_a::ST_ShapeID& spid_attr(){

            if (m_spid_attr)
            {
                return *m_spid_attr;
            }
            return ns_a::ST_ShapeID::default_instance();
        
        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_showAsIcon_attr(){

            return m_has_showAsIcon_attr;
        
        }
        void set_showAsIcon_attr(const boolean& _showAsIcon_attr ){

        m_has_showAsIcon_attr = true;
        m_showAsIcon_attr = _showAsIcon_attr;
        
        }
        const boolean& showAsIcon_attr(){

            return type: oolean\nname: \m_showAsIcon_attr\n;
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_imgW_attr(){

            return m_has_imgW_attr;
        
        }
        void set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr ){

            m_has_imgW_attr = true;
            m_imgW_attr = new ns_a::ST_PositiveCoordinate32(_imgW_attr);
        
        }
        const ns_a::ST_PositiveCoordinate32& imgW_attr(){

            if (m_imgW_attr)
            {
                return *m_imgW_attr;
            }
            return ns_a::ST_PositiveCoordinate32::default_instance();
        
        }
        bool has_imgH_attr(){

            return m_has_imgH_attr;
        
        }
        void set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr ){

            m_has_imgH_attr = true;
            m_imgH_attr = new ns_a::ST_PositiveCoordinate32(_imgH_attr);
        
        }
        const ns_a::ST_PositiveCoordinate32& imgH_attr(){

            if (m_imgH_attr)
            {
                return *m_imgH_attr;
            }
            return ns_a::ST_PositiveCoordinate32::default_instance();
        
        }

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
        bool has_control(){

            return m_has_control;
        
        }
        CT_Control* mutable_control(){

                m_has_control = true;
                if (!m_control)
                {
                    m_control = new CT_Control();
                }
                return m_control;
            
        }
        const CT_Control& control(){

            if (m_control)
            {
                return *m_control;
            }
            return CT_Control::default_instance();
        
        }
        void clear(){

                m_has_control = false;
                
        if (m_control)
        {
            delete m_control;
            m_control = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_control)
                {
                    m_control->toXml(control, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ControlList& default_instance(){

    if (!CT_ControlList::default_instance_)
    {
        CT_ControlList::default_instance_ = new CT_ControlList();
    }
    return *CT_ControlList::default_instance_;

        }

    private:
        bool m_has_control ;
        CT_Control* m_control ;
        static CT_ControlList* default_instance_ ;

    }

    class CT_SlideIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideIdListEntry& default_instance(){

    if (!CT_SlideIdListEntry::default_instance_)
    {
        CT_SlideIdListEntry::default_instance_ = new CT_SlideIdListEntry();
    }
    return *CT_SlideIdListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_SlideId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_SlideId(_id_attr);
        
        }
        const ST_SlideId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_SlideId::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

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
        bool has_sldId(){

            return m_has_sldId;
        
        }
        CT_SlideIdListEntry* mutable_sldId(){

                m_has_sldId = true;
                if (!m_sldId)
                {
                    m_sldId = new CT_SlideIdListEntry();
                }
                return m_sldId;
            
        }
        const CT_SlideIdListEntry& sldId(){

            if (m_sldId)
            {
                return *m_sldId;
            }
            return CT_SlideIdListEntry::default_instance();
        
        }
        void clear(){

                m_has_sldId = false;
                
        if (m_sldId)
        {
            delete m_sldId;
            m_sldId = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sldId)
                {
                    m_sldId->toXml(sldId, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideIdList& default_instance(){

    if (!CT_SlideIdList::default_instance_)
    {
        CT_SlideIdList::default_instance_ = new CT_SlideIdList();
    }
    return *CT_SlideIdList::default_instance_;

        }

    private:
        bool m_has_sldId ;
        CT_SlideIdListEntry* m_sldId ;
        static CT_SlideIdList* default_instance_ ;

    }

    class CT_SlideMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideMasterIdListEntry& default_instance(){

    if (!CT_SlideMasterIdListEntry::default_instance_)
    {
        CT_SlideMasterIdListEntry::default_instance_ = new CT_SlideMasterIdListEntry();
    }
    return *CT_SlideMasterIdListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_SlideMasterId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_SlideMasterId(_id_attr);
        
        }
        const ST_SlideMasterId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_SlideMasterId::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

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
        bool has_sldMasterId(){

            return m_has_sldMasterId;
        
        }
        CT_SlideMasterIdListEntry* mutable_sldMasterId(){

                m_has_sldMasterId = true;
                if (!m_sldMasterId)
                {
                    m_sldMasterId = new CT_SlideMasterIdListEntry();
                }
                return m_sldMasterId;
            
        }
        const CT_SlideMasterIdListEntry& sldMasterId(){

            if (m_sldMasterId)
            {
                return *m_sldMasterId;
            }
            return CT_SlideMasterIdListEntry::default_instance();
        
        }
        void clear(){

                m_has_sldMasterId = false;
                
        if (m_sldMasterId)
        {
            delete m_sldMasterId;
            m_sldMasterId = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sldMasterId)
                {
                    m_sldMasterId->toXml(sldMasterId, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideMasterIdList& default_instance(){

    if (!CT_SlideMasterIdList::default_instance_)
    {
        CT_SlideMasterIdList::default_instance_ = new CT_SlideMasterIdList();
    }
    return *CT_SlideMasterIdList::default_instance_;

        }

    private:
        bool m_has_sldMasterId ;
        CT_SlideMasterIdListEntry* m_sldMasterId ;
        static CT_SlideMasterIdList* default_instance_ ;

    }

    class CT_NotesMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesMasterIdListEntry& default_instance(){

    if (!CT_NotesMasterIdListEntry::default_instance_)
    {
        CT_NotesMasterIdListEntry::default_instance_ = new CT_NotesMasterIdListEntry();
    }
    return *CT_NotesMasterIdListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesMasterIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_NotesMasterIdList : public XSD::ComplexType{
    public:
        bool has_notesMasterId(){

            return m_has_notesMasterId;
        
        }
        CT_NotesMasterIdListEntry* mutable_notesMasterId(){

                m_has_notesMasterId = true;
                if (!m_notesMasterId)
                {
                    m_notesMasterId = new CT_NotesMasterIdListEntry();
                }
                return m_notesMasterId;
            
        }
        const CT_NotesMasterIdListEntry& notesMasterId(){

            if (m_notesMasterId)
            {
                return *m_notesMasterId;
            }
            return CT_NotesMasterIdListEntry::default_instance();
        
        }
        void clear(){

                m_has_notesMasterId = false;
                
        if (m_notesMasterId)
        {
            delete m_notesMasterId;
            m_notesMasterId = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_notesMasterId)
                {
                    m_notesMasterId->toXml(notesMasterId, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesMasterIdList& default_instance(){

    if (!CT_NotesMasterIdList::default_instance_)
    {
        CT_NotesMasterIdList::default_instance_ = new CT_NotesMasterIdList();
    }
    return *CT_NotesMasterIdList::default_instance_;

        }

    private:
        bool m_has_notesMasterId ;
        CT_NotesMasterIdListEntry* m_notesMasterId ;
        static CT_NotesMasterIdList* default_instance_ ;

    }

    class CT_HandoutMasterIdListEntry : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HandoutMasterIdListEntry& default_instance(){

    if (!CT_HandoutMasterIdListEntry::default_instance_)
    {
        CT_HandoutMasterIdListEntry::default_instance_ = new CT_HandoutMasterIdListEntry();
    }
    return *CT_HandoutMasterIdListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_HandoutMasterIdListEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_HandoutMasterIdList : public XSD::ComplexType{
    public:
        bool has_handoutMasterId(){

            return m_has_handoutMasterId;
        
        }
        CT_HandoutMasterIdListEntry* mutable_handoutMasterId(){

                m_has_handoutMasterId = true;
                if (!m_handoutMasterId)
                {
                    m_handoutMasterId = new CT_HandoutMasterIdListEntry();
                }
                return m_handoutMasterId;
            
        }
        const CT_HandoutMasterIdListEntry& handoutMasterId(){

            if (m_handoutMasterId)
            {
                return *m_handoutMasterId;
            }
            return CT_HandoutMasterIdListEntry::default_instance();
        
        }
        void clear(){

                m_has_handoutMasterId = false;
                
        if (m_handoutMasterId)
        {
            delete m_handoutMasterId;
            m_handoutMasterId = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_handoutMasterId)
                {
                    m_handoutMasterId->toXml(handoutMasterId, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HandoutMasterIdList& default_instance(){

    if (!CT_HandoutMasterIdList::default_instance_)
    {
        CT_HandoutMasterIdList::default_instance_ = new CT_HandoutMasterIdList();
    }
    return *CT_HandoutMasterIdList::default_instance_;

        }

    private:
        bool m_has_handoutMasterId ;
        CT_HandoutMasterIdListEntry* m_handoutMasterId ;
        static CT_HandoutMasterIdList* default_instance_ ;

    }

    class CT_EmbeddedFontDataId : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EmbeddedFontDataId& default_instance(){

    if (!CT_EmbeddedFontDataId::default_instance_)
    {
        CT_EmbeddedFontDataId::default_instance_ = new CT_EmbeddedFontDataId();
    }
    return *CT_EmbeddedFontDataId::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_EmbeddedFontDataId* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_EmbeddedFontListEntry : public XSD::ComplexType{
    public:
        bool has_font(){

            return m_has_font;
        
        }
        ns_a::CT_TextFont* mutable_font(){

                m_has_font = true;
                if (!m_font)
                {
                    m_font = new ns_a::CT_TextFont();
                }
                return m_font;
            
        }
        const ns_a::CT_TextFont& font(){

            if (m_font)
            {
                return *m_font;
            }
            return ns_a::CT_TextFont::default_instance();
        
        }
        bool has_regular(){

            return m_has_regular;
        
        }
        CT_EmbeddedFontDataId* mutable_regular(){

                m_has_regular = true;
                if (!m_regular)
                {
                    m_regular = new CT_EmbeddedFontDataId();
                }
                return m_regular;
            
        }
        const CT_EmbeddedFontDataId& regular(){

            if (m_regular)
            {
                return *m_regular;
            }
            return CT_EmbeddedFontDataId::default_instance();
        
        }
        bool has_bold(){

            return m_has_bold;
        
        }
        CT_EmbeddedFontDataId* mutable_bold(){

                m_has_bold = true;
                if (!m_bold)
                {
                    m_bold = new CT_EmbeddedFontDataId();
                }
                return m_bold;
            
        }
        const CT_EmbeddedFontDataId& bold(){

            if (m_bold)
            {
                return *m_bold;
            }
            return CT_EmbeddedFontDataId::default_instance();
        
        }
        bool has_italic(){

            return m_has_italic;
        
        }
        CT_EmbeddedFontDataId* mutable_italic(){

                m_has_italic = true;
                if (!m_italic)
                {
                    m_italic = new CT_EmbeddedFontDataId();
                }
                return m_italic;
            
        }
        const CT_EmbeddedFontDataId& italic(){

            if (m_italic)
            {
                return *m_italic;
            }
            return CT_EmbeddedFontDataId::default_instance();
        
        }
        bool has_boldItalic(){

            return m_has_boldItalic;
        
        }
        CT_EmbeddedFontDataId* mutable_boldItalic(){

                m_has_boldItalic = true;
                if (!m_boldItalic)
                {
                    m_boldItalic = new CT_EmbeddedFontDataId();
                }
                return m_boldItalic;
            
        }
        const CT_EmbeddedFontDataId& boldItalic(){

            if (m_boldItalic)
            {
                return *m_boldItalic;
            }
            return CT_EmbeddedFontDataId::default_instance();
        
        }
        void clear(){

                m_has_font = false;
                
        if (m_font)
        {
            delete m_font;
            m_font = NULL;
        }
    
            
                m_has_regular = false;
                
        if (m_regular)
        {
            delete m_regular;
            m_regular = NULL;
        }
    
            
                m_has_bold = false;
                
        if (m_bold)
        {
            delete m_bold;
            m_bold = NULL;
        }
    
            
                m_has_italic = false;
                
        if (m_italic)
        {
            delete m_italic;
            m_italic = NULL;
        }
    
            
                m_has_boldItalic = false;
                
        if (m_boldItalic)
        {
            delete m_boldItalic;
            m_boldItalic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_font)
                {
                    m_font->toXml(font, _outStream);;
                }
            
                if (m_has_regular)
                {
                    m_font->toXml(regular, _outStream);;
                }
            
                if (m_has_bold)
                {
                    m_font->toXml(bold, _outStream);;
                }
            
                if (m_has_italic)
                {
                    m_font->toXml(italic, _outStream);;
                }
            
                if (m_has_boldItalic)
                {
                    m_font->toXml(boldItalic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EmbeddedFontListEntry& default_instance(){

    if (!CT_EmbeddedFontListEntry::default_instance_)
    {
        CT_EmbeddedFontListEntry::default_instance_ = new CT_EmbeddedFontListEntry();
    }
    return *CT_EmbeddedFontListEntry::default_instance_;

        }

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
        bool has_embeddedFont(){

            return m_has_embeddedFont;
        
        }
        CT_EmbeddedFontListEntry* mutable_embeddedFont(){

                m_has_embeddedFont = true;
                if (!m_embeddedFont)
                {
                    m_embeddedFont = new CT_EmbeddedFontListEntry();
                }
                return m_embeddedFont;
            
        }
        const CT_EmbeddedFontListEntry& embeddedFont(){

            if (m_embeddedFont)
            {
                return *m_embeddedFont;
            }
            return CT_EmbeddedFontListEntry::default_instance();
        
        }
        void clear(){

                m_has_embeddedFont = false;
                
        if (m_embeddedFont)
        {
            delete m_embeddedFont;
            m_embeddedFont = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_embeddedFont)
                {
                    m_embeddedFont->toXml(embeddedFont, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EmbeddedFontList& default_instance(){

    if (!CT_EmbeddedFontList::default_instance_)
    {
        CT_EmbeddedFontList::default_instance_ = new CT_EmbeddedFontList();
    }
    return *CT_EmbeddedFontList::default_instance_;

        }

    private:
        bool m_has_embeddedFont ;
        CT_EmbeddedFontListEntry* m_embeddedFont ;
        static CT_EmbeddedFontList* default_instance_ ;

    }

    class CT_SmartTags : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SmartTags& default_instance(){

    if (!CT_SmartTags::default_instance_)
    {
        CT_SmartTags::default_instance_ = new CT_SmartTags();
    }
    return *CT_SmartTags::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_SmartTags* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_CustomShow : public XSD::ComplexType{
    public:
        bool has_sldLst(){

            return m_has_sldLst;
        
        }
        CT_SlideRelationshipList* mutable_sldLst(){

                m_has_sldLst = true;
                if (!m_sldLst)
                {
                    m_sldLst = new CT_SlideRelationshipList();
                }
                return m_sldLst;
            
        }
        const CT_SlideRelationshipList& sldLst(){

            if (m_sldLst)
            {
                return *m_sldLst;
            }
            return CT_SlideRelationshipList::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_name_attr = false;
                
        if (m_name_attr)
        {
            delete m_name_attr;
            m_name_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                m_id_attr = 0;
            
                m_has_sldLst = false;
                
        if (m_sldLst)
        {
            delete m_sldLst;
            m_sldLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_name_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_id_attr << \\\;
        _outStream << \>\;
    
                if (m_has_sldLst)
                {
                    m_sldLst->toXml(sldLst, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_sldLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustomShow& default_instance(){

    if (!CT_CustomShow::default_instance_)
    {
        CT_CustomShow::default_instance_ = new CT_CustomShow();
    }
    return *CT_CustomShow::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const ST_Name& _name_attr ){

            m_has_name_attr = true;
            m_name_attr = new ST_Name(_name_attr);
        
        }
        const ST_Name& name_attr(){

            if (m_name_attr)
            {
                return *m_name_attr;
            }
            return ST_Name::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const unsignedInt& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const unsignedInt& id_attr(){

            return type: \unsignedInt\nname: \m_id_attr\n;
        
        }

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
        bool has_custShow(){

            return m_has_custShow;
        
        }
        CT_CustomShow* mutable_custShow(){

                m_has_custShow = true;
                if (!m_custShow)
                {
                    m_custShow = new CT_CustomShow();
                }
                return m_custShow;
            
        }
        const CT_CustomShow& custShow(){

            if (m_custShow)
            {
                return *m_custShow;
            }
            return CT_CustomShow::default_instance();
        
        }
        void clear(){

                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_custShow)
                {
                    m_custShow->toXml(custShow, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustomShowList& default_instance(){

    if (!CT_CustomShowList::default_instance_)
    {
        CT_CustomShowList::default_instance_ = new CT_CustomShowList();
    }
    return *CT_CustomShowList::default_instance_;

        }

    private:
        bool m_has_custShow ;
        CT_CustomShow* m_custShow ;
        static CT_CustomShowList* default_instance_ ;

    }

    class CT_PhotoAlbum : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_bw_attr = false;
                m_bw_attr = false;
            
                m_has_showCaptions_attr = false;
                m_showCaptions_attr = false;
            
                m_has_layout_attr = false;
                
        if (m_layout_attr)
        {
            delete m_layout_attr;
            m_layout_attr = NULL;
        }
    
            
                m_has_frame_attr = false;
                
        if (m_frame_attr)
        {
            delete m_frame_attr;
            m_frame_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_bw_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showCaptions_attr) << \\\;
m_layout_attr->toXml(_attrName, _outStream);
m_frame_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PhotoAlbum& default_instance(){

    if (!CT_PhotoAlbum::default_instance_)
    {
        CT_PhotoAlbum::default_instance_ = new CT_PhotoAlbum();
    }
    return *CT_PhotoAlbum::default_instance_;

        }
        bool has_bw_attr(){

            return m_has_bw_attr;
        
        }
        void set_bw_attr(const boolean& _bw_attr ){

        m_has_bw_attr = true;
        m_bw_attr = _bw_attr;
        
        }
        const boolean& bw_attr(){

            return type: oolean\nname: \m_bw_attr\n;
        
        }
        bool has_showCaptions_attr(){

            return m_has_showCaptions_attr;
        
        }
        void set_showCaptions_attr(const boolean& _showCaptions_attr ){

        m_has_showCaptions_attr = true;
        m_showCaptions_attr = _showCaptions_attr;
        
        }
        const boolean& showCaptions_attr(){

            return type: oolean\nname: \m_showCaptions_attr\n;
        
        }
        bool has_layout_attr(){

            return m_has_layout_attr;
        
        }
        void set_layout_attr(const ST_PhotoAlbumLayout& _layout_attr ){

            m_has_layout_attr = true;
            m_layout_attr = new ST_PhotoAlbumLayout(_layout_attr);
        
        }
        const ST_PhotoAlbumLayout& layout_attr(){

            if (m_layout_attr)
            {
                return *m_layout_attr;
            }
            return ST_PhotoAlbumLayout::default_instance();
        
        }
        bool has_frame_attr(){

            return m_has_frame_attr;
        
        }
        void set_frame_attr(const ST_PhotoAlbumFrameShape& _frame_attr ){

            m_has_frame_attr = true;
            m_frame_attr = new ST_PhotoAlbumFrameShape(_frame_attr);
        
        }
        const ST_PhotoAlbumFrameShape& frame_attr(){

            if (m_frame_attr)
            {
                return *m_frame_attr;
            }
            return ST_PhotoAlbumFrameShape::default_instance();
        
        }

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
        void clear(){

                m_has_cx_attr = false;
                
        if (m_cx_attr)
        {
            delete m_cx_attr;
            m_cx_attr = NULL;
        }
    
            
                m_has_cy_attr = false;
                
        if (m_cy_attr)
        {
            delete m_cy_attr;
            m_cy_attr = NULL;
        }
    
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_cx_attr->toXml(_attrName, _outStream);
m_cy_attr->toXml(_attrName, _outStream);
m_type_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideSize& default_instance(){

    if (!CT_SlideSize::default_instance_)
    {
        CT_SlideSize::default_instance_ = new CT_SlideSize();
    }
    return *CT_SlideSize::default_instance_;

        }
        bool has_cx_attr(){

            return m_has_cx_attr;
        
        }
        void set_cx_attr(const ST_SlideSizeCoordinate& _cx_attr ){

            m_has_cx_attr = true;
            m_cx_attr = new ST_SlideSizeCoordinate(_cx_attr);
        
        }
        const ST_SlideSizeCoordinate& cx_attr(){

            if (m_cx_attr)
            {
                return *m_cx_attr;
            }
            return ST_SlideSizeCoordinate::default_instance();
        
        }
        bool has_cy_attr(){

            return m_has_cy_attr;
        
        }
        void set_cy_attr(const ST_SlideSizeCoordinate& _cy_attr ){

            m_has_cy_attr = true;
            m_cy_attr = new ST_SlideSizeCoordinate(_cy_attr);
        
        }
        const ST_SlideSizeCoordinate& cy_attr(){

            if (m_cy_attr)
            {
                return *m_cy_attr;
            }
            return ST_SlideSizeCoordinate::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_SlideSizeType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_SlideSizeType(_type_attr);
        
        }
        const ST_SlideSizeType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_SlideSizeType::default_instance();
        
        }

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
        void clear(){

                m_has_lang_attr = false;
                m_lang_attr.clear();
            
                m_has_invalStChars_attr = false;
                m_invalStChars_attr.clear();
            
                m_has_invalEndChars_attr = false;
                m_invalEndChars_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lang_attr << \\\;
_outStream << _attrName << \=\\ << m_invalStChars_attr << \\\;
_outStream << _attrName << \=\\ << m_invalEndChars_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Kinsoku& default_instance(){

    if (!CT_Kinsoku::default_instance_)
    {
        CT_Kinsoku::default_instance_ = new CT_Kinsoku();
    }
    return *CT_Kinsoku::default_instance_;

        }
        bool has_lang_attr(){

            return m_has_lang_attr;
        
        }
        void set_lang_attr(const string& _lang_attr ){

        m_has_lang_attr = true;
        m_lang_attr = _lang_attr;
        
        }
        const string& lang_attr(){

            return type: \string\nname: \m_lang_attr\n;
        
        }
        bool has_invalStChars_attr(){

            return m_has_invalStChars_attr;
        
        }
        void set_invalStChars_attr(const string& _invalStChars_attr ){

        m_has_invalStChars_attr = true;
        m_invalStChars_attr = _invalStChars_attr;
        
        }
        const string& invalStChars_attr(){

            return type: \string\nname: \m_invalStChars_attr\n;
        
        }
        bool has_invalEndChars_attr(){

            return m_has_invalEndChars_attr;
        
        }
        void set_invalEndChars_attr(const string& _invalEndChars_attr ){

        m_has_invalEndChars_attr = true;
        m_invalEndChars_attr = _invalEndChars_attr;
        
        }
        const string& invalEndChars_attr(){

            return type: \string\nname: \m_invalEndChars_attr\n;
        
        }

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
        void clear(){

                m_has_algorithmName_attr = false;
                m_algorithmName_attr.clear();
            
                m_has_hashValue_attr = false;
                m_hashValue_attr.clear();
            
                m_has_saltValue_attr = false;
                m_saltValue_attr.clear();
            
                m_has_spinValue_attr = false;
                m_spinValue_attr = 0;
            
                m_has_cryptProviderType_attr = false;
                
        if (m_cryptProviderType_attr)
        {
            delete m_cryptProviderType_attr;
            m_cryptProviderType_attr = NULL;
        }
    
            
                m_has_cryptAlgorithmClass_attr = false;
                
        if (m_cryptAlgorithmClass_attr)
        {
            delete m_cryptAlgorithmClass_attr;
            m_cryptAlgorithmClass_attr = NULL;
        }
    
            
                m_has_cryptAlgorithmType_attr = false;
                
        if (m_cryptAlgorithmType_attr)
        {
            delete m_cryptAlgorithmType_attr;
            m_cryptAlgorithmType_attr = NULL;
        }
    
            
                m_has_cryptAlgorithmSid_attr = false;
                m_cryptAlgorithmSid_attr = 0;
            
                m_has_spinCount_attr = false;
                m_spinCount_attr = 0;
            
                m_has_saltData_attr = false;
                m_saltData_attr.clear();
            
                m_has_hashData_attr = false;
                m_hashData_attr.clear();
            
                m_has_cryptProvider_attr = false;
                m_cryptProvider_attr.clear();
            
                m_has_algIdExt_attr = false;
                m_algIdExt_attr = 0;
            
                m_has_algIdExtSource_attr = false;
                m_algIdExtSource_attr.clear();
            
                m_has_cryptProviderTypeExt_attr = false;
                m_cryptProviderTypeExt_attr = 0;
            
                m_has_cryptProviderTypeExtSource_attr = false;
                m_cryptProviderTypeExtSource_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_algorithmName_attr << \\\;
_outStream << _attrName << \=\\ << m_hashValue_attr << \\\;
_outStream << _attrName << \=\\ << m_saltValue_attr << \\\;
_outStream << _attrName << \=\\ << m_spinValue_attr << \\\;
m_cryptProviderType_attr->toXml(_attrName, _outStream);
m_cryptAlgorithmClass_attr->toXml(_attrName, _outStream);
m_cryptAlgorithmType_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_cryptAlgorithmSid_attr << \\\;
_outStream << _attrName << \=\\ << m_spinCount_attr << \\\;
_outStream << _attrName << \=\\ << m_saltData_attr << \\\;
_outStream << _attrName << \=\\ << m_hashData_attr << \\\;
_outStream << _attrName << \=\\ << m_cryptProvider_attr << \\\;
_outStream << _attrName << \=\\ << m_algIdExt_attr << \\\;
_outStream << _attrName << \=\\ << m_algIdExtSource_attr << \\\;
_outStream << _attrName << \=\\ << m_cryptProviderTypeExt_attr << \\\;
_outStream << _attrName << \=\\ << m_cryptProviderTypeExtSource_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ModifyVerifier& default_instance(){

    if (!CT_ModifyVerifier::default_instance_)
    {
        CT_ModifyVerifier::default_instance_ = new CT_ModifyVerifier();
    }
    return *CT_ModifyVerifier::default_instance_;

        }
        bool has_algorithmName_attr(){

            return m_has_algorithmName_attr;
        
        }
        void set_algorithmName_attr(const string& _algorithmName_attr ){

        m_has_algorithmName_attr = true;
        m_algorithmName_attr = _algorithmName_attr;
        
        }
        const string& algorithmName_attr(){

            return type: \string\nname: \m_algorithmName_attr\n;
        
        }
        bool has_hashValue_attr(){

            return m_has_hashValue_attr;
        
        }
        void set_hashValue_attr(const base64Binary& _hashValue_attr ){

        m_has_hashValue_attr = true;
        m_hashValue_attr = _hashValue_attr;
        
        }
        const base64Binary& hashValue_attr(){

            return type: ase64Binary\nname: \m_hashValue_attr\n;
        
        }
        bool has_saltValue_attr(){

            return m_has_saltValue_attr;
        
        }
        void set_saltValue_attr(const base64Binary& _saltValue_attr ){

        m_has_saltValue_attr = true;
        m_saltValue_attr = _saltValue_attr;
        
        }
        const base64Binary& saltValue_attr(){

            return type: ase64Binary\nname: \m_saltValue_attr\n;
        
        }
        bool has_spinValue_attr(){

            return m_has_spinValue_attr;
        
        }
        void set_spinValue_attr(const unsignedInt& _spinValue_attr ){

        m_has_spinValue_attr = true;
        m_spinValue_attr = _spinValue_attr;
        
        }
        const unsignedInt& spinValue_attr(){

            return type: \unsignedInt\nname: \m_spinValue_attr\n;
        
        }
        bool has_cryptProviderType_attr(){

            return m_has_cryptProviderType_attr;
        
        }
        void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr ){

            m_has_cryptProviderType_attr = true;
            m_cryptProviderType_attr = new ns_s::ST_CryptProv(_cryptProviderType_attr);
        
        }
        const ns_s::ST_CryptProv& cryptProviderType_attr(){

            if (m_cryptProviderType_attr)
            {
                return *m_cryptProviderType_attr;
            }
            return ns_s::ST_CryptProv::default_instance();
        
        }
        bool has_cryptAlgorithmClass_attr(){

            return m_has_cryptAlgorithmClass_attr;
        
        }
        void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr ){

            m_has_cryptAlgorithmClass_attr = true;
            m_cryptAlgorithmClass_attr = new ns_s::ST_AlgClass(_cryptAlgorithmClass_attr);
        
        }
        const ns_s::ST_AlgClass& cryptAlgorithmClass_attr(){

            if (m_cryptAlgorithmClass_attr)
            {
                return *m_cryptAlgorithmClass_attr;
            }
            return ns_s::ST_AlgClass::default_instance();
        
        }
        bool has_cryptAlgorithmType_attr(){

            return m_has_cryptAlgorithmType_attr;
        
        }
        void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr ){

            m_has_cryptAlgorithmType_attr = true;
            m_cryptAlgorithmType_attr = new ns_s::ST_AlgType(_cryptAlgorithmType_attr);
        
        }
        const ns_s::ST_AlgType& cryptAlgorithmType_attr(){

            if (m_cryptAlgorithmType_attr)
            {
                return *m_cryptAlgorithmType_attr;
            }
            return ns_s::ST_AlgType::default_instance();
        
        }
        bool has_cryptAlgorithmSid_attr(){

            return m_has_cryptAlgorithmSid_attr;
        
        }
        void set_cryptAlgorithmSid_attr(const unsignedInt& _cryptAlgorithmSid_attr ){

        m_has_cryptAlgorithmSid_attr = true;
        m_cryptAlgorithmSid_attr = _cryptAlgorithmSid_attr;
        
        }
        const unsignedInt& cryptAlgorithmSid_attr(){

            return type: \unsignedInt\nname: \m_cryptAlgorithmSid_attr\n;
        
        }
        bool has_spinCount_attr(){

            return m_has_spinCount_attr;
        
        }
        void set_spinCount_attr(const unsignedInt& _spinCount_attr ){

        m_has_spinCount_attr = true;
        m_spinCount_attr = _spinCount_attr;
        
        }
        const unsignedInt& spinCount_attr(){

            return type: \unsignedInt\nname: \m_spinCount_attr\n;
        
        }
        bool has_saltData_attr(){

            return m_has_saltData_attr;
        
        }
        void set_saltData_attr(const base64Binary& _saltData_attr ){

        m_has_saltData_attr = true;
        m_saltData_attr = _saltData_attr;
        
        }
        const base64Binary& saltData_attr(){

            return type: ase64Binary\nname: \m_saltData_attr\n;
        
        }
        bool has_hashData_attr(){

            return m_has_hashData_attr;
        
        }
        void set_hashData_attr(const base64Binary& _hashData_attr ){

        m_has_hashData_attr = true;
        m_hashData_attr = _hashData_attr;
        
        }
        const base64Binary& hashData_attr(){

            return type: ase64Binary\nname: \m_hashData_attr\n;
        
        }
        bool has_cryptProvider_attr(){

            return m_has_cryptProvider_attr;
        
        }
        void set_cryptProvider_attr(const string& _cryptProvider_attr ){

        m_has_cryptProvider_attr = true;
        m_cryptProvider_attr = _cryptProvider_attr;
        
        }
        const string& cryptProvider_attr(){

            return type: \string\nname: \m_cryptProvider_attr\n;
        
        }
        bool has_algIdExt_attr(){

            return m_has_algIdExt_attr;
        
        }
        void set_algIdExt_attr(const unsignedInt& _algIdExt_attr ){

        m_has_algIdExt_attr = true;
        m_algIdExt_attr = _algIdExt_attr;
        
        }
        const unsignedInt& algIdExt_attr(){

            return type: \unsignedInt\nname: \m_algIdExt_attr\n;
        
        }
        bool has_algIdExtSource_attr(){

            return m_has_algIdExtSource_attr;
        
        }
        void set_algIdExtSource_attr(const string& _algIdExtSource_attr ){

        m_has_algIdExtSource_attr = true;
        m_algIdExtSource_attr = _algIdExtSource_attr;
        
        }
        const string& algIdExtSource_attr(){

            return type: \string\nname: \m_algIdExtSource_attr\n;
        
        }
        bool has_cryptProviderTypeExt_attr(){

            return m_has_cryptProviderTypeExt_attr;
        
        }
        void set_cryptProviderTypeExt_attr(const unsignedInt& _cryptProviderTypeExt_attr ){

        m_has_cryptProviderTypeExt_attr = true;
        m_cryptProviderTypeExt_attr = _cryptProviderTypeExt_attr;
        
        }
        const unsignedInt& cryptProviderTypeExt_attr(){

            return type: \unsignedInt\nname: \m_cryptProviderTypeExt_attr\n;
        
        }
        bool has_cryptProviderTypeExtSource_attr(){

            return m_has_cryptProviderTypeExtSource_attr;
        
        }
        void set_cryptProviderTypeExtSource_attr(const string& _cryptProviderTypeExtSource_attr ){

        m_has_cryptProviderTypeExtSource_attr = true;
        m_cryptProviderTypeExtSource_attr = _cryptProviderTypeExtSource_attr;
        
        }
        const string& cryptProviderTypeExtSource_attr(){

            return type: \string\nname: \m_cryptProviderTypeExtSource_attr\n;
        
        }

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
        bool has_sldMasterIdLst(){

            return m_has_sldMasterIdLst;
        
        }
        CT_SlideMasterIdList* mutable_sldMasterIdLst(){

                m_has_sldMasterIdLst = true;
                if (!m_sldMasterIdLst)
                {
                    m_sldMasterIdLst = new CT_SlideMasterIdList();
                }
                return m_sldMasterIdLst;
            
        }
        const CT_SlideMasterIdList& sldMasterIdLst(){

            if (m_sldMasterIdLst)
            {
                return *m_sldMasterIdLst;
            }
            return CT_SlideMasterIdList::default_instance();
        
        }
        bool has_notesMasterIdLst(){

            return m_has_notesMasterIdLst;
        
        }
        CT_NotesMasterIdList* mutable_notesMasterIdLst(){

                m_has_notesMasterIdLst = true;
                if (!m_notesMasterIdLst)
                {
                    m_notesMasterIdLst = new CT_NotesMasterIdList();
                }
                return m_notesMasterIdLst;
            
        }
        const CT_NotesMasterIdList& notesMasterIdLst(){

            if (m_notesMasterIdLst)
            {
                return *m_notesMasterIdLst;
            }
            return CT_NotesMasterIdList::default_instance();
        
        }
        bool has_handoutMasterIdLst(){

            return m_has_handoutMasterIdLst;
        
        }
        CT_HandoutMasterIdList* mutable_handoutMasterIdLst(){

                m_has_handoutMasterIdLst = true;
                if (!m_handoutMasterIdLst)
                {
                    m_handoutMasterIdLst = new CT_HandoutMasterIdList();
                }
                return m_handoutMasterIdLst;
            
        }
        const CT_HandoutMasterIdList& handoutMasterIdLst(){

            if (m_handoutMasterIdLst)
            {
                return *m_handoutMasterIdLst;
            }
            return CT_HandoutMasterIdList::default_instance();
        
        }
        bool has_sldIdLst(){

            return m_has_sldIdLst;
        
        }
        CT_SlideIdList* mutable_sldIdLst(){

                m_has_sldIdLst = true;
                if (!m_sldIdLst)
                {
                    m_sldIdLst = new CT_SlideIdList();
                }
                return m_sldIdLst;
            
        }
        const CT_SlideIdList& sldIdLst(){

            if (m_sldIdLst)
            {
                return *m_sldIdLst;
            }
            return CT_SlideIdList::default_instance();
        
        }
        bool has_sldSz(){

            return m_has_sldSz;
        
        }
        CT_SlideSize* mutable_sldSz(){

                m_has_sldSz = true;
                if (!m_sldSz)
                {
                    m_sldSz = new CT_SlideSize();
                }
                return m_sldSz;
            
        }
        const CT_SlideSize& sldSz(){

            if (m_sldSz)
            {
                return *m_sldSz;
            }
            return CT_SlideSize::default_instance();
        
        }
        bool has_notesSz(){

            return m_has_notesSz;
        
        }
        ns_a::CT_PositiveSize2D* mutable_notesSz(){

                m_has_notesSz = true;
                if (!m_notesSz)
                {
                    m_notesSz = new ns_a::CT_PositiveSize2D();
                }
                return m_notesSz;
            
        }
        const ns_a::CT_PositiveSize2D& notesSz(){

            if (m_notesSz)
            {
                return *m_notesSz;
            }
            return ns_a::CT_PositiveSize2D::default_instance();
        
        }
        bool has_smartTags(){

            return m_has_smartTags;
        
        }
        CT_SmartTags* mutable_smartTags(){

                m_has_smartTags = true;
                if (!m_smartTags)
                {
                    m_smartTags = new CT_SmartTags();
                }
                return m_smartTags;
            
        }
        const CT_SmartTags& smartTags(){

            if (m_smartTags)
            {
                return *m_smartTags;
            }
            return CT_SmartTags::default_instance();
        
        }
        bool has_embeddedFontLst(){

            return m_has_embeddedFontLst;
        
        }
        CT_EmbeddedFontList* mutable_embeddedFontLst(){

                m_has_embeddedFontLst = true;
                if (!m_embeddedFontLst)
                {
                    m_embeddedFontLst = new CT_EmbeddedFontList();
                }
                return m_embeddedFontLst;
            
        }
        const CT_EmbeddedFontList& embeddedFontLst(){

            if (m_embeddedFontLst)
            {
                return *m_embeddedFontLst;
            }
            return CT_EmbeddedFontList::default_instance();
        
        }
        bool has_custShowLst(){

            return m_has_custShowLst;
        
        }
        CT_CustomShowList* mutable_custShowLst(){

                m_has_custShowLst = true;
                if (!m_custShowLst)
                {
                    m_custShowLst = new CT_CustomShowList();
                }
                return m_custShowLst;
            
        }
        const CT_CustomShowList& custShowLst(){

            if (m_custShowLst)
            {
                return *m_custShowLst;
            }
            return CT_CustomShowList::default_instance();
        
        }
        bool has_photoAlbum(){

            return m_has_photoAlbum;
        
        }
        CT_PhotoAlbum* mutable_photoAlbum(){

                m_has_photoAlbum = true;
                if (!m_photoAlbum)
                {
                    m_photoAlbum = new CT_PhotoAlbum();
                }
                return m_photoAlbum;
            
        }
        const CT_PhotoAlbum& photoAlbum(){

            if (m_photoAlbum)
            {
                return *m_photoAlbum;
            }
            return CT_PhotoAlbum::default_instance();
        
        }
        bool has_custDataLst(){

            return m_has_custDataLst;
        
        }
        CT_CustomerDataList* mutable_custDataLst(){

                m_has_custDataLst = true;
                if (!m_custDataLst)
                {
                    m_custDataLst = new CT_CustomerDataList();
                }
                return m_custDataLst;
            
        }
        const CT_CustomerDataList& custDataLst(){

            if (m_custDataLst)
            {
                return *m_custDataLst;
            }
            return CT_CustomerDataList::default_instance();
        
        }
        bool has_kinsoku(){

            return m_has_kinsoku;
        
        }
        CT_Kinsoku* mutable_kinsoku(){

                m_has_kinsoku = true;
                if (!m_kinsoku)
                {
                    m_kinsoku = new CT_Kinsoku();
                }
                return m_kinsoku;
            
        }
        const CT_Kinsoku& kinsoku(){

            if (m_kinsoku)
            {
                return *m_kinsoku;
            }
            return CT_Kinsoku::default_instance();
        
        }
        bool has_defaultTextStyle(){

            return m_has_defaultTextStyle;
        
        }
        ns_a::CT_TextListStyle* mutable_defaultTextStyle(){

                m_has_defaultTextStyle = true;
                if (!m_defaultTextStyle)
                {
                    m_defaultTextStyle = new ns_a::CT_TextListStyle();
                }
                return m_defaultTextStyle;
            
        }
        const ns_a::CT_TextListStyle& defaultTextStyle(){

            if (m_defaultTextStyle)
            {
                return *m_defaultTextStyle;
            }
            return ns_a::CT_TextListStyle::default_instance();
        
        }
        bool has_modifyVerifier(){

            return m_has_modifyVerifier;
        
        }
        CT_ModifyVerifier* mutable_modifyVerifier(){

                m_has_modifyVerifier = true;
                if (!m_modifyVerifier)
                {
                    m_modifyVerifier = new CT_ModifyVerifier();
                }
                return m_modifyVerifier;
            
        }
        const CT_ModifyVerifier& modifyVerifier(){

            if (m_modifyVerifier)
            {
                return *m_modifyVerifier;
            }
            return CT_ModifyVerifier::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_serverZoom_attr = false;
                
        if (m_serverZoom_attr)
        {
            delete m_serverZoom_attr;
            m_serverZoom_attr = NULL;
        }
    
            
                m_has_firstSlideNum_attr = false;
                m_firstSlideNum_attr = 0;
            
                m_has_showSpecialPlsOnTitleSld_attr = false;
                m_showSpecialPlsOnTitleSld_attr = false;
            
                m_has_rtl_attr = false;
                m_rtl_attr = false;
            
                m_has_removePersonalInfoOnSave_attr = false;
                m_removePersonalInfoOnSave_attr = false;
            
                m_has_compatMode_attr = false;
                m_compatMode_attr = false;
            
                m_has_strictFirstAndLastChars_attr = false;
                m_strictFirstAndLastChars_attr = false;
            
                m_has_embedTrueTypeFonts_attr = false;
                m_embedTrueTypeFonts_attr = false;
            
                m_has_saveSubsetFonts_attr = false;
                m_saveSubsetFonts_attr = false;
            
                m_has_autoCompressPictures_attr = false;
                m_autoCompressPictures_attr = false;
            
                m_has_bookmarkIdSeed_attr = false;
                
        if (m_bookmarkIdSeed_attr)
        {
            delete m_bookmarkIdSeed_attr;
            m_bookmarkIdSeed_attr = NULL;
        }
    
            
                m_has_conformance_attr = false;
                
        if (m_conformance_attr)
        {
            delete m_conformance_attr;
            m_conformance_attr = NULL;
        }
    
            
                m_has_sldMasterIdLst = false;
                
        if (m_sldMasterIdLst)
        {
            delete m_sldMasterIdLst;
            m_sldMasterIdLst = NULL;
        }
    
            
                m_has_notesMasterIdLst = false;
                
        if (m_notesMasterIdLst)
        {
            delete m_notesMasterIdLst;
            m_notesMasterIdLst = NULL;
        }
    
            
                m_has_handoutMasterIdLst = false;
                
        if (m_handoutMasterIdLst)
        {
            delete m_handoutMasterIdLst;
            m_handoutMasterIdLst = NULL;
        }
    
            
                m_has_sldIdLst = false;
                
        if (m_sldIdLst)
        {
            delete m_sldIdLst;
            m_sldIdLst = NULL;
        }
    
            
                m_has_sldSz = false;
                
        if (m_sldSz)
        {
            delete m_sldSz;
            m_sldSz = NULL;
        }
    
            
                m_has_notesSz = false;
                
        if (m_notesSz)
        {
            delete m_notesSz;
            m_notesSz = NULL;
        }
    
            
                m_has_smartTags = false;
                
        if (m_smartTags)
        {
            delete m_smartTags;
            m_smartTags = NULL;
        }
    
            
                m_has_embeddedFontLst = false;
                
        if (m_embeddedFontLst)
        {
            delete m_embeddedFontLst;
            m_embeddedFontLst = NULL;
        }
    
            
                m_has_custShowLst = false;
                
        if (m_custShowLst)
        {
            delete m_custShowLst;
            m_custShowLst = NULL;
        }
    
            
                m_has_photoAlbum = false;
                
        if (m_photoAlbum)
        {
            delete m_photoAlbum;
            m_photoAlbum = NULL;
        }
    
            
                m_has_custDataLst = false;
                
        if (m_custDataLst)
        {
            delete m_custDataLst;
            m_custDataLst = NULL;
        }
    
            
                m_has_kinsoku = false;
                
        if (m_kinsoku)
        {
            delete m_kinsoku;
            m_kinsoku = NULL;
        }
    
            
                m_has_defaultTextStyle = false;
                
        if (m_defaultTextStyle)
        {
            delete m_defaultTextStyle;
            m_defaultTextStyle = NULL;
        }
    
            
                m_has_modifyVerifier = false;
                
        if (m_modifyVerifier)
        {
            delete m_modifyVerifier;
            m_modifyVerifier = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_serverZoom_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_firstSlideNum_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showSpecialPlsOnTitleSld_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_rtl_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_removePersonalInfoOnSave_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_compatMode_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_strictFirstAndLastChars_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_embedTrueTypeFonts_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_saveSubsetFonts_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_autoCompressPictures_attr) << \\\;
m_bookmarkIdSeed_attr->toXml(_attrName, _outStream);
m_conformance_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_sldMasterIdLst)
                {
                    m_sldMasterIdLst->toXml(sldMasterIdLst, _outStream);;
                }
            
                if (m_has_notesMasterIdLst)
                {
                    m_sldMasterIdLst->toXml(notesMasterIdLst, _outStream);;
                }
            
                if (m_has_handoutMasterIdLst)
                {
                    m_sldMasterIdLst->toXml(handoutMasterIdLst, _outStream);;
                }
            
                if (m_has_sldIdLst)
                {
                    m_sldMasterIdLst->toXml(sldIdLst, _outStream);;
                }
            
                if (m_has_sldSz)
                {
                    m_sldMasterIdLst->toXml(sldSz, _outStream);;
                }
            
                if (m_has_notesSz)
                {
                    m_sldMasterIdLst->toXml(notesSz, _outStream);;
                }
            
                if (m_has_smartTags)
                {
                    m_sldMasterIdLst->toXml(smartTags, _outStream);;
                }
            
                if (m_has_embeddedFontLst)
                {
                    m_sldMasterIdLst->toXml(embeddedFontLst, _outStream);;
                }
            
                if (m_has_custShowLst)
                {
                    m_sldMasterIdLst->toXml(custShowLst, _outStream);;
                }
            
                if (m_has_photoAlbum)
                {
                    m_sldMasterIdLst->toXml(photoAlbum, _outStream);;
                }
            
                if (m_has_custDataLst)
                {
                    m_sldMasterIdLst->toXml(custDataLst, _outStream);;
                }
            
                if (m_has_kinsoku)
                {
                    m_sldMasterIdLst->toXml(kinsoku, _outStream);;
                }
            
                if (m_has_defaultTextStyle)
                {
                    m_sldMasterIdLst->toXml(defaultTextStyle, _outStream);;
                }
            
                if (m_has_modifyVerifier)
                {
                    m_sldMasterIdLst->toXml(modifyVerifier, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_sldMasterIdLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Presentation& default_instance(){

    if (!CT_Presentation::default_instance_)
    {
        CT_Presentation::default_instance_ = new CT_Presentation();
    }
    return *CT_Presentation::default_instance_;

        }
        bool has_serverZoom_attr(){

            return m_has_serverZoom_attr;
        
        }
        void set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr ){

            m_has_serverZoom_attr = true;
            m_serverZoom_attr = new ns_a::ST_Percentage(_serverZoom_attr);
        
        }
        const ns_a::ST_Percentage& serverZoom_attr(){

            if (m_serverZoom_attr)
            {
                return *m_serverZoom_attr;
            }
            return ns_a::ST_Percentage::default_instance();
        
        }
        bool has_firstSlideNum_attr(){

            return m_has_firstSlideNum_attr;
        
        }
        void set_firstSlideNum_attr(const int& _firstSlideNum_attr ){

        m_has_firstSlideNum_attr = true;
        m_firstSlideNum_attr = _firstSlideNum_attr;
        
        }
        const int& firstSlideNum_attr(){

            return type: \int\nname: \m_firstSlideNum_attr\n;
        
        }
        bool has_showSpecialPlsOnTitleSld_attr(){

            return m_has_showSpecialPlsOnTitleSld_attr;
        
        }
        void set_showSpecialPlsOnTitleSld_attr(const boolean& _showSpecialPlsOnTitleSld_attr ){

        m_has_showSpecialPlsOnTitleSld_attr = true;
        m_showSpecialPlsOnTitleSld_attr = _showSpecialPlsOnTitleSld_attr;
        
        }
        const boolean& showSpecialPlsOnTitleSld_attr(){

            return type: oolean\nname: \m_showSpecialPlsOnTitleSld_attr\n;
        
        }
        bool has_rtl_attr(){

            return m_has_rtl_attr;
        
        }
        void set_rtl_attr(const boolean& _rtl_attr ){

        m_has_rtl_attr = true;
        m_rtl_attr = _rtl_attr;
        
        }
        const boolean& rtl_attr(){

            return type: oolean\nname: \m_rtl_attr\n;
        
        }
        bool has_removePersonalInfoOnSave_attr(){

            return m_has_removePersonalInfoOnSave_attr;
        
        }
        void set_removePersonalInfoOnSave_attr(const boolean& _removePersonalInfoOnSave_attr ){

        m_has_removePersonalInfoOnSave_attr = true;
        m_removePersonalInfoOnSave_attr = _removePersonalInfoOnSave_attr;
        
        }
        const boolean& removePersonalInfoOnSave_attr(){

            return type: oolean\nname: \m_removePersonalInfoOnSave_attr\n;
        
        }
        bool has_compatMode_attr(){

            return m_has_compatMode_attr;
        
        }
        void set_compatMode_attr(const boolean& _compatMode_attr ){

        m_has_compatMode_attr = true;
        m_compatMode_attr = _compatMode_attr;
        
        }
        const boolean& compatMode_attr(){

            return type: oolean\nname: \m_compatMode_attr\n;
        
        }
        bool has_strictFirstAndLastChars_attr(){

            return m_has_strictFirstAndLastChars_attr;
        
        }
        void set_strictFirstAndLastChars_attr(const boolean& _strictFirstAndLastChars_attr ){

        m_has_strictFirstAndLastChars_attr = true;
        m_strictFirstAndLastChars_attr = _strictFirstAndLastChars_attr;
        
        }
        const boolean& strictFirstAndLastChars_attr(){

            return type: oolean\nname: \m_strictFirstAndLastChars_attr\n;
        
        }
        bool has_embedTrueTypeFonts_attr(){

            return m_has_embedTrueTypeFonts_attr;
        
        }
        void set_embedTrueTypeFonts_attr(const boolean& _embedTrueTypeFonts_attr ){

        m_has_embedTrueTypeFonts_attr = true;
        m_embedTrueTypeFonts_attr = _embedTrueTypeFonts_attr;
        
        }
        const boolean& embedTrueTypeFonts_attr(){

            return type: oolean\nname: \m_embedTrueTypeFonts_attr\n;
        
        }
        bool has_saveSubsetFonts_attr(){

            return m_has_saveSubsetFonts_attr;
        
        }
        void set_saveSubsetFonts_attr(const boolean& _saveSubsetFonts_attr ){

        m_has_saveSubsetFonts_attr = true;
        m_saveSubsetFonts_attr = _saveSubsetFonts_attr;
        
        }
        const boolean& saveSubsetFonts_attr(){

            return type: oolean\nname: \m_saveSubsetFonts_attr\n;
        
        }
        bool has_autoCompressPictures_attr(){

            return m_has_autoCompressPictures_attr;
        
        }
        void set_autoCompressPictures_attr(const boolean& _autoCompressPictures_attr ){

        m_has_autoCompressPictures_attr = true;
        m_autoCompressPictures_attr = _autoCompressPictures_attr;
        
        }
        const boolean& autoCompressPictures_attr(){

            return type: oolean\nname: \m_autoCompressPictures_attr\n;
        
        }
        bool has_bookmarkIdSeed_attr(){

            return m_has_bookmarkIdSeed_attr;
        
        }
        void set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr ){

            m_has_bookmarkIdSeed_attr = true;
            m_bookmarkIdSeed_attr = new ST_BookmarkIdSeed(_bookmarkIdSeed_attr);
        
        }
        const ST_BookmarkIdSeed& bookmarkIdSeed_attr(){

            if (m_bookmarkIdSeed_attr)
            {
                return *m_bookmarkIdSeed_attr;
            }
            return ST_BookmarkIdSeed::default_instance();
        
        }
        bool has_conformance_attr(){

            return m_has_conformance_attr;
        
        }
        void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr ){

            m_has_conformance_attr = true;
            m_conformance_attr = new ns_s::ST_ConformanceClass(_conformance_attr);
        
        }
        const ns_s::ST_ConformanceClass& conformance_attr(){

            if (m_conformance_attr)
            {
                return *m_conformance_attr;
            }
            return ns_s::ST_ConformanceClass::default_instance();
        
        }

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
        bool has_sldAll(){

            return m_has_sldAll;
        
        }
        CT_Empty* mutable_sldAll(){

                
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_sldAll = true;
                if (!m_sldAll)
                {
                    m_sldAll = new CT_Empty();
                }
                return m_sldAll;
            
        }
        const CT_Empty& sldAll(){

            if (m_sldAll)
            {
                return *m_sldAll;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_sldRg(){

            return m_has_sldRg;
        
        }
        CT_IndexRange* mutable_sldRg(){

                
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_sldRg = true;
                if (!m_sldRg)
                {
                    m_sldRg = new CT_IndexRange();
                }
                return m_sldRg;
            
        }
        const CT_IndexRange& sldRg(){

            if (m_sldRg)
            {
                return *m_sldRg;
            }
            return CT_IndexRange::default_instance();
        
        }
        bool has_custShow(){

            return m_has_custShow;
        
        }
        CT_CustomShowId* mutable_custShow(){

                
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = true;
                if (!m_custShow)
                {
                    m_custShow = new CT_CustomShowId();
                }
                return m_custShow;
            
        }
        const CT_CustomShowId& custShow(){

            if (m_custShow)
            {
                return *m_custShow;
            }
            return CT_CustomShowId::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_showSpeakerNotes_attr = false;
                m_showSpeakerNotes_attr = false;
            
                m_has_target_attr = false;
                m_target_attr.clear();
            
                m_has_title_attr = false;
                m_title_attr.clear();
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    
             
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showSpeakerNotes_attr) << \\\;
_outStream << _attrName << \=\\ << m_target_attr << \\\;
_outStream << _attrName << \=\\ << m_title_attr << \\\;
m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_sldAll)
                {
                    m_sldAll->toXml(sldAll, _outStream);;
                }
            
                if (m_has_sldRg)
                {
                    m_sldAll->toXml(sldRg, _outStream);;
                }
            
                if (m_has_custShow)
                {
                    m_sldAll->toXml(custShow, _outStream);;
                }
             
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HtmlPublishProperties& default_instance(){

    if (!CT_HtmlPublishProperties::default_instance_)
    {
        CT_HtmlPublishProperties::default_instance_ = new CT_HtmlPublishProperties();
    }
    return *CT_HtmlPublishProperties::default_instance_;

        }
        bool has_showSpeakerNotes_attr(){

            return m_has_showSpeakerNotes_attr;
        
        }
        void set_showSpeakerNotes_attr(const boolean& _showSpeakerNotes_attr ){

        m_has_showSpeakerNotes_attr = true;
        m_showSpeakerNotes_attr = _showSpeakerNotes_attr;
        
        }
        const boolean& showSpeakerNotes_attr(){

            return type: oolean\nname: \m_showSpeakerNotes_attr\n;
        
        }
        bool has_target_attr(){

            return m_has_target_attr;
        
        }
        void set_target_attr(const string& _target_attr ){

        m_has_target_attr = true;
        m_target_attr = _target_attr;
        
        }
        const string& target_attr(){

            return type: \string\nname: \m_target_attr\n;
        
        }
        bool has_title_attr(){

            return m_has_title_attr;
        
        }
        void set_title_attr(const string& _title_attr ){

        m_has_title_attr = true;
        m_title_attr = _title_attr;
        
        }
        const string& title_attr(){

            return type: \string\nname: \m_title_attr\n;
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_showAnimation_attr = false;
                m_showAnimation_attr = false;
            
                m_has_resizeGraphics_attr = false;
                m_resizeGraphics_attr = false;
            
                m_has_allowPng_attr = false;
                m_allowPng_attr = false;
            
                m_has_relyOnVml_attr = false;
                m_relyOnVml_attr = false;
            
                m_has_organizeInFolders_attr = false;
                m_organizeInFolders_attr = false;
            
                m_has_useLongFilenames_attr = false;
                m_useLongFilenames_attr = false;
            
                m_has_imgSz_attr = false;
                
        if (m_imgSz_attr)
        {
            delete m_imgSz_attr;
            m_imgSz_attr = NULL;
        }
    
            
                m_has_encoding_attr = false;
                
        if (m_encoding_attr)
        {
            delete m_encoding_attr;
            m_encoding_attr = NULL;
        }
    
            
                m_has_clr_attr = false;
                
        if (m_clr_attr)
        {
            delete m_clr_attr;
            m_clr_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showAnimation_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_resizeGraphics_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_allowPng_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_relyOnVml_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_organizeInFolders_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_useLongFilenames_attr) << \\\;
m_imgSz_attr->toXml(_attrName, _outStream);
m_encoding_attr->toXml(_attrName, _outStream);
m_clr_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WebProperties& default_instance(){

    if (!CT_WebProperties::default_instance_)
    {
        CT_WebProperties::default_instance_ = new CT_WebProperties();
    }
    return *CT_WebProperties::default_instance_;

        }
        bool has_showAnimation_attr(){

            return m_has_showAnimation_attr;
        
        }
        void set_showAnimation_attr(const boolean& _showAnimation_attr ){

        m_has_showAnimation_attr = true;
        m_showAnimation_attr = _showAnimation_attr;
        
        }
        const boolean& showAnimation_attr(){

            return type: oolean\nname: \m_showAnimation_attr\n;
        
        }
        bool has_resizeGraphics_attr(){

            return m_has_resizeGraphics_attr;
        
        }
        void set_resizeGraphics_attr(const boolean& _resizeGraphics_attr ){

        m_has_resizeGraphics_attr = true;
        m_resizeGraphics_attr = _resizeGraphics_attr;
        
        }
        const boolean& resizeGraphics_attr(){

            return type: oolean\nname: \m_resizeGraphics_attr\n;
        
        }
        bool has_allowPng_attr(){

            return m_has_allowPng_attr;
        
        }
        void set_allowPng_attr(const boolean& _allowPng_attr ){

        m_has_allowPng_attr = true;
        m_allowPng_attr = _allowPng_attr;
        
        }
        const boolean& allowPng_attr(){

            return type: oolean\nname: \m_allowPng_attr\n;
        
        }
        bool has_relyOnVml_attr(){

            return m_has_relyOnVml_attr;
        
        }
        void set_relyOnVml_attr(const boolean& _relyOnVml_attr ){

        m_has_relyOnVml_attr = true;
        m_relyOnVml_attr = _relyOnVml_attr;
        
        }
        const boolean& relyOnVml_attr(){

            return type: oolean\nname: \m_relyOnVml_attr\n;
        
        }
        bool has_organizeInFolders_attr(){

            return m_has_organizeInFolders_attr;
        
        }
        void set_organizeInFolders_attr(const boolean& _organizeInFolders_attr ){

        m_has_organizeInFolders_attr = true;
        m_organizeInFolders_attr = _organizeInFolders_attr;
        
        }
        const boolean& organizeInFolders_attr(){

            return type: oolean\nname: \m_organizeInFolders_attr\n;
        
        }
        bool has_useLongFilenames_attr(){

            return m_has_useLongFilenames_attr;
        
        }
        void set_useLongFilenames_attr(const boolean& _useLongFilenames_attr ){

        m_has_useLongFilenames_attr = true;
        m_useLongFilenames_attr = _useLongFilenames_attr;
        
        }
        const boolean& useLongFilenames_attr(){

            return type: oolean\nname: \m_useLongFilenames_attr\n;
        
        }
        bool has_imgSz_attr(){

            return m_has_imgSz_attr;
        
        }
        void set_imgSz_attr(const ST_WebScreenSize& _imgSz_attr ){

            m_has_imgSz_attr = true;
            m_imgSz_attr = new ST_WebScreenSize(_imgSz_attr);
        
        }
        const ST_WebScreenSize& imgSz_attr(){

            if (m_imgSz_attr)
            {
                return *m_imgSz_attr;
            }
            return ST_WebScreenSize::default_instance();
        
        }
        bool has_encoding_attr(){

            return m_has_encoding_attr;
        
        }
        void set_encoding_attr(const ST_WebEncoding& _encoding_attr ){

            m_has_encoding_attr = true;
            m_encoding_attr = new ST_WebEncoding(_encoding_attr);
        
        }
        const ST_WebEncoding& encoding_attr(){

            if (m_encoding_attr)
            {
                return *m_encoding_attr;
            }
            return ST_WebEncoding::default_instance();
        
        }
        bool has_clr_attr(){

            return m_has_clr_attr;
        
        }
        void set_clr_attr(const ST_WebColorType& _clr_attr ){

            m_has_clr_attr = true;
            m_clr_attr = new ST_WebColorType(_clr_attr);
        
        }
        const ST_WebColorType& clr_attr(){

            if (m_clr_attr)
            {
                return *m_clr_attr;
            }
            return ST_WebColorType::default_instance();
        
        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_prnWhat_attr = false;
                
        if (m_prnWhat_attr)
        {
            delete m_prnWhat_attr;
            m_prnWhat_attr = NULL;
        }
    
            
                m_has_clrMode_attr = false;
                
        if (m_clrMode_attr)
        {
            delete m_clrMode_attr;
            m_clrMode_attr = NULL;
        }
    
            
                m_has_hiddenSlides_attr = false;
                m_hiddenSlides_attr = false;
            
                m_has_scaleToFitPaper_attr = false;
                m_scaleToFitPaper_attr = false;
            
                m_has_frameSlides_attr = false;
                m_frameSlides_attr = false;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_prnWhat_attr->toXml(_attrName, _outStream);
m_clrMode_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_hiddenSlides_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_scaleToFitPaper_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_frameSlides_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PrintProperties& default_instance(){

    if (!CT_PrintProperties::default_instance_)
    {
        CT_PrintProperties::default_instance_ = new CT_PrintProperties();
    }
    return *CT_PrintProperties::default_instance_;

        }
        bool has_prnWhat_attr(){

            return m_has_prnWhat_attr;
        
        }
        void set_prnWhat_attr(const ST_PrintWhat& _prnWhat_attr ){

            m_has_prnWhat_attr = true;
            m_prnWhat_attr = new ST_PrintWhat(_prnWhat_attr);
        
        }
        const ST_PrintWhat& prnWhat_attr(){

            if (m_prnWhat_attr)
            {
                return *m_prnWhat_attr;
            }
            return ST_PrintWhat::default_instance();
        
        }
        bool has_clrMode_attr(){

            return m_has_clrMode_attr;
        
        }
        void set_clrMode_attr(const ST_PrintColorMode& _clrMode_attr ){

            m_has_clrMode_attr = true;
            m_clrMode_attr = new ST_PrintColorMode(_clrMode_attr);
        
        }
        const ST_PrintColorMode& clrMode_attr(){

            if (m_clrMode_attr)
            {
                return *m_clrMode_attr;
            }
            return ST_PrintColorMode::default_instance();
        
        }
        bool has_hiddenSlides_attr(){

            return m_has_hiddenSlides_attr;
        
        }
        void set_hiddenSlides_attr(const boolean& _hiddenSlides_attr ){

        m_has_hiddenSlides_attr = true;
        m_hiddenSlides_attr = _hiddenSlides_attr;
        
        }
        const boolean& hiddenSlides_attr(){

            return type: oolean\nname: \m_hiddenSlides_attr\n;
        
        }
        bool has_scaleToFitPaper_attr(){

            return m_has_scaleToFitPaper_attr;
        
        }
        void set_scaleToFitPaper_attr(const boolean& _scaleToFitPaper_attr ){

        m_has_scaleToFitPaper_attr = true;
        m_scaleToFitPaper_attr = _scaleToFitPaper_attr;
        
        }
        const boolean& scaleToFitPaper_attr(){

            return type: oolean\nname: \m_scaleToFitPaper_attr\n;
        
        }
        bool has_frameSlides_attr(){

            return m_has_frameSlides_attr;
        
        }
        void set_frameSlides_attr(const boolean& _frameSlides_attr ){

        m_has_frameSlides_attr = true;
        m_frameSlides_attr = _frameSlides_attr;
        
        }
        const boolean& frameSlides_attr(){

            return type: oolean\nname: \m_frameSlides_attr\n;
        
        }

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
        void clear(){

                m_has_showScrollbar_attr = false;
                m_showScrollbar_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showScrollbar_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShowInfoBrowse& default_instance(){

    if (!CT_ShowInfoBrowse::default_instance_)
    {
        CT_ShowInfoBrowse::default_instance_ = new CT_ShowInfoBrowse();
    }
    return *CT_ShowInfoBrowse::default_instance_;

        }
        bool has_showScrollbar_attr(){

            return m_has_showScrollbar_attr;
        
        }
        void set_showScrollbar_attr(const boolean& _showScrollbar_attr ){

        m_has_showScrollbar_attr = true;
        m_showScrollbar_attr = _showScrollbar_attr;
        
        }
        const boolean& showScrollbar_attr(){

            return type: oolean\nname: \m_showScrollbar_attr\n;
        
        }

    private:
        static CT_ShowInfoBrowse* default_instance_ ;
        bool m_has_showScrollbar_attr ;
        boolean m_showScrollbar_attr ;

    }

    class CT_ShowInfoKiosk : public XSD::ComplexType{
    public:
        void clear(){

                m_has_restart_attr = false;
                m_restart_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_restart_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShowInfoKiosk& default_instance(){

    if (!CT_ShowInfoKiosk::default_instance_)
    {
        CT_ShowInfoKiosk::default_instance_ = new CT_ShowInfoKiosk();
    }
    return *CT_ShowInfoKiosk::default_instance_;

        }
        bool has_restart_attr(){

            return m_has_restart_attr;
        
        }
        void set_restart_attr(const unsignedInt& _restart_attr ){

        m_has_restart_attr = true;
        m_restart_attr = _restart_attr;
        
        }
        const unsignedInt& restart_attr(){

            return type: \unsignedInt\nname: \m_restart_attr\n;
        
        }

    private:
        static CT_ShowInfoKiosk* default_instance_ ;
        bool m_has_restart_attr ;
        unsignedInt m_restart_attr ;

    }

    class CT_ShowProperties : public XSD::ComplexType{
    public:
        bool has_present(){

            return m_has_present;
        
        }
        CT_Empty* mutable_present(){

                
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    ;
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    ;
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_present = true;
                if (!m_present)
                {
                    m_present = new CT_Empty();
                }
                return m_present;
            
        }
        const CT_Empty& present(){

            if (m_present)
            {
                return *m_present;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_browse(){

            return m_has_browse;
        
        }
        CT_ShowInfoBrowse* mutable_browse(){

                
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    ;
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    ;
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_browse = true;
                if (!m_browse)
                {
                    m_browse = new CT_ShowInfoBrowse();
                }
                return m_browse;
            
        }
        const CT_ShowInfoBrowse& browse(){

            if (m_browse)
            {
                return *m_browse;
            }
            return CT_ShowInfoBrowse::default_instance();
        
        }
        bool has_kiosk(){

            return m_has_kiosk;
        
        }
        CT_ShowInfoKiosk* mutable_kiosk(){

                
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    ;
            
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    ;
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_kiosk = true;
                if (!m_kiosk)
                {
                    m_kiosk = new CT_ShowInfoKiosk();
                }
                return m_kiosk;
            
        }
        const CT_ShowInfoKiosk& kiosk(){

            if (m_kiosk)
            {
                return *m_kiosk;
            }
            return CT_ShowInfoKiosk::default_instance();
        
        }
        bool has_sldAll(){

            return m_has_sldAll;
        
        }
        CT_Empty* mutable_sldAll(){

                
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    ;
            
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    ;
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_sldAll = true;
                if (!m_sldAll)
                {
                    m_sldAll = new CT_Empty();
                }
                return m_sldAll;
            
        }
        const CT_Empty& sldAll(){

            if (m_sldAll)
            {
                return *m_sldAll;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_sldRg(){

            return m_has_sldRg;
        
        }
        CT_IndexRange* mutable_sldRg(){

                
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    ;
            
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    ;
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    ;
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    ;
            
                m_has_sldRg = true;
                if (!m_sldRg)
                {
                    m_sldRg = new CT_IndexRange();
                }
                return m_sldRg;
            
        }
        const CT_IndexRange& sldRg(){

            if (m_sldRg)
            {
                return *m_sldRg;
            }
            return CT_IndexRange::default_instance();
        
        }
        bool has_custShow(){

            return m_has_custShow;
        
        }
        CT_CustomShowId* mutable_custShow(){

                
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    ;
            
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    ;
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    ;
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    ;
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    ;
            
                m_has_custShow = true;
                if (!m_custShow)
                {
                    m_custShow = new CT_CustomShowId();
                }
                return m_custShow;
            
        }
        const CT_CustomShowId& custShow(){

            if (m_custShow)
            {
                return *m_custShow;
            }
            return CT_CustomShowId::default_instance();
        
        }
        bool has_penClr(){

            return m_has_penClr;
        
        }
        ns_a::CT_Color* mutable_penClr(){

                m_has_penClr = true;
                if (!m_penClr)
                {
                    m_penClr = new ns_a::CT_Color();
                }
                return m_penClr;
            
        }
        const ns_a::CT_Color& penClr(){

            if (m_penClr)
            {
                return *m_penClr;
            }
            return ns_a::CT_Color::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_loop_attr = false;
                m_loop_attr = false;
            
                m_has_showNarration_attr = false;
                m_showNarration_attr = false;
            
                m_has_showAnimation_attr = false;
                m_showAnimation_attr = false;
            
                m_has_useTimings_attr = false;
                m_useTimings_attr = false;
            
                m_has_present = false;
                
        if (m_present)
        {
            delete m_present;
            m_present = NULL;
        }
    
            
                m_has_browse = false;
                
        if (m_browse)
        {
            delete m_browse;
            m_browse = NULL;
        }
    
            
                m_has_kiosk = false;
                
        if (m_kiosk)
        {
            delete m_kiosk;
            m_kiosk = NULL;
        }
    
            
                m_has_sldAll = false;
                
        if (m_sldAll)
        {
            delete m_sldAll;
            m_sldAll = NULL;
        }
    
            
                m_has_sldRg = false;
                
        if (m_sldRg)
        {
            delete m_sldRg;
            m_sldRg = NULL;
        }
    
            
                m_has_custShow = false;
                
        if (m_custShow)
        {
            delete m_custShow;
            m_custShow = NULL;
        }
    
             
                m_has_penClr = false;
                
        if (m_penClr)
        {
            delete m_penClr;
            m_penClr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_loop_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showNarration_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showAnimation_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_useTimings_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_present)
                {
                    m_present->toXml(present, _outStream);;
                }
            
                if (m_has_browse)
                {
                    m_present->toXml(browse, _outStream);;
                }
            
                if (m_has_kiosk)
                {
                    m_present->toXml(kiosk, _outStream);;
                }
            
                if (m_has_sldAll)
                {
                    m_present->toXml(sldAll, _outStream);;
                }
            
                if (m_has_sldRg)
                {
                    m_present->toXml(sldRg, _outStream);;
                }
            
                if (m_has_custShow)
                {
                    m_present->toXml(custShow, _outStream);;
                }
             
                if (m_has_penClr)
                {
                    m_penClr->toXml(penClr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_penClr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShowProperties& default_instance(){

    if (!CT_ShowProperties::default_instance_)
    {
        CT_ShowProperties::default_instance_ = new CT_ShowProperties();
    }
    return *CT_ShowProperties::default_instance_;

        }
        bool has_loop_attr(){

            return m_has_loop_attr;
        
        }
        void set_loop_attr(const boolean& _loop_attr ){

        m_has_loop_attr = true;
        m_loop_attr = _loop_attr;
        
        }
        const boolean& loop_attr(){

            return type: oolean\nname: \m_loop_attr\n;
        
        }
        bool has_showNarration_attr(){

            return m_has_showNarration_attr;
        
        }
        void set_showNarration_attr(const boolean& _showNarration_attr ){

        m_has_showNarration_attr = true;
        m_showNarration_attr = _showNarration_attr;
        
        }
        const boolean& showNarration_attr(){

            return type: oolean\nname: \m_showNarration_attr\n;
        
        }
        bool has_showAnimation_attr(){

            return m_has_showAnimation_attr;
        
        }
        void set_showAnimation_attr(const boolean& _showAnimation_attr ){

        m_has_showAnimation_attr = true;
        m_showAnimation_attr = _showAnimation_attr;
        
        }
        const boolean& showAnimation_attr(){

            return type: oolean\nname: \m_showAnimation_attr\n;
        
        }
        bool has_useTimings_attr(){

            return m_has_useTimings_attr;
        
        }
        void set_useTimings_attr(const boolean& _useTimings_attr ){

        m_has_useTimings_attr = true;
        m_useTimings_attr = _useTimings_attr;
        
        }
        const boolean& useTimings_attr(){

            return type: oolean\nname: \m_useTimings_attr\n;
        
        }

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
        bool has_htmlPubPr(){

            return m_has_htmlPubPr;
        
        }
        CT_HtmlPublishProperties* mutable_htmlPubPr(){

                m_has_htmlPubPr = true;
                if (!m_htmlPubPr)
                {
                    m_htmlPubPr = new CT_HtmlPublishProperties();
                }
                return m_htmlPubPr;
            
        }
        const CT_HtmlPublishProperties& htmlPubPr(){

            if (m_htmlPubPr)
            {
                return *m_htmlPubPr;
            }
            return CT_HtmlPublishProperties::default_instance();
        
        }
        bool has_webPr(){

            return m_has_webPr;
        
        }
        CT_WebProperties* mutable_webPr(){

                m_has_webPr = true;
                if (!m_webPr)
                {
                    m_webPr = new CT_WebProperties();
                }
                return m_webPr;
            
        }
        const CT_WebProperties& webPr(){

            if (m_webPr)
            {
                return *m_webPr;
            }
            return CT_WebProperties::default_instance();
        
        }
        bool has_prnPr(){

            return m_has_prnPr;
        
        }
        CT_PrintProperties* mutable_prnPr(){

                m_has_prnPr = true;
                if (!m_prnPr)
                {
                    m_prnPr = new CT_PrintProperties();
                }
                return m_prnPr;
            
        }
        const CT_PrintProperties& prnPr(){

            if (m_prnPr)
            {
                return *m_prnPr;
            }
            return CT_PrintProperties::default_instance();
        
        }
        bool has_showPr(){

            return m_has_showPr;
        
        }
        CT_ShowProperties* mutable_showPr(){

                m_has_showPr = true;
                if (!m_showPr)
                {
                    m_showPr = new CT_ShowProperties();
                }
                return m_showPr;
            
        }
        const CT_ShowProperties& showPr(){

            if (m_showPr)
            {
                return *m_showPr;
            }
            return CT_ShowProperties::default_instance();
        
        }
        bool has_clrMru(){

            return m_has_clrMru;
        
        }
        ns_a::CT_ColorMRU* mutable_clrMru(){

                m_has_clrMru = true;
                if (!m_clrMru)
                {
                    m_clrMru = new ns_a::CT_ColorMRU();
                }
                return m_clrMru;
            
        }
        const ns_a::CT_ColorMRU& clrMru(){

            if (m_clrMru)
            {
                return *m_clrMru;
            }
            return ns_a::CT_ColorMRU::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_htmlPubPr = false;
                
        if (m_htmlPubPr)
        {
            delete m_htmlPubPr;
            m_htmlPubPr = NULL;
        }
    
            
                m_has_webPr = false;
                
        if (m_webPr)
        {
            delete m_webPr;
            m_webPr = NULL;
        }
    
            
                m_has_prnPr = false;
                
        if (m_prnPr)
        {
            delete m_prnPr;
            m_prnPr = NULL;
        }
    
            
                m_has_showPr = false;
                
        if (m_showPr)
        {
            delete m_showPr;
            m_showPr = NULL;
        }
    
            
                m_has_clrMru = false;
                
        if (m_clrMru)
        {
            delete m_clrMru;
            m_clrMru = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_htmlPubPr)
                {
                    m_htmlPubPr->toXml(htmlPubPr, _outStream);;
                }
            
                if (m_has_webPr)
                {
                    m_htmlPubPr->toXml(webPr, _outStream);;
                }
            
                if (m_has_prnPr)
                {
                    m_htmlPubPr->toXml(prnPr, _outStream);;
                }
            
                if (m_has_showPr)
                {
                    m_htmlPubPr->toXml(showPr, _outStream);;
                }
            
                if (m_has_clrMru)
                {
                    m_htmlPubPr->toXml(clrMru, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_htmlPubPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PresentationProperties& default_instance(){

    if (!CT_PresentationProperties::default_instance_)
    {
        CT_PresentationProperties::default_instance_ = new CT_PresentationProperties();
    }
    return *CT_PresentationProperties::default_instance_;

        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_sldNum_attr = false;
                m_sldNum_attr = false;
            
                m_has_hdr_attr = false;
                m_hdr_attr = false;
            
                m_has_ftr_attr = false;
                m_ftr_attr = false;
            
                m_has_dt_attr = false;
                m_dt_attr = false;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_sldNum_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_hdr_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_ftr_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_dt_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HeaderFooter& default_instance(){

    if (!CT_HeaderFooter::default_instance_)
    {
        CT_HeaderFooter::default_instance_ = new CT_HeaderFooter();
    }
    return *CT_HeaderFooter::default_instance_;

        }
        bool has_sldNum_attr(){

            return m_has_sldNum_attr;
        
        }
        void set_sldNum_attr(const boolean& _sldNum_attr ){

        m_has_sldNum_attr = true;
        m_sldNum_attr = _sldNum_attr;
        
        }
        const boolean& sldNum_attr(){

            return type: oolean\nname: \m_sldNum_attr\n;
        
        }
        bool has_hdr_attr(){

            return m_has_hdr_attr;
        
        }
        void set_hdr_attr(const boolean& _hdr_attr ){

        m_has_hdr_attr = true;
        m_hdr_attr = _hdr_attr;
        
        }
        const boolean& hdr_attr(){

            return type: oolean\nname: \m_hdr_attr\n;
        
        }
        bool has_ftr_attr(){

            return m_has_ftr_attr;
        
        }
        void set_ftr_attr(const boolean& _ftr_attr ){

        m_has_ftr_attr = true;
        m_ftr_attr = _ftr_attr;
        
        }
        const boolean& ftr_attr(){

            return type: oolean\nname: \m_ftr_attr\n;
        
        }
        bool has_dt_attr(){

            return m_has_dt_attr;
        
        }
        void set_dt_attr(const boolean& _dt_attr ){

        m_has_dt_attr = true;
        m_dt_attr = _dt_attr;
        
        }
        const boolean& dt_attr(){

            return type: oolean\nname: \m_dt_attr\n;
        
        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_orient_attr = false;
                
        if (m_orient_attr)
        {
            delete m_orient_attr;
            m_orient_attr = NULL;
        }
    
            
                m_has_sz_attr = false;
                
        if (m_sz_attr)
        {
            delete m_sz_attr;
            m_sz_attr = NULL;
        }
    
            
                m_has_idx_attr = false;
                m_idx_attr = 0;
            
                m_has_hasCustomPrompt_attr = false;
                m_hasCustomPrompt_attr = false;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
m_orient_attr->toXml(_attrName, _outStream);
m_sz_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_idx_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_hasCustomPrompt_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Placeholder& default_instance(){

    if (!CT_Placeholder::default_instance_)
    {
        CT_Placeholder::default_instance_ = new CT_Placeholder();
    }
    return *CT_Placeholder::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_PlaceholderType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_PlaceholderType(_type_attr);
        
        }
        const ST_PlaceholderType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_PlaceholderType::default_instance();
        
        }
        bool has_orient_attr(){

            return m_has_orient_attr;
        
        }
        void set_orient_attr(const ST_Direction& _orient_attr ){

            m_has_orient_attr = true;
            m_orient_attr = new ST_Direction(_orient_attr);
        
        }
        const ST_Direction& orient_attr(){

            if (m_orient_attr)
            {
                return *m_orient_attr;
            }
            return ST_Direction::default_instance();
        
        }
        bool has_sz_attr(){

            return m_has_sz_attr;
        
        }
        void set_sz_attr(const ST_PlaceholderSize& _sz_attr ){

            m_has_sz_attr = true;
            m_sz_attr = new ST_PlaceholderSize(_sz_attr);
        
        }
        const ST_PlaceholderSize& sz_attr(){

            if (m_sz_attr)
            {
                return *m_sz_attr;
            }
            return ST_PlaceholderSize::default_instance();
        
        }
        bool has_idx_attr(){

            return m_has_idx_attr;
        
        }
        void set_idx_attr(const unsignedInt& _idx_attr ){

        m_has_idx_attr = true;
        m_idx_attr = _idx_attr;
        
        }
        const unsignedInt& idx_attr(){

            return type: \unsignedInt\nname: \m_idx_attr\n;
        
        }
        bool has_hasCustomPrompt_attr(){

            return m_has_hasCustomPrompt_attr;
        
        }
        void set_hasCustomPrompt_attr(const boolean& _hasCustomPrompt_attr ){

        m_has_hasCustomPrompt_attr = true;
        m_hasCustomPrompt_attr = _hasCustomPrompt_attr;
        
        }
        const boolean& hasCustomPrompt_attr(){

            return type: oolean\nname: \m_hasCustomPrompt_attr\n;
        
        }

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
        bool has_ph(){

            return m_has_ph;
        
        }
        CT_Placeholder* mutable_ph(){

                m_has_ph = true;
                if (!m_ph)
                {
                    m_ph = new CT_Placeholder();
                }
                return m_ph;
            
        }
        const CT_Placeholder& ph(){

            if (m_ph)
            {
                return *m_ph;
            }
            return CT_Placeholder::default_instance();
        
        }
        bool has_audioCd(){

            return m_has_audioCd;
        
        }
        CT_AudioCD* mutable_audioCd(){

                
                m_has_wavAudioFile = false;
                
        if (m_wavAudioFile)
        {
            delete m_wavAudioFile;
            m_wavAudioFile = NULL;
        }
    ;
            
                m_has_audioFile = false;
                
        if (m_audioFile)
        {
            delete m_audioFile;
            m_audioFile = NULL;
        }
    ;
            
                m_has_videoFile = false;
                
        if (m_videoFile)
        {
            delete m_videoFile;
            m_videoFile = NULL;
        }
    ;
            
                m_has_quickTimeFile = false;
                
        if (m_quickTimeFile)
        {
            delete m_quickTimeFile;
            m_quickTimeFile = NULL;
        }
    ;
            
                m_has_audioCd = true;
                if (!m_audioCd)
                {
                    m_audioCd = new CT_AudioCD();
                }
                return m_audioCd;
            
        }
        const CT_AudioCD& audioCd(){

            if (m_audioCd)
            {
                return *m_audioCd;
            }
            return CT_AudioCD::default_instance();
        
        }
        bool has_wavAudioFile(){

            return m_has_wavAudioFile;
        
        }
        CT_EmbeddedWAVAudioFile* mutable_wavAudioFile(){

                
                m_has_audioCd = false;
                
        if (m_audioCd)
        {
            delete m_audioCd;
            m_audioCd = NULL;
        }
    ;
            
                m_has_audioFile = false;
                
        if (m_audioFile)
        {
            delete m_audioFile;
            m_audioFile = NULL;
        }
    ;
            
                m_has_videoFile = false;
                
        if (m_videoFile)
        {
            delete m_videoFile;
            m_videoFile = NULL;
        }
    ;
            
                m_has_quickTimeFile = false;
                
        if (m_quickTimeFile)
        {
            delete m_quickTimeFile;
            m_quickTimeFile = NULL;
        }
    ;
            
                m_has_wavAudioFile = true;
                if (!m_wavAudioFile)
                {
                    m_wavAudioFile = new CT_EmbeddedWAVAudioFile();
                }
                return m_wavAudioFile;
            
        }
        const CT_EmbeddedWAVAudioFile& wavAudioFile(){

            if (m_wavAudioFile)
            {
                return *m_wavAudioFile;
            }
            return CT_EmbeddedWAVAudioFile::default_instance();
        
        }
        bool has_audioFile(){

            return m_has_audioFile;
        
        }
        CT_AudioFile* mutable_audioFile(){

                
                m_has_audioCd = false;
                
        if (m_audioCd)
        {
            delete m_audioCd;
            m_audioCd = NULL;
        }
    ;
            
                m_has_wavAudioFile = false;
                
        if (m_wavAudioFile)
        {
            delete m_wavAudioFile;
            m_wavAudioFile = NULL;
        }
    ;
            
                m_has_videoFile = false;
                
        if (m_videoFile)
        {
            delete m_videoFile;
            m_videoFile = NULL;
        }
    ;
            
                m_has_quickTimeFile = false;
                
        if (m_quickTimeFile)
        {
            delete m_quickTimeFile;
            m_quickTimeFile = NULL;
        }
    ;
            
                m_has_audioFile = true;
                if (!m_audioFile)
                {
                    m_audioFile = new CT_AudioFile();
                }
                return m_audioFile;
            
        }
        const CT_AudioFile& audioFile(){

            if (m_audioFile)
            {
                return *m_audioFile;
            }
            return CT_AudioFile::default_instance();
        
        }
        bool has_videoFile(){

            return m_has_videoFile;
        
        }
        CT_VideoFile* mutable_videoFile(){

                
                m_has_audioCd = false;
                
        if (m_audioCd)
        {
            delete m_audioCd;
            m_audioCd = NULL;
        }
    ;
            
                m_has_wavAudioFile = false;
                
        if (m_wavAudioFile)
        {
            delete m_wavAudioFile;
            m_wavAudioFile = NULL;
        }
    ;
            
                m_has_audioFile = false;
                
        if (m_audioFile)
        {
            delete m_audioFile;
            m_audioFile = NULL;
        }
    ;
            
                m_has_quickTimeFile = false;
                
        if (m_quickTimeFile)
        {
            delete m_quickTimeFile;
            m_quickTimeFile = NULL;
        }
    ;
            
                m_has_videoFile = true;
                if (!m_videoFile)
                {
                    m_videoFile = new CT_VideoFile();
                }
                return m_videoFile;
            
        }
        const CT_VideoFile& videoFile(){

            if (m_videoFile)
            {
                return *m_videoFile;
            }
            return CT_VideoFile::default_instance();
        
        }
        bool has_quickTimeFile(){

            return m_has_quickTimeFile;
        
        }
        CT_QuickTimeFile* mutable_quickTimeFile(){

                
                m_has_audioCd = false;
                
        if (m_audioCd)
        {
            delete m_audioCd;
            m_audioCd = NULL;
        }
    ;
            
                m_has_wavAudioFile = false;
                
        if (m_wavAudioFile)
        {
            delete m_wavAudioFile;
            m_wavAudioFile = NULL;
        }
    ;
            
                m_has_audioFile = false;
                
        if (m_audioFile)
        {
            delete m_audioFile;
            m_audioFile = NULL;
        }
    ;
            
                m_has_videoFile = false;
                
        if (m_videoFile)
        {
            delete m_videoFile;
            m_videoFile = NULL;
        }
    ;
            
                m_has_quickTimeFile = true;
                if (!m_quickTimeFile)
                {
                    m_quickTimeFile = new CT_QuickTimeFile();
                }
                return m_quickTimeFile;
            
        }
        const CT_QuickTimeFile& quickTimeFile(){

            if (m_quickTimeFile)
            {
                return *m_quickTimeFile;
            }
            return CT_QuickTimeFile::default_instance();
        
        }
        bool has_custDataLst(){

            return m_has_custDataLst;
        
        }
        CT_CustomerDataList* mutable_custDataLst(){

                m_has_custDataLst = true;
                if (!m_custDataLst)
                {
                    m_custDataLst = new CT_CustomerDataList();
                }
                return m_custDataLst;
            
        }
        const CT_CustomerDataList& custDataLst(){

            if (m_custDataLst)
            {
                return *m_custDataLst;
            }
            return CT_CustomerDataList::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_isPhoto_attr = false;
                m_isPhoto_attr = false;
            
                m_has_userDrawn_attr = false;
                m_userDrawn_attr = false;
            
                m_has_ph = false;
                
        if (m_ph)
        {
            delete m_ph;
            m_ph = NULL;
        }
    
             
                m_has_audioCd = false;
                
        if (m_audioCd)
        {
            delete m_audioCd;
            m_audioCd = NULL;
        }
    
            
                m_has_wavAudioFile = false;
                
        if (m_wavAudioFile)
        {
            delete m_wavAudioFile;
            m_wavAudioFile = NULL;
        }
    
            
                m_has_audioFile = false;
                
        if (m_audioFile)
        {
            delete m_audioFile;
            m_audioFile = NULL;
        }
    
            
                m_has_videoFile = false;
                
        if (m_videoFile)
        {
            delete m_videoFile;
            m_videoFile = NULL;
        }
    
            
                m_has_quickTimeFile = false;
                
        if (m_quickTimeFile)
        {
            delete m_quickTimeFile;
            m_quickTimeFile = NULL;
        }
    
             
                m_has_custDataLst = false;
                
        if (m_custDataLst)
        {
            delete m_custDataLst;
            m_custDataLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_isPhoto_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_userDrawn_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_ph)
                {
                    m_ph->toXml(ph, _outStream);;
                }
             
                if (m_has_audioCd)
                {
                    m_audioCd->toXml(audioCd, _outStream);;
                }
            
                if (m_has_wavAudioFile)
                {
                    m_audioCd->toXml(wavAudioFile, _outStream);;
                }
            
                if (m_has_audioFile)
                {
                    m_audioCd->toXml(audioFile, _outStream);;
                }
            
                if (m_has_videoFile)
                {
                    m_audioCd->toXml(videoFile, _outStream);;
                }
            
                if (m_has_quickTimeFile)
                {
                    m_audioCd->toXml(quickTimeFile, _outStream);;
                }
             
                if (m_has_custDataLst)
                {
                    m_custDataLst->toXml(custDataLst, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_custDataLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ApplicationNonVisualDrawingProps& default_instance(){

    if (!CT_ApplicationNonVisualDrawingProps::default_instance_)
    {
        CT_ApplicationNonVisualDrawingProps::default_instance_ = new CT_ApplicationNonVisualDrawingProps();
    }
    return *CT_ApplicationNonVisualDrawingProps::default_instance_;

        }
        bool has_isPhoto_attr(){

            return m_has_isPhoto_attr;
        
        }
        void set_isPhoto_attr(const boolean& _isPhoto_attr ){

        m_has_isPhoto_attr = true;
        m_isPhoto_attr = _isPhoto_attr;
        
        }
        const boolean& isPhoto_attr(){

            return type: oolean\nname: \m_isPhoto_attr\n;
        
        }
        bool has_userDrawn_attr(){

            return m_has_userDrawn_attr;
        
        }
        void set_userDrawn_attr(const boolean& _userDrawn_attr ){

        m_has_userDrawn_attr = true;
        m_userDrawn_attr = _userDrawn_attr;
        
        }
        const boolean& userDrawn_attr(){

            return type: oolean\nname: \m_userDrawn_attr\n;
        
        }

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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvSpPr(){

            return m_has_cNvSpPr;
        
        }
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr(){

                m_has_cNvSpPr = true;
                if (!m_cNvSpPr)
                {
                    m_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
                }
                return m_cNvSpPr;
            
        }
        const ns_a::CT_NonVisualDrawingShapeProps& cNvSpPr(){

            if (m_cNvSpPr)
            {
                return *m_cNvSpPr;
            }
            return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
        
        }
        bool has_nvPr(){

            return m_has_nvPr;
        
        }
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr(){

                m_has_nvPr = true;
                if (!m_nvPr)
                {
                    m_nvPr = new CT_ApplicationNonVisualDrawingProps();
                }
                return m_nvPr;
            
        }
        const CT_ApplicationNonVisualDrawingProps& nvPr(){

            if (m_nvPr)
            {
                return *m_nvPr;
            }
            return CT_ApplicationNonVisualDrawingProps::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvSpPr = false;
                
        if (m_cNvSpPr)
        {
            delete m_cNvSpPr;
            m_cNvSpPr = NULL;
        }
    
            
                m_has_nvPr = false;
                
        if (m_nvPr)
        {
            delete m_nvPr;
            m_nvPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvSpPr)
                {
                    m_cNvPr->toXml(cNvSpPr, _outStream);;
                }
            
                if (m_has_nvPr)
                {
                    m_cNvPr->toXml(nvPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShapeNonVisual& default_instance(){

    if (!CT_ShapeNonVisual::default_instance_)
    {
        CT_ShapeNonVisual::default_instance_ = new CT_ShapeNonVisual();
    }
    return *CT_ShapeNonVisual::default_instance_;

        }

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
        bool has_nvSpPr(){

            return m_has_nvSpPr;
        
        }
        CT_ShapeNonVisual* mutable_nvSpPr(){

                m_has_nvSpPr = true;
                if (!m_nvSpPr)
                {
                    m_nvSpPr = new CT_ShapeNonVisual();
                }
                return m_nvSpPr;
            
        }
        const CT_ShapeNonVisual& nvSpPr(){

            if (m_nvSpPr)
            {
                return *m_nvSpPr;
            }
            return CT_ShapeNonVisual::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        bool has_txBody(){

            return m_has_txBody;
        
        }
        ns_a::CT_TextBody* mutable_txBody(){

                m_has_txBody = true;
                if (!m_txBody)
                {
                    m_txBody = new ns_a::CT_TextBody();
                }
                return m_txBody;
            
        }
        const ns_a::CT_TextBody& txBody(){

            if (m_txBody)
            {
                return *m_txBody;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_useBgFill_attr = false;
                m_useBgFill_attr = false;
            
                m_has_nvSpPr = false;
                
        if (m_nvSpPr)
        {
            delete m_nvSpPr;
            m_nvSpPr = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_style = false;
                
        if (m_style)
        {
            delete m_style;
            m_style = NULL;
        }
    
            
                m_has_txBody = false;
                
        if (m_txBody)
        {
            delete m_txBody;
            m_txBody = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_useBgFill_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_nvSpPr)
                {
                    m_nvSpPr->toXml(nvSpPr, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvSpPr->toXml(spPr, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvSpPr->toXml(style, _outStream);;
                }
            
                if (m_has_txBody)
                {
                    m_nvSpPr->toXml(txBody, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_nvSpPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Shape& default_instance(){

    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;

        }
        bool has_useBgFill_attr(){

            return m_has_useBgFill_attr;
        
        }
        void set_useBgFill_attr(const boolean& _useBgFill_attr ){

        m_has_useBgFill_attr = true;
        m_useBgFill_attr = _useBgFill_attr;
        
        }
        const boolean& useBgFill_attr(){

            return type: oolean\nname: \m_useBgFill_attr\n;
        
        }

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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvCxnSpPr(){

            return m_has_cNvCxnSpPr;
        
        }
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr(){

                m_has_cNvCxnSpPr = true;
                if (!m_cNvCxnSpPr)
                {
                    m_cNvCxnSpPr = new ns_a::CT_NonVisualConnectorProperties();
                }
                return m_cNvCxnSpPr;
            
        }
        const ns_a::CT_NonVisualConnectorProperties& cNvCxnSpPr(){

            if (m_cNvCxnSpPr)
            {
                return *m_cNvCxnSpPr;
            }
            return ns_a::CT_NonVisualConnectorProperties::default_instance();
        
        }
        bool has_nvPr(){

            return m_has_nvPr;
        
        }
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr(){

                m_has_nvPr = true;
                if (!m_nvPr)
                {
                    m_nvPr = new CT_ApplicationNonVisualDrawingProps();
                }
                return m_nvPr;
            
        }
        const CT_ApplicationNonVisualDrawingProps& nvPr(){

            if (m_nvPr)
            {
                return *m_nvPr;
            }
            return CT_ApplicationNonVisualDrawingProps::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvCxnSpPr = false;
                
        if (m_cNvCxnSpPr)
        {
            delete m_cNvCxnSpPr;
            m_cNvCxnSpPr = NULL;
        }
    
            
                m_has_nvPr = false;
                
        if (m_nvPr)
        {
            delete m_nvPr;
            m_nvPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvCxnSpPr)
                {
                    m_cNvPr->toXml(cNvCxnSpPr, _outStream);;
                }
            
                if (m_has_nvPr)
                {
                    m_cNvPr->toXml(nvPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ConnectorNonVisual& default_instance(){

    if (!CT_ConnectorNonVisual::default_instance_)
    {
        CT_ConnectorNonVisual::default_instance_ = new CT_ConnectorNonVisual();
    }
    return *CT_ConnectorNonVisual::default_instance_;

        }

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
        bool has_nvCxnSpPr(){

            return m_has_nvCxnSpPr;
        
        }
        CT_ConnectorNonVisual* mutable_nvCxnSpPr(){

                m_has_nvCxnSpPr = true;
                if (!m_nvCxnSpPr)
                {
                    m_nvCxnSpPr = new CT_ConnectorNonVisual();
                }
                return m_nvCxnSpPr;
            
        }
        const CT_ConnectorNonVisual& nvCxnSpPr(){

            if (m_nvCxnSpPr)
            {
                return *m_nvCxnSpPr;
            }
            return CT_ConnectorNonVisual::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_nvCxnSpPr = false;
                
        if (m_nvCxnSpPr)
        {
            delete m_nvCxnSpPr;
            m_nvCxnSpPr = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_style = false;
                
        if (m_style)
        {
            delete m_style;
            m_style = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_nvCxnSpPr)
                {
                    m_nvCxnSpPr->toXml(nvCxnSpPr, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvCxnSpPr->toXml(spPr, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvCxnSpPr->toXml(style, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_nvCxnSpPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Connector& default_instance(){

    if (!CT_Connector::default_instance_)
    {
        CT_Connector::default_instance_ = new CT_Connector();
    }
    return *CT_Connector::default_instance_;

        }

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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvPicPr(){

            return m_has_cNvPicPr;
        
        }
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr(){

                m_has_cNvPicPr = true;
                if (!m_cNvPicPr)
                {
                    m_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
                }
                return m_cNvPicPr;
            
        }
        const ns_a::CT_NonVisualPictureProperties& cNvPicPr(){

            if (m_cNvPicPr)
            {
                return *m_cNvPicPr;
            }
            return ns_a::CT_NonVisualPictureProperties::default_instance();
        
        }
        bool has_nvPr(){

            return m_has_nvPr;
        
        }
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr(){

                m_has_nvPr = true;
                if (!m_nvPr)
                {
                    m_nvPr = new CT_ApplicationNonVisualDrawingProps();
                }
                return m_nvPr;
            
        }
        const CT_ApplicationNonVisualDrawingProps& nvPr(){

            if (m_nvPr)
            {
                return *m_nvPr;
            }
            return CT_ApplicationNonVisualDrawingProps::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvPicPr = false;
                
        if (m_cNvPicPr)
        {
            delete m_cNvPicPr;
            m_cNvPicPr = NULL;
        }
    
            
                m_has_nvPr = false;
                
        if (m_nvPr)
        {
            delete m_nvPr;
            m_nvPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvPicPr)
                {
                    m_cNvPr->toXml(cNvPicPr, _outStream);;
                }
            
                if (m_has_nvPr)
                {
                    m_cNvPr->toXml(nvPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureNonVisual& default_instance(){

    if (!CT_PictureNonVisual::default_instance_)
    {
        CT_PictureNonVisual::default_instance_ = new CT_PictureNonVisual();
    }
    return *CT_PictureNonVisual::default_instance_;

        }

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
        bool has_nvPicPr(){

            return m_has_nvPicPr;
        
        }
        CT_PictureNonVisual* mutable_nvPicPr(){

                m_has_nvPicPr = true;
                if (!m_nvPicPr)
                {
                    m_nvPicPr = new CT_PictureNonVisual();
                }
                return m_nvPicPr;
            
        }
        const CT_PictureNonVisual& nvPicPr(){

            if (m_nvPicPr)
            {
                return *m_nvPicPr;
            }
            return CT_PictureNonVisual::default_instance();
        
        }
        bool has_blipFill(){

            return m_has_blipFill;
        
        }
        ns_a::CT_BlipFillProperties* mutable_blipFill(){

                m_has_blipFill = true;
                if (!m_blipFill)
                {
                    m_blipFill = new ns_a::CT_BlipFillProperties();
                }
                return m_blipFill;
            
        }
        const ns_a::CT_BlipFillProperties& blipFill(){

            if (m_blipFill)
            {
                return *m_blipFill;
            }
            return ns_a::CT_BlipFillProperties::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_nvPicPr = false;
                
        if (m_nvPicPr)
        {
            delete m_nvPicPr;
            m_nvPicPr = NULL;
        }
    
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_style = false;
                
        if (m_style)
        {
            delete m_style;
            m_style = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_nvPicPr)
                {
                    m_nvPicPr->toXml(nvPicPr, _outStream);;
                }
            
                if (m_has_blipFill)
                {
                    m_nvPicPr->toXml(blipFill, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvPicPr->toXml(spPr, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvPicPr->toXml(style, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_nvPicPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Picture& default_instance(){

    if (!CT_Picture::default_instance_)
    {
        CT_Picture::default_instance_ = new CT_Picture();
    }
    return *CT_Picture::default_instance_;

        }

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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvGraphicFramePr(){

            return m_has_cNvGraphicFramePr;
        
        }
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr(){

                m_has_cNvGraphicFramePr = true;
                if (!m_cNvGraphicFramePr)
                {
                    m_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
                }
                return m_cNvGraphicFramePr;
            
        }
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr(){

            if (m_cNvGraphicFramePr)
            {
                return *m_cNvGraphicFramePr;
            }
            return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
        
        }
        bool has_nvPr(){

            return m_has_nvPr;
        
        }
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr(){

                m_has_nvPr = true;
                if (!m_nvPr)
                {
                    m_nvPr = new CT_ApplicationNonVisualDrawingProps();
                }
                return m_nvPr;
            
        }
        const CT_ApplicationNonVisualDrawingProps& nvPr(){

            if (m_nvPr)
            {
                return *m_nvPr;
            }
            return CT_ApplicationNonVisualDrawingProps::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvGraphicFramePr = false;
                
        if (m_cNvGraphicFramePr)
        {
            delete m_cNvGraphicFramePr;
            m_cNvGraphicFramePr = NULL;
        }
    
            
                m_has_nvPr = false;
                
        if (m_nvPr)
        {
            delete m_nvPr;
            m_nvPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvGraphicFramePr)
                {
                    m_cNvPr->toXml(cNvGraphicFramePr, _outStream);;
                }
            
                if (m_has_nvPr)
                {
                    m_cNvPr->toXml(nvPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GraphicalObjectFrameNonVisual& default_instance(){

    if (!CT_GraphicalObjectFrameNonVisual::default_instance_)
    {
        CT_GraphicalObjectFrameNonVisual::default_instance_ = new CT_GraphicalObjectFrameNonVisual();
    }
    return *CT_GraphicalObjectFrameNonVisual::default_instance_;

        }

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
        bool has_nvGraphicFramePr(){

            return m_has_nvGraphicFramePr;
        
        }
        CT_GraphicalObjectFrameNonVisual* mutable_nvGraphicFramePr(){

                m_has_nvGraphicFramePr = true;
                if (!m_nvGraphicFramePr)
                {
                    m_nvGraphicFramePr = new CT_GraphicalObjectFrameNonVisual();
                }
                return m_nvGraphicFramePr;
            
        }
        const CT_GraphicalObjectFrameNonVisual& nvGraphicFramePr(){

            if (m_nvGraphicFramePr)
            {
                return *m_nvGraphicFramePr;
            }
            return CT_GraphicalObjectFrameNonVisual::default_instance();
        
        }
        bool has_xfrm(){

            return m_has_xfrm;
        
        }
        ns_a::CT_Transform2D* mutable_xfrm(){

                m_has_xfrm = true;
                if (!m_xfrm)
                {
                    m_xfrm = new ns_a::CT_Transform2D();
                }
                return m_xfrm;
            
        }
        const ns_a::CT_Transform2D& xfrm(){

            if (m_xfrm)
            {
                return *m_xfrm;
            }
            return ns_a::CT_Transform2D::default_instance();
        
        }
        bool has_graphic(){

            return m_has_graphic;
        
        }
        CT_GraphicalObject* mutable_graphic(){

                m_has_graphic = true;
                if (!m_graphic)
                {
                    m_graphic = new CT_GraphicalObject();
                }
                return m_graphic;
            
        }
        const CT_GraphicalObject& graphic(){

            if (m_graphic)
            {
                return *m_graphic;
            }
            return CT_GraphicalObject::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_bwMode_attr = false;
                
        if (m_bwMode_attr)
        {
            delete m_bwMode_attr;
            m_bwMode_attr = NULL;
        }
    
            
                m_has_nvGraphicFramePr = false;
                
        if (m_nvGraphicFramePr)
        {
            delete m_nvGraphicFramePr;
            m_nvGraphicFramePr = NULL;
        }
    
            
                m_has_xfrm = false;
                
        if (m_xfrm)
        {
            delete m_xfrm;
            m_xfrm = NULL;
        }
    
            
                m_has_graphic = false;
                
        if (m_graphic)
        {
            delete m_graphic;
            m_graphic = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_bwMode_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_nvGraphicFramePr)
                {
                    m_nvGraphicFramePr->toXml(nvGraphicFramePr, _outStream);;
                }
            
                if (m_has_xfrm)
                {
                    m_nvGraphicFramePr->toXml(xfrm, _outStream);;
                }
            
                if (m_has_graphic)
                {
                    m_nvGraphicFramePr->toXml(graphic, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_nvGraphicFramePr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GraphicalObjectFrame& default_instance(){

    if (!CT_GraphicalObjectFrame::default_instance_)
    {
        CT_GraphicalObjectFrame::default_instance_ = new CT_GraphicalObjectFrame();
    }
    return *CT_GraphicalObjectFrame::default_instance_;

        }
        bool has_bwMode_attr(){

            return m_has_bwMode_attr;
        
        }
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr ){

            m_has_bwMode_attr = true;
            m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
        
        }
        const ns_a::ST_BlackWhiteMode& bwMode_attr(){

            if (m_bwMode_attr)
            {
                return *m_bwMode_attr;
            }
            return ns_a::ST_BlackWhiteMode::default_instance();
        
        }

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
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvGrpSpPr(){

            return m_has_cNvGrpSpPr;
        
        }
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr(){

                m_has_cNvGrpSpPr = true;
                if (!m_cNvGrpSpPr)
                {
                    m_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
                }
                return m_cNvGrpSpPr;
            
        }
        const ns_a::CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr(){

            if (m_cNvGrpSpPr)
            {
                return *m_cNvGrpSpPr;
            }
            return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
        
        }
        bool has_nvPr(){

            return m_has_nvPr;
        
        }
        CT_ApplicationNonVisualDrawingProps* mutable_nvPr(){

                m_has_nvPr = true;
                if (!m_nvPr)
                {
                    m_nvPr = new CT_ApplicationNonVisualDrawingProps();
                }
                return m_nvPr;
            
        }
        const CT_ApplicationNonVisualDrawingProps& nvPr(){

            if (m_nvPr)
            {
                return *m_nvPr;
            }
            return CT_ApplicationNonVisualDrawingProps::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvGrpSpPr = false;
                
        if (m_cNvGrpSpPr)
        {
            delete m_cNvGrpSpPr;
            m_cNvGrpSpPr = NULL;
        }
    
            
                m_has_nvPr = false;
                
        if (m_nvPr)
        {
            delete m_nvPr;
            m_nvPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvGrpSpPr)
                {
                    m_cNvPr->toXml(cNvGrpSpPr, _outStream);;
                }
            
                if (m_has_nvPr)
                {
                    m_cNvPr->toXml(nvPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GroupShapeNonVisual& default_instance(){

    if (!CT_GroupShapeNonVisual::default_instance_)
    {
        CT_GroupShapeNonVisual::default_instance_ = new CT_GroupShapeNonVisual();
    }
    return *CT_GroupShapeNonVisual::default_instance_;

        }

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
        bool has_nvGrpSpPr(){

            return m_has_nvGrpSpPr;
        
        }
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr(){

                m_has_nvGrpSpPr = true;
                if (!m_nvGrpSpPr)
                {
                    m_nvGrpSpPr = new CT_GroupShapeNonVisual();
                }
                return m_nvGrpSpPr;
            
        }
        const CT_GroupShapeNonVisual& nvGrpSpPr(){

            if (m_nvGrpSpPr)
            {
                return *m_nvGrpSpPr;
            }
            return CT_GroupShapeNonVisual::default_instance();
        
        }
        bool has_grpSpPr(){

            return m_has_grpSpPr;
        
        }
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr(){

                m_has_grpSpPr = true;
                if (!m_grpSpPr)
                {
                    m_grpSpPr = new ns_a::CT_GroupShapeProperties();
                }
                return m_grpSpPr;
            
        }
        const ns_a::CT_GroupShapeProperties& grpSpPr(){

            if (m_grpSpPr)
            {
                return *m_grpSpPr;
            }
            return ns_a::CT_GroupShapeProperties::default_instance();
        
        }
        CT_Shape* add_sp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_sp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GroupShape* add_grpSp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GroupShape* pNewChild = pChildGroup->mutable_grpSp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GraphicalObjectFrame* add_graphicFrame(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GraphicalObjectFrame* pNewChild = pChildGroup->mutable_graphicFrame();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Connector* add_cxnSp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Connector* pNewChild = pChildGroup->mutable_cxnSp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Picture* add_pic(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Picture* pNewChild = pChildGroup->mutable_pic();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Rel* add_contentPart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Rel* pNewChild = pChildGroup->mutable_contentPart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_nvGrpSpPr = false;
                
        if (m_nvGrpSpPr)
        {
            delete m_nvGrpSpPr;
            m_nvGrpSpPr = NULL;
        }
    
            
                m_has_grpSpPr = false;
                
        if (m_grpSpPr)
        {
            delete m_grpSpPr;
            m_grpSpPr = NULL;
        }
    
             
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
         
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_nvGrpSpPr)
                {
                    m_nvGrpSpPr->toXml(nvGrpSpPr, _outStream);;
                }
            
                if (m_has_grpSpPr)
                {
                    m_nvGrpSpPr->toXml(grpSpPr, _outStream);;
                }
             
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sp())
            {
                (*iter)->toXml(sp, _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->toXml(grpSp, _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->toXml(graphicFrame, _outStream);
            }
            else if ((*iter)->has_cxnSp())
            {
                (*iter)->toXml(cxnSp, _outStream);
            }
            else if ((*iter)->has_pic())
            {
                (*iter)->toXml(pic, _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->toXml(contentPart, _outStream);
            }
        } 
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GroupShape& default_instance(){

    if (!CT_GroupShape::default_instance_)
    {
        CT_GroupShape::default_instance_ = new CT_GroupShape();
    }
    return *CT_GroupShape::default_instance_;

        }

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
            bool has_sp(){

            return m_has_sp;
        
            }
            CT_Shape* mutable_sp(){

                
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_sp = true;
                if (!m_sp)
                {
                    m_sp = new CT_Shape();
                }
                return m_sp;
            
            }
            const CT_Shape& sp(){

            if (m_sp)
            {
                return *m_sp;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_grpSp(){

            return m_has_grpSp;
        
            }
            CT_GroupShape* mutable_grpSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_grpSp = true;
                if (!m_grpSp)
                {
                    m_grpSp = new CT_GroupShape();
                }
                return m_grpSp;
            
            }
            const CT_GroupShape& grpSp(){

            if (m_grpSp)
            {
                return *m_grpSp;
            }
            return CT_GroupShape::default_instance();
        
            }
            bool has_graphicFrame(){

            return m_has_graphicFrame;
        
            }
            CT_GraphicalObjectFrame* mutable_graphicFrame(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_graphicFrame = true;
                if (!m_graphicFrame)
                {
                    m_graphicFrame = new CT_GraphicalObjectFrame();
                }
                return m_graphicFrame;
            
            }
            const CT_GraphicalObjectFrame& graphicFrame(){

            if (m_graphicFrame)
            {
                return *m_graphicFrame;
            }
            return CT_GraphicalObjectFrame::default_instance();
        
            }
            bool has_cxnSp(){

            return m_has_cxnSp;
        
            }
            CT_Connector* mutable_cxnSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_cxnSp = true;
                if (!m_cxnSp)
                {
                    m_cxnSp = new CT_Connector();
                }
                return m_cxnSp;
            
            }
            const CT_Connector& cxnSp(){

            if (m_cxnSp)
            {
                return *m_cxnSp;
            }
            return CT_Connector::default_instance();
        
            }
            bool has_pic(){

            return m_has_pic;
        
            }
            CT_Picture* mutable_pic(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_pic = true;
                if (!m_pic)
                {
                    m_pic = new CT_Picture();
                }
                return m_pic;
            
            }
            const CT_Picture& pic(){

            if (m_pic)
            {
                return *m_pic;
            }
            return CT_Picture::default_instance();
        
            }
            bool has_contentPart(){

            return m_has_contentPart;
        
            }
            CT_Rel* mutable_contentPart(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = true;
                if (!m_contentPart)
                {
                    m_contentPart = new CT_Rel();
                }
                return m_contentPart;
            
            }
            const CT_Rel& contentPart(){

            if (m_contentPart)
            {
                return *m_contentPart;
            }
            return CT_Rel::default_instance();
        
            }

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
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Rel& default_instance(){

    if (!CT_Rel::default_instance_)
    {
        CT_Rel::default_instance_ = new CT_Rel();
    }
    return *CT_Rel::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_Rel* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_BackgroundProperties : public XSD::ComplexType{
    public:
        bool has_noFill(){

            return m_has_noFill;
        
        }
        CT_NoFillProperties* mutable_noFill(){

                
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_noFill = true;
                if (!m_noFill)
                {
                    m_noFill = new CT_NoFillProperties();
                }
                return m_noFill;
            
        }
        const CT_NoFillProperties& noFill(){

            if (m_noFill)
            {
                return *m_noFill;
            }
            return CT_NoFillProperties::default_instance();
        
        }
        bool has_solidFill(){

            return m_has_solidFill;
        
        }
        CT_SolidColorFillProperties* mutable_solidFill(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_solidFill = true;
                if (!m_solidFill)
                {
                    m_solidFill = new CT_SolidColorFillProperties();
                }
                return m_solidFill;
            
        }
        const CT_SolidColorFillProperties& solidFill(){

            if (m_solidFill)
            {
                return *m_solidFill;
            }
            return CT_SolidColorFillProperties::default_instance();
        
        }
        bool has_gradFill(){

            return m_has_gradFill;
        
        }
        CT_GradientFillProperties* mutable_gradFill(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_gradFill = true;
                if (!m_gradFill)
                {
                    m_gradFill = new CT_GradientFillProperties();
                }
                return m_gradFill;
            
        }
        const CT_GradientFillProperties& gradFill(){

            if (m_gradFill)
            {
                return *m_gradFill;
            }
            return CT_GradientFillProperties::default_instance();
        
        }
        bool has_blipFill(){

            return m_has_blipFill;
        
        }
        CT_BlipFillProperties* mutable_blipFill(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_blipFill = true;
                if (!m_blipFill)
                {
                    m_blipFill = new CT_BlipFillProperties();
                }
                return m_blipFill;
            
        }
        const CT_BlipFillProperties& blipFill(){

            if (m_blipFill)
            {
                return *m_blipFill;
            }
            return CT_BlipFillProperties::default_instance();
        
        }
        bool has_pattFill(){

            return m_has_pattFill;
        
        }
        CT_PatternFillProperties* mutable_pattFill(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_pattFill = true;
                if (!m_pattFill)
                {
                    m_pattFill = new CT_PatternFillProperties();
                }
                return m_pattFill;
            
        }
        const CT_PatternFillProperties& pattFill(){

            if (m_pattFill)
            {
                return *m_pattFill;
            }
            return CT_PatternFillProperties::default_instance();
        
        }
        bool has_grpFill(){

            return m_has_grpFill;
        
        }
        CT_GroupFillProperties* mutable_grpFill(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_grpFill = true;
                if (!m_grpFill)
                {
                    m_grpFill = new CT_GroupFillProperties();
                }
                return m_grpFill;
            
        }
        const CT_GroupFillProperties& grpFill(){

            if (m_grpFill)
            {
                return *m_grpFill;
            }
            return CT_GroupFillProperties::default_instance();
        
        }
        bool has_effectLst(){

            return m_has_effectLst;
        
        }
        CT_EffectList* mutable_effectLst(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    ;
            
                m_has_effectLst = true;
                if (!m_effectLst)
                {
                    m_effectLst = new CT_EffectList();
                }
                return m_effectLst;
            
        }
        const CT_EffectList& effectLst(){

            if (m_effectLst)
            {
                return *m_effectLst;
            }
            return CT_EffectList::default_instance();
        
        }
        bool has_effectDag(){

            return m_has_effectDag;
        
        }
        CT_EffectContainer* mutable_effectDag(){

                
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    ;
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    ;
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    ;
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    ;
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    ;
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    ;
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    ;
            
                m_has_effectDag = true;
                if (!m_effectDag)
                {
                    m_effectDag = new CT_EffectContainer();
                }
                return m_effectDag;
            
        }
        const CT_EffectContainer& effectDag(){

            if (m_effectDag)
            {
                return *m_effectDag;
            }
            return CT_EffectContainer::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_shadeToTitle_attr = false;
                m_shadeToTitle_attr = false;
            
                m_has_noFill = false;
                
        if (m_noFill)
        {
            delete m_noFill;
            m_noFill = NULL;
        }
    
            
                m_has_solidFill = false;
                
        if (m_solidFill)
        {
            delete m_solidFill;
            m_solidFill = NULL;
        }
    
            
                m_has_gradFill = false;
                
        if (m_gradFill)
        {
            delete m_gradFill;
            m_gradFill = NULL;
        }
    
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
        }
    
            
                m_has_pattFill = false;
                
        if (m_pattFill)
        {
            delete m_pattFill;
            m_pattFill = NULL;
        }
    
            
                m_has_grpFill = false;
                
        if (m_grpFill)
        {
            delete m_grpFill;
            m_grpFill = NULL;
        }
    
            
                m_has_effectLst = false;
                
        if (m_effectLst)
        {
            delete m_effectLst;
            m_effectLst = NULL;
        }
    
            
                m_has_effectDag = false;
                
        if (m_effectDag)
        {
            delete m_effectDag;
            m_effectDag = NULL;
        }
    
             
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_shadeToTitle_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_noFill)
                {
                    m_noFill->toXml(noFill, _outStream);;
                }
            
                if (m_has_solidFill)
                {
                    m_noFill->toXml(solidFill, _outStream);;
                }
            
                if (m_has_gradFill)
                {
                    m_noFill->toXml(gradFill, _outStream);;
                }
            
                if (m_has_blipFill)
                {
                    m_noFill->toXml(blipFill, _outStream);;
                }
            
                if (m_has_pattFill)
                {
                    m_noFill->toXml(pattFill, _outStream);;
                }
            
                if (m_has_grpFill)
                {
                    m_noFill->toXml(grpFill, _outStream);;
                }
            
                if (m_has_effectLst)
                {
                    m_noFill->toXml(effectLst, _outStream);;
                }
            
                if (m_has_effectDag)
                {
                    m_noFill->toXml(effectDag, _outStream);;
                }
             
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BackgroundProperties& default_instance(){

    if (!CT_BackgroundProperties::default_instance_)
    {
        CT_BackgroundProperties::default_instance_ = new CT_BackgroundProperties();
    }
    return *CT_BackgroundProperties::default_instance_;

        }
        bool has_shadeToTitle_attr(){

            return m_has_shadeToTitle_attr;
        
        }
        void set_shadeToTitle_attr(const boolean& _shadeToTitle_attr ){

        m_has_shadeToTitle_attr = true;
        m_shadeToTitle_attr = _shadeToTitle_attr;
        
        }
        const boolean& shadeToTitle_attr(){

            return type: oolean\nname: \m_shadeToTitle_attr\n;
        
        }

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
        bool has_bgPr(){

            return m_has_bgPr;
        
        }
        CT_BackgroundProperties* mutable_bgPr(){

                
                m_has_bgRef = false;
                
        if (m_bgRef)
        {
            delete m_bgRef;
            m_bgRef = NULL;
        }
    ;
            
                m_has_bgPr = true;
                if (!m_bgPr)
                {
                    m_bgPr = new CT_BackgroundProperties();
                }
                return m_bgPr;
            
        }
        const CT_BackgroundProperties& bgPr(){

            if (m_bgPr)
            {
                return *m_bgPr;
            }
            return CT_BackgroundProperties::default_instance();
        
        }
        bool has_bgRef(){

            return m_has_bgRef;
        
        }
        ns_a::CT_StyleMatrixReference* mutable_bgRef(){

                
                m_has_bgPr = false;
                
        if (m_bgPr)
        {
            delete m_bgPr;
            m_bgPr = NULL;
        }
    ;
            
                m_has_bgRef = true;
                if (!m_bgRef)
                {
                    m_bgRef = new ns_a::CT_StyleMatrixReference();
                }
                return m_bgRef;
            
        }
        const ns_a::CT_StyleMatrixReference& bgRef(){

            if (m_bgRef)
            {
                return *m_bgRef;
            }
            return ns_a::CT_StyleMatrixReference::default_instance();
        
        }
        void clear(){

                m_has_bwMode_attr = false;
                
        if (m_bwMode_attr)
        {
            delete m_bwMode_attr;
            m_bwMode_attr = NULL;
        }
    
            
                m_has_bgPr = false;
                
        if (m_bgPr)
        {
            delete m_bgPr;
            m_bgPr = NULL;
        }
    
            
                m_has_bgRef = false;
                
        if (m_bgRef)
        {
            delete m_bgRef;
            m_bgRef = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_bwMode_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_bgPr)
                {
                    m_bgPr->toXml(bgPr, _outStream);;
                }
            
                if (m_has_bgRef)
                {
                    m_bgPr->toXml(bgRef, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Background& default_instance(){

    if (!CT_Background::default_instance_)
    {
        CT_Background::default_instance_ = new CT_Background();
    }
    return *CT_Background::default_instance_;

        }
        bool has_bwMode_attr(){

            return m_has_bwMode_attr;
        
        }
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr ){

            m_has_bwMode_attr = true;
            m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
        
        }
        const ns_a::ST_BlackWhiteMode& bwMode_attr(){

            if (m_bwMode_attr)
            {
                return *m_bwMode_attr;
            }
            return ns_a::ST_BlackWhiteMode::default_instance();
        
        }

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
        bool has_bg(){

            return m_has_bg;
        
        }
        CT_Background* mutable_bg(){

                m_has_bg = true;
                if (!m_bg)
                {
                    m_bg = new CT_Background();
                }
                return m_bg;
            
        }
        const CT_Background& bg(){

            if (m_bg)
            {
                return *m_bg;
            }
            return CT_Background::default_instance();
        
        }
        bool has_spTree(){

            return m_has_spTree;
        
        }
        CT_GroupShape* mutable_spTree(){

                m_has_spTree = true;
                if (!m_spTree)
                {
                    m_spTree = new CT_GroupShape();
                }
                return m_spTree;
            
        }
        const CT_GroupShape& spTree(){

            if (m_spTree)
            {
                return *m_spTree;
            }
            return CT_GroupShape::default_instance();
        
        }
        bool has_custDataLst(){

            return m_has_custDataLst;
        
        }
        CT_CustomerDataList* mutable_custDataLst(){

                m_has_custDataLst = true;
                if (!m_custDataLst)
                {
                    m_custDataLst = new CT_CustomerDataList();
                }
                return m_custDataLst;
            
        }
        const CT_CustomerDataList& custDataLst(){

            if (m_custDataLst)
            {
                return *m_custDataLst;
            }
            return CT_CustomerDataList::default_instance();
        
        }
        bool has_controls(){

            return m_has_controls;
        
        }
        CT_ControlList* mutable_controls(){

                m_has_controls = true;
                if (!m_controls)
                {
                    m_controls = new CT_ControlList();
                }
                return m_controls;
            
        }
        const CT_ControlList& controls(){

            if (m_controls)
            {
                return *m_controls;
            }
            return CT_ControlList::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    
            
                m_has_spTree = false;
                
        if (m_spTree)
        {
            delete m_spTree;
            m_spTree = NULL;
        }
    
            
                m_has_custDataLst = false;
                
        if (m_custDataLst)
        {
            delete m_custDataLst;
            m_custDataLst = NULL;
        }
    
            
                m_has_controls = false;
                
        if (m_controls)
        {
            delete m_controls;
            m_controls = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
        _outStream << \>\;
    
                if (m_has_bg)
                {
                    m_bg->toXml(bg, _outStream);;
                }
            
                if (m_has_spTree)
                {
                    m_bg->toXml(spTree, _outStream);;
                }
            
                if (m_has_custDataLst)
                {
                    m_bg->toXml(custDataLst, _outStream);;
                }
            
                if (m_has_controls)
                {
                    m_bg->toXml(controls, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_bg->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommonSlideData& default_instance(){

    if (!CT_CommonSlideData::default_instance_)
    {
        CT_CommonSlideData::default_instance_ = new CT_CommonSlideData();
    }
    return *CT_CommonSlideData::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }

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
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMapOvr(){

            return m_has_clrMapOvr;
        
        }
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr(){

                m_has_clrMapOvr = true;
                if (!m_clrMapOvr)
                {
                    m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
                }
                return m_clrMapOvr;
            
        }
        const ns_a::CT_ColorMappingOverride& clrMapOvr(){

            if (m_clrMapOvr)
            {
                return *m_clrMapOvr;
            }
            return ns_a::CT_ColorMappingOverride::default_instance();
        
        }
        bool has_transition(){

            return m_has_transition;
        
        }
        CT_SlideTransition* mutable_transition(){

                m_has_transition = true;
                if (!m_transition)
                {
                    m_transition = new CT_SlideTransition();
                }
                return m_transition;
            
        }
        const CT_SlideTransition& transition(){

            if (m_transition)
            {
                return *m_transition;
            }
            return CT_SlideTransition::default_instance();
        
        }
        bool has_timing(){

            return m_has_timing;
        
        }
        CT_SlideTiming* mutable_timing(){

                m_has_timing = true;
                if (!m_timing)
                {
                    m_timing = new CT_SlideTiming();
                }
                return m_timing;
            
        }
        const CT_SlideTiming& timing(){

            if (m_timing)
            {
                return *m_timing;
            }
            return CT_SlideTiming::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_showMasterSp_attr = false;
                m_showMasterSp_attr = false;
            
                m_has_showMasterPhAnim_attr = false;
                m_showMasterPhAnim_attr = false;
            
                m_has_show_attr = false;
                m_show_attr = false;
            
                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMapOvr = false;
                
        if (m_clrMapOvr)
        {
            delete m_clrMapOvr;
            m_clrMapOvr = NULL;
        }
    
            
                m_has_transition = false;
                
        if (m_transition)
        {
            delete m_transition;
            m_transition = NULL;
        }
    
            
                m_has_timing = false;
                
        if (m_timing)
        {
            delete m_timing;
            m_timing = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterSp_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterPhAnim_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_show_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMapOvr)
                {
                    m_cSld->toXml(clrMapOvr, _outStream);;
                }
            
                if (m_has_transition)
                {
                    m_cSld->toXml(transition, _outStream);;
                }
            
                if (m_has_timing)
                {
                    m_cSld->toXml(timing, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Slide& default_instance(){

    if (!CT_Slide::default_instance_)
    {
        CT_Slide::default_instance_ = new CT_Slide();
    }
    return *CT_Slide::default_instance_;

        }
        bool has_showMasterSp_attr(){

            return m_has_showMasterSp_attr;
        
        }
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr ){

        m_has_showMasterSp_attr = true;
        m_showMasterSp_attr = _showMasterSp_attr;
        
        }
        const boolean& showMasterSp_attr(){

            return type: oolean\nname: \m_showMasterSp_attr\n;
        
        }
        bool has_showMasterPhAnim_attr(){

            return m_has_showMasterPhAnim_attr;
        
        }
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr ){

        m_has_showMasterPhAnim_attr = true;
        m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
        
        }
        const boolean& showMasterPhAnim_attr(){

            return type: oolean\nname: \m_showMasterPhAnim_attr\n;
        
        }
        bool has_show_attr(){

            return m_has_show_attr;
        
        }
        void set_show_attr(const boolean& _show_attr ){

        m_has_show_attr = true;
        m_show_attr = _show_attr;
        
        }
        const boolean& show_attr(){

            return type: oolean\nname: \m_show_attr\n;
        
        }

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
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMapOvr(){

            return m_has_clrMapOvr;
        
        }
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr(){

                m_has_clrMapOvr = true;
                if (!m_clrMapOvr)
                {
                    m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
                }
                return m_clrMapOvr;
            
        }
        const ns_a::CT_ColorMappingOverride& clrMapOvr(){

            if (m_clrMapOvr)
            {
                return *m_clrMapOvr;
            }
            return ns_a::CT_ColorMappingOverride::default_instance();
        
        }
        bool has_transition(){

            return m_has_transition;
        
        }
        CT_SlideTransition* mutable_transition(){

                m_has_transition = true;
                if (!m_transition)
                {
                    m_transition = new CT_SlideTransition();
                }
                return m_transition;
            
        }
        const CT_SlideTransition& transition(){

            if (m_transition)
            {
                return *m_transition;
            }
            return CT_SlideTransition::default_instance();
        
        }
        bool has_timing(){

            return m_has_timing;
        
        }
        CT_SlideTiming* mutable_timing(){

                m_has_timing = true;
                if (!m_timing)
                {
                    m_timing = new CT_SlideTiming();
                }
                return m_timing;
            
        }
        const CT_SlideTiming& timing(){

            if (m_timing)
            {
                return *m_timing;
            }
            return CT_SlideTiming::default_instance();
        
        }
        bool has_hf(){

            return m_has_hf;
        
        }
        CT_HeaderFooter* mutable_hf(){

                m_has_hf = true;
                if (!m_hf)
                {
                    m_hf = new CT_HeaderFooter();
                }
                return m_hf;
            
        }
        const CT_HeaderFooter& hf(){

            if (m_hf)
            {
                return *m_hf;
            }
            return CT_HeaderFooter::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_showMasterSp_attr = false;
                m_showMasterSp_attr = false;
            
                m_has_showMasterPhAnim_attr = false;
                m_showMasterPhAnim_attr = false;
            
                m_has_matchingName_attr = false;
                m_matchingName_attr.clear();
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_preserve_attr = false;
                m_preserve_attr = false;
            
                m_has_userDrawn_attr = false;
                m_userDrawn_attr = false;
            
                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMapOvr = false;
                
        if (m_clrMapOvr)
        {
            delete m_clrMapOvr;
            m_clrMapOvr = NULL;
        }
    
            
                m_has_transition = false;
                
        if (m_transition)
        {
            delete m_transition;
            m_transition = NULL;
        }
    
            
                m_has_timing = false;
                
        if (m_timing)
        {
            delete m_timing;
            m_timing = NULL;
        }
    
            
                m_has_hf = false;
                
        if (m_hf)
        {
            delete m_hf;
            m_hf = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterSp_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterPhAnim_attr) << \\\;
_outStream << _attrName << \=\\ << m_matchingName_attr << \\\;
m_type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_preserve_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_userDrawn_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMapOvr)
                {
                    m_cSld->toXml(clrMapOvr, _outStream);;
                }
            
                if (m_has_transition)
                {
                    m_cSld->toXml(transition, _outStream);;
                }
            
                if (m_has_timing)
                {
                    m_cSld->toXml(timing, _outStream);;
                }
            
                if (m_has_hf)
                {
                    m_cSld->toXml(hf, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideLayout& default_instance(){

    if (!CT_SlideLayout::default_instance_)
    {
        CT_SlideLayout::default_instance_ = new CT_SlideLayout();
    }
    return *CT_SlideLayout::default_instance_;

        }
        bool has_showMasterSp_attr(){

            return m_has_showMasterSp_attr;
        
        }
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr ){

        m_has_showMasterSp_attr = true;
        m_showMasterSp_attr = _showMasterSp_attr;
        
        }
        const boolean& showMasterSp_attr(){

            return type: oolean\nname: \m_showMasterSp_attr\n;
        
        }
        bool has_showMasterPhAnim_attr(){

            return m_has_showMasterPhAnim_attr;
        
        }
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr ){

        m_has_showMasterPhAnim_attr = true;
        m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
        
        }
        const boolean& showMasterPhAnim_attr(){

            return type: oolean\nname: \m_showMasterPhAnim_attr\n;
        
        }
        bool has_matchingName_attr(){

            return m_has_matchingName_attr;
        
        }
        void set_matchingName_attr(const string& _matchingName_attr ){

        m_has_matchingName_attr = true;
        m_matchingName_attr = _matchingName_attr;
        
        }
        const string& matchingName_attr(){

            return type: \string\nname: \m_matchingName_attr\n;
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_SlideLayoutType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_SlideLayoutType(_type_attr);
        
        }
        const ST_SlideLayoutType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_SlideLayoutType::default_instance();
        
        }
        bool has_preserve_attr(){

            return m_has_preserve_attr;
        
        }
        void set_preserve_attr(const boolean& _preserve_attr ){

        m_has_preserve_attr = true;
        m_preserve_attr = _preserve_attr;
        
        }
        const boolean& preserve_attr(){

            return type: oolean\nname: \m_preserve_attr\n;
        
        }
        bool has_userDrawn_attr(){

            return m_has_userDrawn_attr;
        
        }
        void set_userDrawn_attr(const boolean& _userDrawn_attr ){

        m_has_userDrawn_attr = true;
        m_userDrawn_attr = _userDrawn_attr;
        
        }
        const boolean& userDrawn_attr(){

            return type: oolean\nname: \m_userDrawn_attr\n;
        
        }

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
        bool has_titleStyle(){

            return m_has_titleStyle;
        
        }
        ns_a::CT_TextListStyle* mutable_titleStyle(){

                m_has_titleStyle = true;
                if (!m_titleStyle)
                {
                    m_titleStyle = new ns_a::CT_TextListStyle();
                }
                return m_titleStyle;
            
        }
        const ns_a::CT_TextListStyle& titleStyle(){

            if (m_titleStyle)
            {
                return *m_titleStyle;
            }
            return ns_a::CT_TextListStyle::default_instance();
        
        }
        bool has_bodyStyle(){

            return m_has_bodyStyle;
        
        }
        ns_a::CT_TextListStyle* mutable_bodyStyle(){

                m_has_bodyStyle = true;
                if (!m_bodyStyle)
                {
                    m_bodyStyle = new ns_a::CT_TextListStyle();
                }
                return m_bodyStyle;
            
        }
        const ns_a::CT_TextListStyle& bodyStyle(){

            if (m_bodyStyle)
            {
                return *m_bodyStyle;
            }
            return ns_a::CT_TextListStyle::default_instance();
        
        }
        bool has_otherStyle(){

            return m_has_otherStyle;
        
        }
        ns_a::CT_TextListStyle* mutable_otherStyle(){

                m_has_otherStyle = true;
                if (!m_otherStyle)
                {
                    m_otherStyle = new ns_a::CT_TextListStyle();
                }
                return m_otherStyle;
            
        }
        const ns_a::CT_TextListStyle& otherStyle(){

            if (m_otherStyle)
            {
                return *m_otherStyle;
            }
            return ns_a::CT_TextListStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_titleStyle = false;
                
        if (m_titleStyle)
        {
            delete m_titleStyle;
            m_titleStyle = NULL;
        }
    
            
                m_has_bodyStyle = false;
                
        if (m_bodyStyle)
        {
            delete m_bodyStyle;
            m_bodyStyle = NULL;
        }
    
            
                m_has_otherStyle = false;
                
        if (m_otherStyle)
        {
            delete m_otherStyle;
            m_otherStyle = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_titleStyle)
                {
                    m_titleStyle->toXml(titleStyle, _outStream);;
                }
            
                if (m_has_bodyStyle)
                {
                    m_titleStyle->toXml(bodyStyle, _outStream);;
                }
            
                if (m_has_otherStyle)
                {
                    m_titleStyle->toXml(otherStyle, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_titleStyle->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideMasterTextStyles& default_instance(){

    if (!CT_SlideMasterTextStyles::default_instance_)
    {
        CT_SlideMasterTextStyles::default_instance_ = new CT_SlideMasterTextStyles();
    }
    return *CT_SlideMasterTextStyles::default_instance_;

        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideLayoutIdListEntry& default_instance(){

    if (!CT_SlideLayoutIdListEntry::default_instance_)
    {
        CT_SlideLayoutIdListEntry::default_instance_ = new CT_SlideLayoutIdListEntry();
    }
    return *CT_SlideLayoutIdListEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_SlideLayoutId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_SlideLayoutId(_id_attr);
        
        }
        const ST_SlideLayoutId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_SlideLayoutId::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

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
        bool has_sldLayoutId(){

            return m_has_sldLayoutId;
        
        }
        CT_SlideLayoutIdListEntry* mutable_sldLayoutId(){

                m_has_sldLayoutId = true;
                if (!m_sldLayoutId)
                {
                    m_sldLayoutId = new CT_SlideLayoutIdListEntry();
                }
                return m_sldLayoutId;
            
        }
        const CT_SlideLayoutIdListEntry& sldLayoutId(){

            if (m_sldLayoutId)
            {
                return *m_sldLayoutId;
            }
            return CT_SlideLayoutIdListEntry::default_instance();
        
        }
        void clear(){

                m_has_sldLayoutId = false;
                
        if (m_sldLayoutId)
        {
            delete m_sldLayoutId;
            m_sldLayoutId = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sldLayoutId)
                {
                    m_sldLayoutId->toXml(sldLayoutId, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideLayoutIdList& default_instance(){

    if (!CT_SlideLayoutIdList::default_instance_)
    {
        CT_SlideLayoutIdList::default_instance_ = new CT_SlideLayoutIdList();
    }
    return *CT_SlideLayoutIdList::default_instance_;

        }

    private:
        bool m_has_sldLayoutId ;
        CT_SlideLayoutIdListEntry* m_sldLayoutId ;
        static CT_SlideLayoutIdList* default_instance_ ;

    }

    class CT_SlideMaster : public XSD::ComplexType{
    public:
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMap(){

            return m_has_clrMap;
        
        }
        ns_a::CT_ColorMapping* mutable_clrMap(){

                m_has_clrMap = true;
                if (!m_clrMap)
                {
                    m_clrMap = new ns_a::CT_ColorMapping();
                }
                return m_clrMap;
            
        }
        const ns_a::CT_ColorMapping& clrMap(){

            if (m_clrMap)
            {
                return *m_clrMap;
            }
            return ns_a::CT_ColorMapping::default_instance();
        
        }
        bool has_sldLayoutIdLst(){

            return m_has_sldLayoutIdLst;
        
        }
        CT_SlideLayoutIdList* mutable_sldLayoutIdLst(){

                m_has_sldLayoutIdLst = true;
                if (!m_sldLayoutIdLst)
                {
                    m_sldLayoutIdLst = new CT_SlideLayoutIdList();
                }
                return m_sldLayoutIdLst;
            
        }
        const CT_SlideLayoutIdList& sldLayoutIdLst(){

            if (m_sldLayoutIdLst)
            {
                return *m_sldLayoutIdLst;
            }
            return CT_SlideLayoutIdList::default_instance();
        
        }
        bool has_transition(){

            return m_has_transition;
        
        }
        CT_SlideTransition* mutable_transition(){

                m_has_transition = true;
                if (!m_transition)
                {
                    m_transition = new CT_SlideTransition();
                }
                return m_transition;
            
        }
        const CT_SlideTransition& transition(){

            if (m_transition)
            {
                return *m_transition;
            }
            return CT_SlideTransition::default_instance();
        
        }
        bool has_timing(){

            return m_has_timing;
        
        }
        CT_SlideTiming* mutable_timing(){

                m_has_timing = true;
                if (!m_timing)
                {
                    m_timing = new CT_SlideTiming();
                }
                return m_timing;
            
        }
        const CT_SlideTiming& timing(){

            if (m_timing)
            {
                return *m_timing;
            }
            return CT_SlideTiming::default_instance();
        
        }
        bool has_hf(){

            return m_has_hf;
        
        }
        CT_HeaderFooter* mutable_hf(){

                m_has_hf = true;
                if (!m_hf)
                {
                    m_hf = new CT_HeaderFooter();
                }
                return m_hf;
            
        }
        const CT_HeaderFooter& hf(){

            if (m_hf)
            {
                return *m_hf;
            }
            return CT_HeaderFooter::default_instance();
        
        }
        bool has_txStyles(){

            return m_has_txStyles;
        
        }
        CT_SlideMasterTextStyles* mutable_txStyles(){

                m_has_txStyles = true;
                if (!m_txStyles)
                {
                    m_txStyles = new CT_SlideMasterTextStyles();
                }
                return m_txStyles;
            
        }
        const CT_SlideMasterTextStyles& txStyles(){

            if (m_txStyles)
            {
                return *m_txStyles;
            }
            return CT_SlideMasterTextStyles::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_preserve_attr = false;
                m_preserve_attr = false;
            
                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMap = false;
                
        if (m_clrMap)
        {
            delete m_clrMap;
            m_clrMap = NULL;
        }
    
            
                m_has_sldLayoutIdLst = false;
                
        if (m_sldLayoutIdLst)
        {
            delete m_sldLayoutIdLst;
            m_sldLayoutIdLst = NULL;
        }
    
            
                m_has_transition = false;
                
        if (m_transition)
        {
            delete m_transition;
            m_transition = NULL;
        }
    
            
                m_has_timing = false;
                
        if (m_timing)
        {
            delete m_timing;
            m_timing = NULL;
        }
    
            
                m_has_hf = false;
                
        if (m_hf)
        {
            delete m_hf;
            m_hf = NULL;
        }
    
            
                m_has_txStyles = false;
                
        if (m_txStyles)
        {
            delete m_txStyles;
            m_txStyles = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_preserve_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMap)
                {
                    m_cSld->toXml(clrMap, _outStream);;
                }
            
                if (m_has_sldLayoutIdLst)
                {
                    m_cSld->toXml(sldLayoutIdLst, _outStream);;
                }
            
                if (m_has_transition)
                {
                    m_cSld->toXml(transition, _outStream);;
                }
            
                if (m_has_timing)
                {
                    m_cSld->toXml(timing, _outStream);;
                }
            
                if (m_has_hf)
                {
                    m_cSld->toXml(hf, _outStream);;
                }
            
                if (m_has_txStyles)
                {
                    m_cSld->toXml(txStyles, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideMaster& default_instance(){

    if (!CT_SlideMaster::default_instance_)
    {
        CT_SlideMaster::default_instance_ = new CT_SlideMaster();
    }
    return *CT_SlideMaster::default_instance_;

        }
        bool has_preserve_attr(){

            return m_has_preserve_attr;
        
        }
        void set_preserve_attr(const boolean& _preserve_attr ){

        m_has_preserve_attr = true;
        m_preserve_attr = _preserve_attr;
        
        }
        const boolean& preserve_attr(){

            return type: oolean\nname: \m_preserve_attr\n;
        
        }

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
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMap(){

            return m_has_clrMap;
        
        }
        ns_a::CT_ColorMapping* mutable_clrMap(){

                m_has_clrMap = true;
                if (!m_clrMap)
                {
                    m_clrMap = new ns_a::CT_ColorMapping();
                }
                return m_clrMap;
            
        }
        const ns_a::CT_ColorMapping& clrMap(){

            if (m_clrMap)
            {
                return *m_clrMap;
            }
            return ns_a::CT_ColorMapping::default_instance();
        
        }
        bool has_hf(){

            return m_has_hf;
        
        }
        CT_HeaderFooter* mutable_hf(){

                m_has_hf = true;
                if (!m_hf)
                {
                    m_hf = new CT_HeaderFooter();
                }
                return m_hf;
            
        }
        const CT_HeaderFooter& hf(){

            if (m_hf)
            {
                return *m_hf;
            }
            return CT_HeaderFooter::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMap = false;
                
        if (m_clrMap)
        {
            delete m_clrMap;
            m_clrMap = NULL;
        }
    
            
                m_has_hf = false;
                
        if (m_hf)
        {
            delete m_hf;
            m_hf = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMap)
                {
                    m_cSld->toXml(clrMap, _outStream);;
                }
            
                if (m_has_hf)
                {
                    m_cSld->toXml(hf, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HandoutMaster& default_instance(){

    if (!CT_HandoutMaster::default_instance_)
    {
        CT_HandoutMaster::default_instance_ = new CT_HandoutMaster();
    }
    return *CT_HandoutMaster::default_instance_;

        }

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
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMap(){

            return m_has_clrMap;
        
        }
        ns_a::CT_ColorMapping* mutable_clrMap(){

                m_has_clrMap = true;
                if (!m_clrMap)
                {
                    m_clrMap = new ns_a::CT_ColorMapping();
                }
                return m_clrMap;
            
        }
        const ns_a::CT_ColorMapping& clrMap(){

            if (m_clrMap)
            {
                return *m_clrMap;
            }
            return ns_a::CT_ColorMapping::default_instance();
        
        }
        bool has_hf(){

            return m_has_hf;
        
        }
        CT_HeaderFooter* mutable_hf(){

                m_has_hf = true;
                if (!m_hf)
                {
                    m_hf = new CT_HeaderFooter();
                }
                return m_hf;
            
        }
        const CT_HeaderFooter& hf(){

            if (m_hf)
            {
                return *m_hf;
            }
            return CT_HeaderFooter::default_instance();
        
        }
        bool has_notesStyle(){

            return m_has_notesStyle;
        
        }
        ns_a::CT_TextListStyle* mutable_notesStyle(){

                m_has_notesStyle = true;
                if (!m_notesStyle)
                {
                    m_notesStyle = new ns_a::CT_TextListStyle();
                }
                return m_notesStyle;
            
        }
        const ns_a::CT_TextListStyle& notesStyle(){

            if (m_notesStyle)
            {
                return *m_notesStyle;
            }
            return ns_a::CT_TextListStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMap = false;
                
        if (m_clrMap)
        {
            delete m_clrMap;
            m_clrMap = NULL;
        }
    
            
                m_has_hf = false;
                
        if (m_hf)
        {
            delete m_hf;
            m_hf = NULL;
        }
    
            
                m_has_notesStyle = false;
                
        if (m_notesStyle)
        {
            delete m_notesStyle;
            m_notesStyle = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMap)
                {
                    m_cSld->toXml(clrMap, _outStream);;
                }
            
                if (m_has_hf)
                {
                    m_cSld->toXml(hf, _outStream);;
                }
            
                if (m_has_notesStyle)
                {
                    m_cSld->toXml(notesStyle, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesMaster& default_instance(){

    if (!CT_NotesMaster::default_instance_)
    {
        CT_NotesMaster::default_instance_ = new CT_NotesMaster();
    }
    return *CT_NotesMaster::default_instance_;

        }

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
        bool has_cSld(){

            return m_has_cSld;
        
        }
        CT_CommonSlideData* mutable_cSld(){

                m_has_cSld = true;
                if (!m_cSld)
                {
                    m_cSld = new CT_CommonSlideData();
                }
                return m_cSld;
            
        }
        const CT_CommonSlideData& cSld(){

            if (m_cSld)
            {
                return *m_cSld;
            }
            return CT_CommonSlideData::default_instance();
        
        }
        bool has_clrMapOvr(){

            return m_has_clrMapOvr;
        
        }
        ns_a::CT_ColorMappingOverride* mutable_clrMapOvr(){

                m_has_clrMapOvr = true;
                if (!m_clrMapOvr)
                {
                    m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
                }
                return m_clrMapOvr;
            
        }
        const ns_a::CT_ColorMappingOverride& clrMapOvr(){

            if (m_clrMapOvr)
            {
                return *m_clrMapOvr;
            }
            return ns_a::CT_ColorMappingOverride::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionListModify* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionListModify();
                }
                return m_extLst;
            
        }
        const CT_ExtensionListModify& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionListModify::default_instance();
        
        }
        void clear(){

                m_has_showMasterSp_attr = false;
                m_showMasterSp_attr = false;
            
                m_has_showMasterPhAnim_attr = false;
                m_showMasterPhAnim_attr = false;
            
                m_has_cSld = false;
                
        if (m_cSld)
        {
            delete m_cSld;
            m_cSld = NULL;
        }
    
            
                m_has_clrMapOvr = false;
                
        if (m_clrMapOvr)
        {
            delete m_clrMapOvr;
            m_clrMapOvr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterSp_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showMasterPhAnim_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cSld)
                {
                    m_cSld->toXml(cSld, _outStream);;
                }
            
                if (m_has_clrMapOvr)
                {
                    m_cSld->toXml(clrMapOvr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSld->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesSlide& default_instance(){

    if (!CT_NotesSlide::default_instance_)
    {
        CT_NotesSlide::default_instance_ = new CT_NotesSlide();
    }
    return *CT_NotesSlide::default_instance_;

        }
        bool has_showMasterSp_attr(){

            return m_has_showMasterSp_attr;
        
        }
        void set_showMasterSp_attr(const boolean& _showMasterSp_attr ){

        m_has_showMasterSp_attr = true;
        m_showMasterSp_attr = _showMasterSp_attr;
        
        }
        const boolean& showMasterSp_attr(){

            return type: oolean\nname: \m_showMasterSp_attr\n;
        
        }
        bool has_showMasterPhAnim_attr(){

            return m_has_showMasterPhAnim_attr;
        
        }
        void set_showMasterPhAnim_attr(const boolean& _showMasterPhAnim_attr ){

        m_has_showMasterPhAnim_attr = true;
        m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
        
        }
        const boolean& showMasterPhAnim_attr(){

            return type: oolean\nname: \m_showMasterPhAnim_attr\n;
        
        }

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
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_serverSldId_attr = false;
                m_serverSldId_attr.clear();
            
                m_has_serverSldModifiedTime_attr = false;
                m_serverSldModifiedTime_attr.clear();
            
                m_has_clientInsertedTime_attr = false;
                m_clientInsertedTime_attr.clear();
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_serverSldId_attr << \\\;
_outStream << _attrName << \=\\ << m_serverSldModifiedTime_attr << \\\;
_outStream << _attrName << \=\\ << m_clientInsertedTime_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideSyncProperties& default_instance(){

    if (!CT_SlideSyncProperties::default_instance_)
    {
        CT_SlideSyncProperties::default_instance_ = new CT_SlideSyncProperties();
    }
    return *CT_SlideSyncProperties::default_instance_;

        }
        bool has_serverSldId_attr(){

            return m_has_serverSldId_attr;
        
        }
        void set_serverSldId_attr(const string& _serverSldId_attr ){

        m_has_serverSldId_attr = true;
        m_serverSldId_attr = _serverSldId_attr;
        
        }
        const string& serverSldId_attr(){

            return type: \string\nname: \m_serverSldId_attr\n;
        
        }
        bool has_serverSldModifiedTime_attr(){

            return m_has_serverSldModifiedTime_attr;
        
        }
        void set_serverSldModifiedTime_attr(const dateTime& _serverSldModifiedTime_attr ){

        m_has_serverSldModifiedTime_attr = true;
        m_serverSldModifiedTime_attr = _serverSldModifiedTime_attr;
        
        }
        const dateTime& serverSldModifiedTime_attr(){

            return type: \dateTime\nname: \m_serverSldModifiedTime_attr\n;
        
        }
        bool has_clientInsertedTime_attr(){

            return m_has_clientInsertedTime_attr;
        
        }
        void set_clientInsertedTime_attr(const dateTime& _clientInsertedTime_attr ){

        m_has_clientInsertedTime_attr = true;
        m_clientInsertedTime_attr = _clientInsertedTime_attr;
        
        }
        const dateTime& clientInsertedTime_attr(){

            return type: \dateTime\nname: \m_clientInsertedTime_attr\n;
        
        }

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
        void clear(){

                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StringTag& default_instance(){

    if (!CT_StringTag::default_instance_)
    {
        CT_StringTag::default_instance_ = new CT_StringTag();
    }
    return *CT_StringTag::default_instance_;

        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }

    private:
        static CT_StringTag* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;

    }

    class CT_TagList : public XSD::ComplexType{
    public:
        bool has_tag(){

            return m_has_tag;
        
        }
        CT_StringTag* mutable_tag(){

                m_has_tag = true;
                if (!m_tag)
                {
                    m_tag = new CT_StringTag();
                }
                return m_tag;
            
        }
        const CT_StringTag& tag(){

            if (m_tag)
            {
                return *m_tag;
            }
            return CT_StringTag::default_instance();
        
        }
        void clear(){

                m_has_tag = false;
                
        if (m_tag)
        {
            delete m_tag;
            m_tag = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_tag)
                {
                    m_tag->toXml(tag, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TagList& default_instance(){

    if (!CT_TagList::default_instance_)
    {
        CT_TagList::default_instance_ = new CT_TagList();
    }
    return *CT_TagList::default_instance_;

        }

    private:
        bool m_has_tag ;
        CT_StringTag* m_tag ;
        static CT_TagList* default_instance_ ;

    }

    class CT_NormalViewPortion : public XSD::ComplexType{
    public:
        void clear(){

                m_has_sz_attr = false;
                
        if (m_sz_attr)
        {
            delete m_sz_attr;
            m_sz_attr = NULL;
        }
    
            
                m_has_autoAdjust_attr = false;
                m_autoAdjust_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_sz_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_autoAdjust_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NormalViewPortion& default_instance(){

    if (!CT_NormalViewPortion::default_instance_)
    {
        CT_NormalViewPortion::default_instance_ = new CT_NormalViewPortion();
    }
    return *CT_NormalViewPortion::default_instance_;

        }
        bool has_sz_attr(){

            return m_has_sz_attr;
        
        }
        void set_sz_attr(const ns_a::ST_PositiveFixedPercentage& _sz_attr ){

            m_has_sz_attr = true;
            m_sz_attr = new ns_a::ST_PositiveFixedPercentage(_sz_attr);
        
        }
        const ns_a::ST_PositiveFixedPercentage& sz_attr(){

            if (m_sz_attr)
            {
                return *m_sz_attr;
            }
            return ns_a::ST_PositiveFixedPercentage::default_instance();
        
        }
        bool has_autoAdjust_attr(){

            return m_has_autoAdjust_attr;
        
        }
        void set_autoAdjust_attr(const boolean& _autoAdjust_attr ){

        m_has_autoAdjust_attr = true;
        m_autoAdjust_attr = _autoAdjust_attr;
        
        }
        const boolean& autoAdjust_attr(){

            return type: oolean\nname: \m_autoAdjust_attr\n;
        
        }

    private:
        static CT_NormalViewPortion* default_instance_ ;
        bool m_has_sz_attr ;
        ns_a::ST_PositiveFixedPercentage* m_sz_attr ;
        bool m_has_autoAdjust_attr ;
        boolean m_autoAdjust_attr ;

    }

    class CT_NormalViewProperties : public XSD::ComplexType{
    public:
        bool has_restoredLeft(){

            return m_has_restoredLeft;
        
        }
        CT_NormalViewPortion* mutable_restoredLeft(){

                m_has_restoredLeft = true;
                if (!m_restoredLeft)
                {
                    m_restoredLeft = new CT_NormalViewPortion();
                }
                return m_restoredLeft;
            
        }
        const CT_NormalViewPortion& restoredLeft(){

            if (m_restoredLeft)
            {
                return *m_restoredLeft;
            }
            return CT_NormalViewPortion::default_instance();
        
        }
        bool has_restoredTop(){

            return m_has_restoredTop;
        
        }
        CT_NormalViewPortion* mutable_restoredTop(){

                m_has_restoredTop = true;
                if (!m_restoredTop)
                {
                    m_restoredTop = new CT_NormalViewPortion();
                }
                return m_restoredTop;
            
        }
        const CT_NormalViewPortion& restoredTop(){

            if (m_restoredTop)
            {
                return *m_restoredTop;
            }
            return CT_NormalViewPortion::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_showOutlineIcons_attr = false;
                m_showOutlineIcons_attr = false;
            
                m_has_snapVertSplitter_attr = false;
                m_snapVertSplitter_attr = false;
            
                m_has_vertBarState_attr = false;
                
        if (m_vertBarState_attr)
        {
            delete m_vertBarState_attr;
            m_vertBarState_attr = NULL;
        }
    
            
                m_has_horzBarState_attr = false;
                
        if (m_horzBarState_attr)
        {
            delete m_horzBarState_attr;
            m_horzBarState_attr = NULL;
        }
    
            
                m_has_preferSingleView_attr = false;
                m_preferSingleView_attr = false;
            
                m_has_restoredLeft = false;
                
        if (m_restoredLeft)
        {
            delete m_restoredLeft;
            m_restoredLeft = NULL;
        }
    
            
                m_has_restoredTop = false;
                
        if (m_restoredTop)
        {
            delete m_restoredTop;
            m_restoredTop = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showOutlineIcons_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_snapVertSplitter_attr) << \\\;
m_vertBarState_attr->toXml(_attrName, _outStream);
m_horzBarState_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_preferSingleView_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_restoredLeft)
                {
                    m_restoredLeft->toXml(restoredLeft, _outStream);;
                }
            
                if (m_has_restoredTop)
                {
                    m_restoredLeft->toXml(restoredTop, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_restoredLeft->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NormalViewProperties& default_instance(){

    if (!CT_NormalViewProperties::default_instance_)
    {
        CT_NormalViewProperties::default_instance_ = new CT_NormalViewProperties();
    }
    return *CT_NormalViewProperties::default_instance_;

        }
        bool has_showOutlineIcons_attr(){

            return m_has_showOutlineIcons_attr;
        
        }
        void set_showOutlineIcons_attr(const boolean& _showOutlineIcons_attr ){

        m_has_showOutlineIcons_attr = true;
        m_showOutlineIcons_attr = _showOutlineIcons_attr;
        
        }
        const boolean& showOutlineIcons_attr(){

            return type: oolean\nname: \m_showOutlineIcons_attr\n;
        
        }
        bool has_snapVertSplitter_attr(){

            return m_has_snapVertSplitter_attr;
        
        }
        void set_snapVertSplitter_attr(const boolean& _snapVertSplitter_attr ){

        m_has_snapVertSplitter_attr = true;
        m_snapVertSplitter_attr = _snapVertSplitter_attr;
        
        }
        const boolean& snapVertSplitter_attr(){

            return type: oolean\nname: \m_snapVertSplitter_attr\n;
        
        }
        bool has_vertBarState_attr(){

            return m_has_vertBarState_attr;
        
        }
        void set_vertBarState_attr(const ST_SplitterBarState& _vertBarState_attr ){

            m_has_vertBarState_attr = true;
            m_vertBarState_attr = new ST_SplitterBarState(_vertBarState_attr);
        
        }
        const ST_SplitterBarState& vertBarState_attr(){

            if (m_vertBarState_attr)
            {
                return *m_vertBarState_attr;
            }
            return ST_SplitterBarState::default_instance();
        
        }
        bool has_horzBarState_attr(){

            return m_has_horzBarState_attr;
        
        }
        void set_horzBarState_attr(const ST_SplitterBarState& _horzBarState_attr ){

            m_has_horzBarState_attr = true;
            m_horzBarState_attr = new ST_SplitterBarState(_horzBarState_attr);
        
        }
        const ST_SplitterBarState& horzBarState_attr(){

            if (m_horzBarState_attr)
            {
                return *m_horzBarState_attr;
            }
            return ST_SplitterBarState::default_instance();
        
        }
        bool has_preferSingleView_attr(){

            return m_has_preferSingleView_attr;
        
        }
        void set_preferSingleView_attr(const boolean& _preferSingleView_attr ){

        m_has_preferSingleView_attr = true;
        m_preferSingleView_attr = _preferSingleView_attr;
        
        }
        const boolean& preferSingleView_attr(){

            return type: oolean\nname: \m_preferSingleView_attr\n;
        
        }

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
        bool has_scale(){

            return m_has_scale;
        
        }
        ns_a::CT_Scale2D* mutable_scale(){

                m_has_scale = true;
                if (!m_scale)
                {
                    m_scale = new ns_a::CT_Scale2D();
                }
                return m_scale;
            
        }
        const ns_a::CT_Scale2D& scale(){

            if (m_scale)
            {
                return *m_scale;
            }
            return ns_a::CT_Scale2D::default_instance();
        
        }
        bool has_origin(){

            return m_has_origin;
        
        }
        ns_a::CT_Point2D* mutable_origin(){

                m_has_origin = true;
                if (!m_origin)
                {
                    m_origin = new ns_a::CT_Point2D();
                }
                return m_origin;
            
        }
        const ns_a::CT_Point2D& origin(){

            if (m_origin)
            {
                return *m_origin;
            }
            return ns_a::CT_Point2D::default_instance();
        
        }
        void clear(){

                m_has_varScale_attr = false;
                m_varScale_attr = false;
            
                m_has_scale = false;
                
        if (m_scale)
        {
            delete m_scale;
            m_scale = NULL;
        }
    
            
                m_has_origin = false;
                
        if (m_origin)
        {
            delete m_origin;
            m_origin = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_varScale_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_scale)
                {
                    m_scale->toXml(scale, _outStream);;
                }
            
                if (m_has_origin)
                {
                    m_scale->toXml(origin, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommonViewProperties& default_instance(){

    if (!CT_CommonViewProperties::default_instance_)
    {
        CT_CommonViewProperties::default_instance_ = new CT_CommonViewProperties();
    }
    return *CT_CommonViewProperties::default_instance_;

        }
        bool has_varScale_attr(){

            return m_has_varScale_attr;
        
        }
        void set_varScale_attr(const boolean& _varScale_attr ){

        m_has_varScale_attr = true;
        m_varScale_attr = _varScale_attr;
        
        }
        const boolean& varScale_attr(){

            return type: oolean\nname: \m_varScale_attr\n;
        
        }

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
        bool has_cViewPr(){

            return m_has_cViewPr;
        
        }
        CT_CommonViewProperties* mutable_cViewPr(){

                m_has_cViewPr = true;
                if (!m_cViewPr)
                {
                    m_cViewPr = new CT_CommonViewProperties();
                }
                return m_cViewPr;
            
        }
        const CT_CommonViewProperties& cViewPr(){

            if (m_cViewPr)
            {
                return *m_cViewPr;
            }
            return CT_CommonViewProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cViewPr = false;
                
        if (m_cViewPr)
        {
            delete m_cViewPr;
            m_cViewPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cViewPr)
                {
                    m_cViewPr->toXml(cViewPr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesTextViewProperties& default_instance(){

    if (!CT_NotesTextViewProperties::default_instance_)
    {
        CT_NotesTextViewProperties::default_instance_ = new CT_NotesTextViewProperties();
    }
    return *CT_NotesTextViewProperties::default_instance_;

        }

    private:
        bool m_has_cViewPr ;
        CT_CommonViewProperties* m_cViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesTextViewProperties* default_instance_ ;

    }

    class CT_OutlineViewSlideEntry : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_collapse_attr = false;
                m_collapse_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_id_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_collapse_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OutlineViewSlideEntry& default_instance(){

    if (!CT_OutlineViewSlideEntry::default_instance_)
    {
        CT_OutlineViewSlideEntry::default_instance_ = new CT_OutlineViewSlideEntry();
    }
    return *CT_OutlineViewSlideEntry::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }
        bool has_collapse_attr(){

            return m_has_collapse_attr;
        
        }
        void set_collapse_attr(const boolean& _collapse_attr ){

        m_has_collapse_attr = true;
        m_collapse_attr = _collapse_attr;
        
        }
        const boolean& collapse_attr(){

            return type: oolean\nname: \m_collapse_attr\n;
        
        }

    private:
        static CT_OutlineViewSlideEntry* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_collapse_attr ;
        boolean m_collapse_attr ;

    }

    class CT_OutlineViewSlideList : public XSD::ComplexType{
    public:
        bool has_sld(){

            return m_has_sld;
        
        }
        CT_OutlineViewSlideEntry* mutable_sld(){

                m_has_sld = true;
                if (!m_sld)
                {
                    m_sld = new CT_OutlineViewSlideEntry();
                }
                return m_sld;
            
        }
        const CT_OutlineViewSlideEntry& sld(){

            if (m_sld)
            {
                return *m_sld;
            }
            return CT_OutlineViewSlideEntry::default_instance();
        
        }
        void clear(){

                m_has_sld = false;
                
        if (m_sld)
        {
            delete m_sld;
            m_sld = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_sld)
                {
                    m_sld->toXml(sld, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OutlineViewSlideList& default_instance(){

    if (!CT_OutlineViewSlideList::default_instance_)
    {
        CT_OutlineViewSlideList::default_instance_ = new CT_OutlineViewSlideList();
    }
    return *CT_OutlineViewSlideList::default_instance_;

        }

    private:
        bool m_has_sld ;
        CT_OutlineViewSlideEntry* m_sld ;
        static CT_OutlineViewSlideList* default_instance_ ;

    }

    class CT_OutlineViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr(){

            return m_has_cViewPr;
        
        }
        CT_CommonViewProperties* mutable_cViewPr(){

                m_has_cViewPr = true;
                if (!m_cViewPr)
                {
                    m_cViewPr = new CT_CommonViewProperties();
                }
                return m_cViewPr;
            
        }
        const CT_CommonViewProperties& cViewPr(){

            if (m_cViewPr)
            {
                return *m_cViewPr;
            }
            return CT_CommonViewProperties::default_instance();
        
        }
        bool has_sldLst(){

            return m_has_sldLst;
        
        }
        CT_OutlineViewSlideList* mutable_sldLst(){

                m_has_sldLst = true;
                if (!m_sldLst)
                {
                    m_sldLst = new CT_OutlineViewSlideList();
                }
                return m_sldLst;
            
        }
        const CT_OutlineViewSlideList& sldLst(){

            if (m_sldLst)
            {
                return *m_sldLst;
            }
            return CT_OutlineViewSlideList::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cViewPr = false;
                
        if (m_cViewPr)
        {
            delete m_cViewPr;
            m_cViewPr = NULL;
        }
    
            
                m_has_sldLst = false;
                
        if (m_sldLst)
        {
            delete m_sldLst;
            m_sldLst = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cViewPr)
                {
                    m_cViewPr->toXml(cViewPr, _outStream);;
                }
            
                if (m_has_sldLst)
                {
                    m_cViewPr->toXml(sldLst, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OutlineViewProperties& default_instance(){

    if (!CT_OutlineViewProperties::default_instance_)
    {
        CT_OutlineViewProperties::default_instance_ = new CT_OutlineViewProperties();
    }
    return *CT_OutlineViewProperties::default_instance_;

        }

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
        bool has_cViewPr(){

            return m_has_cViewPr;
        
        }
        CT_CommonViewProperties* mutable_cViewPr(){

                m_has_cViewPr = true;
                if (!m_cViewPr)
                {
                    m_cViewPr = new CT_CommonViewProperties();
                }
                return m_cViewPr;
            
        }
        const CT_CommonViewProperties& cViewPr(){

            if (m_cViewPr)
            {
                return *m_cViewPr;
            }
            return CT_CommonViewProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_showFormatting_attr = false;
                m_showFormatting_attr = false;
            
                m_has_cViewPr = false;
                
        if (m_cViewPr)
        {
            delete m_cViewPr;
            m_cViewPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_showFormatting_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cViewPr)
                {
                    m_cViewPr->toXml(cViewPr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideSorterViewProperties& default_instance(){

    if (!CT_SlideSorterViewProperties::default_instance_)
    {
        CT_SlideSorterViewProperties::default_instance_ = new CT_SlideSorterViewProperties();
    }
    return *CT_SlideSorterViewProperties::default_instance_;

        }
        bool has_showFormatting_attr(){

            return m_has_showFormatting_attr;
        
        }
        void set_showFormatting_attr(const boolean& _showFormatting_attr ){

        m_has_showFormatting_attr = true;
        m_showFormatting_attr = _showFormatting_attr;
        
        }
        const boolean& showFormatting_attr(){

            return type: oolean\nname: \m_showFormatting_attr\n;
        
        }

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
        void clear(){

                m_has_orient_attr = false;
                
        if (m_orient_attr)
        {
            delete m_orient_attr;
            m_orient_attr = NULL;
        }
    
            
                m_has_pos_attr = false;
                
        if (m_pos_attr)
        {
            delete m_pos_attr;
            m_pos_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_orient_attr->toXml(_attrName, _outStream);
m_pos_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Guide& default_instance(){

    if (!CT_Guide::default_instance_)
    {
        CT_Guide::default_instance_ = new CT_Guide();
    }
    return *CT_Guide::default_instance_;

        }
        bool has_orient_attr(){

            return m_has_orient_attr;
        
        }
        void set_orient_attr(const ST_Direction& _orient_attr ){

            m_has_orient_attr = true;
            m_orient_attr = new ST_Direction(_orient_attr);
        
        }
        const ST_Direction& orient_attr(){

            if (m_orient_attr)
            {
                return *m_orient_attr;
            }
            return ST_Direction::default_instance();
        
        }
        bool has_pos_attr(){

            return m_has_pos_attr;
        
        }
        void set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr ){

            m_has_pos_attr = true;
            m_pos_attr = new ns_a::ST_Coordinate32(_pos_attr);
        
        }
        const ns_a::ST_Coordinate32& pos_attr(){

            if (m_pos_attr)
            {
                return *m_pos_attr;
            }
            return ns_a::ST_Coordinate32::default_instance();
        
        }

    private:
        static CT_Guide* default_instance_ ;
        bool m_has_orient_attr ;
        ST_Direction* m_orient_attr ;
        bool m_has_pos_attr ;
        ns_a::ST_Coordinate32* m_pos_attr ;

    }

    class CT_GuideList : public XSD::ComplexType{
    public:
        bool has_guide(){

            return m_has_guide;
        
        }
        CT_Guide* mutable_guide(){

                m_has_guide = true;
                if (!m_guide)
                {
                    m_guide = new CT_Guide();
                }
                return m_guide;
            
        }
        const CT_Guide& guide(){

            if (m_guide)
            {
                return *m_guide;
            }
            return CT_Guide::default_instance();
        
        }
        void clear(){

                m_has_guide = false;
                
        if (m_guide)
        {
            delete m_guide;
            m_guide = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_guide)
                {
                    m_guide->toXml(guide, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GuideList& default_instance(){

    if (!CT_GuideList::default_instance_)
    {
        CT_GuideList::default_instance_ = new CT_GuideList();
    }
    return *CT_GuideList::default_instance_;

        }

    private:
        bool m_has_guide ;
        CT_Guide* m_guide ;
        static CT_GuideList* default_instance_ ;

    }

    class CT_CommonSlideViewProperties : public XSD::ComplexType{
    public:
        bool has_cViewPr(){

            return m_has_cViewPr;
        
        }
        CT_CommonViewProperties* mutable_cViewPr(){

                m_has_cViewPr = true;
                if (!m_cViewPr)
                {
                    m_cViewPr = new CT_CommonViewProperties();
                }
                return m_cViewPr;
            
        }
        const CT_CommonViewProperties& cViewPr(){

            if (m_cViewPr)
            {
                return *m_cViewPr;
            }
            return CT_CommonViewProperties::default_instance();
        
        }
        bool has_guideLst(){

            return m_has_guideLst;
        
        }
        CT_GuideList* mutable_guideLst(){

                m_has_guideLst = true;
                if (!m_guideLst)
                {
                    m_guideLst = new CT_GuideList();
                }
                return m_guideLst;
            
        }
        const CT_GuideList& guideLst(){

            if (m_guideLst)
            {
                return *m_guideLst;
            }
            return CT_GuideList::default_instance();
        
        }
        void clear(){

                m_has_snapToGrid_attr = false;
                m_snapToGrid_attr = false;
            
                m_has_snapToObjects_attr = false;
                m_snapToObjects_attr = false;
            
                m_has_showGuides_attr = false;
                m_showGuides_attr = false;
            
                m_has_cViewPr = false;
                
        if (m_cViewPr)
        {
            delete m_cViewPr;
            m_cViewPr = NULL;
        }
    
            
                m_has_guideLst = false;
                
        if (m_guideLst)
        {
            delete m_guideLst;
            m_guideLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_snapToGrid_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_snapToObjects_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showGuides_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cViewPr)
                {
                    m_cViewPr->toXml(cViewPr, _outStream);;
                }
            
                if (m_has_guideLst)
                {
                    m_cViewPr->toXml(guideLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CommonSlideViewProperties& default_instance(){

    if (!CT_CommonSlideViewProperties::default_instance_)
    {
        CT_CommonSlideViewProperties::default_instance_ = new CT_CommonSlideViewProperties();
    }
    return *CT_CommonSlideViewProperties::default_instance_;

        }
        bool has_snapToGrid_attr(){

            return m_has_snapToGrid_attr;
        
        }
        void set_snapToGrid_attr(const boolean& _snapToGrid_attr ){

        m_has_snapToGrid_attr = true;
        m_snapToGrid_attr = _snapToGrid_attr;
        
        }
        const boolean& snapToGrid_attr(){

            return type: oolean\nname: \m_snapToGrid_attr\n;
        
        }
        bool has_snapToObjects_attr(){

            return m_has_snapToObjects_attr;
        
        }
        void set_snapToObjects_attr(const boolean& _snapToObjects_attr ){

        m_has_snapToObjects_attr = true;
        m_snapToObjects_attr = _snapToObjects_attr;
        
        }
        const boolean& snapToObjects_attr(){

            return type: oolean\nname: \m_snapToObjects_attr\n;
        
        }
        bool has_showGuides_attr(){

            return m_has_showGuides_attr;
        
        }
        void set_showGuides_attr(const boolean& _showGuides_attr ){

        m_has_showGuides_attr = true;
        m_showGuides_attr = _showGuides_attr;
        
        }
        const boolean& showGuides_attr(){

            return type: oolean\nname: \m_showGuides_attr\n;
        
        }

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
        bool has_cSldViewPr(){

            return m_has_cSldViewPr;
        
        }
        CT_CommonSlideViewProperties* mutable_cSldViewPr(){

                m_has_cSldViewPr = true;
                if (!m_cSldViewPr)
                {
                    m_cSldViewPr = new CT_CommonSlideViewProperties();
                }
                return m_cSldViewPr;
            
        }
        const CT_CommonSlideViewProperties& cSldViewPr(){

            if (m_cSldViewPr)
            {
                return *m_cSldViewPr;
            }
            return CT_CommonSlideViewProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cSldViewPr = false;
                
        if (m_cSldViewPr)
        {
            delete m_cSldViewPr;
            m_cSldViewPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cSldViewPr)
                {
                    m_cSldViewPr->toXml(cSldViewPr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSldViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SlideViewProperties& default_instance(){

    if (!CT_SlideViewProperties::default_instance_)
    {
        CT_SlideViewProperties::default_instance_ = new CT_SlideViewProperties();
    }
    return *CT_SlideViewProperties::default_instance_;

        }

    private:
        bool m_has_cSldViewPr ;
        CT_CommonSlideViewProperties* m_cSldViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SlideViewProperties* default_instance_ ;

    }

    class CT_NotesViewProperties : public XSD::ComplexType{
    public:
        bool has_cSldViewPr(){

            return m_has_cSldViewPr;
        
        }
        CT_CommonSlideViewProperties* mutable_cSldViewPr(){

                m_has_cSldViewPr = true;
                if (!m_cSldViewPr)
                {
                    m_cSldViewPr = new CT_CommonSlideViewProperties();
                }
                return m_cSldViewPr;
            
        }
        const CT_CommonSlideViewProperties& cSldViewPr(){

            if (m_cSldViewPr)
            {
                return *m_cSldViewPr;
            }
            return CT_CommonSlideViewProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cSldViewPr = false;
                
        if (m_cSldViewPr)
        {
            delete m_cSldViewPr;
            m_cSldViewPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cSldViewPr)
                {
                    m_cSldViewPr->toXml(cSldViewPr, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cSldViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NotesViewProperties& default_instance(){

    if (!CT_NotesViewProperties::default_instance_)
    {
        CT_NotesViewProperties::default_instance_ = new CT_NotesViewProperties();
    }
    return *CT_NotesViewProperties::default_instance_;

        }

    private:
        bool m_has_cSldViewPr ;
        CT_CommonSlideViewProperties* m_cSldViewPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NotesViewProperties* default_instance_ ;

    }

    class CT_ViewProperties : public XSD::ComplexType{
    public:
        bool has_normalViewPr(){

            return m_has_normalViewPr;
        
        }
        CT_NormalViewProperties* mutable_normalViewPr(){

                m_has_normalViewPr = true;
                if (!m_normalViewPr)
                {
                    m_normalViewPr = new CT_NormalViewProperties();
                }
                return m_normalViewPr;
            
        }
        const CT_NormalViewProperties& normalViewPr(){

            if (m_normalViewPr)
            {
                return *m_normalViewPr;
            }
            return CT_NormalViewProperties::default_instance();
        
        }
        bool has_slideViewPr(){

            return m_has_slideViewPr;
        
        }
        CT_SlideViewProperties* mutable_slideViewPr(){

                m_has_slideViewPr = true;
                if (!m_slideViewPr)
                {
                    m_slideViewPr = new CT_SlideViewProperties();
                }
                return m_slideViewPr;
            
        }
        const CT_SlideViewProperties& slideViewPr(){

            if (m_slideViewPr)
            {
                return *m_slideViewPr;
            }
            return CT_SlideViewProperties::default_instance();
        
        }
        bool has_outlineViewPr(){

            return m_has_outlineViewPr;
        
        }
        CT_OutlineViewProperties* mutable_outlineViewPr(){

                m_has_outlineViewPr = true;
                if (!m_outlineViewPr)
                {
                    m_outlineViewPr = new CT_OutlineViewProperties();
                }
                return m_outlineViewPr;
            
        }
        const CT_OutlineViewProperties& outlineViewPr(){

            if (m_outlineViewPr)
            {
                return *m_outlineViewPr;
            }
            return CT_OutlineViewProperties::default_instance();
        
        }
        bool has_notesTextViewPr(){

            return m_has_notesTextViewPr;
        
        }
        CT_NotesTextViewProperties* mutable_notesTextViewPr(){

                m_has_notesTextViewPr = true;
                if (!m_notesTextViewPr)
                {
                    m_notesTextViewPr = new CT_NotesTextViewProperties();
                }
                return m_notesTextViewPr;
            
        }
        const CT_NotesTextViewProperties& notesTextViewPr(){

            if (m_notesTextViewPr)
            {
                return *m_notesTextViewPr;
            }
            return CT_NotesTextViewProperties::default_instance();
        
        }
        bool has_sorterViewPr(){

            return m_has_sorterViewPr;
        
        }
        CT_SlideSorterViewProperties* mutable_sorterViewPr(){

                m_has_sorterViewPr = true;
                if (!m_sorterViewPr)
                {
                    m_sorterViewPr = new CT_SlideSorterViewProperties();
                }
                return m_sorterViewPr;
            
        }
        const CT_SlideSorterViewProperties& sorterViewPr(){

            if (m_sorterViewPr)
            {
                return *m_sorterViewPr;
            }
            return CT_SlideSorterViewProperties::default_instance();
        
        }
        bool has_notesViewPr(){

            return m_has_notesViewPr;
        
        }
        CT_NotesViewProperties* mutable_notesViewPr(){

                m_has_notesViewPr = true;
                if (!m_notesViewPr)
                {
                    m_notesViewPr = new CT_NotesViewProperties();
                }
                return m_notesViewPr;
            
        }
        const CT_NotesViewProperties& notesViewPr(){

            if (m_notesViewPr)
            {
                return *m_notesViewPr;
            }
            return CT_NotesViewProperties::default_instance();
        
        }
        bool has_gridSpacing(){

            return m_has_gridSpacing;
        
        }
        ns_a::CT_PositiveSize2D* mutable_gridSpacing(){

                m_has_gridSpacing = true;
                if (!m_gridSpacing)
                {
                    m_gridSpacing = new ns_a::CT_PositiveSize2D();
                }
                return m_gridSpacing;
            
        }
        const ns_a::CT_PositiveSize2D& gridSpacing(){

            if (m_gridSpacing)
            {
                return *m_gridSpacing;
            }
            return ns_a::CT_PositiveSize2D::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_lastView_attr = false;
                
        if (m_lastView_attr)
        {
            delete m_lastView_attr;
            m_lastView_attr = NULL;
        }
    
            
                m_has_showComments_attr = false;
                m_showComments_attr = false;
            
                m_has_normalViewPr = false;
                
        if (m_normalViewPr)
        {
            delete m_normalViewPr;
            m_normalViewPr = NULL;
        }
    
            
                m_has_slideViewPr = false;
                
        if (m_slideViewPr)
        {
            delete m_slideViewPr;
            m_slideViewPr = NULL;
        }
    
            
                m_has_outlineViewPr = false;
                
        if (m_outlineViewPr)
        {
            delete m_outlineViewPr;
            m_outlineViewPr = NULL;
        }
    
            
                m_has_notesTextViewPr = false;
                
        if (m_notesTextViewPr)
        {
            delete m_notesTextViewPr;
            m_notesTextViewPr = NULL;
        }
    
            
                m_has_sorterViewPr = false;
                
        if (m_sorterViewPr)
        {
            delete m_sorterViewPr;
            m_sorterViewPr = NULL;
        }
    
            
                m_has_notesViewPr = false;
                
        if (m_notesViewPr)
        {
            delete m_notesViewPr;
            m_notesViewPr = NULL;
        }
    
            
                m_has_gridSpacing = false;
                
        if (m_gridSpacing)
        {
            delete m_gridSpacing;
            m_gridSpacing = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_lastView_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_showComments_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_normalViewPr)
                {
                    m_normalViewPr->toXml(normalViewPr, _outStream);;
                }
            
                if (m_has_slideViewPr)
                {
                    m_normalViewPr->toXml(slideViewPr, _outStream);;
                }
            
                if (m_has_outlineViewPr)
                {
                    m_normalViewPr->toXml(outlineViewPr, _outStream);;
                }
            
                if (m_has_notesTextViewPr)
                {
                    m_normalViewPr->toXml(notesTextViewPr, _outStream);;
                }
            
                if (m_has_sorterViewPr)
                {
                    m_normalViewPr->toXml(sorterViewPr, _outStream);;
                }
            
                if (m_has_notesViewPr)
                {
                    m_normalViewPr->toXml(notesViewPr, _outStream);;
                }
            
                if (m_has_gridSpacing)
                {
                    m_normalViewPr->toXml(gridSpacing, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_normalViewPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ViewProperties& default_instance(){

    if (!CT_ViewProperties::default_instance_)
    {
        CT_ViewProperties::default_instance_ = new CT_ViewProperties();
    }
    return *CT_ViewProperties::default_instance_;

        }
        bool has_lastView_attr(){

            return m_has_lastView_attr;
        
        }
        void set_lastView_attr(const ST_ViewType& _lastView_attr ){

            m_has_lastView_attr = true;
            m_lastView_attr = new ST_ViewType(_lastView_attr);
        
        }
        const ST_ViewType& lastView_attr(){

            if (m_lastView_attr)
            {
                return *m_lastView_attr;
            }
            return ST_ViewType::default_instance();
        
        }
        bool has_showComments_attr(){

            return m_has_showComments_attr;
        
        }
        void set_showComments_attr(const boolean& _showComments_attr ){

        m_has_showComments_attr = true;
        m_showComments_attr = _showComments_attr;
        
        }
        const boolean& showComments_attr(){

            return type: oolean\nname: \m_showComments_attr\n;
        
        }

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
        void toXml(ostream& _outStream ){

        CT_CommentAuthorList::toXml(\cmAuthorLst\, _outStream);
    
        }

    private:

    }

    class cmLst : public CT_CommentList : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_CommentList::toXml(\cmLst\, _outStream);
    
        }

    private:

    }

    class oleObj : public CT_OleObject : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_OleObject::toXml(\oleObj\, _outStream);
    
        }

    private:

    }

    class presentation : public CT_Presentation : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Presentation::toXml(\presentation\, _outStream);
    
        }

    private:

    }

    class presentationPr : public CT_PresentationProperties : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_PresentationProperties::toXml(\presentationPr\, _outStream);
    
        }

    private:

    }

    class sld : public CT_Slide : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Slide::toXml(\sld\, _outStream);
    
        }

    private:

    }

    class sldLayout : public CT_SlideLayout : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_SlideLayout::toXml(\sldLayout\, _outStream);
    
        }

    private:

    }

    class sldMaster : public CT_SlideMaster : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_SlideMaster::toXml(\sldMaster\, _outStream);
    
        }

    private:

    }

    class handoutMaster : public CT_HandoutMaster : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_HandoutMaster::toXml(\handoutMaster\, _outStream);
    
        }

    private:

    }

    class notesMaster : public CT_NotesMaster : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_NotesMaster::toXml(
otesMaster\, _outStream);
    
        }

    private:

    }

    class notes : public CT_NotesSlide : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_NotesSlide::toXml(
otes\, _outStream);
    
        }

    private:

    }

    class sldSyncPr : public CT_SlideSyncProperties : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_SlideSyncProperties::toXml(\sldSyncPr\, _outStream);
    
        }

    private:

    }

    class tagLst : public CT_TagList : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_TagList::toXml(	agLst\, _outStream);
    
        }

    private:

    }

    class viewPr : public CT_ViewProperties : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ViewProperties::toXml(iewPr\, _outStream);
    
        }

    private:

    }

}