#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> minMaxArragement(vector<int> &arr , int n){
    sort(arr.begin(),arr.end());

    int i=0 , j=n-1;

    vector<int> ans;

    while(i<=j){
        if(i!=j){
            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            i++; j--;
        }
        else{
            ans.push_back(arr[i]);
            i++;
        }
    }
    return ans;
}

int main(){
    int n; 
    cout<<"enter the size of arr : ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0 ; i<n; i++) cin>>arr[i];

    vector<int> result = minMaxArragement(arr , n);

    cout<<"Rearranged array "<<endl;
    for(int x : result) cout<<x<<" ";

    return 0;
}