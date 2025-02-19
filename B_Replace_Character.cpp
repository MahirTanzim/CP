#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector <int> v(26,0);
        for(int i = 0; i < n; i++)
            v[s[i]-'a']++;

        int mx = INT_MIN;
        int mn = INT_MAX;
        char c1, c2;
        for(int i = 0; i < 26; i++){
            if(v[i] >= mx){
                mx = v[i];
                c1 = char(i + 'a');
            }
                
            if(v[i] < mn && v[i] != 0){
                mn = v[i];
                c2 = char(i + 'a');
                
            }
                
        }
        for(int i = 0; i < n; i++){
            if(s[i] == c2){
                s[i] = c1;
                break;
            }                   
        }
        cout << s << endl; 
    }
    return 0;
}