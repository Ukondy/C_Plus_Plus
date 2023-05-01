#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
union MyUnion 
{
	short int a;
	int b;
	float c;
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	MyUnion u;

	u.a = 5;
	u.b = 40000;
	u.a = 43.54;
	
	return 1;
}
#endif 