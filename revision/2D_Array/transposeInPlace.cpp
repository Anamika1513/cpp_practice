#include <iostream>
// #include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows/column : ";
    cin>>n;
    
    int arr[n][n];
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"original matrix"<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix"<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=i ; j<n ; j++){       // j = 0 to i
           swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}