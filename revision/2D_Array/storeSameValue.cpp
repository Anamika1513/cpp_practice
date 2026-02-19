// write a program to store 10 at every index of a 2d martix with 5 rows and 5 column

#include <iostream>
using namespace std;

int main(){
    int arr[5][5];
    int num=10;
    for(int i=0 ; i<5 ; i++){
        for (int j=0 ; j<5 ; j++){
            arr[i][j]=num;
        }
    }
    for(int i=0 ; i<5 ; i++){
        for (int j=0 ; j<5 ; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}