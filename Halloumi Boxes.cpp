#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
  int t;
  cin>>t;
  while(t--){
             
    ll n, k,x;
    cin>>n>>k;
    
    ll arr[n],correctPos[n];
    
    set<ll>st;
    
    for(int i=0;i<n;i++)
    {
       cin>>x;
       
       arr[i]=x;
       correctPos[i]=x;
       
    }
     
    sort(correctPos,correctPos+n); // sorting the array to compare with original array
    
    bool flag = true;
    
    // To check wheather array is sorted or not
    for(int i=0;i<n;i++){
       if(arr[i]!=correctPos[i]){
            flag = false;
            break;
       }
    }
    
    if(k==1){
       if(flag){
            cout<<"YES"<<endl;
       }
       else
       {
            cout<<"NO"<<endl;
       }
       
    }
    else
    {
            cout<<"YES"<<endl;
    }
  }
  return 0;
}
