# Disjoint Set Union

## Redundant Connection (Leetcode: Medium)

In this problem, a tree is an undirected graph that is connected and has no cycles.

You are given a graph that started as a tree with n nodes labeled from 1 to n, with **one additional edge added**. The added edge has two different vertices chosen from 1 to n, and was not an edge that already existed. The graph is represented as an array edges of length n where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the graph.

Return an edge that can be removed so that the resulting graph is a tree of n nodes. If there are multiple answers, return the answer that occurs last in the input.

```C++
// DSU Class: This class would remain same for these types of problems
class ds{
      public:
        vector<int>par;
        int size_par;
        ds(int n){
            par.resize(n + 1);
            for (int i = 0; i <= n; i++) par[i] = i;
            this->size_par=n;
        }
        int find(int u){
            if(par[u]==u)return u;
            return par[u]=find(par[u]);
        }
        void merge(int u , int v){
            int g1=find(u);
            int g2=find(v);
            par[g1]=g2;
        }
    };

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int m = edges.size();
        ds uf(m);
        for(int i=0;i<m;i++){
            if(uf.find(edges[i][0])!=uf.find(edges[i][1])){
                uf.merge(edges[i][0], edges[i][1]);
            }
            else{
                return edges[i];
            }
        }
        return {};
    }
};
```

## Satisfiability of Equality Equations

You are given an array of strings equations that represent relationships between variables where each string equations[i] is of length 4 and takes one of two different forms: "xi==yi" or "xi!=yi".Here, xi and yi are lowercase letters (not necessarily different) that represent one-letter variable names.

Return true if it is possible to assign integers to variable names so as to satisfy all the given equations, or false otherwise.

```C++
class ds {
public:
    vector<int> par;

    ds() {
        par.resize(26);  // as there are 26 possible letters
        for (int i = 0; i < 26; i++) 
            par[i] = i;
    }

    int find(int u) {
        if (par[u] == u)
            return u;
        return par[u] = find(par[u]);
    }

    void merge(int u, int v) {
        int g1 = find(u);
        int g2 = find(v);
        par[g1] = g2;
    }
};

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        ds uf;

        // First, process all "==" equations
        for (const string& eq : equations) {
            if (eq[1] == '=') {
                int x = eq[0] - 'a';
                int y = eq[3] - 'a';
                uf.merge(x, y);
            }
        }

        // Next, check all "!=" equations
        for (const string& eq : equations) {
            if (eq[1] == '!') {
                int x = eq[0] - 'a';
                int y = eq[3] - 'a';
                if (uf.find(x) == uf.find(y)) {
                    // The inequality can't be satisfied as both variables are in the same group
                    return false;
                }
            }
        }

        return true;  // All equations are satisfiable
    }
};
```