#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int roll[35];   

    cout << "Enter roll numbers: ";

    for (int i = 0; i < n; i++) {
        cin >> roll[i];   
    }

    int key;
    cout << "Enter roll number to search: ";
    cin >> key;

    // Linear search
    int pos = -1;  
    for (int i = 0; i < n; i++) {
        if (roll[i] == key) {
            pos = i;      // store index if found
            break;
        }
    }

    if (pos == -1)
        cout << "Student NOT enrolled\n";
    else
        cout << "Student found at index " << pos << "\n";

    return 0;
}
