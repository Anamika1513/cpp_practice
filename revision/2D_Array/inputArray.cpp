#include <iostream>
using namespace std;

int main(){
    int r , c;
    cout<<"Enter the no of rows : ";
    cin>>r;

    cout<<"Enter the no of columns : ";
    cin>>c;

    int arr[r][c];    // initialization of array

    
    //Input
    for(int i=0 ; i<r; i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    
    //Output
    for(int i=0 ; i<r; i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}