#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n:";
    cin>>n;

    int nfact=1;
    for(int i=n;i>1;i--){
    nfact*=i;

    }

    cout<<nfact;
   
    return 0;

}