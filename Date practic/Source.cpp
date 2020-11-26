#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	Date dy(2,11,2005);
	dy.setDay(22);
	dy.print();
	return 0;
}