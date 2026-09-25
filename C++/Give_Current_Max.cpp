#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


class Students{
	public:
		string name;
		int roll;
		int marks;

		Students(string name, int roll, int marks){
			this->name = name;
			this->roll = roll;
			this->marks = marks;
		}	
};

class cmp{
	public:
		bool operator()(Students l, Students r){
			if(l.marks < r.marks)				// Unlike normal custom compare function
				return true;					// for decending order we have to use left < right
			else if(l.marks > r.marks)			// nd for ascending order we use left > right
				return false;
			else
				if(l.roll > r.roll)
					return true;
				else
					return false;
		}	
};

void solution(){
    int n;
    cin >> n;
    priority_queue <Students, vector<Students>, cmp> pq;
    while(n--){
    	string name;
		int roll, marks;
		cin >> name >> roll >> marks;
		Students obj(name, roll, marks);
		pq.push(obj);
    }

    int Q;
    cin >> Q;
    while(Q--){
        int q; cin >> q;

        if(q == 0){
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Students obj(name, roll, marks);
            pq.push(obj);
        }
        if(q == 2 && pq.empty())
            pq.pop();

        pq.empty() ? cout << "Empty" << endl : cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }


}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}