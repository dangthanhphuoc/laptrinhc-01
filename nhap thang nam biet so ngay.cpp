#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"nhap vao thang:";
	cin >>a;
		cout<<"nhap vao nam:";
		cin>>b;
		if (a<=1||a>=12){cout <<"nhap sai";
		}
		else if (a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			cout << "thang co 31 ngay";
			}
			else if (a==4||a==6||a==9||a==11){cout<<"thang co 30 ngay";}
	else if (a=2){
		if(b%4==0&&b%100!=0||b%400==0){cout<< "thang co 29 ngay";}	
		else {cout<< "thang co 28 ngay";}
	}
	
		
		
}
