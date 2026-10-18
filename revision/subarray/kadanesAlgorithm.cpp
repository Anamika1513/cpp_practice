#include <iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    int nums[] ={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int curSum = 0 , maxSum = INT_MIN;

    for(int i = 0 ; i<n ;i++){
        curSum += nums[i];
        maxSum = max(curSum , maxSum);
        if(curSum < 0) curSum = 0;
    }

    cout<<"Maximum sum of subArray : "<<maxSum ; 

    return 0;
}