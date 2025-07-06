#include<iostream>
#include<stdio.h>
#include<stdlib.h> // Include for malloc

using namespace std;

struct Data {
    int a;
    double b;
}; // <-- Added semicolon here

struct Data acc[5];

int main() {
    int x;
    double y;
    for(int i = 0; i < 5; i++) {
        cin >> x;
        cin >> y;
        acc[i].a = x;
        acc[i].b = y;
    }
    return 0;
}