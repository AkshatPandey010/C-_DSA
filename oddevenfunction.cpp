#include<iostream>
using namespace std;

bool isEvenOddd(int a){
    if(a & 1){
        return 0;
    }
        return 1;
}

int main(){
    int num;
    cin >> num;

    bool ans = isEvenOddd(num);

    if(ans){
        cout<< "Even number"<<endl;
    }

    else{
        cout<<"Odd number"<<endl;
    }


}