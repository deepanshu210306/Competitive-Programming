#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int countY=0;
        for(int i=0;i<n;i++){
            if(s[i]=='Y'){
                countY++;
            }
            if(countY>1){
                cout<<"No"<<endl;
                break;
            }
        }
        if(countY<=1){
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}