// write a program to sort nmaes of students 

#include <iostream>
#include <string>

using namespace std;  

int main(){
    string names[5];
    cout<<"Enter the names of 5 students: ";
    for(int i=0; i<5; i++){
        cin>>names[i];
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(names[i]>names[j]){
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    cout<<"The sorted names are: ";
    for(int i=0; i<5; i++){
        cout<<names[i]<<" ";
    }
    cout<<endl;
    return 0;
}


