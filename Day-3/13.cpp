#include <iostream>

using namespace std;

int main() {
    int startNum, rows;

    cout << "Enter the starting number: ";
    cin >> startNum;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << startNum - j << " ";
        }
        startNum -= (rows - i); 
        cout << endl; 
    }

    return 0;
}
