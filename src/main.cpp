#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
	cout << "== Memfaktorkan Bilangan ==" << endl << endl << "note: " << endl <<"Semakin besar bilangan, semakin lama waktu yang diperlukan" << endl << "Tidak dianjurkan untuk menggunakan angka dengan 11 digit atau lebih" << endl << endl;
	cout << "Masukkan input : ";
	long long int a;
	cin >> a;

	long long int b = a / 2 + 1;
	cout << "Faktor dari bilangan tersebut adalah : 1";

	long long int i = 1;
	while(i < b){
		i++;
		if((a % i) == 0){
			cout << ", " << i;
		}
	}
	cout << ", " << a << "." << endl << "Selesai!" << endl;
	int z;
	cin >> z;
	return 0;
}