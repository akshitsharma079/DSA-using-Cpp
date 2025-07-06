#include<iostream>
#include<stdio.h>
#include<stdlib.h> // Include for malloc

using namespace std;
int main(){
    int *p;
    p = (int*)malloc(sizeof(int)); // Cast malloc to int*
    p=new int;
    *p = 40;
    cout << *p << endl; // Optional: print the value to verify
    delete p; // Free the allocated memory
    return 0;
}
//if we loose to the pointer then there will be no access to the memory space. 
//No access to the data.
//Nobody can use the memory space.
//4byte of space is wasted it will cause to memory leaks may happen