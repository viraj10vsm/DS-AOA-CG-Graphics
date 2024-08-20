/*A
EXPERIMENT NO 5
KRUSKAL’S ALGORITHM

AIM: To Find minimum Cost Spanning Tree of a given Undirected graph using Kruskal’s Algorithm


THEORY: 
Kruskal’s algorithm is a Greedy algorithm used to find the Minimum spanning tree (MST) of a given weighted , connected and undirected graph G=<V,E>.It is an optimization algorithm. MST or Minimum Cost spanning tree is a subset of a Graph with no cycles and forming a tree and is connected including all Vertices of graph G and few edges from graph G.Spanning tree with minimum sum of edges is called MST.
Kruskal’s algorithm:
1.The algorithm first sorts the Edges into a list of Increasing order of their weights.
2.Select the edge with minimum weight from the Graph / Edges List which is not already added .
3.If the addition of Edge to the partial solution does not form a cycle , it is feasible and add it. Otherwise look for the next minimum edge which does not form a cycle .Remove checked edges from Edge list and also remove Visited vertex from the vertex list.
4.Go to step 1 and repeat until all edges in Edge list are scanned.
 
ALGORITHM:
KRUSKAL(V, E, w)
A ← { }                                       // Set A will ultimately contains the edges of the MST
for each vertex v in V
    do MAKE_SET(v)
sort E into non decreasing order by weight w
for each (u, v) taken from the sorted list
    do if FIND_SET(u) != FIND_SET(v)
        then A ← A ∪ {(u, v)}
            UNION(u, v)
return A
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
void main()
{
printf("\n\tImplementation of Kruskal's algorithm\n");
printf("\nEnter the no. of vertices:");
scanf("%d",&n);
printf("\nEnter the cost adjacency matrix:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
printf("The edges of Minimum Cost Spanning Tree are\n");
while(ne < n)
{
for(i=1,min=999;i<=n;i++)
{
for(j=1;j <= n;j++)
{
if(cost[i][j] < min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(uni(u,v))
{
printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
mincost +=min;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\tMinimum cost = %d\n",mincost);
getch();
}
int find(int i)
{
while(parent[i])
i=parent[i];
return i;
}
int uni(int i,int j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
 return 0;
}

/*
COMPLEXITY ANALYSIS:
→Using Disjoint set data structure , with E edges and V Vertices in the graph, Kruskal’s Algorithm runs in O(E logV) or O(ElogE) time , both are identical.’
For a dense graph , E is at most V^2 so logE=logV .
→Sort edges using a comparison based algorithm which could sort it in O(E.logE) time.
→Time for selection and feasibility checking =  O(E)
→Total running time =O(E+E.logE)=O(ElogE)

CONCLUSION:
MST of a connected undirected graph was found by implementing Kruskal’s Algorithm.
*/

