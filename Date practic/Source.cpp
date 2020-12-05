#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	Date dy(2,11,2005);
	dy.print();
	dy.setDay(30);
	cout << "Prefix increment" << endl;
	++dy;
	dy.print();
	cout << "Postfix increment" << endl;
	cout << "old: " << endl;
	(dy++).print();
	cout << "new: " << endl;
	dy.print();
	cout << "Operator +=" << endl;
	dy += 5;
	dy.print();
	cout << "Operator -=" << endl;
	Date date2(1,1,2004);
	date2.print();
	date2 -= 2;
	date2.print();
	cout << "Operator <" << endl;
	cout << boolalpha <<(date2 <  dy)<< endl;
	cout << "Operator >" << endl;
	cout << boolalpha << (date2 > dy) << endl;
	cout << "Get Different of days: " << endl;
	cout<<date2.getDifferent(dy)<<endl;
	return 0;
}