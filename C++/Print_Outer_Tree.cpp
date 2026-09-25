#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout<<"YES\n"
# define no cout<<"NO\n"

vector <int> v;
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

void outer_tree_left(Node* root){
    if(root == NULL)
        return;
    
    // Node* l, * r;

    if(root->left){
        outer_tree_left(root->left);
        v.push_back(root->val);
    } 
    else{
        outer_tree_left(root->right);
        v.push_back(root->val);
    }

}


void outer_tree_right(Node* root){
    if(root == NULL)
        return;
    
    // Node* l, * r;

    if(root->right){
        v.push_back(root->val);
        outer_tree_right(root->right);
    } 
    else{
        v.push_back(root->val);
        outer_tree_right(root->left);
    }
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Node* root = input_tree();

    outer_tree_left(root->left);
    v.push_back(root->val);
    outer_tree_right(root->right);
    
    for(auto it : v)
        cout << it << " ";
    cout << endl;
    return 0;
}