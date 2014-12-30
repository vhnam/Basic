#include "GUI.h"

void showWelcomeScreen() {
	char key;

	cout << "\n\tChao mung ban den voi To chuc Co Bac cua Cty TNHH mot thanh vien Yet Kieu\n" << endl;

	cout << "\n\tDe biet cach choi Bau Cua, ban vui long tim kiem tren Google.\n" << endl;
	cout << "\tNeu ban muon bao cong an, vui long nhan phim [y]." << endl;
	cout << "\tNeu ban muon tiep tuc choi, vui long nhan phim [n]." << endl;
	cout << "\n\tNhap phim: ";

	cin >> key;

	if (key != 'y') {
		cout << "\n\tVay Hoy di nha\n" << endl;
		exit(0);
	}
}

void enterUserName(string &userName) {
	cout << "\n\tMoi ban de lai cao danh quy tanh: ";
	getline(cin, userName);
}