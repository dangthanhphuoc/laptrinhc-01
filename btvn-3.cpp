#include <iostream>
#include<math.h>
using namespace std;
int main (){
     int n;
     cout<<"Nhap n: ";
     cin>>n;
     if (n<2){cout <<n<<" khong phai la so nguyen to";
	 }
	 else {
	 	for (int i=2;i<=n;i++){
	 		if (n%i==0){cout<< n<<" khong phai la so nguyen to";
	 		
			 }break;
			 
		 }cout << n<<" la so nguyen to";
	 }

       
	
}
