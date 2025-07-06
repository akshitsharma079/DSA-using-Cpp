// generic programming-that does not have any type of data type
#include<iostream>

using namespace std;

int num =10;

int main(){
    int num =20;
    int *ptr = &num; 
    int &x = num; 

    cout<<num<<endl; //20
    cout<<::num<<endl; //we need to use scope resolution operator to print global value
    cout<<ptr<<endl; //address of num
    cout<<x<<endl; //20


    return 0;


}