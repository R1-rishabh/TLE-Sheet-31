#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    int count=0;
    bool three= false;
    int ans=0;

    for(char ch : s){
       if(ch == '.'){
        count++;
        ans++;
       }else 
         count=0;
      if(count==3){
        three=true;
        break;
      }
  }
  if(three){
    cout<<2<<endl;
  }
  else cout<<ans<<endl;
  }
}
