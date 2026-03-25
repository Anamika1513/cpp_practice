#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main(){
    // + operator
    string str = "Anamika";
    string str1 = "Mishra";
    cout<<str + str1 <<endl;
    cout<<(str+=str1)<<endl;   //str1 is getting appended after str and str is updated now
    str = str+str1;   // create a copy of string by adding both and then add str1 and store whole value in str
    cout<<str<<endl;

    //substring
    cout<<str.substr(0,2)<<endl;
    cout<<str.substr(3)<<endl;  // till the end

    //reverse
    reverse(str.begin(),str.end());
    cout<<str<<endl;


    //strcat
    char s1[20] = "Anamika";
    char s2[20]= "Mishra";
    strcat(s1 , s2);  // appends s2 to the end of s1
    cout<<s1<<endl;


    //push_back
    string name = "Uday";
    name.push_back('M');
    cout<<name<<endl;

    return 0;
}