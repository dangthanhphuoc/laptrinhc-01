#include <iostream>
using namespace std ;
int main () {
	int i,n;
	cout << "nhap n: ";
	cin >> n;
	cout << "uoc cua n la: ";
	for (i=1; i<=n;i++){
		if (n%i==0){
			cout <<i<<" ";
		}
	}
}
