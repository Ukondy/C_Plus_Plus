#include <string>
#include <iostream>
#include <functional>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
void Foo(int a) {
	if (a > 10 && a < 40) {
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

void DoWork(vector<int> &vc, function<void(int)> func) 
{
	for (auto el : vc) 
	{
		func(el);
	}
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	auto f = [](int a, int b)
	{
		return a + b;
	};

	auto q = f(1, 4);

	int p = 0;
	auto f2 = [&p]()
	{
		p = 5;
	};

	f2();

	vector<int> vc = { 1,51,4,10,44,98,8,12,22,29,49 };
	DoWork(vc, [](int a)
		{
			if (a % 3 == 0) {
				cout << "ыџьср " << a << endl;
			}
	});

	return 1;
}
#endif 