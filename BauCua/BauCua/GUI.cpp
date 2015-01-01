#include "GUI.h"

void showWelcomeScreen() {
	string key;

	cout << "\n\tChao mung ban den voi To chuc Co Bac cua Cty TNHH mot thanh vien Yet Kieu\n" << endl;

	cout << "\n\tDe biet cach choi Bau Cua, ban vui long tim kiem tren Google.\n" << endl;
	cout << "\tNeu ban muon tiep tuc choi, vui long nhan phim [y]." << endl;
	cout << "\tNeu ban muon bao cong an, vui long nhan phim [n]." << endl;
	cout << "\n\tNhap phim: ";

	getline(cin, key);

	if (key.compare("y") != 0) {
		cout << "\n\tVay Hoy di nha\n" << endl;
		exit(0);
	}
}

void enterUserName(string &userName) {
	cout << "\n\tMoi ban de lai cao danh quy tanh: ";
	getline(cin, userName);
}

void showRules() {
	system("cls");

	cout << "\n\t----------The le Tro choi------------\n" << endl;
	cout << "\n\tTro choi gom co Nai, Bau, Cua, Ga, Tom, Ca" << endl;
	cout << "\tBan co the dat mot hoac nhieu linh vat ma ban muon" << endl;
	cout << "\tSau do, ban dat so tien cuoc va cho nha cai thong bao ket qua\n" << endl;
	cout << "\tNeu co it nhat 1 vien xi ngau xuat hien hinh linh vat ma ban chon thi coi nhu ban da chien thang trong luot do" << endl;
	cout << "\tNeu khong co xuat hien thi coi nhu ban thua\n" << endl;
	cout << "\tNeu ban thang, ban se duoc hoan von va duoc tang them mot so tien thuong kha kha" << endl;
	cout << "\tNeu ban thua, so tien dat cuoc se thuoc ve nha cai\n" << endl;

	system("pause");
}

void showMenu(int &key) {
	do {
		system("cls");

		cout << "\n\t--------- Lac Bau Cua -----------\n" << endl;
		cout << "\t1. Bat dau tro choi" << endl;
		cout << "\t2. The le tro choi" << endl;
		cout << "\t3. Xem diem" << endl;
		cout << "\t4. Thoat" << endl;
		cout << "\n\t-------------------------------------\n" << endl;

		cout << "\tChon: ";
		cin >> key;
	} while (key < 1 || key > 4);	
}

void showGoodbyeScreen(const string &userName) {
	cout << "\n\t------------ Chuc mung ";
	cout << userName;
	cout << " may man lan sau -------------\n" << endl;
	exit(0);
}

void showMascot() {
	cout << "\n\tBan chon linh vat nao?\n" << endl;
	cout << "\t1. Nai" << endl;
	cout << "\t2. Bau" << endl;
	cout << "\t3. Cua" << endl;
	cout << "\t4. Tom" << endl;
	cout << "\t5. Ca" << endl;
	cout << "\t6. Ga" << endl;
	cout << "\t0. Dung dat cuoc" << endl;
	cout << "\t# Neu muon bo chon linh vat nao thi them \"-\" phia truoc" << endl;
	cout << "\t#Vi du: \"-5\" de bo chon Ga" << endl;
	cout << "\n\t--------------------------" << endl;
}