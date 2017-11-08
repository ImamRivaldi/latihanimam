#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int gajipokok,jamkerja,gajitotal,pajak,lembur,totalgaji;
	cout<<"Jumlah Gaji Pegawai		: ";
	cin>>gajipokok;
	cout<<"Jam Kerja			: ";
	cin>>jamkerja;
	if(jamkerja>40){
	lembur=(jamkerja-40)*(gajipokok/40);
	gajitotal=(lembur*1.5)+gajipokok;
	pajak=gajitotal*0.15;
	totalgaji=gajitotal-pajak;
	}
	else{
		pajak=gajipokok*0.15;
		totalgaji=gajipokok-pajak;
	}
	cout<<"Total Gaji Bersih Pegawai	: "<<totalgaji<<endl;
}
