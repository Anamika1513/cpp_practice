#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,3,1,2,1};
    int n = 7;
    
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
                if(arr[i]==arr[j]){
                    arr[i]=arr[j]=-1;  //array manupulation
                }
            }
        }
    
    int unique = 0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>0){
            cout<<"Unique no in the array is : " <<arr[i];
        }
    }
    

    return 0;
}