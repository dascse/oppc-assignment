#include <iostream>
using namespace std;
class Rectangle {
private:
    float width=2;
    float height=3;

public:
    Rectangle()  
	{
	}
    Rectangle(float w,float h): width(w), height(h)
	 {
	}
    
    Rectangle(Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }


  float area() {
        return width*height;
    }

    void display()  {
        cout << "Width: "<< width << ", Height: "<<height <<endl;
    }
};
  
int main() {
    
    Rectangle rect1;
    rect1.display();
 cout << "Area of rect1: " << rect1.area() << endl;

    Rectangle rect2(5.0, 3.0);
    rect2.display();
   cout << "Area of rect2: " << rect2.area() << endl;  

    Rectangle rect3(rect2);
    rect3.display();
 cout << "Area of rect3: " << rect3.area() << endl;
  Rectangle rect4; 
    rect4 = rect2; 
    rect4.display();
    return 0;
}
