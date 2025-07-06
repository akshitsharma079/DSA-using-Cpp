#include<iostream>
using namespace std;

// Correct function signature: return type should be int, only one parameter needed
int fact(int num) {
    if(num == 0 || num == 1) {
        return 1;
    }
    return num * fact(num - 1);
}

int main() {
    cout << "Factorial is: " << fact(5);
    return 0;
}