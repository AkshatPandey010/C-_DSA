#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout<< "Enter the number : ";
    cin>> n;
    char ch = 'A';
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;

        }
        cout << ""<< endl;
        i++;
    }
}