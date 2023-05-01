#include <string>
#include <iostream>
#include <forward_list>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	forward_list<int> fl = { 131, 94, 494 };

	forward_list<int>::iterator it = fl.before_begin();

	fl.insert_after(it, 9999);



	for (auto el : fl) {
		cout << el << endl;
	}

	return 1;
}
#endif 