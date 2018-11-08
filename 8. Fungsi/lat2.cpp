#include<iostream>
using namespace std;

void segitiga(int n){
	int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
			cout<<"*";
		}
        cout<<endl;
    }
}

int main(){
	int n;
	cout<<"Masukkan panjang alas: ";
	cin>>n;
	segitiga(n);
}
