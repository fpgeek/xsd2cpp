namespace ns_w {
    class ST_OnOff;
    class ST_OnOff1;
    class ST_TrueFalseBlank;
    class CT_SectPr;
    class CT_Text;
    class CT_FFData;
    class CT_TrackChangeNumbering;
    class CT_Br;
    class CT_Ruby;
}

#ifndef __wml_h_
#define __wml_h_ 0

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>

namespace ns_v {
    class Element : public XSD::Element {
        
    };
}

namespace ns_o {
    class Element : public XSD::Element {
        
    };
}

namespace ns_w {
    
    using namespace std;
    
    class Element : public XSD::Element {
        
    };
    
    class Attribute : public XSD::Attribute {
        
    };
    
    
    // SimpleType
    
    // Simpletype - restriction - builtIn
    class ST_LongHexNumber : public XSD::SimpleType {
    public:
        ST_LongHexNumber();
        ST_LongHexNumber(const XSD::hexBinary& _hexBinary);
        ~ST_LongHexNumber();
        
        bool has_hexBinary() const;
        void set_hexBinary(const XSD::hexBinary& _hexBinary);
        const XSD::hexBinary& hexBinary() const;
        
        void clear();
        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
        std::string toString() const;
        static const ST_LongHexNumber& default_instance();
        
    private:
        bool m_has_hexBinary;
        XSD::hexBinary m_hexBinary;
        
        static ST_LongHexNumber* default_instance_;
    };
    
    
    
    
    // SimpleType - restriction - enum
    class ST_HighlightColor : public XSD::SimpleType {
    public:
        enum Type {
            _black_ = 0,
            _blue_
        };
        
        ST_HighlightColor();
        ST_HighlightColor(const Type& _type);
        ~ST_HighlightColor();
        
        bool has_type() const;
        void set_type(const Type& _type);
        const Type& type() const;
        string toString() const;
        
        void clear();
        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_HighlightColor& default_instance();
        
    private:
        
        static const string TypeStrList[];
        
        bool m_has_type;
        Type m_type;
        
        static ST_HighlightColor* default_instance_;
    };
    
    
    
    
    
    // SimpleType - restriction - SimpleType
    // restiction - builtIn
    class ST_Percentage : public XSD::SimpleType {
    public:
        ST_Percentage();
        ST_Percentage(const std::string& _string);
        ~ST_Percentage();
        
        bool has_string() const;
        void set_string(const std::string& _string);
        const std::string& string() const;
        
        void clear();
        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
        
    private:
        bool m_has_string;
        std::string m_string;
    };
    
    class ST_FixedPercentage : public ST_Percentage {
    public:
        ST_FixedPercentage(const ST_Percentage& _ST_Percentage)
        :ST_Percentage(_ST_Percentage)
        {
            
        }
    };
    
    
    
    // SimpleType - Union
    class ST_OnOff : public XSD::SimpleType {
    public:
        ST_OnOff();
        ~ST_OnOff();
        
        bool has_boolean() const;
        void set_boolean(const XSD::boolean& _boolean);
        const XSD::boolean& boolean() const;
        
        bool has_ST_OnOff1() const;
        ST_OnOff1* mutable_ST_OnOff1();
        const ST_OnOff1& ST_OnOff1_() const;
        
        void clear();
        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OnOff& default_instance();
        
    private:
        bool m_has_boolean;
        XSD::boolean m_boolean;
        
        bool m_has_ST_OnOff1;
        ST_OnOff1* m_ST_OnOff1;
        
        void clear_boolean();
        void clear_ST_OnOff1();
        
        static ST_OnOff* defalut_instance_;
        
    };
    
    class ST_OnOff1 : public XSD::SimpleType {
    public:
        enum Type {
            _on_ = 0,
            _off_
        };
        
        ST_OnOff1();
        ST_OnOff1(const Type& _type);
        ~ST_OnOff1();
        
        bool has_type() const;
        void set_type(const Type& _type);
        const Type& type() const;
        
        const string& toString() const;
        
        void clear();
        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OnOff1& default_instance();
        
    private:
        bool m_has_type;
        Type m_type;
        
        static ST_OnOff1* default_instance_;
    };
    
    
    
    
    
    
    
    
    
    
    
    
    // ComplexType
    
    // ComplexType - Sequence => element => BuiltIn or SimpleType
    class CT_ClientData : public XSD::ComplexType {
    public:
        CT_ClientData();
        ~CT_ClientData();
        
        bool has_ListItem() const;
        void set_ListItem(const std::string& _ListItem);
        const std::string& ListItem() const;
        
        bool has_Locked() const;
        ST_TrueFalseBlank* mutable_Locked();
        const ST_TrueFalseBlank& Locked() const;
        
        void clear();
        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
        static const CT_ClientData& default_instance();
        
    private:
        bool m_has_ListItem;
        std::string m_ListItem;
        
        bool m_has_Locked;
        ST_TrueFalseBlank* m_Locked;
        
        static CT_ClientData* default_instance_;
    };
    
    class ST_TrueFalseBlank : public XSD::SimpleType {
    public:
        ST_TrueFalseBlank();
        ~ST_TrueFalseBlank();
        
        const string& toString() const;
        
        void clear();
        void toXml(const std::string& _attrtName, std::ostream& _outStream) const;
        static const ST_TrueFalseBlank& default_instance();
        
    private:
        static ST_TrueFalseBlank* default_instance_;
    };
    
    
    
    // ComplexType - Sequence => element => ComplexType
    class CT_Body : public XSD::ComplexType {
    public:
        CT_Body();
        ~CT_Body();
        
        bool has_sectPr() const;
        CT_SectPr* mutable_sectPr();
        const CT_SectPr& sectPr() const;
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_Body& default_instance();
        
    private:
        bool m_has_sectPr;
        CT_SectPr* m_sectPr;
        
        static CT_Body* default_instance_;
    };
    
    
    // ComplexType - Sequence => element => any
    class CT_Background : public XSD::ComplexType {
    public:
        CT_Background();
        
        //        void set_any(ns_v::Element *_pElement);
        //        void set_any(ns_o::Element *_pElement);
        void append_any(ns_v::Element *_pElement);
        void append_any(ns_o::Element *_pElement);
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_Background& default_instance();
        
    private:
        //        ns_v::Element* m_pVElement;
        //        ns_o::Element* m_pOElement;
        vector<ns_v::Element*> m_pVElementList;
        vector<ns_o::Element*> m_pOElementList;
        
        static CT_Background* default_instance_;
    };
    
    
    
    
    // ComplexType - Choice => element => BuiltIn or SimpleType
    
    // ComplexType - Choice => element => ComplexType
    
    class CT_FldChar : public XSD::ComplexType {
    public:
        CT_FldChar();
        ~CT_FldChar();
        
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
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_FldChar& default_instance();
        
    private:
        
        static CT_FldChar* default_instance_;
        
        class Choice_1 {
        public:
            Choice_1();
            ~Choice_1();
            
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
            
        private:
            bool m_has_fldData;
            CT_Text* m_fldData;
            
            bool m_has_ffData;
            CT_FFData* m_ffData;
            
            bool m_has_numberingChange;
            CT_TrackChangeNumbering* m_numberingChange;
        };
        
        Choice_1 m_choice_1;
    };
    
    class CT_Text : public XSD::ComplexType {
    public:
        CT_Text();
        ~CT_Text();
        
        void clear();
        static const CT_Text& default_instance();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        
    private:
        static CT_Text* default_instance_;
    };
    
    class CT_FFData : public XSD::ComplexType {
    public:
        CT_FFData();
        ~CT_FFData();
        
        void clear();
        static const CT_FFData& default_instance();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        
    private:
        static CT_FFData* default_instance_;
    };
    
    class CT_TrackChangeNumbering : public XSD::ComplexType {
    public:
        CT_TrackChangeNumbering();
        ~CT_TrackChangeNumbering();
        
        void clear();
        static const CT_TrackChangeNumbering& default_instance();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        
    private:
        static CT_TrackChangeNumbering* default_instance_;
    };
    
    
    
    
    // ComplexType - Choice => element => any
    class CT_Background1 : public XSD::ComplexType {
    public:
        CT_Background1();
        
        void set_any(ns_v::Element *_pElement);
        void set_any(ns_o::Element *_pElement);
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_Background& default_instance();
        
    private:
        
        class Choice_1 {
        public:
            void set_any(ns_v::Element *_pElement);
            void set_any(ns_o::Element *_pElement);
            
        private:
            ns_v::Element* m_pVElement;
            ns_o::Element* m_pOElement;
        };
        
        static CT_Background* default_instance_;
    };
    
    
    
    // ComplexType - Repeated => element => BuiltIn or SimpleType
    class CT_R : public XSD::ComplexType {
    public:
        CT_R();
        ~CT_R();
        
        CT_Br* add_br();
        CT_Ruby* add_ruby();
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_R& default_instance();
        
    private:
        
        class ChildGroup_1 {
        public:
            
            enum Type {
                _br_ = 0,
                _ruby_ =1
            };
            
            ChildGroup_1();
            ~ChildGroup_1();
            
            const Type& type() const;
    
            bool has_br() const;
            CT_Br* mutable_br();
            const CT_Br& br() const;

            bool has_ruby() const;
            CT_Ruby* mutable_ruby();
            const CT_Ruby& ruby() const;
    
        private:
            Type m_type;
    
            bool m_has_br;
            CT_Br* m_br;
    
            bool m_has_ruby;
            CT_Ruby* m_ruby;
        };
    
        vector<ChildGroup_1*> m_childGorup_1_list;
        static CT_R* default_intance_;
    
    };

    class CT_Br : public XSD::ComplexType {
    public:
        CT_Br();
        ~CT_Br();
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_Br& default_instance();

    private:
        static CT_Br* default_instance_;
    };

    class CT_Ruby : public XSD::ComplexType {
    public:
        CT_Ruby();
        ~CT_Ruby();
        
        void clear();
        void toXml(const std::string& _elemtName, std::ostream& _outStream) const;
        static const CT_Ruby& default_instance();
        
    private:
        static CT_Ruby* default_instance_;
    };


    // ComplexType - Repeated => element => ComplexType
    
    // ComplexType - Repeated => element => any
    
    
    
    
    
    // ComplexType - Attribute

    
    // Element
    class body : public Element, public CT_Body {
    public:
        
        void toXml(std::ostream& _outStream) const
        {
            CT_Body::toXml("body", _outStream);
        }
    };
    
    // Attribute
    class id_attr : public Attribute, public ST_RelationshipId {
    public:
        
    }
    
}
















//namespace ns_v {
//    class Element : public XSD::Element {
//
//    };
//}
//
//namespace ns_o {
//    class Element : public XSD::Element {
//
//    };
//}
//
//namespace ns_w {
//
//    class Element : public XSD::Element {
//
//    };
//
//    // union
//    class ST_OnOff : public XSD::SimpleType {
//    public:
//        ST_OnOff();
//        ~ST_OnOff();
//
//        enum UnionType {
//            _boolean_ = 0,
//            _ST_OnOff1_ = 1
//        };
//
//        UnionType type() const;
//        bool has_value_() const;
//        void set_boolean_(const bool& _val);
//        const bool boolean_() const;
//        ST_OnOff1* mutable_on_off_1_();
//        const ST_OnOff1* on_off_1_() const;
//
//        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
//
//    private:
//        bool m_boolean;
//        ST_OnOff1* m_on_off_1;
//    };
//
//
//
//    class ST_OnOff1 : public XSD::SimpleType {
//    public:
//        ST_OnOff1();
//        ~ST_OnOff1();
//
//        enum Type {
//            _on_ = 0,
//            _off_ = 1
//        };
//
//        void set_type(const Type& _type);
//        const Type type() const;
//
//        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
//
//    private:
//        Type m_type;
//    };
//
//
//    // ComplexType - name
//    class CT_Body : public XSD::ComplexType {
//    public:
//        CT_Body();
//        ~CT_Body();
//
//        bool has_r() const;
//        const CT_SectPr& sectPr() const;
//        CT_SectPr* mutable_sectPr();
//
//
//        void clear();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//
//    private:
//        static CT_Body* defalut_instance_;
//        static CT_Body* default_instance();
//
//        CT_SectPr* m_sectPr;
//        bool m_has_sectPr;
//    };
//
//
//
//
//    class CT_SectPr : public XSD::ComplexType {
//    public:
//        CT_SectPr();
//        ~CT_SectPr();
//
//        void clear();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//    private:
//        static CT_SectPr* defalut_instance_;
//        static CT_SectPr* default_instance();
//    };
//
//
//
//    // ComplexType - Repeated
//    class CT_P : public XSD::ComplexType {
//    public:
//        CT_P();
//        ~CT_P();
//
//        bool has_ppr() const;
//        const CT_PPr& ppr() const;
//        CT_PPr* mutable_ppr();
//
//        void clear();
//
//        CT_R* add_r();
//        CT_SdtRun* add_sdt();
//
//        void set_rsidR(const int& _rsidR);
//        const int rsidR() const;
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//
//    private:
//        class ChildGroup_1 {
//        public:
//            enum Type {
//                _r_ = 0,
//                _sdt_ = 1
//            };
//
//            ChildGroup_1();
//            ~ChildGroup_1();
//
//            const Type& type() const;
//            void set_type(const Type& _type);
//
//            const CT_R& r() const;
//            CT_R* mutable_r();
//
//            const CT_SdtRun& sdt() const;
//            CT_SdtRun* mutable_sdt();
//        private:
//            Type m_type_;
//
//            CT_R* m_r;
//            CT_SdtRun* m_std;
//        };
//
//        bool m_has_rsidR;
//        int m_rsidR;
//        std::vector<ChildGroup_1*> m_child_group_list;
//    };
//
//
//
//
//    class CT_PPr : public XSD::ComplexType {
//    public:
//        CT_PPr();
//        ~CT_PPr();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//    };
//
//
//
//
//    class CT_R : public XSD::ComplexType {
//    public:
//        CT_R();
//        ~CT_R();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//    };
//
//
//    class CT_RPr : public XSD::ComplexType {
//    public:
//        CT_RPr();
//        ~CT_RPr();
//
//        bool has_b() const;
//        const CT_OnOff& b() const;
//        CT_OnOff* mutable_b();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//    };
//
//
//
    class ST_String
{
    
};
    class CT_String : public XSD::ComplexType {
    public:
        bool has_val_attr() const
        {
            
        }
        void set_val_attr(const ST_String& _val)
        {
            m_has_val_attr = true;
            m_val_attr = new ST_String(_val);
        }
        
        const ST_String& val_attr() const
        {
            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_String::default_instance_();
        }

        void toXml(const std::string& _elementName, std::ostream& _outStream) const
        {
            
        }
        
    private:
        bool m_has_val_attr;
        ST_String* m_val_attr;
    };
//
//
//    class ST_String : public XSD::ComplexType {
//    public:
//        ST_String(const std::string& _value);
//
//        bool has_value_() const;
//        void set_value_(const std::string& _value);
//        const std::string& value_() const;
//
//        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
//    };
//
//
//    // union 처리
//    class CT_OnOff : public XSD::ComplexType {
//    public:
//        CT_OnOff();
//        ~CT_OnOff();
//
//        const ST_OnOff::UnionType& val_attr_union_type() const;
//        bool has_val_attr() const;
//        void set_val_attr(const bool& _val);
//        void set_val_attr(const ST_OnOff& _val);
//        bool val_attr() const;
//        const ST_OnOff1::Type& val_attr_() const;
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//
//    private:
//        ST_OnOff* m_val_attr;
//    };
//
//
//
//    // SimpleType Enum
//    class ST_TrueFalse : public XSD::SimpleType {
//    public:
//        enum Type {
//            _t_ = 0,
//            _f_,
//            _true_,
//            _false_
//        };
//
//        ST_TrueFalse(const Type& _type);
//
//        bool has_type() const;
//        void set_type(const Type& _type);
//        const Type& type() const;
//
//        void toXml(const std::string& _attrName, std::ostream& _outStream) const;
//
//    private:
//        bool m_has_type;
//        Type m_type;
//    };
//
//
//
//    class CT_Document : public XSD::ComplexType {
//    public:
//        CT_Document();
//        ~CT_Document();
//
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//    };
//
//
//
//    class document : public XSD::Element, public CT_Document {
//    public:
//        document();
//        ~document();
//
//        void toXml(std::ostream& _outStream) const;
//    };
//
//
//    // restriction - simple type name
//    class ST_UnsignedDecimalNumber : public XSD::SimpleType {
//    public:
//        ST_UnsignedDecimalNumber(const XSD::unsignedLong& _value);
//        ~ST_UnsignedDecimalNumber();
//
//        void set_unsignedLong(); // ...
//    };
//
//
//
//    class ST_PixelsMeasure : public ST_UnsignedDecimalNumber {
//    public:
//        ST_PixelsMeasure(const ST_UnsignedDecimalNumber& _value);
//        ~ST_PixelsMeasure();
//    };
//
//
//    class CT_PixelsMeasure : public XSD::ComplexType {
//    public:
//        CT_PixelsMeasure();
//        ~CT_PixelsMeasure();
//
//        bool has_val_attr() const;
//        const ST_PixelsMeasure& val_attr() const;
//        void set_val_attr(const ST_PixelsMeasure& _val);
//
//
//    private:
//        ST_PixelsMeasure* m_val_attr;
//    };
//
//
//    class CT_NumRef : public XSD::ComplexType {
//    public:
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//
//        void clear();
//    };
//
//
//    class CT_NumData : public XSD::ComplexType {
//    public:
//        void toXml(const std::string& _elementName, std::ostream& _outStream) const;
//
//        void clear();
//    };
//
//    // ComplexType - choice
//    class CT_NumDataSource : public XSD::ComplexType {
//    public:
//
//        bool has_numRef() const
//        {
//            return m_choice_1.has_numRef();
//        }
//
//        const CT_NumRef& numRef() const
//        {
//            return m_choice_1.numRef();
//        }
//
//        CT_NumRef* mutable_numRef()
//        {
//            return m_choice_1.mutable_numRef();
//        }
//
//        bool has_numLit() const
//        {
//            return m_choice_1.has_numLit();
//        }
//
//        const CT_NumData& numLit() const
//        {
//            return m_choice_1.numLit();
//        }
//
//        CT_NumData* mutable_numLit()
//        {
//            return m_choice_1.mutable_numLit();
//        }
//
//    private:
//
//        static CT_NumDataSource* defalut_instance_;
//        static CT_NumDataSource* default_instance();
//
//        class Choice_1 {
//        public:
//            Choice_1()
//            :m_has_numRef(false),
//            m_numRef(NULL),
//            m_has_numData(false),
//            m_numData(NULL)
//            {
//
//            }
//
//            enum Type {
//                _numRef_ = 0,
//                _numLit_ = 1
//            };
//
//            bool has_numRef() const
//            {
//                return m_has_numRef;
//            }
//
//            const CT_NumRef& numRef() const
//            {
//                if (m_numRef)
//                {
//                    return *m_numRef;
//                }
//                else
//                {
//                    return CT_NumDataSource::default_instance()->numRef();
//                }
//            }
//
//            CT_NumRef* mutable_numRef()
//            {
//                // 다른 choice 데이터들 초기확
//                m_has_numData = false;
//                if (m_numData) {
//                    m_numData->clear();
//                }
//
//                m_type = _numRef_;
//
//                m_has_numRef = true;
//                if (m_numRef)
//                {
//                    m_numRef = new CT_NumRef();
//
//                }
//                return m_numRef;
//            }
//
//            bool has_numLit() const;
//            const CT_NumData& numLit() const;
//            CT_NumData* mutable_numLit();
//
//        private:
//
//            Type m_type;
//
//            bool m_has_numRef;
//            CT_NumRef* m_numRef;
//
//            bool m_has_numData;
//            CT_NumData* m_numData;
//        };
//
//        Choice_1 m_choice_1;
//    };
//
//
//    // any
//
//
//
//    class CT_Background : public XSD::ComplexType {
//    public:
//        CT_Background();
//
//        void set_any(ns_v::Element *_pElement)
//        {
//            m_pVElement = _pElement;
//        }
//
//        void set_any(ns_o::Element *_pElement)
//        {
//            m_pOElement = _pElement;
//        }
//    
//    private:
//        XSD::Element *m_pVElement;
//        XSD::Element *m_pOElement;
//};
//
//}

#endif
