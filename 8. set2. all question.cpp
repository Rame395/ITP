// 1. Write a C++ program to find mean of 4 numbers using arrays.

#include <iostream>
using namespace std;

// int main(){
//     int total;
//     int mean[]={4,9,2,9};

//     int size=sizeof(mean)/sizeof(mean[0]);     //to find the n(size of an array)

//     for(int i=0;i<size;i++){
//         total+=mean[i];
//     }

//     int final_mean=total/size;
//     cout<<final_mean;
        
//     return 0;
// }






// 2. Create a C++ program to check if a given number is greater than 100 or less than 100.


// int main(){
//      int user;
//      cout<<"Enter the number: ";
//      cin>>user;

//      if(user<100){
//         cout<<"You enter number less than 100 bro!";
//      }
//      else if(user==100){
//         cout<<"You Enter exactly 100!";
//      }
//      else{
//         cout<<"You enter number greater than 100 bro!";
//      }
//     return 0;
// }





//3. Create a C++ program that checks whether a given integer is odd or even using ternary operator.

// int main(){
//     int number;

//     cout<<"Enter the number: ";
//     cin>>number;

//     string check=(number%2==0)?"even":"odd";

//     cout<<"The number you entered is: "<<check;
//     return 0;
// }




// 4. Implement a function in C++ that takes two parameters (integers) and returns 
// their maximum value. Write a program that uses this function to find and print the maximum of two integers.

// int maximum(int a,int b){
//     int largest;
//     if (a>b){
//         largest=a;
//     }
//     else{
//         largest=b;
//     }
//     return largest;
   
// }

// int main(){
//     int a, b;
//     cout<<"Enter first number: ";
//     cin>>a;

//     cout<<"Enter second number: ";
//     cin>>b;

//     int comparision=maximum(a,b);
//     cout<<"The maximum number between "<<a <<" and " <<b<< " is " << comparision;

    
//     return 0;
// }




// 5. Define a class Rectangle in C++ with private attributes for length and width.
// Implement public member functions to set the dimensions, calculate the area,
// and display the details of the rectangle. In the main program, create a rectangle
// objects, set their dimensions, and display their areas.


class Rectangle{
    private:
        double length;
        double width;
    public:
         void setdimension(int a, int b){
            length=a;
            width=b;
         }
         int getdimenstion(){
            return length, width;
         }

         int PerimenterOfRectangle(){
            return 2*(length+width);
         }

         int AreaOFRectangle(){
            return length*width;
         }

};


int main(){
    int a, b;
    cout<<"Enter the length of the rectangle: ";
    cin>>a;

    cout<<"Enter the width of the rectangle: ";
    cin>>b;

    Rectangle R1;
    R1.setdimension(a,b);
    
 
    cout<<"\t\t\t Detail of Rectangle "<<endl;
    cout<<"lenght(l): "<<a<<endl;
    cout<<"width(w): "<<b<<endl;
    cout<<"The perimenter of the rectangle 2(l+w): "<<R1.PerimenterOfRectangle()<<endl;
    cout<<"The area of the rectangle l*w: "<<R1.AreaOFRectangle()<<endl;
    
    return 0;
}