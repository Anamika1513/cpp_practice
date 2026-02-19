#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int fact = 1;
    for(int i=n;i>0;i--){
        cout<<i<<endl;
        fact = fact*i;
    }
    cout<<"the factorial of given no is : "<<fact;
}