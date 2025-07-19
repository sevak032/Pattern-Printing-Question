#include<iostream>
using namespace std;
int main (){

int m; // m = rows
cout<<"Enter The Number Of Rows : ";
cin>>m;



for(int i = 1;  i<=m;  i++){
    for( int j = 1;  j<=i;  j++){ // (j<=i) condition ,,jab i jis line pe hoga utna j print hoga
        cout<<"* "; // print any things
    }
    cout<<endl;
}

}