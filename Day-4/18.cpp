#include<iostream>
using namespace std;
class area 
{
	public:
	float calculateAreaall(float width,float length){
		return 0.5*width*length;
	}
	float calculateAreaall(float radius){
	
	return 3.14*radius*radius;
}
float calculateAreaall(int le,int hight){
	return le*hight;
}
};
int main()
{
	area star;
	float length,width;
		cout<<"enter the length and width: \n";
	cin>>length>>width;
		cout<<"the area of triangle is: "<<star.calculateAreaall(width,length);
		float radius;
			cout<<"enter the radius: \n";
	cin>>radius;
		cout<<"circle radius is: "<<star.calculateAreaall(radius);
	int le,hight;
		cout<<"enter the length and hight: \n";
	cin>>le>>hight;
		cout<<"area of rectengal is: \n"<<star.calculateAreaall(le,hight);
}
