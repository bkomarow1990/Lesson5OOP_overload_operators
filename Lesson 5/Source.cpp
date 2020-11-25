#include <iostream>
#include <time.h>
#include "Array.h"
using namespace std;
int main() {
	Array arr(5,3);
	arr.print();
	Array clone = arr;
	clone.print();
	Array clone2 = (arr + clone);
	clone2.print();
	//bool isCloneSameArr = arr == clone;
	//cout << isCloneSameArr << endl;
	//(arr++).print();
	cout << "================" << endl;
	Array arr_new(5, 5);
	(arr_new++).print();
	arr_new.print();
	return 0;
}