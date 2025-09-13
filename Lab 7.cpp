// COMSC-210 | Lab 7 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
using namespace std;
string* reverseArray(string* arr1,int size){
        for(int i=0;i<size;i++){
            *(arr2+i)=*(arr1+(size-1-i));

        }
        return arr2;
}

void displayArray(string* arr1,int size){

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
    *(Array1 + 0) ="Jayden";
    *(Array1 + 0) ="Daniel";
    *(Array1 + 0) ="Liz";
    *(Array1 + 0) ="Kiwi";
    reverseArray(Array1,size);
    displayArray(Array1,size);

    return 0;
}