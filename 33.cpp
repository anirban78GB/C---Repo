// write a program to insert a string in the main text

#include <iostream>
#include <string>
using namespace std;

int main(){
    string main_text, sub_text;
    int pos;
    cout<<"Enter the main text: ";
    getline(cin, main_text);
    cout<<"Enter the sub text: ";
    getline(cin, sub_text);
    cout<<"Enter the position where you want to insert the sub text: ";
    cin>>pos;
    main_text.insert(pos, sub_text);
    cout<<"The new text is: "<<main_text<<endl;
    return 0;
}