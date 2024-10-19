#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	bool no_lucky = true;
	for(int i = a; i <= b; i++){
		bool lucky = true;
		while(i>0){
			int x = i%10;
			i/=10;
			if(x!=4 || x!=7){
				lucky = false;
				break;
			}
		}
		if(lucky == true){
			no_lucky = false;
			cout << i << " ";
		}
	}
	if(no_lucky == true)
		cout << "-1" << endl;

	return 0;
}