#include <iostream>
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
    int sum=0 , sum1 = 0 , sum;
    for(int i=0 ; i<n; i++){     
        for(int j=0 ; j<m ; j++){
            sum+=arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Sum : "<<sum;

    return 0;
}