#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int sum = 0 ,mod ,rev = 0 , original_no = n;
    while(n>0){
        mod = n%10;
        n = n/10;
        // sum = sum+mod;
        rev = rev*10;
        rev = rev+mod;
    }
    cout<<"reverse is : "<<rev<<endl; 
    cout<<"the sum of original and reverse no is : "<<rev+original_no;
}