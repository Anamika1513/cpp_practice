#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccurence(vector<int> &arr , int n , int target){
    sort(arr.begin(),arr.end());

    int low = 0 , high = n-1 ;
    int first = -1;

    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid]<target) low = mid+1;
        else if(arr[mid>target]) high = mid-1;
        else{
            first = mid;
            high = mid-1;  // check left
        }
    }
    return first;
}
int lastOccurence(vector<int> &arr , int n , int target){
    sort(arr.begin(),arr.end());

    int low = 0 , high = n-1 ;
    int last = -1;

    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid]<target) low = mid+1;
        else if(arr[mid>target]) high = mid-1;
        else{
            last = mid;
            low = mid+1;   //check right
        }
    }
    return last;
}

int main(){
    int n;
    cout<<"Enter the no of elements present in an array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements Of array"<<endl;
    for(int i=0 ; i<n ; i++) cin>>arr[i];

    int target ;
    cout<<"Enter the target element : ";
    cin>>target;

    int first = firstOccurence(arr , n , target);
    int last = lastOccurence(arr , n , target);

    cout<<"First occurence of targeted element : "<<first<<endl;
    cout<<"last occurence of targeted element : "<<last;
    
    return 0;
}