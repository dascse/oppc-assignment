 #include <iostream>
#include <string>

using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    string studentID;
    string course;

public:
    Student(string n, int a, string id, string c) : Person(n, a), studentID(id), course(c) {}
    void displayStudentInfo() {
        displayPersonInfo();  
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

class RegisteredStudent : public Student {
private:
    bool isRegistered;
    float fees;  

public:
    
    RegisteredStudent(string n, int a, string id, string c, bool reg, float f)
        : Student(n, a, id, c), isRegistered(reg), fees(f) {}

    
    void displayRegisteredStudentInfo() {
        displayStudentInfo();
        cout << "Registered: " << (isRegistered ? "Yes" : "No") << endl;
        cout << "Fees: $" << fees << endl; 
    }
};

int main() {
    string name, studentID, course;
    int age;
    bool isRegistered;
    float fees;
 
    cout << "Enter student's name: ";
    getline(cin, name);
    
    cout << "Enter student's age: ";
    cin >> age;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter course: ";
    cin >> course;

    cout << "Is the student registered? (1 for Yes, 0 for No): ";
    cin >> isRegistered;

    cout << "Enter fees: ";
    cin >> fees;

     
    RegisteredStudent student(name, age, studentID, course, isRegistered, fees);

 
    cout << "\nRegistered Student Information:" << endl;
    student.displayRegisteredStudentInfo();

    return 0;
}
