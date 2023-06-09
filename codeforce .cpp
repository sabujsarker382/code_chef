#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,x=-1;
        cin>>n>>m;
       for( int i=0;i<=n;i++){
        if((i-1)*i/2 + (n-i-1)*(n-i)/2==m){
           x=i;

        }

       }
       if(x == -1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(i<x){
                cout<<1<<' ';
            }
            else{
                cout<<-1<<' ';
            }
        }
        cout<<endl;
       }

    }

}
