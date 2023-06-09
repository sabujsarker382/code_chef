#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin >>n;
    int count1=0,count2=0;
    string element[n];
    for(int i=0;i<n;i++){
        cin>>element[i];
    }
    for(int i=0;i<n;i++){
        if(element[i] == "START38"){
            count1++;
        }
     else{
        count2++;
     }
    }
    cout<<count1<< " "<<count2<<endl;
}


}
