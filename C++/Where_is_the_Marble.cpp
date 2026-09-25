#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

void solve(int n, int q, int Case){
    
    vector <int> vn, vq;
    int val;
    while(n--){
        cin >> val;
        vn.push_back(val);
    }
    while(q--){
        cin >> val;
        vq.push_back(val);
    }
    sort(vn.begin(), vn.end());
    cout << "CASE# " << Case << ":" << endl;
    for(int i = 0; i < vq.size(); i++){
        bool is_found = false;
        int index;
        for(int j = 0; j < vn.size(); j++){
            if(vn[j] == vq[i]){
                is_found = true;
                index = j+1;
                break;
            }
        }
        if(is_found)
            cout << vq[i] << " found at " << index << endl;
        else   
            cout << vq[i] << " not found" << endl;
    }
    


}

int main()
{
    int n, q, Case = 1;
    while(cin >> n >> q && (n != 0 && q != 0)){
        solve(n, q, Case);
        Case++;
    }
    
    
    return 0;
}