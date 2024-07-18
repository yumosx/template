#include <iostream>

using namespace std;

const int N = 26;

typedef struct node {
    bool is_end;     
    struct node* son[N];
} node_t;


void insert(node_t* root, string str) {
    auto p = root;
    for (auto& s: str) {
        char x = s - 'a';
        if (p->son[x] == NULL) {
            p->son[x] = new node();
        }
        p = p->son[x];
    }
    p->is_end = true;
}

bool serach(node_t* root, string str) {
    auto p = root;
    for (auto& s : str) {
        char x = s - 'a';
        if (!p->son[x]) {
            return false;
        }
        p = p->son[x];
    }
    return p->is_end;
}


int main() {
    return 0;
}