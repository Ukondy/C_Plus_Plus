#include <string>
#include <iostream>
#include <set>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	multiset<int> myMultiset = { 1,1,66, 16, 48, 99 };

	auto it1 = myMultiset.lower_bound(1);

	auto it2 = myMultiset.upper_bound(1);

	auto a = myMultiset.equal_range(1);

	for (auto& item : myMultiset) {
		cout << item << endl;
	}

	return 1;
}
#endif 