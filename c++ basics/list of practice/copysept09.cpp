#include <iostream>
using namespace std;

int main() {
    int arr[] = {22, 32, 40, 45, 48, 52, 72, 92, 100};
    cout<<arr;
    int item = 32;
    int low = 0, high = 8;   // array size = 9 (index 0–8)
    int mid = (low + high) / 2;   // first mid

    // Step 1
    if (arr[mid] == item) {
        cout << "Item found at index " << mid << endl;
    }
    else if (arr[mid] > item) {
        high = mid - 1;   // search left side
        mid = (low + high) / 2;

        // Step 2 (left half check)
        if (arr[mid] == item) {
            cout << "Item found at index " << mid << endl;
        }
        else if (arr[mid] > item) {
            high = mid - 1;
            mid = (low + high) / 2;

            if (arr[mid] == item) {
                cout << "Item found at index " << mid << endl;
            }
            else {
                cout << "Item not found" << endl;
            }
        }
        else {
            low = mid + 1;
            mid = (low + high) / 2;

            if (arr[mid] == item) {
                cout << "Item found at index " << mid << endl;
            }
            else {
                cout << "Item not found" << endl;
            }
        }
    }
    else {  
        low = mid + 1;   // search right side
        mid = (low + high) / 2;

        // Step 2 (right half check)
        if (arr[mid] == item) {
            cout << "Item found at index " << mid << endl;
        }
        else if (arr[mid] > item) {
            high = mid - 1;
            mid = (low + high) / 2;

            if (arr[mid] == item) {
                cout << "Item found at index " << mid << endl;
            }
            else {
                cout << "Item not found" << endl;
            }
        }
        else {
            low = mid + 1;
            mid = (low + high) / 2;

            if (arr[mid] == item) {
                cout << "Item found at index " << mid << endl;
            }
            else {
                cout << "Item not found" << endl;
            }
        }
    }

    return 0;
}
