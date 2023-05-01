#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.txt";
	ifstream fin;

	fin.open(path);

	if (!fin.is_open()) {
		cout << "ошибка открытия файла" << endl;
	}
	else {
		cout << "файл открыт" << endl;
		string str;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}

	fin.close();

	return 1;
}
#endif 