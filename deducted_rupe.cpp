#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>100){
            cout<<n-10<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }

    return 0;
}
