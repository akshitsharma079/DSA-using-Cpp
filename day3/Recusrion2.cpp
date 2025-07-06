#include<iostream>
using namespace std;

void func(int num) {
    if (num == 5) // Base case to stop recursion
        return;

    cout << "Hello World" << num << endl;

    num++;
    func(num);
}

int main() {
    func(0); // Start recursion with num = 0
    return 0;
}