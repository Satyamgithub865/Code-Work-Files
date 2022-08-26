#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    int freq;
    Node *left, *right;
    Node(char c, int f)
    {
        data = c;
        freq = f;
        left = NULL;
        right = NULL;
    }
};

void print(Node *root, string str)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data != '$')
    {
        cout << root->data << " " << str << endl;
        return;
    }

    print(root->left, str + "0");
    print(root->right, str + "1");
}

class mycmp
{
public:
    bool operator()(Node *l, Node *r)
    {
        return l->freq > r->freq;
    }
};

int main()
{
    int n = 5;
    char ch[n] = {'a', 'd', 'b', 'e', 'f'};
    int freq[n] = {10, 50, 20, 40, 80};
    priority_queue<Node *, vector<Node *>, mycmp> pq;
    for (int i = 0; i < n; i++)
    {
        Node *curr = new Node(ch[i], freq[i]);
        pq.push(curr);
    }
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        Node *curr = new Node('$', left->freq + right->freq);
        curr->left = left;
        curr->right = right;
        pq.push(curr);
    }

    Node *root = pq.top();
    cout << root->data << " " << root->freq<<endl;
    print(root, "");

    return 0;
}