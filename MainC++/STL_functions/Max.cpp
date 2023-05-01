#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 10,1, -55, 11, 13, 58 };

	list<int> lst = { 4, 7, 77, -3, 44, 74 };

	auto result = max_element(lst.begin(), lst.end());

	cout << *result << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10, 1, -55, 11, 13, 58 };

	auto result2 = max_element(arr, arr + SIZE);

	cout << *result2 << endl;

	return 1;
}
#endif 