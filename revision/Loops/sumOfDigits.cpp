#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int sum = 0 ,mod;
    while(n>0){
        mod = n%10;
        n = n/10;
        sum = sum+mod;
    }
    cout<<sum; 
}