// #include<iostream>
// using namespace std;

// void func(int num) {
//     if (num < 1)
//         return;

//     cout << num << endl;

//     func(num - 1);
// }

// int main() {
//     func(10);
//     return 0;
// }
#include<iostream>
using namespace std;

void func(int num) {
    if (num > 5)
        return;

    func(num + 1);

    cout << num << endl;

  
}

int main() {
    func(1);
    return 0;
}