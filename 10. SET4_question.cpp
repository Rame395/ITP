#include <iostream>
using namespace std;

// 1. Write a program to add 2 numbers by passing numbers and return the value to calling function

// int Sum(int a, int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int a, b;
//     cout<<"Enter first number: ";
//     cin>>a;

//     cout<<"Enter second number: ";
//     cin>>b;

//     int add=Sum(a,b);
//     cout<<a<<"+"<<b<<"="<<add;
//     return 0;
// }




// 2. C++ program to calculate the average marks of two students by passing objects to functions(passing objects to functions)
// double mean(double a, double b){
//     double Average=(a+b)/2;
//     return Average;
// }

// int main(){
//     double a, b;
//     cout<<"Enter the marks of ID NO: 1 student marks: ";
//     cin>>a;
//     cout<<"Enter the marks of ID NO: 2 student marks: ";
//     cin>>b;

//     cout<<"The average marks of two students= "<<mean(a,b);
//     return 0;
// }








// 3. Define an abstract class Shape with a pure virtual method draw. Derive classes
// Circle and Square to implement the draw method

// class Shape{
//    public:
//       virtual void draw() const=0;

// };

// class Circle: public Shape{
//     public:
//       void draw() const override{
//         cout<<"This is Circle class"<<endl;
//       }

// };

// class Square: public Shape{
//     public:
//        void draw() const override{
//         cout<<"This is Square class "<<endl;
//     }
// };

// int main(){
//     Circle C;
//     Square S;

//     Shape* ptr;
//     ptr= &C;
//     ptr->draw();

//     ptr=&S;
//     ptr->draw();
//     return 0;
// }



// 4. Create two base classes Person and Employee. Derive a class Manager that inherits from both

class person{
    public:
      string name;
      int id;
};

class Employee{
    public:
       string department;
};

class Manager: public person, public Employee{
    public:
       string Manager_Name;

};

int main(){
    Manager M;
    M.name="Ram";
    M.id=100;
    M.department="Data Science";
    M.Manager_Name="Bandra";
    cout<<"Name: "<<M.name<<endl;
    cout<<"ID: "<<M.id<<endl;
    cout<<"Department: "<<M.department<<endl;
    cout<<"Manager Name: "<<M.Manager_Name<<endl;
    return 0;

}
   











