#include<iostream>
using namespace std;
int main (){

    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<a++<<" ";
            
        }
        cout<<endl;
    }
} 