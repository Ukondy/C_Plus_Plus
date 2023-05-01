#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
class Point {
public:
	int x;
	int y;
	int z;

	Point() {
		x = y = z = 0;
	}
	Point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print() {
		cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.txt";
	Point point(414, 7342, 2312);

	//SAVE
	ofstream fout;

	fout.open(path, ios::app);

	if (!fout.is_open()) {
		cout << "ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;
		fout.write((char*)&point, sizeof(Point));
	}
	fout.close();

	//READ
	ifstream fin;

	fin.open(path);

	if (!fin.is_open()) {
		cout << "ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;
		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point))) {
			pnt.Print();
		}
	}
	fin.close();

	return 1;
}
#endif 