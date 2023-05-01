#include <string>
#include <iostream>
#include <memory>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	/*_____ auto_ptr _____*/
	auto_ptr<int> ap1(new int(5));
	auto_ptr<int> ap2(ap1);


	/*_____ unique_ptr _____*/
	unique_ptr<int> up1(new int(5));
	//unique_ptr<int> up2(up1); --> error
	unique_ptr<int> up2;

	up2 = move(up1);
	up2.swap(up1);
	int* p = up2.get();

	cout << *p << endl;

	int* p2 = new int(5);
	unique_ptr<int> u_ptr(p2);
	u_ptr.reset(); // затирает все данные
	u_ptr.release(); // только в u_ptr в p2 данные остаются 

	/*_____ shared_ptr _____*/
	// с count переменной которая уменьшается в деструкторе 
	shared_ptr<int> sp1(new int(5));
	shared_ptr<int> sp2(sp1);

	return 1;
}
#endif 