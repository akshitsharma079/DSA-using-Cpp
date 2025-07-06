#include<iostream>

using namespace std;

int main(){

    int num1 =20;
    int num2=30;

    int *ptr = &num1;

    printf("%d \n",ptr);

    ptr++;

    printf("%d \n",ptr);

    return 0;
}