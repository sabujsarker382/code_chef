#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false)
    cin.tie(nullptr)
   

    int t;
    cin>>t;
 
    while(t--){
        int x=0,y=0,count=0;
        int  n;
        cin >>n;
    //     string s;
    //    cin>>s;
        char s[n+10];
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        bool ok = false ;
         for(int i=0;i<n;i++){
           if(s[i]=='U'){
            y++;
           }
           else if(s[i]=='D'){
            y--;
           }
            else if(s[i]=='L'){
            x--;
           }
            else if(s[i]=='R'){
            x++;
           }
            if(x==1 && y==1){
                ok = true;
                break;
            }
        }
        if(!ok){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
 
    }
 
}