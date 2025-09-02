#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

int Mex(vector <int> arr){
    int mex = 0;
    sort(all(arr));
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == mex) mex++;
        else if(arr[i]>mex) break;
    }
    return mex;
    
}
void sln0(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &it : v) cin >> it;
    for(int i = 0; i < n-2; i++){
        if(v[i] != -1 && v[i+1]!= -1 && v[i+2]!= -1){
            int mex = Mex({v[i], v[i+1], v[i+2]});
            int mx = max({v[i], v[i+1], v[i+2]});
            int mn = min({v[i], v[i+1], v[i+2]});
            if(mex != mx - mn){
                cout << "NO" << endl;
                return;
            }
        }
        else{
            vector <int> trio = {v[i], v[i+1], v[i+2]};
            sort(all(trio));
            int cntminus1 = count(all(trio), -1);
            if(cntminus1==1){
                if(trio[1]==trio[2] && trio[1] != 0){
                    cout << "YES" << endl;
                    return;
                }
                else{
                    cout << "NO" << endl;
                    return;
                }
            }
            else if(cntminus1 == 2){
                if(trio[2]==0){
                    cout << "YES" << endl;
                    return;
                }
                else{
                    cout << "NO" << endl;
                    return;
                }
            }
            else{
                cout << "YES" << endl;
                    return;
            }
        }
    }
}

void sln1(){

   return;
}

int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        sln0();
        // sln1();
    }
    return 0;
}