#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char c[n];
		bool a[n];
		for(int i = 0; i < n; i++){
			cin >> c[i];
			if(c[i] == '1')
				a[i] = 1;
			else
				a[i] = 0;
		}
		bool b[n/2];
		for(int i = 0; i < n/2; i++)
			b[i] = 0;
		if(n%2==0){
			for(int i = 1, j = 0; i < n-2; i+=2, j++)
				b[i] = a[i]&a[i+1];
			bool s = a[0]|a[n-1];
			for(int i = 0; i < n/2; i++)
				s = s|b[i];
			if(s)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else{
			for(int i = 1, j = 0; i < n-1; i+=2, j++)
				b[i] = a[i]&a[i+1];
			bool s = a[0];
			for(int i = 0; i < n/2; i++)
				s = s|b[i];
			if(s)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		
	}
	return 0;
}
