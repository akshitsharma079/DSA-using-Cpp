#include<iostream>
using namespace std;

int main(){
    int num=20;
    int *ptr=&num;
    int **ptr=&ptr;

    return 0;
}

// variable: vatiable are same as container which is use to store any type of datta.
//pointer:pointer as special type of variable which is use to store address of another variable.

// Reference[&]: it retrun the adres of given variable.
//DE-reference[*]: it retrun the value of given address.
//type of pointer:
// 1. Null pointer: it is a pointer which is not pointing to any address.intilaize with nullptr
//-it is good practice to intialize pointer with NULL to avoid wild pointter
// 2. Void pointer: pointer define using void keyword is called void pointer.
//synatx :
//void*ptr_name=NULL;
//-IT also knwon as generic pointer.
//3.Dnagling pointer: pointer which indicate memory which is deallocated. 
//constant variable:constant variable is define usiing const keyword.
//-we can not override the value of constant variable.
//constant pointer-constant pointer is same as constant variable :
// syntax:
//const data_type*ptr_name=&variable_name;
//pointer to pointer : it also known as double pointer,use to store address od any pointer:
//syntax:
//data_type**pointer_name =& another_pointer_name;
//pointer to function: 
//pointer which indicates address of function.