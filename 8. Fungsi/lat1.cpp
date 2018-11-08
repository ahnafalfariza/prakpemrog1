#include<iostream>
using namespace std;

float segitiga(){
	int a,t;
	cout<<"Masukkan Alas: ";
	cin>>a;
	cout<<"Masukkan Tinggi: ";
	cin>>t;
	return a*t/2;
}

float lingkaran(){
	int r;
	cout<<"Masukkan Jari Jari: ";
	cin>>r;
	return 3.14*r*r;
}

float persegi(){
	int p;
	cout<<"Masukkan Panjang Sisi: ";
	cin>>p;
	return p*p;
}

int main(){
	int n;
	char c = 'y';
	do{
		system("CLS");
		cout<<"=========================="<<endl;
		cout<<"=       MENU UTAMA       ="<<endl;
		cout<<"=    1. LUAS SEGITGA     ="<<endl;
		cout<<"=   2. LUAS LINGKARAN    ="<<endl;
		cout<<"=    3. LUAS PERSEGI     ="<<endl;
		cout<<"=========================="<<endl;
		cout<<"Masukkan pilihan anda: ";
		cin>>n;
		if(n==1){
			cout<<"Luas Segitiga: "<<segitiga()<<endl;
		}else if(n==2){
			cout<<"Luas Lingkaran: "<<lingkaran()<<endl;			
		}else if(n==3){
			cout<<"Luas Persegi: "<<persegi()<<endl;			
		}else{
			cout<<"Input Salah"<<endl;
		}
		cout<<"Apakah ingin lanjut? (y/n) ";
		cin>>c;
	}while(c!='n');
}
