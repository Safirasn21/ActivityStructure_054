#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20220140054";
	mhs.umur = 19;
	mhs.nama = "Safira Nurul";
	mhs.alamat = "Jepara";

	cout << "Masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;
	cout << "Masukan nama : ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs2.nim;
	cout << "\nUmur : " << mhs2.umur;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;
}