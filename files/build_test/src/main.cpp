#include <iostream>
#include <sstream>
#include "wml_xsd.h"

using namespace ns_w;

int main()
{
	using namespace std;
	cout << "xsd2cpp main execution!" << endl;
    
    document_element docElement;
    docElement.mutable_body();
    
    stringstream strStream;
    docElement.toXml(strStream);
    cout << strStream.str() << endl;
	return 0;
}