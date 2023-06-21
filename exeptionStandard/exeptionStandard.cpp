#include <iostream>
#include <exception>
// untuk objek exeption yang akan digunakan
#include <array>
// untuk obyek array yang akan digunakan
using namespace std;
int main()
{
	cout << "Awal Program" << endl; //pertanda 1...
	try {
		array<int, 3> data = { 3, 5, 7};
		// pesan array integer 3 elemen
		cout << data.at(5) << endl;
		// memanggil array element ke 5
	}
	catch (exception& e) {
		// Penangkapan mengunakan obyek exeption
		cout << e.what() << endl;
		/* akan diesekusi karena array hanya
		memiliki 3 elemen*/
	}
	cout << "Baris Program yang Terakhir" << endl;
	/*Penanda 2: bahwa program berjalan tanpa berhenti
	meskipun terjadi kesalahan*/
	return 0;
}