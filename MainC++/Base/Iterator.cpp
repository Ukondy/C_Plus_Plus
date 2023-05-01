#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> myVector = { 1,9,44,422,676,78 };
	vector<int>::iterator it = myVector.begin();


	advance(it, 3);

	cout << *it << endl;

	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) {
		cout << *i << endl;
	}

	myVector.insert(it, 999);
	advance(it, 5);
	cout << " insert " << endl;

	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) {
		cout << *i << endl;
	}

	vector<int>::iterator itErase = myVector.begin();
	myVector.erase(itErase, itErase + 3);

	cout << " erase " << endl;

	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) {
		cout << *i << endl;
	}

	return 1;
}
#endif 