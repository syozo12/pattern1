#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rouws";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0) cout<<j;
            else cout<<char(64+j);

        }
        cout<<endl;
    }
    return 0;
}