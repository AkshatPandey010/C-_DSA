#include<iostream>
using namespace std;

int main(){
    int count = 1;
    int i = 1;
    int n;
    cout<< "Enter the number : ";
    cin>> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout<< count << " ";
            j++;
            count++;

        }
        cout << "" << endl;
        i++;
    }
    
}