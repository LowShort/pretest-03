/*
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Sorting
* Tgl : 13 03 2019
*/
#include<iostream>
#include<iomanip>
using namespace std;

struct r_mhs
{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n) {
	cout << "Masukkan banyak data : "; cin >> n;
}
	
void inputMhs(larikMhs& mhs, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Masukkan nama : "; cin >> mhs[i].nama;
		cout << "Masukkan npm : "; cin >> mhs[i].npm;
		cout << "Masukkan IPK : "; cin >> mhs[i].ipk;
	}
}
void cetakMhs(larikMhs& mhs, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << i + 1
			<< setw(23) << mhs[i].npm
			<< setw(25) << mhs[i].nama
			<< setw(11) << mhs[i].ipk
			<< "\n";
	}
}
void sortNama(larikMhs& mhs, int n) {

}

int main() {
	larikMhs mhs;
	int n;

	banyakData(n);
	inputMhs(mhs, n);
	cetakMhs(mhs, n);
	sortNama(mhs, n);

	return 0;
}