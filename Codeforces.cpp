#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if(k == 1)
			cout << n << endl;
		else{
			int i = 0;
			while(n>0){ 
				if(k>n)
					break;
				int x = 1;
				while(pow(k,x)<=n)
					x++;
				n-=pow(k,x-1);
				i++;
			}
			cout << i+n << endl;
		}
	}
	return 0;
}