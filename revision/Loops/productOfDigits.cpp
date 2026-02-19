#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int pro = 1 ,mod;
    while(n>0){
        mod = n%10;
        n = n/10;
        pro = pro*mod;
    }
    cout<<pro; 
}