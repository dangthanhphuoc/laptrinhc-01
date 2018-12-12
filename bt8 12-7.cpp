#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int i,n,s=0;
	cout << "nhap n: ";
	cin >> n;
	for (i=1;i<=n;i+=2){
		s= s+pow(i,2);
	}cout << s;
	
}
