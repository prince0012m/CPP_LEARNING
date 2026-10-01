#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n/2;i++)
{
    if(n%i==0)
{
     isprime=false;
     break;
}
}
if(isprime==true)
{
    cout<<n<<" is a prime number";
}
else
{
    cout<<n<<" is not a prime number";



}
}