#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    int total_digit = log10(n)+1;
    int first_digit = n/pow(10,floor(log10(n)));
    int ex_round = 9*(total_digit-1)+first_digit;
    // int ex_round = 9*(floor(log10(n)))+n/pow(10,floor(log10(n)));
    cout << ex_round << endl;
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