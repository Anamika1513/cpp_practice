#include <iostream>
using namespace std;

string isPrime(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%2==0) return "non-prime";
    }
    return "Prime";
}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    cout<<isPrime(n)<<endl;

    return 0;
}