#include <string>
#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	array<int, 4> arr = { 1, 94, 77, 9 };

	try {
		cout << arr.at(11) << endl;
	}
	catch (const exception& ex) {
		cout << ex.what() << endl;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}

	arr.fill(-1);

	cout << arr.front() << endl;
	cout << arr.back() << endl;

	for (auto el : arr) {
		cout << el << endl;
	}

	return 1;
}
#endif 