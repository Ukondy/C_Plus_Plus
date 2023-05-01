#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
class Point {
private:
	int x = 0;
	int y = 0;
	int z = 0;

public:
	Point() {
		x = y = z = 0;
	}
	Point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	friend ostream& operator<<(ostream& os, const Point& point);
	friend istream& operator>>(istream& is, Point& point);
};

ostream& operator<<(ostream& os, const Point& point) {
	os << point.x << " " << point.y << " " << point.z;
	
	return os;
}
istream& operator>>(istream& is, Point& point) {
	is >> point.x;
	is >> point.y;
	is >> point.z;

	return is;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	Point p(121, 245, 241);
	string path = "myFile.txt";
	fstream fs;

	fs.open(path, ios::in | ios::out | ios::app);
	if (!fs.is_open()) {
		cout << "ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;
		//fs << p << "\n";

		while (true) {
			Point p2;
			fs >> p2;
			if (fs.eof()) {
				break;
			}
			cout << p2 << endl;
		}
	}
	fs.close();

	return 1;
}
#endif 