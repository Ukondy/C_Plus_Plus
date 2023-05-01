#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> myVector = { 0,484, 484, 999 };
	vector<int> myVector2(22, 55);
	myVector.push_back(2);
	myVector.push_back(44);
	myVector.push_back(77);
	myVector.push_back(9);
	myVector.shrink_to_fit(); // unreservation

	cout << "capacity в векторе " << myVector.capacity() << endl;
	myVector.reserve(10000); // reservation
	cout << "capacity в векторе " << myVector.capacity() << endl;
	myVector.shrink_to_fit(); // unreservation
	cout << "capacity в векторе " << myVector.capacity() << endl << endl;

	myVector.reserve(myVector.size() + 5); // reservation
	cout << "capacity в векторе " << myVector.capacity() << endl;
	cout << "количество элементов в векторе " << myVector.size() << endl;
	cout << endl;
	cout << "is empty " << myVector.empty() << endl << endl;

	cout << "количество элементов в векторе " << myVector.size() << endl;
	myVector.resize(20, 488);
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}
	cout << endl;

	cout << "количество элементов в векторе " << myVector.size() << endl;
	myVector.resize(15);
	cout << "количество элементов в векторе " << myVector.size() << endl;

	try {
		cout << myVector.at(1000000) << endl;
	}
	catch (const out_of_range& ex) {
		cout << ex.what() << endl << endl;
	}

	cout << "количество элементов в векторе " << myVector.size() << endl;
	myVector.pop_back();
	cout << "количество элементов в векторе " << myVector.size() << endl;
	myVector.clear();
	cout << "количество элементов в векторе " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}
	cout << endl;

	return 1;
}
#endif 