#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 10;
    //set ith bit
    cout<<"before setting bit ";
    for(int i =5;i>=0;i--){
        cout<<((num>>i)&1);
    }
    //setting 2nd bit
    num = num | (1<<2);
    cout<<"\nafter setting bit ";
    for(int i =5;i>=0;i--){
        cout<<((num>>i)&1);
    }

    //toggle bit
    cout<<"\nafter toggling bit ";
    for(int i =5;i>=0;i--){
        cout<<(not((num>>i)&1));
    }
    return 0;
}