#include<iostream>
using namespace std;
int main()
{
    int n;cout<<"enter n";cin>>n;
    int newno=0;
    while(n>0){
        int lastdigit=n%10;
        newno=newno*10+lastdigit;
        n=n/10;
    }
    cout<<"newno is"<<newno;
    return 0;
}