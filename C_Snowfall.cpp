#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <ll> v(n), six, two, three;
    deque<ll>others;
    for(ll &it : v)
        cin >> it;

    for(ll it : v){
        if(it%6==0) six.push_back(it);
        else if(it%3==0) three.push_back(it);
        else if(it%2==0) two.push_back(it);
        else others.push_back(it);
    }
    for(ll it : two) others.push_front(it);
    for(ll it : three) others.push_back(it);
    for(ll it: six) others.push_front(it);
    
    for(ll it : others) cout << it << " ";
    cout << endl;
}


int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}