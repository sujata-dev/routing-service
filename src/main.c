/*
ROUTING SERVICE FOR SYMBIOSIS INSTITUTE OF TECHNOLOGY, PUNE (SIT)
- BY SUJATA DEV
- A system to find the minimum distance and routes to the major landmarks of SIT
*/
#include "defs/functions.h"
int main()
{
    int dist,source,dest;
    char s[30],d[30],ans[5];
    printf("\n\n\tROUTING SERVICE FOR SYMBIOSIS INSTITUTE OF TECHNOLOGY, PUNE (SIT)\n");
    do
    {
        SIT_landmarks();
        printf("\nEnter the source node: ");
        scanf(" %99[^\n]",s);
        source=sourceval(s);
        printf("Enter the destination node: ");
        scanf(" %99[^\n]",d);
        dest=destinationval(d);
        if(source!=0 && dest!=0)
        {
            dist=dijkstra(source,dest);
            printf("\nThe Shortest Distance between the nodes: %d metres (approx)\n",dist);
        }
        exitservice(ans);
    }while(1);
    return 0;
}
