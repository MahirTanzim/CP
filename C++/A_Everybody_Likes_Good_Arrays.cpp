#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(), x.end()

void solution()
{
    int n;
    cin >> n;
    vector<bool> v;
    for (int i = 0; i < n; i++){
        ll num;
        cin >> num;
        num % 2 == 0 ? v.push_back(true) : v.push_back(false);
    }
    stack<bool> st;
    for (bool b : v)
        if(st.empty() || st.top()!= b)
            st.push(b);
    
    cout << n-st.size() << endl;
}

void solution2(){
    int n; cin >> n;
    vector <bool> v;
    for(int i = 0; i < n; i++){
        ll nn; cin >> nn;
        nn%2==0 ? v.push_back(true) : v.push_back(false);
    }
    int cnt = 1;
    for(int i = 1; i < n; i++)
        if(v[i] != v[i-1]) cnt++;

    cout << n-cnt << endl;
    
}

int main()
{
    bijli();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // solution();
        solution2();
    }
    return 0;
}