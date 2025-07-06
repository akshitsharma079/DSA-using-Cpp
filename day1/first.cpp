// #include<iostream>
// int main(){
//    scanf("%d",printf(",Hello World:"));

//     return 0;
// }
// #include<iostream>

// #pragma pack(1)

// using namespace std;
//  // PADDING: it 

// class erangle{

//    
// Wap to create a class named “Student” with the following attributes and methods: 
// roll and cgpa note:intialize roll and cgpa using constructor and print this detail via display function
// roll and cgpa must be data member of btech class.


// #include<iostream>
// using namespace std;

// class Btech{
//     int roll;
//     float cgpa;

// public:
    
// btech(int r, float c) : roll(r), cgpa(c) {}
//         // Constructor with member initializer list
//     }
//     // Btech(int r, float c) {
//     //     roll = r;
//     //     cgpa = c;
//     // }

    
//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "CGPA: " << cgpa << endl;
//     }
// };
// int main() {
//     Btech student(101, 8.5);

//     student.display();

//     return 0;
// // }
// Wap to take name roll and cgpa of two students and print int
//  note:
//  take data using getdata() functon and print it using putdata() function
// input buffer
// #include<iostream>
// #include<string>
// using namespace std;

// class student {
//     string name;
//     int roll;
//     float cgpa;
// public:
//     void getdata() {
//         cout<<"Enter name: ";
//         getline(cin, name);
//         scanf("%d[^\n]", name);// this is one of the way to take senetences
//         cout<<"Enter roll number: ";
//         cin>>roll;
//         cout<<"Enter CGPA: ";
//         cin>>cgpa;

//         cin.ignore();
//     }
//     void putdata() {
//         cout<<"Name: " << name << endl;
//         cout<<"Roll Number: " << roll << endl;
//         cout<<"CGPA: " << cgpa << endl;
//     }
// };

// int main() {
//     student s1, s2;

//     cout<<"Enter details for Student 1:"<<endl;
//     s1.getdata();
    
//     cout<<"Enter details for Student 2:"<<endl;
//     s2.getdata();

//     cout<<"\nDetails of Student 1:"<<endl;
//     s1.putdata();
    
//     cout<<"\nDetails of Student 2:"<<endl;
//     s2.putdata();

//     return 0;
// }


