#include <iostream>

using namespace std;

int main(){
	char bidang;
	double panjang,luas,alas,tinggi,lebar;
	
	cout<<"Pilih Jenis Bidang (P/S): ";
	cin >> bidang;
	
	if(bidang=='P'||bidang=='p'){
		cout<<"+++++Menghitung Luas Persegi Panjang+++++\n";
		cout<<"Masukkan Panjang	: ";
		cin>>panjang;
		cout<<"Masukkan Lebar		: ";
		cin>>lebar;
		luas=panjang*lebar;
		cout<<"Hasil			: "<<luas<<endl;
	}
	else if(bidang=='S'||bidang=='s'){
		cout<<"+++++Menghitung Luas Segitiga+++++\n";
		cout<<"Masukkan Alas	: ";
		cin>>alas;
	}
}
