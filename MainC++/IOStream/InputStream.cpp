#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.txt";
	ofstream fout;

	fout.open(path, ios::app);
	if (!fout.is_open()) {
		cout << "ошибка открыти€ файла" << endl;
	}
	else {
		cout << "¬ведите число" << endl;
		int a;
		cin >> a;
		fout << "\n" + a;
	}

	fout.close();

	return 1;
}
#endif 