#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    int count = 1;
    cout<< "enter the size :  ";
    cin >> n;
    while (i <= n){
        int j = 1;
        while(j <= n){
            cout << count << " ";
            j++;
            count++;
        }
        cout<< "" << endl;
        i++;
    }
}