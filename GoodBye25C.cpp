#include <iostream>
#include <vector>
using namespace std;
long long solve(vector<int>&a,int n,int i,int j){
    if(i>=n || j>=n){
        return 0;
    }
    return max(a[i]+solve(a,n,j,j+1),solve(a,n,i,j+1)-a[j]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long X=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        X=solve(a,n,0,1);
        cout<<X<<endl;
    }
    return 0;
}