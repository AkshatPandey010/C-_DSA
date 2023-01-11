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
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << "" << endl;
        i++;
    }
}