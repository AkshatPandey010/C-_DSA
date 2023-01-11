#include<iostream>
using namespace std;

int main(){
    int amount, remaining, notes;
    cout << "Enter the amount : ";
    cin >> amount;
    remaining = amount;
    for(int i = 1; i<= 4; i++){
        switch(i){
            case 1:
                notes = remaining / 100;
                cout << "Number of 100Rs. notes are : "<< notes<< endl;
                remaining = remaining % 100;
                break;
            case 2:
                notes = remaining / 50;
                cout<< "Number of 50Rs. notes are : "<< notes << endl;
                remaining = remaining % 50;
                break;
            case 3:
                notes = remaining / 20;
                cout << "Number of 20Rs. notes are : "<< notes<< endl;
                remaining = remaining % 20;
                break;
            case 4:
                notes = remaining / 1;
                cout<< "Number of 1Rs. notes are : "<< notes << endl;
                remaining = remaining % 1;
                break;
        }
    }

}