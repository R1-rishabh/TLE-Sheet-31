#include<bits/stdc++.h>
using namespace std;
//Halloumi Boxes
bool issorted(vector<int> &v, int n){
  for(int i=1;i<n;++i){
    if(v[i] < v[i-1]){ 
      return false ;
    }
  }
  return true ;
}

int main(){
  int t;
  cin>>t;
  
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    
    for(int i=0;i<n;++i){
      cin>>v[i];
    }

    if(issorted(v,n) || k>=2){
      cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    
  }
  return 0;
}