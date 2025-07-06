#include<iostream>
using namespace std;

void func(int num) {
    if (num == 5)
        return;

    cout << "Hello World" << num << endl;

    func(num + 1);
}

int main() {
    func(0); // Start recursion with num = 0
    return 0;
}