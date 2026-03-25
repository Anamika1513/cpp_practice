#include <iostream>
#include <string>
using namespace std;

int main(){
    string name ;
    // cin>>name;   // it only take input till it meets with space , tap etc
    getline(cin,name);
    cout<<name;

    return 0;
}