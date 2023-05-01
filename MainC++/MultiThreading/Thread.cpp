#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

#if 0
void DoWork() {
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds());
	}
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");


	/*cout << "START MAIN" << endl;

	this_thread::sleep_for(chrono::milliseconds(3000));

	cout << this_thread::get_id() << endl;

	cout << "END MAIN" << endl;*/

	thread th(DoWork);
	thread th2(DoWork);

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	th.join();
	th2.join();

	return 1;
}
#endif 