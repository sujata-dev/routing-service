//To initialize the adjacency matrix

#include "../defs/functions.h"

void init(int adj[][n])
{
    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            adj[i][j]=infinity;
}
