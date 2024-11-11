// write a program to compare two strings

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter the first string: ";
    getline(cin, str1);
    cout<<"Enter the second string: ";
    getline(cin, str2);
    if(str1 == str2){
        cout<<"The strings are equal";
    }
    else{
        cout<<"The strings are not equal";
    }
    return 0;
}