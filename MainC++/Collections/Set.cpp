#include <string>
#include <iostream>
#include <set>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	set<int> mySet = { 1,3,8,5,3,7,2,9 };
	mySet.insert(44);
	mySet.insert(21);
	mySet.insert(12);
	auto result1 = mySet.insert(1);

	int value;
	cin >> value;

	if (mySet.find(value) != mySet.end()) {
		cout << "число" << value << "найдено";
	}
	else {
		cout << "число" << value << "отсутсвует";
	}

	auto result2 = mySet.erase(5);

	for (auto& item : mySet)
	{
		cout << item << endl;
	}

	return 1;
}
#endif 