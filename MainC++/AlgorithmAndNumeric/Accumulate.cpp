#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 2,3,4 };
	int v2[] = { 2,3,4,5,7,10 };

	auto res = accumulate(begin(v2), end(v2), 1,
		[](int a, int b) {
			return a * b;
		});

	cout << res << endl;

	res = 0;

	res = accumulate(begin(v2), end(v2), 0,
		[](int a, int b) {
			if (b % 2 == 0) {
				return a + b;
			}
			else {
				return a;
			}
		});

	cout << res << endl;

	auto res2 = accumulate(next(begin(v2)), end(v2),
		to_string(v2[0]),
		[](string a, int b) {
			return a + "-" + to_string(b);
		});

	cout << res2 << endl;

	return 1;
}
#endif 