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

void level_node_count(Node* root, int lvl){
    queue <Node*> q;
    q.push(root);
    int cl = 0;
    while(!q.empty()){
        int qsz = q.size();
        if(cl == lvl){
            for(int i = 0; i < qsz; i++){
                Node *f = q.front();
                q.pop();
                cout << f->val << " ";
            }
            cout << endl;
            return;
        }
        for(int i = 0; i < qsz; i++){
            Node* f = q.front();
            q.pop();
            if(f->left != NULL)
                q.push(f->left);
            if(f->right != NULL)
                q.push(f->right);
        
        }
        cl++;
    }
    cout << "Invalid" << endl;

}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Node* root = input_tree();
    int lvl;
    cin >> lvl;
    level_node_count(root, lvl);
    return 0;
}