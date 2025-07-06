// #include<iostream>
// using namespace std;

// class Data{
//     public:
//         void Greet(){
//             cout<<"Hello, Bolo";
//         }
//         void negGreet(void);
// };

// void Data::negGreet(){
//     cout<<"hello mat bolo..";
// }

// int main(){
//     Data acc;
//     acc.Greet(); 
//     cout<<endl;// Calling inside the class method
//     acc.negGreet(); // Calling outside the class method

//     return 0;
// }

//constructor is special type of method which is automatic invoked when an object is created.
//Key point of consturctor:
//1. Constructor name is same as class name.inC++
//Automatically invoke in type of creation 
//for the construrctors memory will only be creted only when an object is created.
//3. Constructor has no return type.
//with respect to Parameterized constructors. we can pass the argumnets at the time of object creation .
//Types of constructors:
//1. Default constructor:
//it is automatically invoked implicitly passed by the lang. processor when we do not create any constructor
//Non-Parametrized constructor:A constructor does not has any paramenters
//2. Parameterized constructor
//constructor which has parameters is called parameterized constructor.
//Data Encapsulation:it is a process of binding the data and functions together.
//it is a process of hiding the data from the outside world.
//3. Copy constructor:
//is a special type of constructor which is used to create copy of an existing object.
//Default Copy constructor:-Whwnver we create a copy of an object,compiler will automatically create a copy using refernces.
//Custom copy constructor:
// #include<iostream>
// using namespace std;

// class Data{
//     public:
//     int age;
//     string name;
//     Data(){
//         cout<<"Hello WOrld"<<    }
// }
//     Data(int a, string n){
//         age = a;
//         name = n;
//     }
//     Data(const Data &d){ // Copy constructor
//         age = d.age;
//         name = d.name;
//     }
//     void display(){
//         cout<<"Name: "<<name<<", Age: "<<age<<endl;
//     }
// };  
// int main(){
//     Data acc;
//     Data ac(20,"Akshit");
//     ac.Print();
//     return 0;
// }