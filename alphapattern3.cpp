#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout << "enter the number : ";
    cin>> n;
    char ch = 'A';
    while(i <= n){
        int j = 1;
        char ch1 = ch;
        while(j <= n){
            cout << ch1 << " ";
            ch1++;
            j++;

        }
        cout << ""<< endl;
        i++;
        ch++;
    }
}
