#include<iostream>
#include<cmath>
using namespace std;

	int main(){
	double base,exponent,result;
		
		cout<<"Enter a number:";
		cin>>base;
		
		cout<<"Enter power:";
		cin>>exponent;
	
		result=pow(base,exponent);
		cout<<result;
		
		return 0;
	}
