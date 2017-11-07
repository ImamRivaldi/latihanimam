#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main(){
	int x,y,z;
	cout<<"Masukkan Nilai X = ";
	cin>>x;
	
	cout<<"Masukkan Nilai Y = ";
	cin>>y;
	
	if(x>y){
		z=y-x;
		cout<<abs(z)<<endl;
		cout<<"Hasil Positif";
	}
	else if(y>x){
		z=x-y;
		cout<<abs(z)<<endl;
		cout<<"Hasil Positif";
	}
}
