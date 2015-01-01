#include "WorkFlow.h"
#include "GUI.h"

void startGame(const string &userName) {
	int key;
	map<int, int> mascots;

	while (true) {
		showMenu(key);

		switch(key) {
		case 1:
			play(userName);
			break;
		case 2:
			showRules();
			break;
		case 3:
			break;
		case 4:
			showGoodbyeScreen(userName);
		}
	}
}

void bet(map<int, int> &mascots, const string &userName) {
	int turn, mascot;

	turn = 6;

	while (turn--) {
		cout << "\tDat: ";
		cin >> mascot;

		if (mascot == 0) {
			break;
		} else if (mascot > 0 && mascot < 7) {
			mascots[mascot] = 1;
		} else if (mascot < 0 && mascot > -7) {
			mascots.erase(mascot * -1);
			turn++;
		} else {
			showGoodbyeScreen(userName);
		}
	}
}

void shareTheDice(list<int> &dices) {
	int index;

	for (index = 0; index < 3; index++) {
		srand(time(NULL));
		dices.push_back(rand() % 6 + 1);
	}
}

void play(const string &userName) {;
	list<int> dices;
	list<int>::iterator iterator;
	map<int, int> mascots;

	showMascot();
	bet(mascots, userName);

	shakeTheDice(dices);

	for (iterator = dices.begin(); iterator != dices.end(); iterator++) {
		cout << *iterator;
		cout << " ~ ";
	}

	system("pause");
}