#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    //dereference - value at address
    
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;

    int **p = NULL;
    cout<<p<<endl;   // it give the 0x0 which clarify that we didn't store it at any memory address
    //we couldn't dereference the null pointer it gives the segimantation fault
    return 0;

}
