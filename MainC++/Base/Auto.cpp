#include <string>
#include <iostream>
#include <vector>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");

	auto a = 10;

	auto b = 1.44;

	auto c = "string";

	auto d = true;

	vector<int> myVec = { 11,36,9 };
	vector<int>::iterator it = myVec.begin();

	auto it2 = myVec.begin();

	for (auto it = myVec.begin(); it != myVec.end(); it++) {
        cout << *it << endl;
	}

	return 1;
}
#endif 