#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int coun=0;


  for(j=0;j<n;j++}
   for(i=j;i<n;i++){
    if(a[j]*a[i+1]==b[j]+b[i+1]){
       coun++;
    }

   }
  }


   cout<<coun<<endl;

    }

}
