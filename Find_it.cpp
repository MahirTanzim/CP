#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

class Node {
    public:
        int val;
        Node* left;
        Node* right;

    Node (int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree(){
	int val;
	cin >> val;
	Node* root;
	if(val == -1) root = NULL;
	else root = new Node(val);

	queue <Node*> q;
	q.push(root);
	while(!q.empty()){

		
		Node* p = q.front();
		q.pop();

		
		int l, r;
		cin >> l >> r;
		Node* lft, * rgt;

		if(l == -1) lft = NULL;
		else lft = new Node(l);
		if(r == -1) rgt = NULL;
		else rgt = new Node(r);

		
		p->left = lft;
		p->right = rgt;


		if(p->left) q.push(p->left);
		if(p->right) q.push(p->right);
	}

	return root;
}

void find_leaf_node(Node* root, vector <int> &v){
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL)
		v.push_back(root->val);
	find_leaf_node(root->left, v);
	find_leaf_node(root->right, v);
	
}



void solution(){
    Node* root = input_tree();
    vector <int> v;
    find_leaf_node(root, v);
    vector <int> vv(100, 0);
    for(int i = 0; i < v.size(); i++)
        vv[v[i]]++;
    int mx = INT_MIN;
    int mx_leaf;
    for(int i = 0; i < vv.size(); i++){
        if(vv[i] > mx && vv[i] != 0){
            mx_leaf = i;
            mx = vv[i];
        }
            
    }
    cout << mx_leaf << endl;
    
    

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