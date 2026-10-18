#include <iostream>
#include <vector>
using namespace std;

// void change(int *ptr){   //pass by value
//     *ptr = 20;
    
// }

void change(int &a){   //pass by reference using alias
    a = 20;
    
}
int main(){
    // int a = 10;
    int b = 10;

    // change(a);
    // cout<<"inside main fun : "<<a<<endl; //20

    change(b);
    cout<<"inside main fun : "<<b<<endl; //20

    

    return 0;

}
