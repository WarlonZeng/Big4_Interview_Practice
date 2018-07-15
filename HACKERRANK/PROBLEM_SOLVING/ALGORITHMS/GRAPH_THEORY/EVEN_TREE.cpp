#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, vector<int>> nodes;

// search by DFS - iterative + recursive
// somewhat cannot believe this idea worked
int count_children(int num, map<int, vector<int>>& nodes, int& count) {
    if (nodes[num].size() < 1) {
        return 1;
    }
    for (int i = 0; i < nodes[num].size(); i++) {
        count++;
        count_children(nodes[num][i], nodes, count);
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //map<int, vector<int>> nodes;
    
    int n;
    
    cin >> n;
    cin >> n;
    
    int child;
    int parent;
    
    while (cin >> child >> parent) {
        nodes[parent].push_back(child);
    }
    
    // for printing tree
    //for (auto const &key : nodes) {
    //    cout << "Node: " << key.first << " Children: ";
    //    for (int i = 0; i < (key.second).size(); i++) {
    //        cout << (key.second)[i] << " ";
    //    }
    //    cout << endl;
    //}
    
    int count = 0;
    int remove_edges = 0;
    int children;
    
    for (auto const &key : nodes) {
        count = 1;
        children = count_children(key.first, nodes, count);
        if ((children > 0) && (children % 2 == 0)) {
            remove_edges++;
        }
        //cout << "Node: " << key.first << " Children: " << children << " Removed edges: " << remove_edges << endl;
    }
    
    cout << remove_edges - 1 << endl;
    
    return 0;
}
