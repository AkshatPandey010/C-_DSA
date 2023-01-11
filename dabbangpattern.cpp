#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout<< "Enter the number : ";
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n - i + 1){
            cout << j << " ";
            j++;
        }
        int k = n - i + 1;
        while(k < n){
            cout<<"*"<< " ";
            k++;
        }
        int l = n - i + 1;
        while(l < n){
            cout<<"*"<< " ";
            l++;
        }
        int m = n - i + 1;
        while(m >= 1){
            cout << m << " ";
            m--;
        }
        cout<< endl;
        i++;
    }
}
