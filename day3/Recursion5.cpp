// //print table using recursion
// #include<iostream>
// using namespace std;        
// void printTable(int num, int i) {
//     if (i > 10) 
//         return;

//     cout<<num<< " * " <<i<< " = " <<num * i<<endl;

//     printTable(num, i + 1); 
// }

// int main() {
//     int num;
//     cout << "Enter a number to print its multiplication table: ";
//     cin >> num; 
//     printTable(num, 1); 
//     return 0;
// }
#include<iostream>
using namespace std;

void func(int num,int x){

    if(num>10)
        return;
        
    cout<<num*x<<endl;

    func(num+1,x);


}
int main(){

    func(1,12);

    return 0;
}