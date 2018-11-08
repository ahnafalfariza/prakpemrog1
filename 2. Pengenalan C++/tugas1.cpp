/*Buatlah Program yang dapat menerima input biodata anda dan menampilkannya */

#include<iostream>
using namespace std;
int main(){
	string nama, alamat;
	int umur;
	cout<<"Masukkan nama: ";
	getline(cin,nama);
	cout<<"Masukkan alamat: ";
	getline(cin,alamat);
	cout<<"Masukkan umur: ";
	cin>>umur;
	cout<<"Nama: "<<nama<<endl;
	cout<<"Alamat: "<<alamat<<endl;
	cout<<"Umur: "<<umur<<" thn"<<endl;
}
