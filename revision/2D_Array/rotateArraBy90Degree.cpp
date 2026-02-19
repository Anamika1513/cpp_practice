#include <iostream>
using namespace std;

int main(){
    int n , m ;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of columns : ";
    cin>>m;

    //Array input
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }

    //transpose 
    int trans[m][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            trans[j][i] = arr[i][j];
        }
    }

    //rotate
    for(int i=0 ; i<n ; i++){
        int j = 0;
        int k = n-1;
        while(j<k){
            swap(trans[i][j],trans[i][k]);
            j++;
            k--;
        }
    }

    //print rotated array
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}