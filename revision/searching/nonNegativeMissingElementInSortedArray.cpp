#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr , int n ){
    int start = arr[0];
    int low = 0 , high = n-1;

    while(low<=high){
        int mid = low + (high - low) / 2;

        if (arr[mid] - start == mid)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low+start;
}

int main(){
    int n ;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elememts of array"<<endl;
    for(int i=0 ; i<n ; i++) cin>>arr[i];

    int missingNo = missingNumber(arr , n);
    cout<<missingNo;

    return 0;

}