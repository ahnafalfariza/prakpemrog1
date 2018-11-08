/*Buatlah program konversi mata uang rupiah ke dolar dengan
menggunakan input dari user yaitu berupa nominal mata uang
rupiah, jika diketahui untuk 1 USD = Rp 9.600*/

#include<iostream>
using namespace std;
int main(){
	double rupiah;
	cout<<"Masukkan jumlah uang dalam rupiah = ";
	cin>>rupiah;
	cout<<"Jumlah uang dalam dollar = "<<rupiah/9600<<" USD";
}
