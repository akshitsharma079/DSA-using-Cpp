// #include<iostream>
// using namespace std;    

// int main() {
//     const char *ptr[3] = {" WE", "are", "the champions!"};
//     int i = 0;
//     while(i < 3) {
//         cout << ptr[i] << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
//}
#include<iostream>
using namespace std;

int main() {

    const char *ptr[3] = {" WE", "are", "coders"};
    cout << *ptr << endl;           // prints " WE"
    cout << *(ptr + 1) << endl;     // prints "are"
    cout << *(ptr + 2) << endl;     // prints "the champions!"
    cout << *(ptr + 2) + 3 << endl; // prints "champions!"

    // If you want to print the address, use %p and cast to void*
  
    return 0;
}