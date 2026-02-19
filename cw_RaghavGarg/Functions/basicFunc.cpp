#include <iostream>
using namespace std;

// void greet(){
//     cout<<"Good Morning!!"<<endl;
//     cout<<"How are you ??"<<endl;
// }

void usa(){
    cout<<"you are in usa"<<endl;
}
void india(){
    cout<<"You are in india"<<endl;
}
int main(){    // cannot be called more than one time
    // greet();   // Function call
    // cout<<"Anamika Mishra.."<<endl;
    // greet();
    cout<<"you are in main"<<endl;
    india();
    usa();
    return 0;
}