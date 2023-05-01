#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
template<typename T, typename T2>
struct MyPair {
public:
	T first;
	T2 second;

	MyPair(T first, T2 second) {
		this->first = first;
		this->second = second;
	}
};
template<typename T, typename T2>
MyPair<T, T2> make_my_pair(T first, T2 second) {
	return MyPair<T, T2>(first, second);
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");


	pair<int, string> p(1, "телефон");
	pair<int, string> p2 = make_pair(12, "adwa");

	MyPair<int, string> myPair(12, "моя пара");
	MyPair<int, string> myPair2 = myPair;

	cout << p.first << endl;
	cout << p.second << endl;


	int num = 12;
	string str = "строка";

	MyPair<int, string> mp = make_my_pair(num, str);
	return 1;
}
#endif 