#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int upperBound(vector<int> &arr , int n ,int target){

    int low = 0 , high = n-1;
    int ans = n;
    
    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid]<=target) {
            low = mid+1;
        }
        else{
            ans = mid;
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int n ;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elememts of array"<<endl;
    for(int i=0 ; i<n ; i++) cin>>arr[i];

    int target ;
    cout<<"Enter the target element : ";
    cin>>target;

    sort(arr.begin(),arr.end());


    int uBound = upperBound(arr , n , target);

    cout<<"Upper Bound Index : "<<uBound<<endl;

    return 0;

}