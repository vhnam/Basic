#include "system.h"
#include "WorkFlow.h"
#include "GUI.h"

int main() {
	string userName;

	showWelcomeScreen();
	enterUserName(userName);

	startGame(userName);

	return 0;
}