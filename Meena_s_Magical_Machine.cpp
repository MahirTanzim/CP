#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

stack <ll> st;
ll sum = 0;
void solution(){
    int q;
    cin >> q;
    if(q == 1)
        cout << sum << endl;
    else if(q == 2){
        ll x;
        cin >> x;
        st.push(x);
        sum+=st.top();
    }
    else if(q == 3){
        if(!st.empty()){
            sum-=st.top();
            st.pop();
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}