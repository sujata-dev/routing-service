//To find the shortest distance using dijkstra's algorithm

#include "../defs/functions.h"

int dijkstra(int source,int dest,int adj[][n])
{
    int dist[n],prev[n],selected[n]={0},m,min,start,d,i,j;
    char path[n];
    init(adj);
    for(i=1;i<=n;i++)
    {
        dist[i]=infinity;
        prev[i]=-1;
    }
    start=source;
    selected[start]=1;
    dist[start]=0;
    SIT_distances(adj);
    while(selected[dest]==0)
    {
        min=infinity;
        m=0;
        for(i=1;i<=n;i++)
        {
            d=dist[start]+adj[start][i];
            //node should not have been selected before
            if(d<dist[i] && selected[i]==0)
            {
                dist[i]=d;
                prev[i]=start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min=dist[i];
                m=i;
            }
        }
        start=m;
        selected[start]=1;
    }
    start=dest;
    j=0;
    //Reverse path obtained
    while(start!=-1)
    {
        path[j++]=start+64;
        start=prev[start];
    }
    path[j]='\0';
    shortest_path(path);
    return dist[dest];
}
