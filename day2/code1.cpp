// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector <int> v={10,20,30,40,50};

//     vector<int> *v = new vector<int>;

//     return 0;

// }
#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     vector<int> v;

//     cout << "Enter 5 numbers: ";
//     for(int i = 0; i < 5; i++) {
//         int num;
//         cin >> num;
//         v.push_back(num);
//     }
//     cout << "You entered: ";
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
int main(){

    // vector<int> v={10, 20, 30, 40, 50};

    vector<int> *v = new vector<int>;

    v->push_back(10);
    v->push_back(20);

    v->resize(4);

    (*v)[2] = 30;
    (*v)[3] = 40;

    for(auto i: *v) 
        cout << i << " ";
    
    return 0;

}