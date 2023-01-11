#include<iostream>
using namespace std;


int main(){
    int i = 1;
    //int num = 1;
    int n;
    cout << "Enter the number : ";
    cin>> n;
    while(i <= n){
        int space = i - 1;
        while(space){
            cout<<" "<< " ";
            space--;
        }
        int j = 1;
        int num = i;
        while(j <= n - i + 1){
            cout << num << " ";
            j++;
            num++;
        }
        cout<<endl;
        i++;
       
    }
}
