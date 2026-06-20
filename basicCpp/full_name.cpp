#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"May I know your name?";
    getline(cin,name); // This will read the full name including spaces
    cout<<"Hello "<<name;
    return 0;
    
}