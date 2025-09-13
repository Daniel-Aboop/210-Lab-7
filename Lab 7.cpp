// COMSC-210 | Lab 7 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
using namespace std;
//reverseArray() takes a pointer to a string array and the const size of the array
// returns a pointer to a new array which is arr2
string* reverseArray(string* arr1,int size){
        string* arr2 = new string[size];
        for(int i=0;i<size;i++){
            *(arr2+i)=*(arr1+(size-1-i));
        }
        return arr2;
        delete[] arr2;
}
//displayArray() takes a pointer to a string array both arr1 and arr2 and then the const size of the array
// cout both array's to terminal
void displayArray(string* arr1,string* arr2,int size){
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        cout<<*(arr1 + i)<<" ";
    }
    cout<<endl;
    cout<<"ReversedArray: ";
    for(int i=0;i<size;i++){
        cout<<*(arr2 + i)<<" ";
    }
    cout<<endl;
}

int main(){
    const int size=5;
    string* Array1 = new string[size];
    *(Array1 + 0) ="Steven";
    *(Array1 + 1) ="Jayden";
    *(Array1 + 2) ="Daniel";
    *(Array1 + 3) ="Liz";
    *(Array1 + 4) ="Kiwi";
    string* Array2 =reverseArray(Array1,size);
    displayArray(Array1,Array2,size);
    delete[] Array1;
    delete[] Array2;
    return 0;
}