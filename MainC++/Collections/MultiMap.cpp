#include <string>
#include <iostream>
#include <map>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	multimap<string, int> myMultimap;

	myMultimap.emplace("Петя", 1313);
	myMultimap.emplace("Петя", 1313);
	myMultimap.emplace("Маша", 222);
	myMultimap.emplace("Миша", 4441);

	return 1;
}
#endif 