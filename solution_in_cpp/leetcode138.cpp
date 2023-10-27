/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> copy;

        auto ptr=head;
        while(ptr!=nullptr){
            copy[ptr]=new Node(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=nullptr){
            if(ptr->next) copy[ptr]->next=copy[ptr->next];
            if(ptr->random) copy[ptr]->random=copy[ptr->random];
            ptr=ptr->next;

        }
        return copy[head];
        
    }
};