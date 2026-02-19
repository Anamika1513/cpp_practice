#include <iostream>
using namespace std;

int main(){
    int arr[2][2];     // initialization of array

    // first way of declaring a value in 2d array
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;

    // 2nd way - arrays of array(array inside the array)
    
    int brr[2][2] = {{1,2},{3,4}};


    return 0;
}