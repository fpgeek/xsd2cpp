#ifndef __XSDDATA_H_
#define __XSDDATA_H_ 0

#include <string>

namespace XSD
{
    typedef unsigned long unsignedLong;
    typedef std::string hexBinary;
    typedef bool boolean;
    typedef unsigned int nonNegativeInteger;
    
    static std::string XMLBooleanStr(const bool& _val);
    
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
        
        std::string toXml(const std::string& _elementName) const;
        virtual void toXml(const std::string& _elementName, std::ostream& _outStream) const = 0;
    };
    
    

    class SimpleType : public Type {
    public:
        SimpleType();
        virtual ~SimpleType();
      
        std::string toXml(const std::string& _elementName) const;
        virtual void toXml(const std::string& _attrName, std::ostream& _outStream) const = 0;
    };
    
    

    class Element : public Type {
    public:
        Element(const std::string& elementName);
        virtual ~Element();
        
        std::string toXml() const;
        virtual void toXml(std::ostream& _outStream) const = 0;
        
    protected:
        const std::string& name() const;
        
    private:
        std::string m_name;
	};
    
    

    class Attribute : public Type {
    public:
        Attribute(const std::string& attrName);
        virtual ~Attribute();
        
        std::string toXml() const;
        virtual void toXml(std::ostream& _outStream) const = 0;
        
    private:
        std::string m_attrName;
	};

    
}

#endif