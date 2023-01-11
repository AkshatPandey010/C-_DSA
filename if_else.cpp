#include<iostream>
using namespace std;

int main(){
    cout<< "Working fine till now !"<< endl;
    /*int a, b;
    cout<< "enter the integers to Check  : "<<endl;
    cin >> a >> b;
    if(a > b){
        cout<< a << "is greater than  " << b << endl;
    }
    else if(a == b){
        cout<< "Both are equal !" << endl;
    }
    else{
        cout<< b << " is greater than "<< a << endl;
    }
    cout << "ended !!"<< endl;*/
    /*int a = 24;
    if(a > 20){
        cout<< "1st one";
    }
    else if (a == 24){
        cout<< '2nd one';

    }
    else{
        cout << "3rd One";
    }*/
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    if(ch <= 57){
        cout << "Number";
    }
    else if(ch <= 90){
        cout << "Capital letter !";
    }
    else if (ch >= 97){
        cout << "Small Letter !";
    }    
    return 0;
}