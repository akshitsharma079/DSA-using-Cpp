//constant Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h> // Include for malloc
using namespace std;

int main(){
    const float hello = 3.14;
    // const float *const helloPtr;
    //helloPtr = &hello;
    const float *const helloPtr =&hello;

    float bolo=22.97;
    //helloPtr = &bolo;

    return 0;
}
// static Data and memeber function in C++
//Functions: library ,userdefined functions ,c++special func
//userdefined functions:Iterative functons and recusrsive or recusrsion
//recursion is divided into two types:
//1. Direct recursion: A function calls itself directly.
//2. Indirect recursion: A function calls another function which in turn calls the first function.
//direct recursion has two types Head and tail and linear recursion ,inline recursion,Tree recursion. 