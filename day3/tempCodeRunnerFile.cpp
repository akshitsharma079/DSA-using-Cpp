#include<iostream>

void printPi(string str){
    if(str.length() == 0)
        return;

    if(str[0] == 'p' && str[1] == 'i'){
        std::cout << "3.14";
        printPi(str.substr(2));
    } else {
        std::cout << str[0];
        printPi(str.substr(1));
    }
}
