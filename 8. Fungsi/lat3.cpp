#include<iostream>
using namespace std;

void kali(int a[], int b[]){
	int n = (sizeof(a)/sizeof(*a));
	int c[n+1];
	cout<<"Hasil perkalian array adalah: ";
	for(int i=0;i<n+1;i++){
		c[i]=a[i]*b[i];
		cout<<c[i]<<" ";
	}
	cout<<endl;
}

int main(){	
	int n;
	cout<<"Masukkan panjang array: ";
	cin>>n;
	int a[n], b[n];
	cout<<"Masukkan array 1: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Masukkan array 2: ";
	for(int i=0;i<n;i++){
		cin>>b[i];
	}	
	kali(a,b);

}
