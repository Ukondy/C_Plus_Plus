#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0 
class PC {
public:
	enum PCState {
		OFF,
		ON,
		SLEEP
	};

	PCState GetState() {
		return State;
	}
	void SetState(PCState state) {
		this->State = state;
	}

private:
	PCState State;

};

enum Speed {
	MIN = 150,
	RECOMEND = 600,
	MAX = 800
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	PC pc;
	pc.SetState(PC::PCState::ON);

	switch (pc.GetState()) {
	case PC::PCState::ON:
		cout << "PC работает!" << endl;
		break;
	case PC::PCState::OFF:
		cout << "PC не работает" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "PC бездействует" << endl;
		break;
	}

	if (pc.GetState() == PC::PCState::ON) {
		cout << "PC работает!" << endl;
	}

	Speed sp = Speed::MAX;
	cout << sp << endl;

	return 1;
}
#endif 