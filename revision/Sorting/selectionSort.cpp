#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] ={5,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i=0 ; i<n-1 ; i++){
        int mn = INT_MAX ;
        int minInd ;
        for(int j=i ; j<n ; j++){
            if(mn>arr[j]){
                mn = arr[j];
                minInd = j;
            }
        }

        // swap ith and minINd element
        swap(arr[i],arr[minInd]);
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}