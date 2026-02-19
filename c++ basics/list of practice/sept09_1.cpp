#include <iostream>
using namespace std;

int main(){
    int arr[] = {22,32,37,40,45,48,52,72,92,100};
    cout<<arr;
    int item = 32;
    int mid=(0+9)/2;
    cout<<mid<<endl;
    int low = 0,high=n-1;
    

    if(arr[mid]==item){
        cout<<"ITEM FOUND";
    }
    else if(arr[mid]>item){
        low =low;
        high = mid-1;
    }
    else{
        low = low-1;
        high = high;
    }

    if(arr[mid]==32){
        cout<<"item found";
    }
    else if(arr[mid]>32){
        low = low;
        high = mid-1;
    }
    else{
        low = low-1;
        high = high;
        cout<<"item found";
    }

}