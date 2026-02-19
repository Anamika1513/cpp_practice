#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter a no  : ";
    cin>>n;

    if((n%5==0 or n%3==0) && (n%15!=0)){
        cout<<"the no is divisible by 5 or 3 but not by 15";
    }
    else{
        cout<<"the condition is not fullfill25";
    }
}