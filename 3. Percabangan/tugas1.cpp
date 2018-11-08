/* Buat Program penentu nilai:
 • Jika hasil test kurang dari 50 maka nilai C
 • Jika hasil test dari 50 sampai 80 maka nilai B
 • Jika hasil test lebih dari 80 maka nilai A*/

#include<iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"Masukkan nilai anda: ";
	cin>>nilai;
	
	if(nilai>80&&nilai<=100){
		cout<<"Nilai anda A";
	}else if(nilai>50&&nilai<=100){
		cout<<"Nilai anda B";
	}else if(nilai>=0&&nilai<=100){
		cout<<"Nilai anda C";
	}else{
		cout<<"Nilai yang anda masukkan salah";
	}
}
