#include <iostream>
using namespace std;

int main(){
	float berat;
	int tinggi;
	cout<<"Masukkan Tinggi Badan (cm)	: ";
	cin>>tinggi;
	cout<<"Masukkan Beran Badan (kg)	: ";
	cin>>berat;
	if(berat<tinggi/2.5){
		cout<<"Hasil	: Kurus"<<endl;
	}
}
