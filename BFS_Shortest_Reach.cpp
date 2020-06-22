#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<vector<int>> AdjacencyList(vector<vector<int>> edges, int vertex_number){
    vector<vector<int>> adj(vertex_number+1);
    for(int i=0; i<edges.size(); i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    return adj;
}


// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    
    vector<vector<int>> adj=AdjacencyList(edges, n);
    /*
    for(auto e:adj){
        for(auto c:e){
            cout<<c<<" ";
        }
        cout<<endl;
    }*/

    vector<bool> visited(n, false);
    queue<int> q;
    vector<int> reaches(n);
    vector<int> distance(n+1, -1);


    visited[s]=true;
    distance[s]=0;
    q.push(s);

    while(!q.empty()){
        int k=q.front();
        for(int i=1; i<=n; i++){
            if(k==i)
            reaches[k-1]=distance[k];
        }
      
        q.pop();
        
        for(int i: adj[k]){

            if(!visited[i]){
                q.push(i);
                visited[i]=true;
                distance[i]=distance[k]+6;
            }
        }
    }

    for(int i=1; i<=n; i++){
        //cout<<visited[i]<<"-";
        if(visited[i]==false){
            reaches[i-1]=-1;
        }
    }
  
    reaches.erase(reaches.begin()+s-1);

    return reaches;
}
