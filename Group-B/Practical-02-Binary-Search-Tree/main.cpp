
#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

class BST {
    Node* root = nullptr;

    Node* insert(Node* r, int x) {
        if (!r) return new Node(x);

        if (x < r->data)
            r->left = insert(r->left, x);
        else if (x > r->data)
            r->right = insert(r->right, x);
        else
            cout << "Duplicate value not allowed!\n";

        return r;
    }

    Node* search(Node* r, int x) {
        if (!r || r->data == x) return r;
        if (x < r->data) return search(r->left, x);
        return search(r->right, x);
    }

    Node* deleteNode(Node* r, int x) {
        if (!r) return nullptr;

        if (x < r->data)
            r->left = deleteNode(r->left, x);
        else if (x > r->data)
            r->right = deleteNode(r->right, x);
        else {
            if (!r->left) {
                Node* t = r->right;
                delete r;
                return t;
            }
            if (!r->right) {
                Node* t = r->left;
                delete r;
                return t;
            }

            Node* t = r->right;
            while (t->left) t = t->left;

            r->data = t->data;
            r->right = deleteNode(r->right, t->data);
        }
        return r;
    }

    void inorder(Node* r) {
        if (!r) return;
        inorder(r->left);
        cout << r->data << " ";
        inorder(r->right);
    }

    void preorder(Node* r) {
        if (!r) return;
        cout << r->data << " ";
        preorder(r->left);
        preorder(r->right);
    }

    void postorder(Node* r) {
        if (!r) return;
        postorder(r->left);
        postorder(r->right);
        cout << r->data << " ";
    }

    int depth(Node* r) {
        if (!r) return 0;
        int l = depth(r->left);
        int h = depth(r->right);
        return 1 + (l > h ? l : h);
    }

    Node* copyTree(Node* r) {
        if (!r) return nullptr;
        Node* t = new Node(r->data);
        t->left = copyTree(r->left);
        t->right = copyTree(r->right);
        return t;
    }

    void mirror(Node* r) {
        if (!r) return;
        swap(r->left, r->right);
        mirror(r->left);
        mirror(r->right);
    }

    void parents(Node* r) {
        if (!r) return;
        if (r->left || r->right) {
            cout << r->data << " -> ";
            if (r->left) cout << "Left: " << r->left->data << " ";
            if (r->right) cout << "Right: " << r->right->data;
            cout << endl;
        }
        parents(r->left);
        parents(r->right);
    }

    void leaves(Node* r) {
        if (!r) return;
        if (!r->left && !r->right) {
            cout << r->data << " ";
            return;
        }
        leaves(r->left);
        leaves(r->right);
    }

    void levelOrder(Node* r) {
        if (!r) {
            cout << "Tree is empty!\n";
            return;
        }

        queue<Node*> q;
        q.push(r);

        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                Node* t = q.front();
                q.pop();

                cout << t->data << " ";

                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            cout << endl;
        }
    }

public:
    void run() {
        int ch, x;

        do {
            cout << "\n--- BINARY SEARCH TREE ---\n";
            cout << "1.Insert  2.Delete  3.Search\n";
            cout << "4.Traversal  5.Depth  6.Mirror\n";
            cout << "7.Create Copy  8.Parent-Child\n";
            cout << "9.Leaf Nodes  10.Level Wise  11.Exit\n";
            cout << "Enter choice: ";
            cin >> ch;

            switch (ch) {
                case 1:
                    cout << "Enter value: ";
                    cin >> x;
                    root = insert(root, x);
                    break;

                case 2:
                    cout << "Enter value to delete: ";
                    cin >> x;
                    if (!search(root, x))
                        cout << "Value not found!\n";
                    else {
                        root = deleteNode(root, x);
                        cout << "Deleted successfully.\n";
                    }
                    break;

                case 3:
                    cout << "Enter value to search: ";
                    cin >> x;
                    cout << (search(root, x) ? "Found!\n" : "Not found!\n");
                    break;

                case 4:
                    cout << "1.Inorder 2.Preorder 3.Postorder: ";
                    cin >> x;
                    if (x == 1) inorder(root);
                    else if (x == 2) preorder(root);
                    else if (x == 3) postorder(root);
                    else cout << "Invalid traversal!";
                    cout << endl;
                    break;

                case 5:
                    cout << "Depth of tree: " << depth(root) << endl;
                    break;

                case 6: {
                    Node* m = copyTree(root);
                    mirror(m);
                    cout << "Mirror image (level-wise):\n";
                    levelOrder(m);
                    break;
                }

                case 7: {
                    Node* c = copyTree(root);
                    cout << "Copied tree (level-wise):\n";
                    levelOrder(c);
                    break;
                }

                case 8:
                    cout << "Parent nodes with children:\n";
                    parents(root);
                    break;

                case 9:
                    cout << "Leaf nodes: ";
                    leaves(root);
                    cout << endl;
                    break;

                case 10:
                    cout << "Tree level-wise:\n";
                    levelOrder(root);
                    break;

                case 11:
                    cout << "Exiting...\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        } while (ch != 11);
    }
};

int main() {
    BST tree;
    tree.run();
    return 0;
}