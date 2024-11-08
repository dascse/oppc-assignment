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

// Derived class for faculty
class Faculty : public Person {
protected:
    string facultyID;
    string department;

public:
    Faculty(string n, int a, string id, string dept) : Person(n, a), facultyID(id), department(dept) {}

    void displayFacultyInfo() {
        displayPersonInfo(); // Call base class method
        cout << "Faculty ID: " << facultyID << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class for examinations that inherits from both Student and Faculty
class Examination : public Student, public Faculty {
private:
    string examName;

public:
    Examination(string studentName, int studentAge, string studentID, string course,
                string facultyName, int facultyAge, string facultyID, string dept,
                string exam) 
        : Student(studentName, studentAge, studentID, course),
          Faculty(facultyName, facultyAge, facultyID, dept),
          examName(exam) {}

    void displayExamInfo() {
        cout << "\nExamination Details:" << endl;
        cout << "Exam Name: " << examName << endl;
        cout << "\nStudent Information:" << endl;
        displayStudentInfo(); // Display student info
        cout << "\nFaculty Information:" << endl;
        displayFacultyInfo(); // Display faculty info
    }
};

int main() {
    string studentName, studentID, course;
    string facultyName, facultyID, department;
    int studentAge, facultyAge;
    string examName;

    // Take input for student details
    cout << "Enter student's name: ";
    getline(cin, studentName);
    
    cout << "Enter student's age: ";
    cin >> studentAge;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter course: ";
    cin >> course;

 
    cin.ignore();
 
    cout << "\nEnter faculty's name: ";
    getline(cin, facultyName);
    
    cout << "Enter faculty's age: ";
    cin >> facultyAge;

    cout << "Enter faculty ID: ";
    cin >> facultyID;

    cout << "Enter department: ";
    cin >> department;

    
    cin.ignore();

   
    cout << "\nEnter exam name: ";
    getline(cin, examName);

   
    Examination exam(studentName, studentAge, studentID, course,
                     facultyName, facultyAge, facultyID, department,
                     examName);
 
    exam.displayExamInfo();

    return 0;
}
