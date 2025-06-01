#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int n;
    cin >> n;
    int candy;
    int one = 0, two =0;
    while(n--){
        cin >> candy;
        candy == 1 ? one++ : two++;
    }
    if(one%2!=0) no;
    else if(two%2==0) yes;
    else if(one==0) no;
    else yes;
        
    
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