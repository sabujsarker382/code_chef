#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        m=n%3;
        if(m==2){
            cout<<"1"<<endl;
        }
        else if(m==1){
            cout<<"2"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }

}
