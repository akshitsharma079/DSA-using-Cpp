#include<iostream>
using namespace std;

void func( ){
    cout<<"HeLlo world: \n";
}

int main() {
    
    void (*ptr)();

    ptr = func;
    ptr();
    func();

    return 0;
}