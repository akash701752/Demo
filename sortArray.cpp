#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int> &v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
void solve(vector<int> &v){
    if(v.size()==0){
        return;
    }
    int temp = v[v.size()-1] ;
    v.pop_back();
    solve(v);
    insert(v,temp);
}
int main(){
    int n , i ;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    solve(v);
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}