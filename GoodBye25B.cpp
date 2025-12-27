#include <iostream>
using namespace std;
int check(string &s,int i,int n){
    int j=i-1;
    int k=i+1;
    while(j>=0 && k<n){
        if(s[j]=='s' && s[k]=='s'){
            return 0;
        }
        else if(s[j]=='u' && s[k]=='u'){
            j--;
            k++;
        }
        else{
            s[j]='s';
            s[k]='s';
            return 1;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int count=0;
        int n=s.length();
        if(s[0]=='u'){
            count++;
            s[0]='s';
        }
        if(s[n-1]=='u'){
            count++;
            s[n-1]='s';
        }
        for(int i=1;i<n-1;i++){
            if(s[i]=='u'){
                count+=check(s,i,n);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}