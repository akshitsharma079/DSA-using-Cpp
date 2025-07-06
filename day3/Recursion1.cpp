//Recusrsion:
// Whwn function calls itself is called recusrion.
//Recursion:
// When function calls itself it is called recursion.
#include<iostream>
using namespace std;

void func(int num) {
    if (num == 5) // Base case to stop recursion
        return;
    printf("Hello World\n");

    func(num + 1); // Recursive call with incremented value
}

int main() {
    func(0); // Start recursion with num = 0
    return 0;
}