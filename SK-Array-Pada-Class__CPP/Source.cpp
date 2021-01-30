#pragma warning(disable:4996)

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

class kerja {
public:
	char nik[10], nm[25];
	int jam; double total;
	float lembur(int l);
};

int main() {
	int x, y, a = 1, b = 1;
	double grand = 0;

	kerja kary[15];

	cout << endl << "Jumlah Data :"; cin >> y;
	
	for (x = 0; x < y; x++) {
		cout << endl << " Data Ke-:" << a++ << endl;
		cout << " NIK :"; cin >> kary[x].nik;
		cout << " Nama Karyawan :"; cin >> kary[x].nm;
		cout << " Jumlah Jam :"; cin >> kary[x].jam;
	}
	
	system("cls");

	gotoxy(14, 3); cout << "Daftar Gaji Mingguan\n";
	gotoxy(16, 4); cout << "Karyawan Honorer\n";

	cout << " -------------------------------------------------\n"
		<< " No. NIK Nama Jumlah Upah Total\n"
		<< " Karyawan Jam Lembur Gaji\n"
		<< " -------------------------------------------------\n";
	
	for (x = 0; x < y; x++) {
		gotoxy(3, wherey()); cout << b++ << ".";
		gotoxy(7, wherey()); cout << kary[x].nik;
		gotoxy(15, wherey()); cout << kary[x].nm;
		gotoxy(30, wherey()); cout << kary[x].jam;
		gotoxy(36, wherey()); cout << kary[x].lembur(kary[x].jam);
		kary[x].total = (40 * 20000) + kary[x].lembur(kary[x].jam);
		gotoxy(44, wherey()); cout << kary[x].total << endl;
		grand = grand + kary[x].total;
	}

	cout << " -------------------------------------------------\n";
	cout << " Total Keseluruhan Karyawan :";
	
	gotoxy(44, wherey()); cout << grand << endl;
	
	_getch();
	return 0;
}

float kerja::lembur(int l) {
	if (l > 40) {
		return(l - 40) * 30000;
	} else {
		return 0;
	}	
}