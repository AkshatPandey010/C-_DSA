#include<iostream>
using namespace std;


int main(){
    int i = 1;
    int n;
    cout << "Enter the number : ";
    cin>> n;
    char ch = 'A' + n - 1;
    while(i <= n){
        int j = 1;
        char ch1 = ch;
        while(j <= i){
            cout<< ch1 << " ";
            ch1++;
            j++;
        }
        cout<< ""<< endl;
        i++;
        ch--;
    }

}