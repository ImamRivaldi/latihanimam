#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int gajipokok,jamkerja,gajitotal,pajak,lembur;
	cout<<"Jumlah Gaji Pegawai		: ";
	cin>>gajipokok;
	cout<<"Jam Kerja			: ";
	cin>>jamkerja;
	lembur=jamkerja-40;
	gajitotal=(lembur*1.5+40)+gajipokok;
	pajak=gajitotal*0.15;
	gajitotal=gajitotal-pajak;
	cout<<"Total Gaji Bersih Pegawai	: "<<gajitotal<<endl;
}
