#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<< "Enter the value of a : ";
    cin>> a;
    cout<< "Enter the value of b : ";
    cin>> b;

    char op;
    cout<< "Enter the opertaion you want to perform : ";
    cin>> op;

    switch (op)
    {
    case '+':
        cout<<"result is "<< a+b <<endl;
        break;
    case '-':
        cout<<"result is "<< a-b<<endl;
        break;
    case '*':
        cout<<"result is "<<a*b<<endl;
        break;
    case '/':
        cout<<"result is "<< a/b<<endl;
        break;
    case '%':
        cout<<"result is "<<a%b<<endl;
        break;


    default:
        cout<< "please enter the valid operation !!!"<< endl;

        break;
    }
    
}