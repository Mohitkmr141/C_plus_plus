#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector <list <int>> graph;

int v; // no of vertices

void add_Edge(int src , int dest , bool bi_direction = true){


    graph[src].push_back(dest);
    if(bi_direction){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size() ;i++){
        cout<<i<<" -> ";
        for(auto el:graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}

int main(){

    cin>>v;
   graph.resize(v);
   int e;
   cin>>e;
   while(e--){
    int s  , d;
    cin>>s>>d;
    add_Edge(s , d  );
   }

   display();



    return 0;
}