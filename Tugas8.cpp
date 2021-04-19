#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Inputkan Nilai x : ";
	cin >> x;getchar();
	switch(x){
		case 10000:
			cout << "Sepuluh Ribu Rupiah" << endl;
			break;
		case 20000:
			cout << "Dua Puluh Ribu Rupiah" << endl;
			break;
		case 30000:
			cout << "Tiga Puluh Ribu Rupiah" << endl;
			break;
		case 40000:
			cout << "Empat Puluh Ribu Rupiah" << endl;
			break;
		case 50000:
			cout << "Lima Puluh Ribu Rupiah" << endl;
			break;
		default:
			cout << "Tidak Terdaftar di Program" << endl;
			break; 
	}
	return 0;
}
