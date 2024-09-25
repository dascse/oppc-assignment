 #include <iostream>
#include <string>

using namespace std;

class Section; 

class Student {
private:
    string name;
    float scores[5]; 

public:
    
    Student() {
        name = "";
        for (int i = 0; i < 5; i++) {
            scores[i] = 0;
        }
    }

    void inputStudentData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter scores for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    friend void calculateAverage(Section &sec);
};

class Section {
private:
    Student students[5]; 

public:
    void inputSectionData() {
        cout << "Enter details for 5 students in the section:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Student " << (i + 1) << ":\n";
            students[i].inputStudentData();
        }
    }

    friend void calculateAverage(Section &sec);
};

void calculateAverage(Section &sec) {
    for (int i = 0; i < 5; i++) {
        float total = 0;
        for (int j = 0; j < 5; j++) {
            total += sec.students[i].scores[j];
        }
        float average = total / 5;
        cout << "Average score of " << sec.students[i].name << ": " << average << endl;
    }
}

int main() {
    Section sectionA, sectionB;

    cout << "Input data for Section A:\n";
    sectionA.inputSectionData();

    cout << "\nCalculating averages for Section A:\n";
    calculateAverage(sectionA);

    cout << "\nInput data for Section B:\n";
    sectionB.inputSectionData();

    
    cout << "\nCalculating averages for Section B:\n";
    calculateAverage(sectionB);

    return 0;
}
