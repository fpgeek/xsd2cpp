#include "gen.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    
    ns_w::ST_FixedPercentage fixedPercent(string("test"));
    cout << fixedPercent.string() << endl;
	return 0;
}