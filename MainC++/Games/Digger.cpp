#include <windows.h>
#include <fstream>
#include <algorithm>
#include <array>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <list>
#include <string>
#include <queue>
#include <vector>
#include <chrono>
#include <thread>
#include <time.h>
#include <random>

#if 0
char MAP[9][8] = { 
				  {'~','~','~','~','~','~','~','~' }, 
				  {'~','.', '.', '.', '~','~','~','~'},
				  {'~','.','.','.','.','~','~','~'},
				  {'~','.','@','T','.','.','~','~'},
				  {'~','.', '.', '.', '.', '.', '~','~'},
				  {'~','.','T','.', '.', '.', '.', '~'},
				  {'~','~','.', '.', '.', '~','.', '~'},
				  {'~','~','~','~','.', '.', '.', '~'},
				  {'~','~','~','~','~','~','~','~'},
				};
// вспомогательная функция для нахождения символа в массиве
int findSmth(char aChar) {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (MAP[i][j] == aChar) {
				cout << i << "  " << j << endl;
				return 0;
			}
		}
	}
}

void initMap() {
	cout << endl;
	cout << endl;
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << MAP[i][j];
		}
		cout << endl;
	}
}

class Character {
public:
	char digger = '@';
	int x = 3;
	int y = 2;

	int walk() {
		while (true) {
			initMap();

			if (MAP[x + 1][y] != 'o' && MAP[x + 1][y] != '~' && MAP[x + 1][y] != 'T') {
				stepForward();

			}
			else if (MAP[x - 1][y] != 'o' && MAP[x - 1][y] != '~' && MAP[x - 1][y] != 'T') {
				stepBack();

			}
			else if (MAP[x][y - 1] != 'o' && MAP[x][y - 1] != '~' && MAP[x][y - 1] != 'T') {
				stepLeft();

			}
			else if (MAP[x][y + 1] != 'o' && MAP[x][y + 1] != '~' && MAP[x][y + 1] != 'T') {
				stepRight();

			}
			else {
				cout << "Конец игры" << endl;
				return 0;
			}
		}
	}

	void stepForward() {
		MAP[x][y] = 'o';
		this->x += 1;
		MAP[x][y] = digger;
	}
	void stepBack() {
		MAP[x][y] = 'o';
		this->x -= 1;
		MAP[x][y] = digger;
	}
	void stepLeft() {
		MAP[x][y] = 'o';
		this->y -= 1;
		MAP[x][y] = digger;
	}
	void stepRight() {
		MAP[x][y] = 'o';
		this->y += 1;
		MAP[x][y] = digger;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Character character;
	character.walk();
	//findSmth('@');

	return 1;
}

#endif 