#include <iostream>
// #include <ealgorithm>
using namespace std;

int main(){
    int arr[]={5,0,2,0,0,3,4,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0 ; i<n-1 ; i++){
        bool isSwap = false;
        for(int j=0 ; j<n-1-i; j++){
            if(arr[j]==0){   // compare adjacent element
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }

    
    for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}