#include<iostream>
using namespace std;
int main (){
	int n;
	cout << "nhap n:";
	cin >> n;
	int s=0,p=1;
	for (int i=1;i<=n;i++){
		p=p*i;
		s=s+p;
		}
		
	cout <<s;
}
