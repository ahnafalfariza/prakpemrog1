/*3. Buatlah program yang dapat menerima input 2 bilangan lalu menampilkan:
Hasil pembagian bilangan 1 dan 2
Hasil perkalian bilangan 1 dan 2
Sisa pembagian bilangan 1 dan 2
Penambahan bilangan 1 dan 2
Pengurangan bilangan 1 dan 2*/

#include<iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b;
	
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	
	cout<<"a + b = "<<a+b<<endl;
	cout<<"a - b = "<<a-b<<endl;
	cout<<"a * b = "<<a*b<<endl;
	cout<<"a / b = "<<a/b<<endl;
	cout<<"a % b = "<<fmod(a,b)<<endl;
}
