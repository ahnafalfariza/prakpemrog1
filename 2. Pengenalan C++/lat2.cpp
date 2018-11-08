/*Buatlah program untuk menghitung waktu yang ditempuh berdasarkan
kecepatan dan jarak yang ada dengan menggunakan input user*/

#include<iostream>
using namespace std;
int main(){
	double kecepatan, jarak;
	cout<<"Masukkan kecepatan (km/jam) = ";
	cin>>kecepatan;
	cout<<"Masukkan jarak (jam) =  ";
	cin>>jarak;
	cout<<"Waktu = "<<jarak/kecepatan<<" jam";
}
