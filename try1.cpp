/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    int n, k ;
    int f;
    cin>>n>>k>>f;
    vector<  pair<int , int > > v;
    int a, b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a ,b));
    }
    set<int> st;
    for(int i=0;i<n;i++)
    {
        for(int i=v[i].first;i<v[i].second;i++){
            st.insert(i);
        }
    }
    int q = st.size();
    if( f-q > k ){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    // map <int , int > mp;
    // for(int i=0;i<n;i++){
    //     for(int i=v[i].first;i<v[i].second;i++){
    //         mp[i]++;
    //     }
    // }
    // int flag = 0;
    // // for(int i=0;i<f;i++){
    // //     if(mp[i] == 0){
    // //         flag++;
    // //     }
    // // }
    // if(flag > k){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"no"<<endl;
    // }
}
  
int main()
{
  
     //fast_io;
  
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}