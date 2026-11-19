// #include <bits/stdc++.h>
// using namespace std;
// class node {
//    public:
//     int val;
//     node* next;
//     node* prev;
//     node(int val) {
//         this->next = NULL;
//         this->prev = NULL;
//         this->val = val;
//     }
// };
// class mystack {
//    public:
//     node* head = NULL;
//     node* tail = NULL;

//     void push(int val) {
//             node* newnode=new node(val);

//         if (head == NULL) {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         newnode->prev = tail;
//         tail = newnode;
//     }
//     void pop() {
//         node* del=tail;
//         tail=tail->prev;
//         delete del;
//         tail->next=NULL;
// if(tail==NULL){
//     head=NULL;
//     return;
// }
//     }
//     int top() {
//         return V.back();
//     }
//     int size() {
//         return V.size();
//     }
//     bool empty() {
//         return V.empty();
//     }
// };
// int main() {
//     mystack s;
//     int t;
//     cin >> t;
//     while (t--) {
//         int x;
//         cin >> x;
//         s.push(x);
//     }
//     while (!s.empty()) {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     return 0;
// }