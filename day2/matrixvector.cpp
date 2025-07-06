#include<iostream>
#include<vector>
using namespace std;    

int main(){
    vector<vector<int>> v;

    for (int i = 0; i < 3; i++) {
        vector<int> temp;
        for (int j = 0; j < 3; j++) { // Declare 'j' here
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (auto x : v) {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
}