#include "WorkFlow.h"
#include "GUI.h"

void startGame(string userName) {
	int key;

	while (true) {
		showMenu(key);

		switch(key) {
		case 1:
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