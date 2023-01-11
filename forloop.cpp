#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the value of n : ";
    cin>> n;
    cout << "printing count from 1 to n "<< endl;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
        //cout<<i<<endl;
    }
    cout << sum << endl;
    
}