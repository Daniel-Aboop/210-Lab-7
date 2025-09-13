// COMSC-210 | Lab 7 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
using namespace std;
string* reverseArray(string* arr1,string* arr2,int size){
        for(int i=0;i<size;i++){
            
        }


}


int main(){
    const int size=5;
    string* Array1 = new string[size];
    string* Array2 = new string[size];
    *(Array1 + 0) ="Steven";
    *(Array1 + 0) ="Jayden";
    *(Array1 + 0) ="Daniel";
    *(Array1 + 0) ="Liz";
    *(Array1 + 0) ="Kiwi";
    reverseArray(Array1,Array2,size);

    return 0;
}