#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rouws";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int m=n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}