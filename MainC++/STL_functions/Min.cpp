#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 10,1, -55, 11, 13, 58 };

	list<int> lst = { 4, 7, 77, -3, 44, 74 };

	auto result = min_element(v.begin(), v.end());

	cout << *result << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10, -1,-14, 15, 33, 28 };

	auto result2 = min_element(arr, arr + SIZE);

	cout << *result2 << endl;

	auto result3 = minmax_element(lst.begin(), lst.end());

	cout << "min: " << *result3.first << " max: " << *result3.second << endl;

	return 1;
}
#endif 