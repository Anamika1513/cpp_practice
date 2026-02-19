// write a program to store roll number and marks obtained by 4 students side by side in a matrix

#include <iostream>
using namespace std;

int main(){
    int r ,c = 3;  // c = PCM
    cout<<"Enter the no of students : ";
    cin>>r;
    int arr[r][c];

    cout<<"toatl no of input "<<r*c<<endl;

    for(int i=0 ; i<r ;i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<r ;i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}