#include <bits/stdc++.h>
using namespace std;
class node {
   public:
    string val;
    node* next;
    node* prev;
    node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(node*& head) {
    node* t = head;
    while (t) {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
}

void insrt_tail(node*& head, string val, node*& tail) {
    node* t = new node(val);
    if (head == NULL) {
        head = t;
        tail = t;
        return;
    }
    tail->next = t;
    t->prev = tail;
    tail = t;
}
void browser_hist(node* head, int q) {
    node* t = head;
    bool g = true;
    while (q--) {
        string f;
        string j;
        cin >> f;
        if (f == "visit") {
            cin >> j;
            for (node* i = head; i->next != NULL; i = i->next) {
                if (i->val == j) {
                    cout << i->val << endl;
                    t == i;
                    break;
                } else
                    g = false;
            }
            if (g == false) {
                cout << "Not Available" << endl;
            }
        } else if (f == "prev") {
            if (t->prev != NULL) {
                t = t->prev;
                cout << t->val << endl;
            } else
                cout << "Not Available" << endl;
        } else if (f == "next") {
            if (t->next != NULL) {
                t = t->next;
                cout << t->val << endl;
            } else
                cout << "Not Available" << endl;
        }
    }
}
int main() {
    node* head = NULL;
    node* tail = NULL;
    string val;
    int q;
    while (1) {
        cin >> val;
        if (val == "end") {
            break;
        }
        insrt_tail(head, val, tail);
    }
    cin >> q;
    browser_hist(head, q);
    return 0;
}