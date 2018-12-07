#include <iostream>
using namespace std;
int main (){
	int n;float s=1;
	cout << "nhap n:";
	cin >> n;
	for (float i=1;i<=n;i++){
		s*=(1/i);
	}cout << "ket qua:"<<s;
}
