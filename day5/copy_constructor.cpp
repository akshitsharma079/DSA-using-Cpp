//3. Copy constructor:
//is a special type of constructor which is used to create copy of an existing object.
//Default Copy constructor:-Whwnver we create a copy of an object,compiler will automatically create a copy using refernces.
//Custom copy constructor:
// #include<iostream>
// using namespace std;

// // class  Data{
// //     public:
// //         string name;
// //         int age;

// //         Data(string name,int age){
// //             this->name = name;
// //             this->age = age;
// //         }
// //         void printDetails(void){
// //             cout<<"Name: "<<name<<endl;
// //             cout<<"Age: "<<age<<endl;
// //         }
// // };
// // int main(){
    
// //     Data M1("Akshit",200);
// //     M1.printDetails();

// //     // Data M2(M1);
// //     // M2.printDetails();  //Default copy constructor
    
// //     //
// //         return 0;

// // }
// class  Data{
//     public:
//         string name;
//         int age;

//         Data(string name,int age){
//             this->name = name;
//             this->age = age;
//         }

        
//         Data( Data &refObj) {//reference object
//             this->name = refObj.name;
//             this->age = refObj.age;
//         }

//         void printDetails(void){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Age: "<<age<<endl;
//         }
// };
// int main(){
    
//     Data M1("Akshit",200);
//     M1.printDetails();

//     Data M2(M1);      // Calls custom copy constructor
//     M2.printDetails();  
    
//     return 0;
// }
//function for memory management fyunctions: malloc(), calloc(), realloc(), free()
//Malooc returns void* 