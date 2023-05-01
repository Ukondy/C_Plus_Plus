#include <iostream>
#include <memory>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	int SIZE;
	cin >> SIZE;
	shared_ptr<int[]> sp(new int[SIZE] {1, 6, 44, 9, 8});

	for (int i = 0; i < SIZE; i++)
	{
		sp[i] = rand() % 10;
		std::cout << sp[i] << std::endl;
	}

	return 1;
}
#endif 