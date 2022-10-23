#include <bits/stdc++.h>
using namespace std;

// Visited array v[5] for the bfs
int v[5]; 
int vr[5][5] = {{0, 1, 1, 0, 0},
                {1, 0, 0, 1, 1},
                {1, 0, 0, 0, 0},
                {0, 1, 0, 0, 0},
                {0, 1, 0, 0, 0}};

// Queue to track the discovered nodes in bfs
queue<int> q;


// BFS using array as adjacency matrix
void bfs(int source){
    q.push(source);
    v[source] = 1;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for (int i = 0; i<5; i++){
            if (vr[f][i] == 1 && v[i] == 0){
                q.push(i);
                v[i] = 1;
            }
        }
    }
}


int main() {
	// your code goes here
	

    bfs(1);
    cout<<"\n";
    

	return 0;
}
