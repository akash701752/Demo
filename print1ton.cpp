#include<iostream>
#include<vector>
using namespace std;
void solve(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    solve(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}