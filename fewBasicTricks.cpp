#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 4;
    //binary representation in reverse order

    // while(num>0){
    //     cout<<num%2;
    //     num /= 2;
    // }


    //binary representation using right shift
    for(int i = 31;i>=0;i--){
        //cout<<((num>>i)&1);
    }

    //count set bits;
    int setBits = 0;
    for(int i = 31;i>=0;i--){
        if(((num>>i)&1)) setBits++;
    } 
    //cout<<"number of set bits are " << setBits;

    //check if ith bit is set or not

    // if((num>>3)&1) cout<<"bit is set";
    // else cout<<"bit is not set";

    //swap with xor
    //for ex a = 5 and b = 6
    //swap a and b
    int a = 5;
    int b = 6;
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}