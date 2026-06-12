#include<iostream>
#include<unordered_map>
#include<list>

class Graph{

    public:
        std::unordered_map<int, std::list<int>> adjList;

        void addEdge(int u, int v, bool direction){
            // direction = 0 -> undirected
            // direction = 1 -> directed

            adjList[u].push_back(v);

            if(direction == 0){
                adjList[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i : adjList){
                std::cout << i.first << "->";
                for(auto j : i.second){
                    std::cout << j << ", ";
                }
                std::cout << std::endl;
            }
        }
};

int main(){

    Graph g;

    g.addEdge(0, 1, 0);
    g.addEdge(0, 4, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(1, 4, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);

    g.printAdjList();

    return 0;


}