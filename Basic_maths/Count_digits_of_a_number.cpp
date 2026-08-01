#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;

    int count=0; //to count number of digits
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        cout<<lastdigit<<" ";
        count++;
        n=n/10;
    }

    cout<<endl<<"Number of digits of the number are="<<count;
    return 0;
}