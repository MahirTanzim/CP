#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n+1, 0);

    int x, y;
    int a;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> a;
        v[a]++;
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> a;
        v[a]++;
    }
    bool guy = true;
    for(int i = 1; i < n+1; i++)
        if(v[i] == 0){
            guy = false;
            break;
        }

    guy? cout << "I become the guy."<< endl : cout << "Oh, my keyboard!" << endl;
    return 0;
}