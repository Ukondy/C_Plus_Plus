#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <windows.h>

using namespace std;

#if 0
void Foo() {
	cout << "Foo()" << endl;
}
void Foo2(int a) {
	if(a > 10 && a < 40) {
		cout << "FOO " << a << endl;
	}
}

void Bar(int a) {
	if (a % 2 == 0) {
		cout << "BAR " << a << endl;
	}
}
void Baz(int a) {
	cout << "BAZ " << a << endl;
}

int Sum(int a, int b) {
	return a + b;
}

void DoWork(vector<int> &vc, vector<function<void(int)>> funcVector) {
	for (auto el : vc) {
		for (auto &fel : funcVector) {
			fel(el);
		}
	}
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	function<void()> f;
	f = Foo;
	f();

	function<int(int, int)> f2;
	f2 = Sum;

	int result = f2(2, 5);

	cout << result << endl;

	vector<int> vc = { 1,51,4,10,44,98,8,12,22,29,49 };

	vector<function<void(int)>> fVector;
	fVector.emplace_back(Foo2);
	fVector.emplace_back(Bar);
	fVector.emplace_back(Baz);

	DoWork(vc, fVector);

	return 1;
}
#endif 