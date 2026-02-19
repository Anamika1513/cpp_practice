#include <iostream>
using namespace std;

int main(){
    int r , c ;   // n=no of rows , m = no of columns
    cin>>r>>c;
    int arr[r][c];
    int brr[r][c];
    cout<<"enter the elements of first array"<<endl;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elements of second array"<<endl;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>brr[i][j];
        }
    }
    int sum[r][c];

    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ;j++){
        sum[i][j] = arr[i][j]+brr[i][j];
        }
    }
    cout<<"Sum of two matrix"<<endl;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ;j++){
        cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}