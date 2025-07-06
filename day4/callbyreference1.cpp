// #include<iostream>
// using namespace std;    

// int change(int &r){

// }
// int main()
// {
//     int a =5;
//     cout<<"a:"<<a<<endl;

//    // int&r;    -Error
//    int &r=a; 

//    r =7;
//    cout<<"r:"<<a<<endl;
//    cout<<"a:"<<a;
//    return 0;
// }
#include<iostream>
using namespace std;

int change(int &r){
    r = 10; // Changing the value of r will change the original variable
    return r;
}   

int main() {
    int a = 5;
    cout << "a: " << a << endl;
    change(a);
    cout << "a: " << a << endl;
    return 0;
}
//Methods:functions inside a class is called methods.
//inside class method and outside the class method
//methods which are define inside the class are called inside the class method
//methods which are defined inside the class but outside the class body are called outside the class method