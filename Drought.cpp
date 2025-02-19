// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved
// Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved Unsolved

// https://judge.beecrowd.com/en/problems/view/1023






#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

class Property{
    public:
        int x;
        int y;
        int z;
};

bool cmp(Property a, Property b){
   return a.z < b.z || (a.z == b.z && a.x < b.x);
};
void solve(int n, int t){
    vector <Property> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i].x >> p[i].y;
        p[i].z = p[i].y/p[i].x;
    }
    
    sort(p.begin(), p.end(), cmp);

    if(t > 1)
        cout << endl;
    
    cout << "Cidade# " << t << ":" << endl;

    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1+=p[i].x;
        sum2+=p[i].y;
    }

    for(int i = 0; i < n; i++)
        cout << p[i].x << "-" << p[i].z << " ";
    cout << endl;
    double avg = (1.0 * sum2) / sum1;
    avg = floor(avg * 100)/100;
    cout << fixed << setprecision(2) << "Consumo medio: " << avg << " m3." << endl;
}


int main()
{
    int n, t = 1;
    while(cin >> n && n != 0){
        solve(n, t);
        t++;
    }
    return 0;
}