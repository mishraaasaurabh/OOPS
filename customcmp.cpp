#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
#define int long long
    bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0]){
            return a[0]<b[0];
        }
        else{
            return a[1]>b[1];
        }
    }
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>>v={{1,1},{1,4},{5,0},{3,4},{5,2},{1,-1}};
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        cout<<it[0]<<" "<<it[1];
        cout<<endl;
    }
    
    
    
}