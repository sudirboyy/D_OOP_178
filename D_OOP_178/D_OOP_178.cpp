#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMK() {
		
		cout << "\nMasukan Jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukan Kode MK =";
		cin >> 	kode;
		cout << "\nMasukan Nama MK= ";
		cin >>	namaMk;
	}

	void tampilMK() {
		cout << "\nJumlah SKS= " << sks;
		cout << "\nMasukan Kode MK =" << kode
		cout << "\nMasukan Nama MK= " << namaMk

	}
};

