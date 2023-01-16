#include<iostream>
using namespace std;

int countSetBits(int num){
    int count = 0;
    while(num != 0){
        int temp = num & 1;
        if(temp == 1){
            count++;
        }
        num = num >> 1;

    }
    return count;
}


int main(){
    int m, n;
    cout<<"Enter the numbers : "<<endl;
    cin >> m >> n;
    int res = countSetBits(m) + countSetBits(n);
    cout << "Number of set bits in the number are : "<< res<< endl;
    


}