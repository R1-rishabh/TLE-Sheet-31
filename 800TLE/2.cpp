#include<bits/stdc++.h>
using namespace std;
 // Line Trip
int main(){
  int t;
  cin>>t;
   while(t--){
       int n,x;
       cin>>n>>x;

       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }

       int ans=0;
       int last=0;

       for(int i=0;i<n;i++){
        ans = max(ans,arr[i]-last);
        last=arr[i];
       }

       ans=max(ans,2*(x-arr[n-1]));
       cout<<ans<<endl;
   }
}