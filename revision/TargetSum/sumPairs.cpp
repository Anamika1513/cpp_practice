#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,1,3,5,1};
    int targetSum = 6;

    int n = sizeof(arr);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==targetSum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                count++;
            }
        }
    }
    cout<<"Total pairs : "<<count;

    return 0;
}