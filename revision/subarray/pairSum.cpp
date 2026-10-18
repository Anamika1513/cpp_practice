#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& nums , int target){
    int i = 0 , j = nums.size()-1;

    vector<int> ans;

    while(i<j){
       int pair_sum = nums[i] + nums[j];

       if (pair_sum < target ) i++;
       else if (pair_sum>target) j++;
       else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
    }
    return ans;
}

int main(){

    int n; 
    cout<<"Enter the elements in an array : ";
    cin>>n;

    int t; 
    cout<<"Enter the target sum pair : ";
    cin>>t;

    vector<int> nums(n) ;
    for(int i=0 ; i<n ; i++){
        cin>>nums[i];
    }

    vector<int> ans = pairSum(nums , t);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}