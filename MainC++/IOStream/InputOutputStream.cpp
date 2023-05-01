#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.txt";
	fstream fs;
	//int consoleCode = GetConsoleCP(); для получения кодировки консоли
	//setConsoleOutputCP(); для изменения потока вывода
	//setConsoleCP(); для изменения потока ввода

	fs.open(path, ios::in | ios::out | ios::app);
	if (!fs.is_open()) {
		cout << "ошибка открытия файла" << endl;
	}
	else {
		string msg;
		int value;
		cout << "Файл открыт" << endl;
		cout << "Нажмите 1 для записи сообщения в файл: " << endl;
		cout << "Нажмите 2 для считывания всех сообщений из файла файл: " << endl;
		cin >> value;

		if (value == 1) {
			cout << "Введите ваше сообщение" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			SetConsoleCP(866);
		}
		else if (value == 2) {
			cout << "Чтение данных из файла" << endl;
			while (!fs.eof()) {
				msg = "";
				fs >> msg;
				cout << msg << endl;
			}
		}
	}
	fs.close();

	return 1;
}
#endif 