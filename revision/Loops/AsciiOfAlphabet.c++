#include <iostream>
using namespace std;

int main(){
    char up_case = 'A';
    char lw_case = 'a';

    cout<<"Ascii values of upperCase alphabets"<<endl;
    while(up_case<='Z'){
        cout<<up_case<<" "<<int(up_case)<<endl;
        up_case++;
    }
    cout<<"Ascii values of lowerCase Alphabets"<<endl;
    while(lw_case<='z'){
        cout<<lw_case<<" "<<int(lw_case)<<endl;
        lw_case++;
    }
}