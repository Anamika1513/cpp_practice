#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,1};
    int targetSum = 6;

    int n = sizeof(arr);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i]+arr[j]+arr[k]==targetSum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<"," <<arr[k]<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"Total triplets : "<<count;

    return 0;
}