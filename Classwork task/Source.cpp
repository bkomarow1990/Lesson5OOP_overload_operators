#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	Date data(31,10,2020);
	data.print();
	data.addDay();
	data.print();
	return 0;
}