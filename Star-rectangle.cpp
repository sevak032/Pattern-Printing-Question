#include<iostream>
using namespace std;
int main (){

int m; // m = rows
cout<<"Enter The Number Of Rows : ";
cin>>m;



int n; // m = column
cout<<"Enter The Number Of Column : ";
cin>>n;

for(int i = 1;  i<=m;  i++){
    for( int j = 1;  j<=n;  j++){
        cout<<"* "; // print any things
    }
    cout<<endl;
}

}