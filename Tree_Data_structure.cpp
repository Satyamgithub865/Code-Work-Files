#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
public:
    // Depth first traversal
    // 1.> Inorder Traversal
    // Recursive
    void Inorder(Node *root)
    {
        if (root != NULL)
        {
            Inorder(root->left);
            cout << root->key << " ";
            Inorder(root->right);
        }
    }

    // Iterative
    void Iinorder(Node *root)
    {
        if (root == NULL)
            return;

        stack<Node *> s;
        Node *curr = root;
        while (curr != NULL || s.empty() == false)
        {
            while (curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cout << curr->key << " ";
            curr = curr->right;
        }
    }

    // 2.> Preorder Traversal
    // Recursive
    void Preorder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->key << " ";
            Preorder(root->left);
            Preorder(root->right);
        }
    }

    // Iterative
    void Ipreorder(Node *root)
    {
        if (root == NULL)
            return;

        stack<Node *> s;
        s.push(root);
        while (s.empty() == false)
        {
            Node *curr = s.top();
            s.pop();
            cout << curr->key << " ";
            if (curr->right != NULL)
                s.push(curr->right);
            if (curr->left != NULL)
                s.push(curr->left);
        }
    }

    // 3.> Postorder Traversal
    void Postorder(Node *root)
    {
        if (root != NULL)
        {
            Postorder(root->left);
            Postorder(root->right);
            cout << root->key << " ";
        }
    }

    // Breath First Traversal
    // 1.> Level order traversal
    void Level_Order(Node *root)
    {
        if (root == NULL)
            return;
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }

    // 2.> Line By Line Traversal
    void Line_By_Line(Node *root)
    {
        if (root == NULL)
            return;
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                Node *curr = q.front();
                q.pop();
                cout << curr->key << " ";
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
            cout << endl;
        }
    }

    // Height of a Binary Tree
    int Height(Node *root)
    {
        if (root == NULL)
            return 0;

        int lh = Height(root->left);  // left height
        int rh = Height(root->right); // right height

        return 1 + max(lh, rh); // root + maximum of left and right height
    }

    // Count of Nodes in binary tree
    int Count_Nodes(Node *root)
    {
        if (root == NULL)
            return 0;

        int ln = Count_Nodes(root->left);  // count of left nodes
        int rn = Count_Nodes(root->right); // count of right nodes

        return 1 + ln + rn; // root + count of left nodes + count of right nodes
    }

    // Left view of Binary tree
    // method 1...
    void Left_View(Node *root)
    {
        if (root == NULL)
            return;

        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                Node *curr = q.front();
                q.pop();
                if (i == 0)
                    cout << curr->key;
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
            cout << endl;
        }
    }

    // method 2...
    void leftView(Node *root, int level, int *maxlevel)
    {
        if (root == NULL)
            return;

        if (*maxlevel < level)
        {
            cout << root->key << " ";
            *maxlevel = level;
        }

        leftView(root->left, level + 1, maxlevel);
        leftView(root->right, level + 1, maxlevel);
    }

    // method 3
    void LeftView(Node *root, int level, vector<int> &ans)
    {
        if (root == NULL)
            return;

        if (level == ans.size())
            ans.push_back(root->key);
        LeftView(root->left, level + 1, ans);
        LeftView(root->right, level + 1, ans);
    }

    // MaxValue element in the tree
    int maxValue(Node *root)
    {
        if (root == NULL)
            return INT_MIN;

        int leftMax = maxValue(root->left);
        int rightMax = maxValue(root->right);

        return max({root->key, leftMax, rightMax});
    }

    // Diameter of the binary tree
    // method 1...
    int Diameter(Node *root)
    {
        if (root == NULL)
            return 0;

        int d1 = 1 + Height(root->left) + Height(root->right);
        int d2 = Diameter(root->left);
        int d3 = Diameter(root->right);

        return max({d1, d2, d3});
    }

    // method 2...
    int Height(Node *root, int *dia)
    {
        if (root == NULL)
            return 0;

        int lh = Height(root->left);  // left height
        int rh = Height(root->right); // right height

        *dia = max(*dia, lh + rh + 1); // Updating the diameter for each node here

        return 1 + max(lh, rh); // root + maximum of left and right height
    }

    // Printing nodes in spiral form
    void Spiral(Node *root)
    {
        if (root == NULL)
            return;

        stack<Node *> s1;
        stack<Node *> s2;
        s1.push(root);
        while (s1.empty() == false || s2.empty() == false)
        {
            while (s1.empty() == false)
            {
                Node *curr = s1.top();
                s1.pop();
                cout << curr->key << " ";
                if (curr->left != NULL)
                    s2.push(curr->left);
                if (curr->right != NULL)
                    s2.push(curr->right);
            }
            while (s2.empty() == false)
            {
                Node *curr = s2.top();
                s2.pop();
                cout << curr->key << " ";
                if (curr->right != NULL)
                    s1.push(curr->right);
                if (curr->left != NULL)
                    s1.push(curr->left);
            }
        }
    }
};

int main()
{
    Tree t;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);

    cout << "Recursive preorder traversal : ";
    t.Inorder(root);
    cout << endl;
    cout << "Iterative preorder traversal : ";
    t.Iinorder(root);

    return 0;
}