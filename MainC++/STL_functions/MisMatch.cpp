#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

#if 0 
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	int arr[] = { 10,3,4,5,7,11 };

	vector<int> arr2 = { 10,3,4,5,7,11 };

	auto result = mismatch(begin(arr), end(arr), begin(arr2), end(arr2));

	if (result.first == end(arr) && result.second == end(arr2)) {
		cout << "+" << endl;
	}
	else {
		cout << "-" << endl;
	}

	return 1;
}
#endif 