/*Buat kalkulator yang dapat menerima input dari 2 bilangan lalu dapat memilih operasi yang dilakukan yaitu: 
Penambahan, pengurangan, perkalian, dan pembagian. Dan jika pilihan operasi salah maka program akan memberi peringatan*/

#include<iostream>
using namespace std;
int main(){
	double a,b;
	int input;
	cout<<"Masukkan nilai a = ";
	cin>>a;
	cout<<"Masukkan nilai b =  ";
	cin>>b;
	cout<<"1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\nMasukkan pilihan anda = ";
	cin>>input;
	if(input==1){
		cout<<"a + b = "<<a+b;
	}else if(input==2){
		cout<<"a - b = "<<a-b;
	}else if(input==3){
		cout<<"a * b = "<<a*b;
	}else if(input==4){
		if(b!=0){
			cout<<"a / b = "<<a/b;
		}else{
			cout<<"b tidak boleh 0";
		}
	}else{
		cout<<"Input salah";
	}

}
