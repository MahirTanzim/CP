#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	unsigned long long int answer = 0;
	int p = 0;
	while(n){
		int bit = n&1;
		answer += (pow(10, p)*(!bit));
		p++;
		n>>=1;
	}

	int comp_n = 0, i = 0;
	while(answer){
		int digit = answer%10;
		comp_n += digit*pow(2,i);
		i++;
		answer/=10;

	}
	cout << comp_n << endl;
}	