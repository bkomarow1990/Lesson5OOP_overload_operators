#include <iostream>
#include <time.h>
#include "Array.h"
using namespace std;
int main() {
	//Array arr(5,3);
	//arr.print();
	//Array clone = arr;
	//clone.print();
	//Array clone2 = (arr + clone);
	//clone2.print();
	////bool isCloneSameArr = arr == clone;
	////cout << isCloneSameArr << endl;
	////(arr++).print();
	//cout << "================" << endl;
	//Array arr_new(5, 5);
	////(arr_new++).print();
	////arr_new.print();
	//cout<<(int)arr<<endl;
	//arr.print();
	//cout << "==============" << endl;
	//Array two(5,3);
	//two.print();
	//two(1,3).print();
	cout << "Before: " << endl;
	Array arr(5, 1);
	arr[0] = 500;
	arr[10] = 12345;
	Array arr2(7);
	arr2[3] = 11;
	arr2[4] = 33;
	Array tmp = move(arr);
	arr = move(arr2);
	arr2 = move(tmp);
	cout << "After: " << endl;
	arr.print();
	arr2.print();
	return 0;
	// 3 3 3 3 3
	//   3 3 3
	// 0 1 2 3 4
}