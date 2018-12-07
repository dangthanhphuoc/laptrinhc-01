#include<iostream>
using namespace std;
int main (){
	int s=0,n;
	cout << "nhap n: ";
	cin >> n;
	for (int i=1;i<=n;i++){
		s= s+ (s+i);
	}cout << s;
}
