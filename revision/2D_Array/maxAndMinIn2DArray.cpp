#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;

    int arr[n][m];
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Elements of array"<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int min = INT_MAX , max = INT_MIN;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j]>max) max=arr[i][j];
            if(arr[i][j]<min) min = arr[i][j];
        }
    }
    cout<<"minimum element in array : "<<min<<endl;
    cout<<"maximum element in array : "<<max<<endl;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j]==max) cout<<"Maximum element index : "<<"("<<i<<","<<j<<")"<<endl;
            if(arr[i][j]==min) cout<<"Minimum element index : "<<"("<<i<<","<<j<<")"<<endl;
        }
    }


    return 0;
}