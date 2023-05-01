#include <string>
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

#if 0
template<typename T>
void PrintList(const list<T>& lst) {
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	list<int> myList = { 99, 15, 64, 99, 979, 54, 99, 99, 99 };
	list<int> myList2 = { 99, 54, 99, 99, 99 };

	myList.unique();

	myList.reverse();

	cout << myList.size() << endl;

	myList.push_back(5);
	myList.push_front(151);

	myList.sort();

	myList.pop_back();
	myList.pop_front();

	cout << endl << "insert" << endl << endl;

	auto it = myList.begin();

	advance(it, 3);

	myList.insert(it, 111);

	it++;

	myList.erase(it);

	myList.remove(99);

	PrintList(myList);

	cout << myList.size() << endl;

	auto it2 = myList.begin();

	PrintList(myList);

	myList.clear();

	myList.assign(3, 14535);

	PrintList(myList);

	myList.assign(myList2.begin(), myList2.end());

	PrintList(myList);

	return 1;
}
#endif 