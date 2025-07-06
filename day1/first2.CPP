#include<iostream>
using namespace std;

class btech{

    public:
    int roll;
    float cgpa;
};

int main() {
    
    btech s1; //non DMA
    btech*s2 = new btech; //DMA

    s1.roll = 101;
    s1.cgpa = 8.5;  

    s2->roll = 102;
    s2->cgpa = 9.6;

    cout<<"Roll: " << s1.roll << endl;
    cout<<"CGPA: " << s1.cgpa << endl;

    cout<<"Roll: " << s2->roll << endl;
    cout<<"CGPA: " << s2->cgpa << endl;

    return 0;
}