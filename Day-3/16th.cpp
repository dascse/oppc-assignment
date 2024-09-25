#include <iostream>
using namespace std;


void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        // Move the last disk from source to destination
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    
    towerOfHanoi(n - 1, source, auxiliary, destination);

  
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n; 
    cout << "Enter the number of disks: ";
    cin >> n;
    
    // A, B, C are the names of the rods
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}