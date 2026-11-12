
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Stack using Singly Linked List
struct Node {
    char data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = nullptr; }

    void push(char ch) {
        Node* temp = new Node{ch, top};
        top = temp;
    }

    char pop() {
        if (top == nullptr) return '\0';

        Node* temp = top;
        char ch = temp->data;
        top = top->next;
        delete temp;
        return ch;
    }

    char peek() {
        return top ? top->data : '\0';
    }

    bool isEmpty() {
        return top == nullptr;
    }

    ~Stack() {
        while (!isEmpty())
            pop();
    }
};

int priority(char ch) {
    if (ch == '^') return 3;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '+' || ch == '-') return 1;
    return 0;
}

// Convert infix expression to prefix
string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());

    for (char &ch : infix) {
        if (ch == '(') ch = ')';
        else if (ch == ')') ch = '(';
    }

    Stack s;
    string postfix = "";

    for (char ch : infix) {
        if (isspace(static_cast<unsigned char>(ch)))
            continue;

        if (isalnum(static_cast<unsigned char>(ch))) {
            postfix += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.isEmpty() && s.peek() != '(')
                postfix += s.pop();

            if (!s.isEmpty())
                s.pop();
        }
        else {
            while (!s.isEmpty() && s.peek() != '(' &&
                  (priority(s.peek()) > priority(ch) ||
                  (priority(s.peek()) == priority(ch) && ch == '^'))) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.isEmpty())
        postfix += s.pop();

    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main() {
    string infix;

    cout << "Enter Infix Expression: ";
    getline(cin, infix);

    cout << "Prefix Expression: "
         << infixToPrefix(infix) << endl;

    return 0;
}
