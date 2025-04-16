
// 1. Create a C++ program to show the use of % operator.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;


//     int reminder=(456%num);
//     cout<<"The reminder of 456 is "<<reminder;
//     return 0;
// }


// 2. Write a C++ program to find the maximum number in an array where the user enters values into the array

// int main(){
//     int size=4;
//     int max[size];

//     for(int i=0;i<size;i++){
//         cout<<"Enter the element to store inside the array "<<"["<<i<<"]: ";
//         cin>>max[i];
//     }

//     for(int i=0;i<size;i++){
//         cout<<max[i]<<" ";
//     }
//     cout<<endl;

//     int MAX_Number=INT_MIN;
//     int MIN_Number=INT_MAX;

//     for(int i=0;i<size;i++){
//         if(max[i]>MAX_Number){
//             MAX_Number=max[i];
//         }
//         if(max[i]<MIN_Number){
//             MIN_Number=max[i];
//         }
//     }
//     cout<<"Maximum Number= " <<MAX_Number<<endl;
//     cout<<"Minumm Number= " <<MIN_Number<<endl;
//     return 0;
// }



// 3. Write a C++ program that initializes an array of integers and prints the sum of all the elements in the array.

// int main(){
//     int size=6;
//     int sum=0;
//     int arr[size]={5,8,2,8,9,4};

//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }

//     cout<<"The total sum of element in the array="<<sum;

//     return 0;
// }




// Create a class Book with a constructor to initialize attributes title and author.
// Include a destructor that displays a message when the object is destroyed.

// class Book{
//     private:
//         string title;
//         string author;

//     public:
//         Book(string title, string author){
//             this->title=title;
//             this->author=author;
//             cout<<"Book: "<<title <<" by " <<"author "<<author <<" is created"<<endl;
//         }
        
//         ~Book(){
//             cout<<"Book: "<<title <<" by " <<"author "<<author <<" is destoryed"<<endl;
//         }

//         void Display(){
//             cout<<"Book title: "<<title<<" , "<<"author "<<author<<endl;
//         }
// };
         


// int main(){
//     string tit, aut;
//     cout<<"Enter the title of any random book: ";
//     cin>>tit;
//     cout<<"Enter the author of that of book: ";
//     cin>>aut;

//     Book B1(tit,aut);
//     B1.Display();
//     return 0;
// }




// 5. Write a program to create a file named output.txt and write the text "Hello, World!" into it.

// int main(){
//     fstream my_file;
//     my_file.open("output.txt",ios::out);
//     if(!my_file){
//         cout<<"File not created! ";
//     }

//     else{
//         cout<<"File created successfully!";
//         my_file<<"Hello, World";
//         my_file.close();
//     }
//     return 0;
    
// }
