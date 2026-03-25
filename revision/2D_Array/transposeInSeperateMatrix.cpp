#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of columns : ";
    cin>>m;
    
    int arr[n][m];
    int brr[m][n];
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"original matrix"<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix"<<endl;
    for(int i=0 ; i<m; i++){
        for(int j=0 ; j<n ; j++){
            brr[i][j] = arr[j][i];
        }
    }
    for(int i=0 ; i<m; i++){
        for(int j=0 ; j<n ; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}