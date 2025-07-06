#include<iostream>
using namespace std;

// Recursive linear search function
int LinearSearch(int arr[], int size, int key) {
    if (size == 0)
        return -1; // Not found

    if (arr[0] == key)
        return 0; // Found at current position

    int res = LinearSearch(arr + 1, size - 1, key);
    if (res == -1)
        return -1;
    else
        return res + 1; // Adjust index for recursion
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int key = 4; // You can change this or take user input

    int idx = LinearSearch(arr, size, key);

    if (idx != -1)
        cout << "Element found at index: " << idx << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}