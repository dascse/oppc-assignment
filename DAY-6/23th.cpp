
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the binary plus operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    // Using the overloaded + operator
    Complex c3 = c1 + c2;

    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    cout << "c3: "; c3.display();

    return 0;
}
