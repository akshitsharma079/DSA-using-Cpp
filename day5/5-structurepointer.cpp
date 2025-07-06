//structure Pointer
// #include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;

// struct Data {
//     int a;
//     float b;
// };
// struct Data *p;

// int main() {
//     // Remove this line: p = malloc(sizeof(int));
//     p = (struct Data*)malloc(sizeof(struct Data)); // Correct allocation for struct Data
//     if (p == NULL) {
//         cout << "Memory allocation failed!" << endl;
//         return 1;
//     }
//     (*p).a = 10;
//     (*p).b = 5.5;
//     cout << "a: " << p->a << ", b: " << p->b << endl;
//     free(p); // Free the allocated memory
//     return 0;
// }
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data {
    int a;
    int *p;
};
struct Data *p;

int main() {
    // Remove this line: p = malloc(sizeof(int));
    p = (struct Data*)malloc(sizeof(struct Data)); // Correct allocation for struct Data
    if (p == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    (*p).a = 10;
    (*p).b = 5.5;
    cout << "a: " << p->a << ", b: " << p->b << endl;
    free(p); // Free the allocated memory
    return 0;
}