#include<iostream>
using namespace std;
class item{
	private:
	
	
static int qt;

	public:
		item()
		{
			qt++;
			display();
		}
		~item()
		{
			qt--;
			display();
		}
		void display()
		{
			cout<<"current element "<<qt<<endl;
		}
		};
	int item::qt = 0;
		int main()
		{
		
		item a1,a2,a3;
		a1.display();
		a2.display();
		a3.display();
		return 0;
}