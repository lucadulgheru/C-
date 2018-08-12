#include <stdio.h>
#include <queue>
// http://www.cplusplus.com/reference/queue/queue/

template<typename TnodeInfo, typename TedgeInfo>
class Graph {
    public:
        int N;
        char **A;
        TnodeInfo *nodeInfo;
        TedgeInfo **edgeInfo;

        Graph(int numNodes) {
            int i, j;

            N = numNodes;

            // allocate the adjacency matrix
            A = new char*[N];
            for (i = 0; i < N; i++)
                A[i] = new char[N];
			for (i = 0; i < N; i++)
                for (j = 0; j < N; j++) A[i][j] = 0;

            // allocate the array with node information
            nodeInfo = new TnodeInfo[N];

            // allocate the matrix of edge information
            edgeInfo = new TedgeInfo*[N];
            for (i = 0; i < N; i++)
                edgeInfo[i] = new TedgeInfo[N];
        }

        void setNodeInfo(int i, TnodeInfo info) {
            nodeInfo[i] = info;
        }

        TnodeInfo getNodeInfo(int i) {
            return nodeInfo[i];
        }

        void addEdge(int i, int j) {
            A[i][j] = A[j][i] = 1;
        }
        void removeEdge(int i, int j) {
            A[i][j] = A[j][i] = 0; }

        void setEdgeInfo(int i, int j, TedgeInfo info) {
            edgeInfo[i][j] = edgeInfo[j][i] = info; }

        TedgeInfo getEdgeInfo(int i, int j) {
            return edgeInfo[i][j]; }

        ~Graph() {
            int i;
            for (i = 0; i < N; i++) {
                delete A[i];
                delete edgeInfo[i];
            }
            delete A;
            delete edgeInfo;
            delete nodeInfo;
        }
};
Graph<int, int> g(9);
char* visited;
bool ok;

void dfs(int x) {
    int y;
    printf("%d\n", x);
    visited[x] = 1;

    for (y = 0; y < g.N; y++)
        if (g.A[x][y] && !visited[y])
            dfs(y);
}
void bfs(int S) {
    std::queue<int> Q;
    int x, y;

    Q.push(S);
    g.setNodeInfo(S,0);
    visited[S] = 1;

    while (!Q.empty()) {
        x = Q.front();
		Q.pop();
        printf("%d\n", x);
        for (y = 0; y < g.N; y++)
            if (g.A[x][y] && !visited[y]) {
                visited[y] = 1;
                if(g.getNodeInfo(x)==0)
                g.setNodeInfo(y,1);
                else
                g.setNodeInfo(y,0);
                //g.setNodeInfo(y,1-g.getNodeInfo(x));
               Q.push(y);
            }
            ok=1;

            else if(g.A[x][y] && g.getNodeInfo(x) == g.getNodeInfo(y))
                ok=0;



    }
}
int main() {
    int i;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(1, 3);
    g.addEdge(4, 7);
    g.addEdge(6, 8);
    g.addEdge(3, 2);
    g.addEdge(7, 8);


    for (i = 0; i < g.N; i++)
        visited[i] = 0;
   printf("BFS:\n");
    bfs(3);

    if(ok)
        printf("bipartit");
        else
        printf("notbipartit");
   return 0;
}
