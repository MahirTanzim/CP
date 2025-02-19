#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


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


int count_node(Node* root){
	if(root == NULL)
		return 0;
	int l = count_node(root->left);
	int r = count_node(root->right);
	return l+r+1;

}

int max_depth(Node* root){
	if(root == NULL)
		return 0;
	if(root->left == NULL && root->right == NULL)
		return 0;
	int l = max_depth(root->left);
	int r = max_depth(root->right);
	return max(l,r)+1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Node* root = input_tree();

    int mx_depth = max_depth(root)+1;
    int cnt_node = count_node(root);

    cnt_node == pow(2,mx_depth) - 1 ? yes : no;

    return 0;
}