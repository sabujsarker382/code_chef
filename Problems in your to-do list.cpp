#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cou=0;
        for(int i=0;i<n;i++){
            if(arr[i]>999){
                cou++;
            }
        }
        cout<<cou<<endl;

    }


    return 0;
}
