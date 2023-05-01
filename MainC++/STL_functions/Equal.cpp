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

	sort(begin(arr), end(arr));

	sort(begin(arr2), end(arr2));

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));

	cout << result << endl;

	return 1;
}
#endif 