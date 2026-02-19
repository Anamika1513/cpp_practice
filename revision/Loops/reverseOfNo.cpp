#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int mod , rev = 0;  // mod = modulus , rev = reverse
    while(n>0){
        mod = n%10;
        n = n/10;
        
        rev = rev*10;
        rev = rev+mod;
        
    }
    cout<<rev; 
}