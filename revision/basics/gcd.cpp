#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    while(b!=0){
        int d =a%b;
        a=b;
        b=d;
    }
    cout<<a;
    return 0;
}