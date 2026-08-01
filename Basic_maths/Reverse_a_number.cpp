#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number=";
    cin>>num;

    int last_digit;
    int rev=0;
    while(num>0){
        last_digit=num%10;
        rev=rev*10 + last_digit;
        num=num/10;
    }

    cout<<endl<<"Reverse num is="<<rev;
    return 0;
}