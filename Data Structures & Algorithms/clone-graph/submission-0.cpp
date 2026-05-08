/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;

        unordered_map<Node*, int> visited;
        unordered_map<Node*, Node*> cg_map;
        queue<Node*> q;
        visited[node] = 1;
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();

            Node* n = new Node(curr->val);
            cg_map[curr] = n;

            for(Node* c:curr->neighbors){
                if(!visited[c]){
                    visited[c] = 1;
                    q.push(c);
                }
            }
        }
     
        unordered_map<Node*, int> visited2;
        visited2[node] = 1;
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();

            for(Node* c:curr->neighbors){
                cg_map[curr]->neighbors.push_back(cg_map[c]);
                if(!visited2[c]){
                    visited2[c] = 1;
                    q.push(c);
                }
            }
        }
        return cg_map[node];
    }
};
