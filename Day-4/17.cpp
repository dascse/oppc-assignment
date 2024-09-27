#include<iostream>
using namespace std;
int main()
{
	float p,t,inter;
	float rate=15.0;
	cout<<"enter the amount: \n";
	cin>>p;
	cout<<"enter the time: ";
	cin>>t;
	inter=(p*rate*t)/100;
	cout<<"interest is: "<<inter;
	return 0;
	
}
