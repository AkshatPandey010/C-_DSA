#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 2;
    int count = 0;
    // int sum = 0;
    while (i < n)
    {
        //cout<< i << " ";
        // for calculating sum of n numbers ;
        //sum += i;
        // for calculating sum of even numbers till N;
        /*if(i % 2 == 0){
            sum += i;
        }*/
        /*
        for calculating celcius to fahreheit .
        float num = (i * 9.0 / 5) + 32; 
        cout <<i << "℃ in fahrenheit is = " << num << endl;
        
        */

       // for checking prime or not.
       // Loop before n if any of the number is dividing it then it is not prime !.
       
        if( n % i == 0){
            count += 1;
        }
        i = i + 1;
    }
    if(count <= 1){
            cout<< "It is prime number ";
        }
    else{
        cout<< "Not Prime ! ";
    }

    // cout << sum;
    
}