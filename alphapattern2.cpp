#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    char ch = 'A';
    cout << "Enter the number : ";
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout<< ""<<endl;
        i++;
    }
    
}