#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>&arr , int target){
    int n = arr.size();

    sort(arr.begin() , arr.end());

    int low = 0 , high = n-1;

    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low = mid+1;
        else high = mid-1;
        
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector <int> arr;

    cout<<"Enter the elements \n";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target ;
    cout<<"Enter the target variable : ";
    cin>>target;

    int ind = binarySearch( arr ,target);

    cout<<"Index : "<<ind;

    return 0;
}