#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	Date dy(2,11,2005);
	dy.setMonth(11);
	dy.setDay(31);
	dy.print();
	return 0;
}