namespace ns_lc {
class Element;
class Attribute;
class lockedCanvas_element;
}
#ifndef __dml_lockedCanvas_xsd_
#define __dml_lockedCanvas_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_lc {
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

class lockedCanvas_element: public Element
{
public:
protected:
private:
};

}
#endif