#ifndef __XSDTYPE_H_
#define __XSDTYPE_H_ 0

#include <string>

namespace XSD
{

    using namespace std;

    // Built-In Types

    // String Types
    typedef string ENTITIES_;
    typedef string ENTITY_;
    typedef string ID_;
    typedef string IDREF_;
    typedef string IDREFS_;
    typedef string language_;
    typedef string Name_;
    typedef string NCName_;
    typedef string NMTOKEN_;
    typedef string NMTOKENS_;
    typedef string normalizedString_;
    typedef string QName_;
    typedef string token_;
    typedef string string_;

    // Date Types
    typedef string date_;
    typedef string dateTime_;
    typedef string duration_;
    typedef string gDay_;
    typedef string gMonth_;
    typedef string gMonthDay_;
    typedef string gYear_;
    typedef string gYearMonth_;
    typedef string time_;

    // Nurmeric Types
    typedef signed char byte_;
    typedef double decimal_;
    typedef int int_;
    typedef long long integer_;
    typedef long long long_;
    typedef long long negativeInteger_;
    typedef unsigned long long nonNegativeInteger_;
    typedef long long nonPositiveInteger_;
    typedef unsigned long long positiveInteger_;
    typedef short short_;
    typedef unsigned long long unsignedLong_;
    typedef unsigned int unsignedInt_;
    typedef unsigned short unsignedShort_;
    typedef unsigned char unsignedByte_;

    // Miscellaneous Types
    typedef string anyURI_;
    typedef string base64Binary_;
    typedef bool boolean_;
    typedef double double_;
    typedef float float_;
    typedef string hexBinary_;
    typedef string NOTATION_;
    
    string XMLBooleanStr(const bool& _val);
    
    
    class Type {
    public:
        Type();
        virtual ~Type();
        virtual void clear() = 0;
    };
    
    
    class ComplexType : public Type {
    public:
        ComplexType();
        virtual ~ComplexType();
        
        string toXmlElem(const string& _elementName) const;
        virtual void toXmlElem(const string& _elementName, const string& xmlNsStr, ostream& _outStream) const = 0;
    };
    

    class SimpleType : public Type {
    public:
        SimpleType();
        virtual ~SimpleType();
      
        string toXmlAttr(const string& _elementName) const;
        virtual void toXmlAttr(const string& _attrName, ostream& _outStream) const = 0;
    };
    
    
    class Element : public Type {
    public:
        Element();
        virtual ~Element();
        
        string toXml() const;
        virtual void toXml(ostream& _outStream) const = 0;
	};
    
    
    class Attribute : public Type {
    public:
        Attribute();
        virtual ~Attribute();
        
        string toXml() const;
        virtual void toXml(ostream& _outStream) const = 0;
	};
}

#endif