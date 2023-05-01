#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.tx";
	ifstream fin;
	fin.exceptions(ios::badbit | ios::failbit);

	try {
		cout << "Попытка открыть файл" << endl;

		fin.open(path);

		cout << "файл успешно открыт" << endl;

	}
	catch (const ifstream::failure& ex) {
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка открытия файла" << endl;;
	}
	return 1;

}
#endif 