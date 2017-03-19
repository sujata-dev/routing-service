#ifndef functions_h
#define functions_h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define infinity 999
#define n 16

extern int adj[n][n];

int dijkstra(int source,int dest);
void shortest_path(char str[]);
int strcompare_case_insensitive(char a[],char b[]);
void init();
void SIT_distances();
void SIT_landmarks();
int sourceval(char s[]);
int destinationval(char d[]);
void exitservice(char ans[]);
int main();

#endif
