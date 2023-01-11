#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << i - j + 1 << " ";
            j++;
        }
        cout << ""<< endl;
        i++;
    }
}
